#include "physics.h"
#include "common/settings.h"
#include "debug.h"
#include "object.h"
#include <physics/draw.h>
#include <physics/world_callbacks.h>
#include <physics/world.h>
#include <physics/contact.h>

static AZORphysics g_physics = nullptr;

class MyDebugDraw;

class MyContactListener : public b2ContactListener
{
	void BeginContact(b2Contact* contact) override
	{
		const auto a = contact->GetFixtureA();
		const auto b = contact->GetFixtureB();

		const auto o_a = static_cast<Object*>(a->GetUserData());
		const auto o_b = static_cast<Object*>(b->GetUserData());

		o_a->OnColliderEnter(o_b);
		o_b->OnColliderEnter(o_a);
	}

	void EndContact(b2Contact* contact) override
	{
		const auto a = contact->GetFixtureA();
		const auto b = contact->GetFixtureB();

		const auto o_a = static_cast<Object*>(a->GetUserData());
		const auto o_b = static_cast<Object*>(b->GetUserData());

		o_a->OnColliderExit(o_b);
		o_b->OnColliderExit(o_a);
	}
};

static MyContactListener* contact_listener = nullptr;

Rigidbody* Physics::CreateBody(BodyDecs* body_decs, ColliderDecs* collider_decs) const
{
	return world->CreateBody(body_decs)->CreateFixture(collider_decs)->GetBody();
}

void Physics::Update() const
{
	world->Step(Debug::delta_time, 6, 2);
	if (Debug::debug_mode)
	{
		world->DrawDebugData();
	}
}

AZORphysics azorGetPhysics()
{
	if (!g_physics)
	{
		g_physics = new Physics;

		g_physics->world = new World(b2Vec2{ 0, 0.0f});

		contact_listener = new MyContactListener;
		g_physics->world->SetContactListener(contact_listener);

		static_cast<b2Draw*>(Debug::debug_draw)
			->SetFlags(b2Draw::e_shapeBit | b2Draw::e_aabbBit);
		g_physics->world->SetDebugDraw(static_cast<b2Draw*>(Debug::debug_draw));
	}

	return g_physics;
}

void azorDestroyPhysics()
{
	delete g_physics->world;
	delete g_physics;
}



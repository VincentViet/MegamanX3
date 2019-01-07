#ifndef MEGAMAN_H
#define MEGAMAN_H

#include "object.h"

class Megaman : public Object
{
public:
	Megaman();

	void Start() override;
	void Update() override;
	void Draw() override;
	void OnColliderEnter(Object* collider) override;
	void OnColliderExit(Object* collider) override;
};

#endif // MEGAMAN_H
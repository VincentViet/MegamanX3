#ifndef INPUT_H
#define INPUT_H

#include "dx9/dinput.h"

enum class Keys
{
	ESCAPE = 0x01,
	KEY_1 = 0x02,
	KEY_2 = 0x03,
	KEY_3 = 0x04,
	KEY_4 = 0x05,
	KEY_5 = 0x06,
	KEY_6 = 0x07,
	KEY_7 = 0x08,
	KEY_8 = 0x09,
	KEY_9 = 0x0A,
	KEY_0 = 0x0B,
	MINUS = 0x0C,
	EQUALS = 0x0D,
	BACK = 0x0E,
	TAB = 0x0F,
	KEY_Q = 0x10,
	KEY_W = 0x11,
	KEY_E = 0x12,
	KEY_R = 0x13,
	KEY_T = 0x14,
	KEY_Y = 0x15,
	KEY_U = 0x16,
	KEY_I = 0x17,
	KEY_O = 0x18,
	KEY_P = 0x19,
	LBRACKET = 0x1A,
	RBRACKET = 0x1B,
	RETURN = 0x1C,
	LCONTROL = 0x1D,
	KEY_A = 0x1E,
	KEY_S = 0x1F,
	KEY_D = 0x20,
	KEY_F = 0x21,
	KEY_G = 0x22,
	KEY_H = 0x23,
	KEY_J = 0x24,
	KEY_K = 0x25,
	KEY_L = 0x26,
	SEMICOLON = 0x27,
	APOSTROPHE = 0x28,
	GRAVE = 0x29,
	LSHIFT = 0x2A,
	BACKSLASH = 0x2B,
	KEY_Z = 0x2C,
	KEY_X = 0x2D,
	KEY_C = 0x2E,
	KEY_V = 0x2F,
	KEY_B = 0x30,
	KEY_N = 0x31,
	KEY_M = 0x32,
	COMMA = 0x33,
	PERIOD = 0x34,
	SLASH = 0x35,
	RSHIFT = 0x36,
	MULTIPLY = 0x37,
	LMENU = 0x38,
	SPACE = 0x39,
	CAPITAL = 0x3A,
	F1 = 0x3B,
	F2 = 0x3C,
	F3 = 0x3D,
	F4 = 0x3E,
	F5 = 0x3F,
	F6 = 0x40,
	F7 = 0x41,
	F8 = 0x42,
	F9 = 0x43,
	F10 = 0x44,
	NUMLOCK = 0x45,
	SCROLL = 0x46,
	NUMPAD7 = 0x47,
	NUMPAD8 = 0x48,
	NUMPAD9 = 0x49,
	SUBTRACT = 0x4A,
	NUMPAD4 = 0x4B,
	NUMPAD5 = 0x4C,
	NUMPAD6 = 0x4D,
	ADD = 0x4E,
	NUMPAD1 = 0x4F,
	NUMPAD2 = 0x50,
	NUMPAD3 = 0x51,
	NUMPAD0 = 0x52,
	DECIMAL = 0x53,
	OEM_102 = 0x56,
	F11 = 0x57,
	F12 = 0x58,
	F13 = 0x64,
	F14 = 0x65,
	F15 = 0x66,
	KANA = 0x70,
	ABNT_C1 = 0x73,
	CONVERT = 0x79,
	NOCONVERT = 0x7B,
	YEN = 0x7D,
	ABNT_C2 = 0x7E,
	NUMPADEQUALS = 0x8D,
	CIRCUMFLEX = 0x90,
	AT = 0x91,
	COLON = 0x92,
	UNDERLINE = 0x93,
	KANJI = 0x94,
	STOP = 0x95,
	AX = 0x96,
	UNLABELED = 0x97,
	NEXTTRACK = 0x99,
	NUMPADENTER = 0x9C,
	RCONTROL = 0x9D,
	MUTE = 0xA0,
	CALCULATOR = 0xA1,
	PLAYPAUSE = 0xA2,
	MEDIASTOP = 0xA4,
	VOLUMEDOWN = 0xAE,
	VOLUMEUP = 0xB0,
	WEBHOME = 0xB2,
	NUMPADCOMMA = 0xB3,
	DIVIDE = 0xB5,
	SYSRQ = 0xB7,
	RMENU = 0xB8,
	PAUSE = 0xC5,
	HOME = 0xC7,
	UP = 0xC8,
	PRIOR = 0xC9,
	LEFT = 0xCB,
	RIGHT = 0xCD,
	END = 0xCF,
	DOWN = 0xD0,
	NEXT = 0xD1,
	INSERT = 0xD2,
	// DELETE = 0xD3,
	LWIN = 0xDB,
	RWIN = 0xDC,
	APPS = 0xDD,
	POWER = 0xDE,
	SLEEP = 0xDF,
	WAKE = 0xE3,
	WEBSEARCH = 0xE5,
	WEBFAVORITES = 0xE6,
	WEBREFRESH = 0xE7,
	WEBSTOP = 0xE8,
	WEBFORWARD = 0xE9,
	WEBBACK = 0xEA,
	MYCOMPUTER = 0xEB,
	MAIL = 0xEC,
	MEDIASELECT = 0xED,

	BACKSPACE = BACK,
	NUMPADSTAR = MULTIPLY,
	LALT = LMENU,
	CAPSLOCK = CAPITAL,
	NUMPADMINUS = SUBTRACT,
	NUMPADPLUS = ADD,
	NUMPADPERIOD = DECIMAL,
	NUMPADSLASH = DIVIDE,
	RALT = RMENU,
	UPARROW = UP,
	PGUP = PRIOR,
	LEFTARROW = LEFT,
	RIGHTARROW = RIGHT,
	DOWNARROW = DOWN,
	PGDN = NEXT,
};

#ifdef __cplusplus
extern "C"
{
#endif
void azorPollInput(HWND hwnd);
bool azorIsKeyDown(Keys key);
bool azorIsKeyUp(Keys key);
void azorDestroyInput(void);
#ifdef __cplusplus
}
#endif
#endif // INPUT_H
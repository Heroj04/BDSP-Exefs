#pragma once

enum struct GameController_Button : int32_t {
	A = 0x1,
	B = 0x2,
	X = 0x4,
	Y = 0x8,
	L_Stick = 0x10,
	R_Stick = 0x20,
	L = 0x40,
	R = 0x80,
	ZL = 0x100,
	ZR = 0x200,
	Plus = 0x400,
	Minus = 0x800,
	Dpad_Left = 0x1000,
	Dpad_Up = 0x2000,
	Dpad_Right = 0x4000,
	Dpad_Down = 0x8000,
	L_Stick_Left = 0x10000,
	L_Stick_Up = 0x20000,
	L_Stick_Right = 0x40000,
	L_Stick_Down = 0x80000,
	R_Stick_Left = 0x100000,
	R_Stick_Up = 0x200000,
	R_Stick_Right = 0x400000,
	R_Stick_Down = 0x800000
};
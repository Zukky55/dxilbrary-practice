#include "DxLib.h"

class Cordinate {
public:
	int X;
	int Y;
	void SetCordinate(int x, int y);
};

void Cordinate::SetCordinate(int x, int y)
{
	X = x;
	Y = y;
}


Cordinate a, b;
unsigned int color;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	SetGraphMode(649, 480, 32);
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	a.SetCordinate(20, 100);
	b.SetCordinate(500, 300);
	color = GetColor(255, 255, 255);

	DrawLine(a.X, a.Y, b.X, b.Y, color);

	WaitKey();
	DxLib_End();
	return 0;
}
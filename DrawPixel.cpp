#include "DxLib.h"

#if 0
// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE); // ���E�B���h�E���[�h�ɐݒ�B�ݒ肵�Ȃ��ƑS��ʕ\���ɂȂ�܂��B
	SetGraphMode(640, 480, 32); // ���E�B���h�E�̑傫���ƐF�����w��B32bit�J���[�ɂ��܂��B
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}


	DrawPixel(320, 240, GetColor(255, 255, 255));	// �_��ł�

	WaitKey();				// �L�[���͑҂�

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}
#endif // 0
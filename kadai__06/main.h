/*******************************************************************************
* �^�C�g��:		main�w�b�_�[
* �v���O������:	main.h
* �쐬��:		GP11B341 01 �ђˏt�P
* �쐬��:		2018/06/29
*******************************************************************************/
#ifndef MAIN_H
#define MAIN_H

/*******************************************************************************
* scanf ��warning�h�~
*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS


/*******************************************************************************
* �C���N���[�h�t�@�C��****
*******************************************************************************/
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>


/*******************************************************************************
* �}�N����`
*******************************************************************************/
// �t�B�[���h�p
#define FH_MAX		(14)		// �c��
#define FW_MAX		(80)		// ����
#define FH_ENEMY	(40)		// enemy��
// ���ʃp�����[�^�p
#define	NAME_MAX	(256)		// ���OBuf��MAX
#define ENEMY_MAX	(2)			// �G�̐�


/*******************************************************************************
* �\���̒�`
*******************************************************************************/


/*******************************************************************************
* �v���g�^�C�v�錾
*******************************************************************************/
char *GetMapAdr(int y, int x);	// �t�B�[���h�̃A�h���X���擾����





#endif
/*******************************************************************************
* �^�C�g��:		Batoru�v���O����
* �v���O������:	Batiru.cpp
* �쐬��:		GP11B341 01 �ђˏt�P
* �쐬��:		2018/06/029
********************************************************************************

/***************************************************************************
* �C���N���[�h�t�@�C��****
*******************************************************************************/
#include "main.h"
#include"batoru.h"
#include"enemy.h"
#include"player.h"

/*******************************************************************************
* �}�N����`
*******************************************************************************/



/*******************************************************************************
* �\���̒�`
*******************************************************************************/



/*******************************************************************************
* �v���g�^�C�v�錾
*******************************************************************************/


/*******************************************************************************
�}�N����`
*******************************************************************************/



/*******************************************************************************
* �O���[�o���ϐ�
*******************************************************************************/
char batoru_map[FH_MAX][FW_MAX + 1] = { // ����+1���Ă���͕̂�����NULL�̕�
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                             �^) �^)                                          *",
	"*                            / �� �R�Q�Q �b�^                                  *",
	"*                          `�b��_ �� �����R>��                                 *",
	"*                          �i�Z �` �Z     �x                                   *",
	"*                            �_           �b                                   *",
	"*                             L / L / L / L /                                  *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"********************************************************************************",
	"********************************************************************************"
};
char pika_map[FH_ENEMY][FW_MAX + 1] = { // ����+1���Ă���͕̂�����NULL�̕�
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                            <<<<>>>>                                          *",
	"*                             �^) �^)                                          *",
	"*                            / �� �R�Q�Q �b�^                                  *",
	"*                          `�b--_-- �����R>��                                  *",
	"*                          �i�Z �` �Z     �x                                   *",
	"*                            �_           �b                                   *",
	"*                             L / L / L / L /                                  *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"********************************************************************************",
};
char miro_map[FH_MAX][FW_MAX + 1] = { // ����+1���Ă���͕̂�����NULL�̕�
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                              �i | �_  �j                                     *",
	"*                                �_ �R�^                                       *",
	"*                                / /߁[߁j�R                                   *",
	"*                               / //   �u�R�R�m��|                             *",
	"*                              / //   �b �b�b���m�A                            *",
	"*                             | |�b   �b((�l�A���m                             *",
	"*                             �l�b   �i�b   �P                                 *",
	"*                                 �_    /                                      *",
	"*                                   �P�P                                       *",
	"********************************************************************************",
};
char miroka_map[FH_ENEMY][FW_MAX + 1] = { // ����+1���Ă���͕̂�����NULL�̕�
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                               <<<<<<>>>>>                                    *",
	"*                              �i | �_  �j                                     *",
	"*                                �_ �R�^                                       *",
	"*                                / /-�[-�j�R                                   *",
	"*                               / //   �u�R�R�m��|                             *",
	"*                              / //   �b �b�b���m�A                            *",
	"*                             | |�b   �b((�l�A���m                             *",
	"*                             �l�b   �i�b   �P                                 *",
	"*                                 �_    /                                      *",
	"*                                   �P�P                                       *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"********************************************************************************",
};





/*******************************************************************************
�֐���:	void InitBatoru( void )
����:	void
�߂�l:	void
����:	Batoru�̏���������
*******************************************************************************/
void InitBatoru(void)
{

}


/*******************************************************************************
�֐���:	void UpdateBatoru( void )
����:	void
�߂�l:	void
����:	Batoru�̍X�V����
*******************************************************************************/
void UpdateBatoru(void)
{

}

/*******************************************************************************
�֐���:	void DrawBatoru( void )
����:	void
�߂�l:	void
����:	Batoru�\�� )
*******************************************************************************/
void DrawBatoru(void)
{
	srand((unsigned)time(NULL));
	
	PLAYER *player = GetPlayerAdr(0);	// �v���C���[�O�Ԃ̃A�h���X���擾����
	ENEMY *enemy = GetEnemyAdr(0);	// enemy�O�Ԃ̃A�h���X���擾����


	printf("player %s \n", &player->name[0]);
	printf("HP %d \n\n\n\n", player->HP);

	rewind(stdin);
	_getch();

	printf("enemy %s \n", &enemy->name[0]);
	printf("HP %d \n", enemy->HP);

	rewind(stdin);
	_getch();

	system("cls");

	while (1)
	{
		int data;
		int		i;


		data = rand() % (player->ATK + 1);
		enemy->HP -= data;

		if (player->MAX_LV <= 4)
		{
			for (i = 0; i < FH_MAX; i++)
			{
				printf("%s\n", &batoru_map[i][0]);

			}
		}
		if (player->MAX_LV > 4)
		{
			for (i = 0; i < FH_MAX; i++)
			{
				printf("%s\n", &miro_map[i][0]);

			}
		}

		printf("%s��%d�̍U��\n", &player->name[0], data);

		rewind(stdin);
		_getch();


		system("cls");
		system("cls");

		if (player->MAX_LV <= 4)
		{
			for (i = 0; i < FH_MAX; i++)
			{
				printf("%s\n", &batoru_map[i][0]);

			}
		}
		if (player->MAX_LV > 4)
		{
			for (i = 0; i < FH_MAX; i++)
			{
				printf("%s\n", &miro_map[i][0]);

			}
		}

		system("cls");
		system("cls");

		if (player->MAX_LV <= 4)
		{
			for (i = 0; i < FH_MAX; i++)
			{
				printf("%s\n", &batoru_map[i][0]);

			}
		}
		if (player->MAX_LV > 4)
		{
			for (i = 0; i < FH_MAX; i++)
			{
				printf("%s\n", &miro_map[i][0]);

			}
		}

		printf("%s��HP %d \n\n", &enemy->name[0], enemy->HP);

		rewind(stdin);
		_getch();

		system("cls");

		if (enemy->HP <= 0)
		{
			if (player->MAX_LV <= 4)
			{

				for (i = 0; i < FH_ENEMY; i++)
				{
					for (i = 0; i < FH_ENEMY; i++)
					{
						printf("%s\n", &pika_map[i][0]);

						Sleep(10);
					}

					printf("%s\n", &pika_map[i][0]);

					Sleep(100);

					system("cls");

					printf("%s\n", &pika_map[i][0]);
				}
			}
				if (player->MAX_LV > 4)
				{
					for (i = 0; i < FH_ENEMY; i++)
					{
						for (i = 0; i < FH_ENEMY; i++)
						{
							printf("%s\n", &miroka_map[i][0]);

							Sleep(10);
						}

						printf("%s\n", &miroka_map[i][0]);

						Sleep(100);

						system("cls");

						printf("%s\n", &miroka_map[i][0]);
					}
				

				}

			printf("%s�̏����I \n", &player->name[0]);

			rewind(stdin);
			_getch();

			system("cls");

			player->EXP += rand() % (100 + 1);

			printf("%s��%d�o���l�����܂����B�B\n\n", &player->name[0], player->EXP);

			rewind(stdin);
			_getch();

			system("cls");

			enemy->HP = 50;
			player->HP = player->MAX_HP;

			if (player->MAX_LV > 4)
			{
				enemy->HP += 100;
			}

			if (player->EXP >= 100)
			{

				printf("%s�̓��x���A�b�v�����I\n\n", &player->name[0]);

				player->MAX_HP += 10;
				player->MAX_MP += 10;
				player->ATK += 10;
				player->DEF += 10;
				player->LV += 1;

				printf("HP��%d�ɏオ����\n", player->MAX_HP);
				printf("MP��%d�ɏオ����\n", player->MAX_MP);
				printf("AT��K%d�ɏオ����\n", player->ATK);
				printf("DEF��%d�ɏオ����\n", player->DEF);
				printf("LV��%d�ɏオ����\n", player->LV);

				rewind(stdin);
				_getch();

				enemy->HP = 50;
				player->HP = player->MAX_HP;
				player->MAX_LV += player->LV;

				if (player->MAX_LV > 4)
				{
					enemy->HP += 100;
				}

				system("cls");

				player->EXP = 0;

				if (player->MAX_LV > 4)
				{
					strcpy(&enemy->name[0], "�`�����v");
					enemy->HP = 150;
					enemy->MP = 50000;
					enemy->ATK = 50;
					enemy->DEF = 20;
				}
			}

			break;
		}
		if (player->MAX_LV <= 4)
		{
			for (i = 0; i < FH_MAX; i++)
			{
				printf("%s\n", &batoru_map[i][0]);
			}
		}
		if (player->MAX_LV > 4)
		{
			for (i = 0; i < FH_MAX; i++)
			{
				printf("%s\n", &miro_map[i][0]);

			}
		}

		data = rand() % (enemy->ATK + 1);
		player->HP -= data;
		printf("%s��%d�̍U��\n", &enemy->name[0], data);

		printf("%s��HP %d \n\n", &player->name[0], player->HP);

		rewind(stdin);
		_getch();

		system("cls");

		if (player->HP <= 0)
		{
			if (player->MAX_LV <= 4)
			{
				for (i = 0; i < FH_MAX; i++)
				{
					printf("%s\n", &batoru_map[i][0]);

				}
			}
			if (player->MAX_LV > 4)
			{
				for (i = 0; i < FH_MAX; i++)
				{
					printf("%s\n", &miro_map[i][0]);

				}
			}

			printf(" %s�̏����I \n", &enemy->name[0]);

			rewind(stdin);
			_getch();

			system("cls");

			enemy->HP = 50;
			player->HP = player->MAX_HP;

			if (player->MAX_LV > 4)
			{
				enemy->HP += 100;
			}

			break;
		}
	}
	

}



/*******************************************************************************
�֐���:	void UninitBatoru( void )
����:	void
�߂�l:	void
����:	Batoru�̏I������
*******************************************************************************/
void UninitBatoru(void)
{
	// �����_�ł͓��ɂ�鎖����������
	// DirectX�ł̓������̉�������s������
}

char *GetBatoru_mapAdr(int y, int x)
{
	return &batoru_map[y][x];
}


/*******************************************************************************
* タイトル:		Batoruプログラム
* プログラム名:	Batiru.cpp
* 作成者:		GP11B341 01 飯塚春輝
* 作成日:		2018/06/029
********************************************************************************

/***************************************************************************
* インクルードファイル****
*******************************************************************************/
#include "main.h"
#include"batoru.h"
#include"enemy.h"
#include"player.h"

/*******************************************************************************
* マクロ定義
*******************************************************************************/



/*******************************************************************************
* 構造体定義
*******************************************************************************/



/*******************************************************************************
* プロトタイプ宣言
*******************************************************************************/


/*******************************************************************************
マクロ定義
*******************************************************************************/



/*******************************************************************************
* グローバル変数
*******************************************************************************/
char batoru_map[FH_MAX][FW_MAX + 1] = { // 横を+1しているのは文末のNULLの分
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                             ／) ／)                                          *",
	"*                            / ⌒ ヽ＿＿ ｜／                                  *",
	"*                          `｜●_ ● ▼▼ヽ>＞                                 *",
	"*                          （〇 〜 〇     Ｙ                                   *",
	"*                            ＼           ｜                                   *",
	"*                             L / L / L / L /                                  *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"********************************************************************************",
	"********************************************************************************"
};
char pika_map[FH_ENEMY][FW_MAX + 1] = { // 横を+1しているのは文末のNULLの分
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                            <<<<>>>>                                          *",
	"*                             ／) ／)                                          *",
	"*                            / ⌒ ヽ＿＿ ｜／                                  *",
	"*                          `｜--_-- ▼▼ヽ>＞                                  *",
	"*                          （〇 〜 〇     Ｙ                                   *",
	"*                            ＼           ｜                                   *",
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
char miro_map[FH_MAX][FW_MAX + 1] = { // 横を+1しているのは文末のNULLの分
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                              （ | ＼  ）                                     *",
	"*                                ＼ ヽ／                                       *",
	"*                                / /ﾟーﾟ）ヽ                                   *",
	"*                               / //   「ヽヽノ⌒|                             *",
	"*                              / //   ｜ ｜｜○ノ、                            *",
	"*                             | |｜   ｜((Ｍ、○ノ                             *",
	"*                             Ｍ｜   Ｊ｜   ￣                                 *",
	"*                                 ＼    /                                      *",
	"*                                   ￣￣                                       *",
	"********************************************************************************",
};
char miroka_map[FH_ENEMY][FW_MAX + 1] = { // 横を+1しているのは文末のNULLの分
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                               <<<<<<>>>>>                                    *",
	"*                              （ | ＼  ）                                     *",
	"*                                ＼ ヽ／                                       *",
	"*                                / /-ー-）ヽ                                   *",
	"*                               / //   「ヽヽノ⌒|                             *",
	"*                              / //   ｜ ｜｜○ノ、                            *",
	"*                             | |｜   ｜((Ｍ、○ノ                             *",
	"*                             Ｍ｜   Ｊ｜   ￣                                 *",
	"*                                 ＼    /                                      *",
	"*                                   ￣￣                                       *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"********************************************************************************",
};





/*******************************************************************************
関数名:	void InitBatoru( void )
引数:	void
戻り値:	void
説明:	Batoruの初期化処理
*******************************************************************************/
void InitBatoru(void)
{

}


/*******************************************************************************
関数名:	void UpdateBatoru( void )
引数:	void
戻り値:	void
説明:	Batoruの更新処理
*******************************************************************************/
void UpdateBatoru(void)
{

}

/*******************************************************************************
関数名:	void DrawBatoru( void )
引数:	void
戻り値:	void
説明:	Batoru表示 )
*******************************************************************************/
void DrawBatoru(void)
{
	srand((unsigned)time(NULL));
	
	PLAYER *player = GetPlayerAdr(0);	// プレイヤー０番のアドレスを取得する
	ENEMY *enemy = GetEnemyAdr(0);	// enemy０番のアドレスを取得する


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

		printf("%sが%dの攻撃\n", &player->name[0], data);

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

		printf("%sのHP %d \n\n", &enemy->name[0], enemy->HP);

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

			printf("%sの勝利！ \n", &player->name[0]);

			rewind(stdin);
			_getch();

			system("cls");

			player->EXP += rand() % (100 + 1);

			printf("%sは%d経験値がたまった。。\n\n", &player->name[0], player->EXP);

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

				printf("%sはレベルアップした！\n\n", &player->name[0]);

				player->MAX_HP += 10;
				player->MAX_MP += 10;
				player->ATK += 10;
				player->DEF += 10;
				player->LV += 1;

				printf("HPが%dに上がった\n", player->MAX_HP);
				printf("MPが%dに上がった\n", player->MAX_MP);
				printf("ATがK%dに上がった\n", player->ATK);
				printf("DEFが%dに上がった\n", player->DEF);
				printf("LVが%dに上がった\n", player->LV);

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
					strcpy(&enemy->name[0], "チャンプ");
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
		printf("%sが%dの攻撃\n", &enemy->name[0], data);

		printf("%sのHP %d \n\n", &player->name[0], player->HP);

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

			printf(" %sの勝利！ \n", &enemy->name[0]);

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
関数名:	void UninitBatoru( void )
引数:	void
戻り値:	void
説明:	Batoruの終了処理
*******************************************************************************/
void UninitBatoru(void)
{
	// 現時点では特にやる事が無いっす
	// DirectXではメモリの解放等を行うっす
}

char *GetBatoru_mapAdr(int y, int x)
{
	return &batoru_map[y][x];
}


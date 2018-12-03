/*******************************************************************************
* É^ÉCÉgÉã:		BatoruÉvÉçÉOÉâÉÄ
* ÉvÉçÉOÉâÉÄñº:	Batiru.cpp
* çÏê¨é“:		GP11B341 01 î—íÀètãP
* çÏê¨ì˙:		2018/06/029
********************************************************************************

/***************************************************************************
* ÉCÉìÉNÉãÅ[ÉhÉtÉ@ÉCÉã****
*******************************************************************************/
#include "main.h"
#include"batoru.h"
#include"enemy.h"
#include"player.h"

/*******************************************************************************
* É}ÉNÉçíËã`
*******************************************************************************/



/*******************************************************************************
* ç\ë¢ëÃíËã`
*******************************************************************************/



/*******************************************************************************
* ÉvÉçÉgÉ^ÉCÉvêÈåæ
*******************************************************************************/


/*******************************************************************************
É}ÉNÉçíËã`
*******************************************************************************/



/*******************************************************************************
* ÉOÉçÅ[ÉoÉãïœêî
*******************************************************************************/
char batoru_map[FH_MAX][FW_MAX + 1] = { // â°Ç+1ÇµÇƒÇ¢ÇÈÇÃÇÕï∂ññÇÃNULLÇÃï™
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                             Å^) Å^)                                          *",
	"*                            / Å‹ ÅRÅQÅQ ÅbÅ^                                  *",
	"*                          `ÅbÅú_ Åú Å•Å•ÅR>ÅÑ                                 *",
	"*                          ÅiÅZ Å` ÅZ     Çx                                   *",
	"*                            Å_           Åb                                   *",
	"*                             L / L / L / L /                                  *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"********************************************************************************",
	"********************************************************************************"
};
char pika_map[FH_ENEMY][FW_MAX + 1] = { // â°Ç+1ÇµÇƒÇ¢ÇÈÇÃÇÕï∂ññÇÃNULLÇÃï™
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                            <<<<>>>>                                          *",
	"*                             Å^) Å^)                                          *",
	"*                            / Å‹ ÅRÅQÅQ ÅbÅ^                                  *",
	"*                          `Åb--_-- Å•Å•ÅR>ÅÑ                                  *",
	"*                          ÅiÅZ Å` ÅZ     Çx                                   *",
	"*                            Å_           Åb                                   *",
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
char miro_map[FH_MAX][FW_MAX + 1] = { // â°Ç+1ÇµÇƒÇ¢ÇÈÇÃÇÕï∂ññÇÃNULLÇÃï™
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                              Åi | Å_  Åj                                     *",
	"*                                Å_ ÅRÅ^                                       *",
	"*                                / /ﬂÅ[ﬂÅjÅR                                   *",
	"*                               / //   ÅuÅRÅRÉmÅ‹|                             *",
	"*                              / //   Åb ÅbÅbÅõÉmÅA                            *",
	"*                             | |Åb   Åb((ÇlÅAÅõÉm                             *",
	"*                             ÇlÅb   ÇiÅb   ÅP                                 *",
	"*                                 Å_    /                                      *",
	"*                                   ÅPÅP                                       *",
	"********************************************************************************",
};
char miroka_map[FH_ENEMY][FW_MAX + 1] = { // â°Ç+1ÇµÇƒÇ¢ÇÈÇÃÇÕï∂ññÇÃNULLÇÃï™
	"********************************************************************************",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"*                               <<<<<<>>>>>                                    *",
	"*                              Åi | Å_  Åj                                     *",
	"*                                Å_ ÅRÅ^                                       *",
	"*                                / /-Å[-ÅjÅR                                   *",
	"*                               / //   ÅuÅRÅRÉmÅ‹|                             *",
	"*                              / //   Åb ÅbÅbÅõÉmÅA                            *",
	"*                             | |Åb   Åb((ÇlÅAÅõÉm                             *",
	"*                             ÇlÅb   ÇiÅb   ÅP                                 *",
	"*                                 Å_    /                                      *",
	"*                                   ÅPÅP                                       *",
	"*                                                                              *",
	"*                                                                              *",
	"*                                                                              *",
	"********************************************************************************",
};





/*******************************************************************************
ä÷êîñº:	void InitBatoru( void )
à¯êî:	void
ñﬂÇËíl:	void
ê‡ñæ:	BatoruÇÃèâä˙âªèàóù
*******************************************************************************/
void InitBatoru(void)
{

}


/*******************************************************************************
ä÷êîñº:	void UpdateBatoru( void )
à¯êî:	void
ñﬂÇËíl:	void
ê‡ñæ:	BatoruÇÃçXêVèàóù
*******************************************************************************/
void UpdateBatoru(void)
{

}

/*******************************************************************************
ä÷êîñº:	void DrawBatoru( void )
à¯êî:	void
ñﬂÇËíl:	void
ê‡ñæ:	Batoruï\é¶ )
*******************************************************************************/
void DrawBatoru(void)
{
	srand((unsigned)time(NULL));
	
	PLAYER *player = GetPlayerAdr(0);	// ÉvÉåÉCÉÑÅ[ÇOî‘ÇÃÉAÉhÉåÉXÇéÊìæÇ∑ÇÈ
	ENEMY *enemy = GetEnemyAdr(0);	// enemyÇOî‘ÇÃÉAÉhÉåÉXÇéÊìæÇ∑ÇÈ


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

		printf("%sÇ™%dÇÃçUåÇ\n", &player->name[0], data);

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

		printf("%sÇÃHP %d \n\n", &enemy->name[0], enemy->HP);

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

			printf("%sÇÃèüóòÅI \n", &player->name[0]);

			rewind(stdin);
			_getch();

			system("cls");

			player->EXP += rand() % (100 + 1);

			printf("%sÇÕ%dåoå±ílÇ™ÇΩÇ‹Ç¡ÇΩÅBÅB\n\n", &player->name[0], player->EXP);

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

				printf("%sÇÕÉåÉxÉãÉAÉbÉvÇµÇΩÅI\n\n", &player->name[0]);

				player->MAX_HP += 10;
				player->MAX_MP += 10;
				player->ATK += 10;
				player->DEF += 10;
				player->LV += 1;

				printf("HPÇ™%dÇ…è„Ç™Ç¡ÇΩ\n", player->MAX_HP);
				printf("MPÇ™%dÇ…è„Ç™Ç¡ÇΩ\n", player->MAX_MP);
				printf("ATÇ™K%dÇ…è„Ç™Ç¡ÇΩ\n", player->ATK);
				printf("DEFÇ™%dÇ…è„Ç™Ç¡ÇΩ\n", player->DEF);
				printf("LVÇ™%dÇ…è„Ç™Ç¡ÇΩ\n", player->LV);

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
					strcpy(&enemy->name[0], "É`ÉÉÉìÉv");
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
		printf("%sÇ™%dÇÃçUåÇ\n", &enemy->name[0], data);

		printf("%sÇÃHP %d \n\n", &player->name[0], player->HP);

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

			printf(" %sÇÃèüóòÅI \n", &enemy->name[0]);

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
ä÷êîñº:	void UninitBatoru( void )
à¯êî:	void
ñﬂÇËíl:	void
ê‡ñæ:	BatoruÇÃèIóπèàóù
*******************************************************************************/
void UninitBatoru(void)
{
	// åªéûì_Ç≈ÇÕì¡Ç…Ç‚ÇÈéñÇ™ñ≥Ç¢Ç¡Ç∑
	// DirectXÇ≈ÇÕÉÅÉÇÉäÇÃâï˙ìôÇçsÇ§Ç¡Ç∑
}

char *GetBatoru_mapAdr(int y, int x)
{
	return &batoru_map[y][x];
}


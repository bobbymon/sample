/*******************************************************************************
* タイトル:		mainヘッダー
* プログラム名:	main.h
* 作成者:		GP11B341 01 飯塚春輝
* 作成日:		2018/06/29
*******************************************************************************/
#ifndef MAIN_H
#define MAIN_H

/*******************************************************************************
* scanf のwarning防止
*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS


/*******************************************************************************
* インクルードファイル****
*******************************************************************************/
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>


/*******************************************************************************
* マクロ定義
*******************************************************************************/
// フィールド用
#define FH_MAX		(14)		// 縦幅
#define FW_MAX		(80)		// 横幅
#define FH_ENEMY	(40)		// enemy幅
// 共通パラメータ用
#define	NAME_MAX	(256)		// 名前BufのMAX
#define ENEMY_MAX	(2)			// 敵の数


/*******************************************************************************
* 構造体定義
*******************************************************************************/


/*******************************************************************************
* プロトタイプ宣言
*******************************************************************************/
char *GetMapAdr(int y, int x);	// フィールドのアドレスを取得する





#endif

// e3-4.cpp : Defines the entry point for the console application.
//



/*
演習3-4
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
while文終了時に、xの値が-1になることを確認できるように作成せよ。
*/
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x;//入力を受け、カウントダウンの始まりになる。

	cout << "カウントダウンします。\n";
	do {
		//カウントダウン開始地点の入力を受ける
		cout << "正の整数値：";
		cin >> x;
	//負の値が入力された場合は、正の値が入力されるまで繰り返される。
	} while (x <= 0);

	//入力値から0まで繰り返される
	while (x >= 0) {
		//値を表示する
		cout << x << "\n";
		//カウントダウン処理
		x--;
	}
	//カウントダウン処理を抜けた後の x を表示
	cout << "現在のカウント変数x の値は" << x << "です。\n";



    //return 0;
}


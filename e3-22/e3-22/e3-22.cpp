// e3-22.cpp : Defines the entry point for the console application.
//


/*
演習3-22
作成日：2017/11/11
作成者：古舘尚大
【問題概要】
n段の下向き数字ピラミッドを表示せよ
*/

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int	n;//サイズ指定入力変数

	//サイズ指定の文言表示
	cout << "ピラミッドを表示します。\n";
	//サイズ指定の文言表示
	cout << "数字を入力してください。\n";
	//サイズ指定、値読み込み
	cin >> n;


	//下向きピラミッド
	//縦方向にサイズ分繰り返す
	for (int i = 1; i <= n; i++)
	{
		//横方向にサイズ分繰り返す
		for (int front_space = 1; front_space <= i; front_space++)
			//空白を表示する
			cout << " ";

		//横方向にサイズ分繰り返す
		for (int j = n; j >= (i - 1) * 2 + 1; j--)
			//数字を表示する
			cout << i%10;

		//横方向の処理が終わったら改行
		cout << "\n";



	}


	//    return 0;
}


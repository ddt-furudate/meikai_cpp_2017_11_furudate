// e3-6.cpp : Defines the entry point for the console application.
//


/*
演習3-6
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
入力された個数分記号文字を表示するプログラムを作成せよ。
記号は'+'と'-'を交互に出力する。
*/


#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int n;//入力値を保持する変数

	//表示文字数の指定
	cout << "記号文字の表示個数を指定してください。";
	cin >> n;

	//繰り返し回数下限値設定
	int i = 0;

	//文字を繰り返し表示
	while (i < n) 
	{
		//繰り返し回数が奇数回かどうかの判定
		if ( i % 2 == 1)
		{
			cout << '-';
		}
		else
		{
			cout << '+';
		}
		i++;
	}
		cout << "\n";

	//return 0;
}


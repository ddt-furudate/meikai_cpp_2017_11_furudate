// e3-15.cpp : Defines the entry point for the console application.
//



/*
演習3-15
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
入力された整数値の全約数表示するプログラム(List3-12)を書き換え、約数の表示終了後に約数の個数を表示せよ。
*/
#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int number,		//入力値
		counter = 0;	//約数の数を数える変数
	//値設定
	cout << "整数値：";
	cin >> number;

	//設定された分だけ繰り返す
	for (int i = 1; i <= number; i++)
	{
		//割り切れる場合、その値を表示してカウントアップする
		if (number%i == 0)
		{
			cout << i << "\n";
			counter++;
		}
	}
	//最後にカウントアップした結果を表示
	cout << "約数の数は" << counter << "個\n";

//    return 0;
}


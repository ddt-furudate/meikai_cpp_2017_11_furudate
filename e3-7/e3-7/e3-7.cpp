// e3-7.cpp : Defines the entry point for the console application.
//


/*
演習3-7
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
入力された整数値の桁数を出力する。
*/



#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int x,		//入力値
		count=0;	//桁のカウント

	do {
		//値を入力してもらう
		cout << "正の値を入力してください。";
		cin >> x;
	//負の値が入力された場合には繰り返す。
	} while (x <= 0);
	
	//一桁ずつ削っていき、カウントをとることで桁を数える。
	while (x > 0) {
		//一桁ずつ削る
		x /= 10;
		//カウントアップ
		count++;
	}
	cout << "入力された値の桁数は" << count << "です。\n";

	
	//return 0;
}


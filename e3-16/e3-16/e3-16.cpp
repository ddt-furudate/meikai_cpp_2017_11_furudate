// e3-16.cpp : Defines the entry point for the console application.
//



/*
演習3-16
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
1からnまでの整数値の2乗値を表示せよ
*/

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int input,		//入力値
		counter;	//繰り返し回数カウンタ
	//入力値の受付
	cout << "整数値を入力してください：";
	cin >> input;
	//入力値の分まで繰り返す
	for (counter = 1; counter <= input; counter++)
		//counter^2として出力
		cout << counter << "の2乗は" << counter*counter << "\n";





    //return 0;
}


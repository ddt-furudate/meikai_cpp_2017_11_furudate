// e1-14.cpp : Defines the entry point for the console application.
//


/*
演習1-14
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
入力値の±5の範囲の整数値をランダムに生成せよ。
*/


#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	//乱数生成のためのシード設定。
	srand(time(NULL));
	//乱数による初期値設定
	int lucky = rand();

	int x;//入力値
	//入力の文字表記
	cout << "整数値：";
	//xの値設定
	cin  >> x;
	//乱数値の表示
	cout << "乱数値" << lucky << "\n";
	//0～10の範囲の乱数値
	cout << "1桁の正の整数値" << lucky % 11 << "\n";
	//-5～5の範囲の乱数値
	cout << "+-の乱数幅" << (lucky % 11) - 5 << "\n";
	//±5の整数値
	cout << "+-乱数は" << (lucky % 11) - 5 + x << "\n";
	
    //return 0;
}


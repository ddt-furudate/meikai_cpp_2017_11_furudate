// e1-7.cpp : Defines the entry point for the console application.
//


/*
演習1-7
作成日：2017/11/14
作成者：古舘尚大
【問題概要】
三つのint型変数に値を代入し、合計と平均を求めよ。
*/


#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	int	x;//入力変数x
	int	y;//入力変数y
	int	z;//入力変数z
	x = 63;//xの初期値設定
	y = 18;//yの初期値設定
	z = 21;//zの初期値設定
	//x初期値表示
	cout << "xの値は" << x << "です。\n";
	//y初期値表示
	cout << "yの値は" << y << "です。\n";
	//z初期値表示
	cout << "zの値は" << z << "です。\n";
	//合計値表示
	cout << "合計は" << x + y + z << "です。\n";
	//平均値表示
	cout << "平均値は" << (x + y + z) / 3 << "です。\n";
	
    //return 0;
}


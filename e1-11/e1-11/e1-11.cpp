// e1-11.cpp : Defines the entry point for the console application.
//


/*
演習1-11
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
2つの実数値を読み込み合計と平均を求めよ。
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double	x;//実数値型の入力変数x
	double	y;//実数値型の入力変数y
	//入力の案内
	cout << "xの値：";
	//xの値設定
	cin  >> x;
	//入力の案内
	cout << "yの値：";
	//yの値設定
	cin  >> y;
	//入力値の合計
	cout << "合計は" << x + y << "です。\n";
	//入力値の平均
	cout << "平均値は" << (x + y) / 2 << "です。\n";

//    return 0;
}


// e1-10.cpp : Defines the entry point for the console application.
//


/*
演習1-10
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
入力値に10足した値と10減じた値を表示せよ。
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int	x;//入力変数
	//説明文の表示
	cout << "整数値の入力：";
	//xに入力値設定
	cin	 >> x;
	//入力値表示
	cout << x << "と入力されました。\n";
	//入力値+10結果表示
	cout << "10を加えた数は" << x + 10 << "となります。\n";
	//入力値-10結果表示	
	cout << "10を減らした数は" << x - 10 << "となります。\n";


//    return 0;
}


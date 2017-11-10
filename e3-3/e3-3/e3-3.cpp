// e3-3.cpp : Defines the entry point for the console application.
//

/*
演習3-3
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
二つの整数を読み込んで、小さいほうの数以上で大きいほうの数以下の全整数を、
小さいほうから順に表示するプログラム。
*/

#include "stdafx.h"
#include "ctime"
#include "cstdlib"
#include "iostream"

using namespace std;

int main()
{
	int a,		//入力された値の受け皿
		b,		//入力された値の受け皿
		min,	//比較後の最小値の受け皿
		max,	//比較後の最大値の受け皿
		count;	//繰り返し回数

	//aに値を入力するため
	cout << "aの値を入力してください。";
	cin >> a;
	//bに値を入力するため
	cout << "bの値を入力してください。";
	cin >> b;

	//最小値・最大値の判定
	if (a < b)
	{
		min = a;
		max = b;
	}
	else
	{
		min = b;
		max = a;
	}

	//整数を繰り返し表示させる
	for (count = min; count <= max; count++)
	{
		//整数を書き出す。
		cout << count << "  ";
	}
	//終了時に改行。
	cout << "\n";






//    return 0;
}


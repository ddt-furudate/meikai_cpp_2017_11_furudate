// e2-3.cpp : Defines the entry point for the console application.
//


/*
演習2-3
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
二つのint型変数a,bに値を入力し、大小関係を表示せよ。
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int a,//入力変数a
		b;//入力変数b
	//aへの入力案内
	cout << "aの数値を入力してください。";
	//aへの値設定
	cin >> a;
	//bへの入力案内
	cout << "bの数値を入力してください。";
	//bへの値設定
	cin >> b;
	//aよりbが大きいかどうかの判定
	if (a < b)
	{
		//判定結果表示
		cout << "bのほうが大きい値です。\n";
	}
	//bよりaが大きいかどうかの判定
	else if (a > b)
	{
		//判定結果表示
		cout << "aのほうが大きい値です。\n";
	}
	//それ以外の場合
	else
	{
		//判定結果表示
		cout << "aとbは等しい値です。\n";
	}


//    return 0;
}


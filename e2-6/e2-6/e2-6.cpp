// e2-6.cpp : Defines the entry point for the console application.
//


/*
演習2-6
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
入力値に応じて成績を判定して表示せよ。
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int nPoint;//入力変数
	//入力案内
	cout << "点数を入力してください。";
	//値設定
	cin  >> nPoint;
	//60未満かどうかの判定
	if (nPoint < 60)
	{
		//結果表示
		cout << "不可\n";
	}
	//60以上70未満かどうかの判定
	else if (nPoint < 70)
	{
		//結果表示
		cout << "可\n";
	}
	//70以上80未満かどうかの判定
	else if (nPoint < 80)
	{
		//結果表示
		cout << "良\n";
	}
	//90以上の場合
	else
	{
		//結果表示
		cout << "優\n";
	}
		


//    return 0;
}


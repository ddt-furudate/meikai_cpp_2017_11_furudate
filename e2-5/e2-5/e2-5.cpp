// e2-5.cpp : Defines the entry point for the console application.
//


/*
演習2-5
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
入力値を3で割った値に応じてメッセージを表示せよ。
正でない場合は、そのメッセージを表示せよ。
*/

#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	int nInput;//入力変数
	//入力案内
	cout << "数値を入力してください。";
	//変数に値設定
	cin  >> nInput;
	//入力値が正かどうかの判定
	if (nInput <= 0)
	{
		//判定結果表示
		cout << "正ではない数値が入力されました。\n";
	}
	//3で割り切れるかどうかの判定
	else if (nInput % 3 == 0)
	{
		//判定結果表示
		cout << "その値は3で割り切れます。\n";
	}
	//3で割ったあまりが1かどうかの判定
	else if (nInput % 3 == 1)
	{
		//判定結果表示
		cout << "その値は3で割った余剰は1です。\n";
	}
	//3で割ったあまりが0でも1でもない場合
	else
	{
		//判定結果表示
		cout << "その値は3で割った余剰は2です。\n";
	}



//    return 0;
}


// e2-4.cpp : Defines the entry point for the console application.
//



/*
演習2-4
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
5で割り切れるかどうかでメッセージの表示を変え、正ではない値が読み込まれた場合はそれも表示する。
*/


#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{

	int nInput;//入力値
	//入力案内
	cout << "数値を入力してください。";
	//nInputに値設定
	cin  >> nInput;
	//負数の判定
	if (nInput < 0)
	{
		//判定結果表示
		cout << "正ではない数値が入力されました。\n";
	}
	//5で割り切れるかどうかの判定
	else if (nInput % 5 == 0)
	{
		//判定結果表示
		cout << "その値は5で割り切れます。\n";
	}
	//割り切れない場合
	else
	{
		//判定結果表示
		cout << "その値は5で割り切れません。\n";
	}

   // return 0;
}


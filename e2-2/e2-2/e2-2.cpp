// e2-2.cpp : Defines the entry point for the console application.
//

/*
演習2-2
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
List2-5
*/

/*
演習2-5
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
List2-5の最後のelse、else if(n == 0)に変更するとどうなるか
*/

#include "stdafx.h"
#include <iostream>


using namespace std;



int main()
{
/*
仮に最後の条件判定文まで0以外の値が通ってしまった場合、次のelse文の処理を行う。
しかし何も書かれていないので処理が終了する。
*/

	int n;//入力値変数
	//入力案内
	cout << "数値を入力してください。";
	//nに値を設定する
	cin  >> n;
	//正数の判定
	if (n > 0)
	{
		//判定結果表示
		cout << "その値は正です。\n";
	}
	//負数の判定
	else if (n < 0)
	{
		//判定結果表示
		cout << "その値は負です。\n";
	}
	//問題の条件式。0かどうかの判定
	else if (n == 0)
	{
		//判定結果表示
		cout << "その値は０です。\n";
	}

    //return 0;
}


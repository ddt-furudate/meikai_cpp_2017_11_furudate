// e2-7.cpp : Defines the entry point for the console application.
//

/*
演習2-7
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
実数値を読み込んで大きい値を表示せよ。
*/

#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	double	na,//入力変数A
			nb,//入力変数B
			nMax;//最大値
	//Aの入力案内
	cout << "aの値を入力してください。";
	//Aへの値設定
	cin  >> na;
	//Bの入力案内
	cout << "bの値を入力してください。";
	//Bへの値設定
	cin  >> nb;
	//条件演算子での結果格納。
	//大小比較成立時、Aが最大値。不成立時はBが最大値
	nMax = na > nb ? na : nb;
	//結果表示
	cout << "大きい値は" << nMax << "です。\n";
//    return 0;
}


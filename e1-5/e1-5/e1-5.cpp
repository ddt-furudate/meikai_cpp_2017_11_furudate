// e1-5.cpp : Defines the entry point for the console application.
//


/*
演習1-5
作成日：2017/11/14
作成者：古舘尚大
【問題概要】
自分の名前を1行に1文字ずつ表示せよ。また姓と名の間は空白にせよ。
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//スペースの後ろに\nを入れることで空白で改行できる。
	cout << "古\n舘\n　\n尚\n大\n";

	//    return 0;
}


// e3-19.cpp : Defines the entry point for the console application.
//


/*
演習3-19
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
n段の正方形を表示せよ。
*/


#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{

	int length, //縦方向の繰り返し回数
		side,	//横方向の繰り返し回数
		size;	//正方形のサイズ

	//正方形のサイズ指定
	cout << "正方形のサイズを指定してください。：";
	cin >> size;
	//縦方向の繰り返し処理
	for (length = 1; length <= size; length++)
	{
		//横方向の繰り返し処理
		for (side = 1; side <= size; side++)
			cout << "*";
		//横方向の処理終了後に改行
		cout << "\n";
	}


	//    return 0;
}


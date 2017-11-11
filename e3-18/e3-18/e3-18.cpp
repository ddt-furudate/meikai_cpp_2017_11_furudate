// e3-18.cpp : Defines the entry point for the console application.
//



/*
演習3-18
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
List3-13をsetw操作子を用いることなく実現するように書き換えよ。
*/
#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int calculate,	//演算結果格納変数
		count=0;		//桁数カウント
	//縦列方向の繰り返し
	for (int i = 1; i <= 9; i++)
	{
		//横方向の繰り返し
		for (int j = 1; j <= 9; j++)
		{

			//桁数確認のために結果格納
			calculate = i*j;
			//桁数確認処理
			while(calculate > 0)
			{
				calculate /= 10;
				//桁数のカウント
				count++;
			}
			//桁数の確認
			if (count == 1)
				//1桁の場合空白3つ
				cout << "   ";
			else if (count == 2)
				//2桁の場合空白2つ
				cout << "  ";
			else
				//3桁の場合空白1つ
				cout << " ";
			//桁数のリセット
			count = 0;
			//九九の処理
			cout << i*j;

		}
		cout << "\n";
	}
    

	//return 0;
}


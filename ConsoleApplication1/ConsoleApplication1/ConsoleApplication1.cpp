// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
/*
演習1-1
「coutが定義されていない識別子」とエラー表示がでる。
演習1-3
「;」が必要ですと構文エラー表示がでる。
*/
//	cout << "hello world\n"
//	cout << "あいうえお\n";

//演習1-2
/*
	std::cout << "hello world\n";
	std::cout << "あいうえお\n";
*/

//演習1-4
//	cout << "古\n舘\n尚\n大\n";
//演習1-5
//	cout << "古\n舘\n　\n尚\n大\n";

//演習1-6
/*
	double x;
	double y;
	x = 1.5;
	y = 6.3;

	cout << "xの値は" << x << "です。\n";
	cout << "yの値は" << y << "です。\n";
	cout << "合計は" << x + y << "です。\n";
	cout << "平均値は" << (x + y) / 2 << "です。\n";
*/
//演習1-7
/*
	int	x;
	int	y;
	int	z;
	x = 63;
	y = 18;
	z = 21;
	cout << "xの値は" << x << "です。\n";
	cout << "yの値は" << y << "です。\n";
	cout << "zの値は" << z << "です。\n";
	cout << "合計は" << x + y + z << "です。\n";
	cout << "平均値は" << (x + y + z) / 3 << "です。\n";
*/
//演習1-8 小数点以下の数字が切り落とされる。
/*
	int x = 1.5;
	cout << "xの値は" << x << "です。\n";
*/
//演習1-9
/*	int x;
	cout << "整数値の入力：";
	cin	 >> x;
	cout << x << "と入力されました。\n";
*/
//演習1-10
/*	cout << "10を加えた数は" << x + 10 << "となります。\n";
	cout << "10を減らした数は" << x - 10 << "となります。\n";
*/
//演習1-11
/*
	double x;
	double y;
	cout << "xの値：";
	cin  >> x;
	cout << "yの値：";
	cin  >> y;
	cout << "合計は" << x + y << "です。\n";
	cout << "平均値は" << (x + y) / 2 << "です。\n";
*/
//演習1-12
/*
	double x;
	double y;
	cout << "三角形の面積を求めます。\n";
	cout << "底辺：";
	cin  >> x;
	cout << "高さ：";
	cin  >> y;
	cout << "面積は" << (x + y) / 2 << "です。\n";
*/

//演習1-13
/*
	srand(time(NULL));
	int lucky = rand();
	cout << "1桁の正の整数値" << lucky % 10 << "\n";
	cout << "1桁の負の整数値" << -( lucky % 10) << "\n";
	cout << "2桁の正の整数値" << (lucky % 10)*10 << "\n";
*/

//演習1-14
/*
	srand(time(NULL));
	int lucky = rand();

	int x;
	cout << "整数値：";
	cin  >> x ;

	cout << "乱数値" << lucky << "\n";
	cout << "1桁の正の整数値" << lucky % 11 << "\n";
	cout << "+-の乱数幅" << (lucky % 11) - 5 << "\n";

	cout << "+-乱数は" << (lucky % 11) - 5 + x << "\n";
*/

//演習2-1
/*
	int x;
	cout << "数値を入力してください。";
	cin  >> x;
	if (x > 0)
	cout << x << "\n";
	else
	cout << -x<<"\n";
*/

//演習2-2
/*
仮に最後の条件判定文まで0以外の値が通ってしまった場合、次のelse文の処理を見に行こうとしてエラーを起こすと考えられる。
または処理がないため何も表示されることがなく実行が終了されてしまうと考えられる。
*/
/*
	int n;
	cout << "数値を入力してください。";
	cin  >> n;
	if (n > 0)
		cout << "その値は正です。\n";
	else if (n < 0)
		cout << "その値は負です。\n";
	else if(n == 0)
		cout << "その値は０です。\n";
*/

//演習2-3
/*
	int a, b;
	cout << "aの数値を入力してください。";
	cin  >> a;
	cout << "bの数値を入力してください。";
	cin  >> b;
	if (a < b)
		cout << "bのほうが大きい値です。\n";
	else if(a > b)
		cout << "aのほうが大きい値です。\n";
	else
		cout << "aとbは等しい値です。\n";
*/

//演習2-4
/*
	int x;
	cout << "数値を入力してください。";
	cin  >> x;

	if (x <= 0)
		cout << "正ではない数値が入力されました。\n";
	else if (x % 5 == 0)
		cout << "その値は5で割り切れます。\n";
	else
		cout << "その値は5で割り切れません。\n";
*/

//演習2-5
/*
	int x;
	cout << "数値を入力してください。";
	cin  >> x;

	if (x <= 0)
		cout << "正ではない数値が入力されました。\n";
	else if (x % 3 == 0)
		cout << "その値は3で割り切れます。\n";
	else if(x % 3 == 1)
		cout << "その値は3で割った余剰は1です。\n";
	else 
		cout << "その値は3で割った余剰は2です。\n";
*/

//演習2-6
/*
	int x;
	cout << "点数を入力してください。";
	cin  >> x;
	if (x < 60)
		cout << "不可\n";
	else if (x<70)
		cout << "可\n";
	else if (x <80)
		cout << "良\n";
	else
		cout << "優\n";
*/
/*
	if (0 <= x && x < 60)
		cout << "不可\n";
	else if (60 <= x && x < 70)
		cout << "可\n";
	else if (70 <= x && x < 80)
		cout << "良\n";
	else
		cout << "優\n";
*/
//演習2-7
/*
	double a,b;
	cout << "aの値を入力してください。";
	cin  >> a;
	cout << "bの値を入力してください。";
	cin  >> b;

	int max = a > b ? a : b;
	cout << "大きい値は" << max << "です。\n";
*/

//演習2-8
/*
	int a, b;
	cout << "aの値を入力してください。";
	cin  >> a;
	cout << "bの値を入力してください。";
	cin  >> b;
	
	int cal = a - b;
	cal = cal < 0 ? -cal: cal;
	cout << "aとbの値の差は"<< cal <<"です。\n";
*/

//演習2-9
/*
	int a, b;
	cout << "aの値を入力してください。";
	cin  >> a;
	cout << "bの値を入力してください。";
	cin  >> b;

	int cal = a - b;
	cal = cal < 0 ? -cal : cal;
	cout << (cal < 11 ? "それらの差は10以下です。\n" : "それらの差は11以上です。\n");
*/

//演習2-10
/*
	int a, b, c;
	cout << "aの値"; cin >> a;
	cout << "bの値"; cin >> b;
	cout << "cの値"; cin >> c;

	int min = a;
	min = min < b ? min : b;
	min = min < c ? min : c;

	cout << "最小値は" << min << "です。\n";
*/

//演習2-11
/*
	int a, b, c;
	cout << "aの値"; cin >> a;
	cout << "bの値"; cin >> b;
	cout << "cの値"; cin >> c;

	int min = a;
	min = min < b ? min : b;
	min = min < c ? min : c;

	int max = a;
	max = max > b ? max : b;
	max = max > c ? max : c;

	if (max != a && min != a)
		cout << "中央値は" << a << "です。\n";
	else if(max != b && max != b)
		cout << "中央値は" << b << "です。\n";
	else if(max != c && min != c)
		cout << "中央値は" << c << "です。\n";
	else 
		cout << "中央値は" << min << "です。\n";
*/

//演習2-12
/*
	int a, b;
	cout << "aの値を入力してください。"; cin >> a;
	cout << "bの値を入力してください。"; cin >> b;


	if (a < b)
		cout << "最小値は" << a << "。\n" << "最大値は" << b << "。\n";
	else if (a > b)
		cout << "最小値は" << b << "。\n" << "最大値は" << a << "。\n";
	else
		cout << "二つの値は等しいです。\n";
*/

//演習2-13
/*
int a, b,tmp;
cout << "aの値を入力してください。"; cin >> a;
cout << "bの値を入力してください。"; cin >> b;
if (a < b)
{
	tmp = a;
	a = b;
	b = tmp;
}

cout << "降順に並び替えました。\n";
cout << "変数aは" << a << "です。\n";
cout << "変数bは" << b << "です。\n";
*/
//演習2-14
/*
	srand(time(NULL));
	int ran = rand() % 3;

	switch (ran)
	{
	case 0:cout << "グー\n"; break;
	case 1:cout << "チョキ\n"; break;
	default:cout << "パー\n"; break;
	}
*/
//演習2-15
/*
	srand(time(NULL));
	int ran = rand() %7;

	switch (ran)
	{
	case 0:cout << "大凶\n"; break;
	case 1:cout << "凶\n"; break;
	case 2:cout << "末吉\n"; break;
	case 3:cout << "吉\n"; break;
	case 4:cout << "小吉\n"; break;
	case 5:cout << "中吉\n"; break;
	default:cout << "大吉\n"; break;
	}
*/

//演習2-16
/*
	int x;
	cout << "何月か数字で入力してください。"; cin >> x;
	switch (x)
	{
	case 12:
	case 1:
	case 2:cout << "冬です。\n"; break;

	case 3:
	case 4:
	case 5:cout << "春です。\n"; break;

	case 6:
	case 7:
	case 8:cout << "夏です。\n"; break;

	case 9:
	case 10:
	case 11:cout << "秋です。\n"; break;
	}
*/



//演習3-1

string retry;
int x;
do 
{
	cout << "数値を入力してください。";
	cin >> x;
	if (x > 0)
		cout << "正の値です。\n";
	else if (x < 0)
		cout << "負の値です。\n";
	else
		cout << "その値は0です。\n";

	cout << "続けますか？　はい→Y,いいえ→N : ";
	cin >> retry;

} while (retry == "Y" || retry == "y");


//演習3-2





//演習3-3
//演習3-4
//演習3-5
//演習3-6
//演習3-7
//演習3-8
//演習3-9
//演習3-10
//演習3-11
//演習3-12
//演習3-13
//演習3-14
//演習3-15
//演習3-16
//演習3-17





	//return 0;
}


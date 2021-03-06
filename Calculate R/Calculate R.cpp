// Calculate R.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"
#include "iomanip"


#define PI 3.1415926

using namespace std;


int main()
{
	double dia;
	double ang;

	cout << "***双圆弧参数计算********\n" << endl;
	cout << "圆弧半径 = 1.11 * 钢球直径 / 2" << endl;
	cout << "水平偏心距 = (圆弧半径 - 钢球直径 / 2) * sin(接触角 * PI / 180)" << endl;
	cout << "垂直偏心距 = (圆弧半径 - 钢球直径 / 2) * cos(接触角 * PI / 180)" << endl;
	cout << "-------------------------------------" << endl;

	while (1)
	{
		cout << "输入钢球直径,回车键确认--123退出程序：" << endl;
		cin >> dia;
		if (dia == 123)
		{
			break;
		}
		
		cout << "输入接触角：" << endl;
		cin >> ang;
		if (ang == 123)
		{
			break;
		}

		cout << "\n";

		double r = 1.11 * dia / 2;
		double pianxin_shuipin = (r - dia / 2) * sin(ang * PI / 180);
		double pianxin_cuizhi = (r - dia / 2) * cos(ang * PI / 180);

		if (r > 10)
		{
			cout.precision(5);
		}
		else
		{
			cout.precision(4);
		}
		cout << "圆弧半径： " << r << "\n";
		if (pianxin_shuipin > 1)
		{
			cout.precision(4);
		}
		else
		{
			cout.precision(3);
		}
		cout << "水平偏心距： " << pianxin_shuipin << "\n";
		cout << "垂直偏心距： " << pianxin_cuizhi << "\n";
		cout << "************************\n\n";
	}


	//system("PAUSE");

    return 0;
}


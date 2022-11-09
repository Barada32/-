#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"//(char)219
#define BLACK_BOX			"\x20\x20"
//		\xXX - ïîçâîëÿåò çàäàòü Hex-êîä (XX) ASCII-ñèìâîëà

void main()
{
	setlocale(LC_ALL, "");
	/*for (int i = 176; i < 224; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << "\t" << (char)i << "\n";
	}
	cout << endl;*/
	int n;
	cout << "Ââåäèòå ðàçìåð äîñêè: "; cin >> n;
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else //cout << "  ";
			{
				/*if ((i + j) % 2 == 0)cout << WHITE_BOX << WHITE_BOX;
				else cout << BLACK_BOX << BLACK_BOX;*/
				//(i + j) % 2 == 0 ? cout << WHITE_BOX << WHITE_BOX : cout << BLACK_BOX << BLACK_BOX;
				cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
			}
		}
		cout << endl;
	}
}
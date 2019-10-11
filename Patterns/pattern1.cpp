#include <iostream>
using namespace std;
int main ()
{
	int nline;
	cout << "ENTER NUMBER OF LINES TO BE PRINTED :";
	cin >> nline;
	int curline = 1;

	while (curline <= nline)
	{
		int nval = curline;
		int val;
		if (curline % 2 == 1)
			val = 1;
		else
			val = 0;

		int curval = 0;

		while (curval < nval)
		{
			cout << val;
			val = 1 - val;
			curval++;
		}
		cout << endl;
		curline++;
	}
}

// 1
// 01
// 101
// 0101
// 10101
// 010101

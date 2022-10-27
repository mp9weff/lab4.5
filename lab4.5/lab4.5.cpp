#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R, R1, R2;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter x: "; cin >> x;
		cout << "Enter y: "; cin >> y;
		cout << "Enter R1: "; cin >> R1;
		cout << "Enter R2: "; cin >> R2;
		cout << "Enter R: "; cin >> R;
		if ((x * x + y * y <= R2 * R2 && 0 > x >= -R && y >= 0) ||
			(x * x + y * y >= R2 * R1 && x * x + y * y <= R1 && R1 >= x >= R2 && y >= R2))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = 2. * R1 * rand() / RAND_MAX - R1;
			y = 2. * R1 * rand() / RAND_MAX - R1;
			if ((x * x + y * y <= R2 * R2 && 0 > x >= -R && y >= 0) ||
				(x * x + y * y >= R2 * R1 && x * x + y * y <= R1 && R1 >= x >= R2 && y >= R2))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if ((y * y <= R * R - x * x && y >= 0) ||
			(y <= x && y >= -R && y <= 0 && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;
		R== 6. * rand() / RAND_MAX - 3;
		if ((y * y <= R * R - x * x && y >= 0) ||
			(y <= x && y >= -R && y <= 0 && x <= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << setw(8) << setprecision(4) << R << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << setw(8) << setprecision(4) << R << " " << "no" << endl;
	}
	return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S(const double x, double a, double &n, double &s);
double A(const double x, double n,  double &a);

int main()
{
	double xp, xk, x, dx, a, s = 0, n = 0;
	// int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(7) << "x  "
		<< " |" << setw(10) << "log(x) "
		<< " |" << setw(9) << "s   "
		<< "  |" << setw(6) << "n  " << "|"
		<< endl;
	cout << "-----------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		s = S(x, a, n, s);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << log(x)
			<< " |" << setw(10) << setprecision(2) << s
			<< " |" << setw(5) << setprecision(2) << n << " |"
			<< endl;

		x += dx;
	}
	cout << "-------------------------------------------------" << endl;

	system("pause");
	return 0;
}


double S(const double x, double a, double& n, double& s)
{
	n = 0;
    double aa = x - 1;
	s = a;
	do {
		n++;
		double R = (pow((-1), n) * pow((x - 1), (n + 1))) / (n + 1);
		a *= R;
		s += a;
	} while (a > 0 && a <= 2);
	return s;
}


double A(const double x, double n, double& a)
{
	double R = (pow((-1), n) * pow((x - 1), (n + 1))) / (n + 1);
	a *= R;
	
	return a;
}
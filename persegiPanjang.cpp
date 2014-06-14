#include <iostream>
using namespace std;

int main()
{
    double panjang, lebar;

    panjang = 20;
    lebar = 10;

    double keliling;
    float Luas;
    keliling = 2 * panjang + lebar;
	Luas = panjang*lebar;

    cout << "Keliling persegi panjang = "
         << keliling << endl;
	cout << "Luas Persegi Panjang = "
		 << Luas << endl;

    return 0;
}

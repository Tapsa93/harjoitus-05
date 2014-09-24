#include <iostream>
using namespace std;
int erotus;
void Laske(int eka, int toka);
void main()
{
	int x, y;
	cout << "Anna 2 kokonaislukua";
	cin >> x >> y;
	Laske(x, y);
	if (erotus == 0)
		cout << "BINGO";
	else
		cout << "BONGO";
	
	


}
void Laske(int eka, int toka)
{
	erotus = eka - toka;
}
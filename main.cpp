//Media di N numeri - Lupoli Michele 3B-INF
#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	int n, s, i, m, x, scelta;
	s=0;
	do
	{
	do
	{
		cout<<"Quanti numeri vuoi inserire? ";
		cin>>n; cout<< endl;
		if (n <= 0)
		cout<<"Inserisci un numero maggiore e diverso da 0!"<<endl;
	}
	while (n <= 0);
	for (i=0; i<n; i++)
	{
		cout<<"Inserisci numero nella posizione "<<i<<":  ";
		cin>>x; cout<< endl;
		s=s+x;
	}
	m=s/n;
	cout<<"Media: "<<m<< endl;
	cout<<"Vuoi eseguire un nuovo calcolo? (1=Si/0=No)"<< endl;
	cin>>scelta;
	}
	while (scelta == 1);
	system ("PAUSE");
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int maior, menor; //Variáveis responsáveis por determinar o maior e o menor número
	int i = 0; //Contador
	int x, y;

	cout << "Quantos numeros?: ";
	cin >> x;

	cout << "Insira " << x << " numeros: ";
	for(i = 0; i < x; i++)
	{
		if(i == 0)
		{
			maior = x;
			menor = x;
		}
		cin >> y;

		if(y > maior)
			maior = y;
		if(y < menor)
			menor = y;
	}

	cout << endl << "Maior numero: " << maior << endl;
	cout << "Menor numero: " << menor << endl;
}

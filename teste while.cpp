#include <iostream>

using namespace std;

int main()
{
	int id; 
	//int maior, menor;	

	cout << "Digite a sua idade" << endl;
	cin >> id;
	
	
	while(id<1)
{	cout << "idade inv�lida" << endl;
		cin >> id;
}

	if(id>17)
	{
		cout << "Voc� est� apto a dirigir" << endl;
	}
	else
		cout << "n pode dirigir n filho" << endl;


	return 0;
}
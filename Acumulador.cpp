#include <iostream>

using namespace std;

int main() 
{
	int i, n;
	double x, s=0;
	
	//"x" equivale ao n�mero que eu quero somar
	//"s" v�riavel que salva a soma dos n�meros (s=s+x)
	//repetir "n" vezes
	
	cout << "quantidade de n�meros:" << endl;
	
	cin >> n;
	
	//entrada da quantidade de n�emros a serem somados.
	
	for (i=1; i<=n; i++) 
	{
		cout << "entre com " << n-i+1 << " n�mero(s)" << endl;
		
		cin >> x;
		
		//entrada com o n�mero que eu quero somar
		
		s=s+x;
		
		//soma dos valores 
	}
	
	cout << "----> Soma = " << s << endl;
	cout << "--> M�dia= " << s/n;
}
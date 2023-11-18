#include <iostream>

using namespace std;

int main() 
{
	int i, n;
	double x, s=0;
	
	//"x" equivale ao número que eu quero somar
	//"s" váriavel que salva a soma dos números (s=s+x)
	//repetir "n" vezes
	
	cout << "quantidade de números:" << endl;
	
	cin >> n;
	
	//entrada da quantidade de núemros a serem somados.
	
	for (i=1; i<=n; i++) 
	{
		cout << "entre com " << n-i+1 << " número(s)" << endl;
		
		cin >> x;
		
		//entrada com o número que eu quero somar
		
		s=s+x;
		
		//soma dos valores 
	}
	
	cout << "----> Soma = " << s << endl;
	cout << "--> Média= " << s/n;
}
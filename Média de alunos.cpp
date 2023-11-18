#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double media;
    double n1, n2;
    int n;
    double i;

//	cin >> n;
    cout << "Insira o número de alunos" << endl;
    cin >> n;
    
    

    for (i=1; i<=n; i++)
        {
            cout << "Insira as notas" << endl;
            cin >> n1 >> n2;

            media= (n1+n2) /2;

            cout << "Média " << media << endl;
			
			if (media<60)
	{
		cout << "Reprovado" << endl;
	}
	else{
		cout << "Aprovado" << endl;
	}
        }
  
	
	return 0;
}
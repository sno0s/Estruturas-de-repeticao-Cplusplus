#include <iostream>
#include <iomanip>


using namespace std;

void divisao()
{
    cout << endl << "--------------------------------------------------------" << endl;
}

int main()
{
    char nome[5][51];
    int i;

    divisao();

    cout << "Entre com o nome das cidades: ";
    for(i=0; i<5; i++)
    {
        cin.getline(nome[i],51);
    }
    cout << endl << "Nome das cidades: " << endl;
    for(i=0; i<5; i++)
    {
        cout << nome[i] << endl;
    }

    divisao();

    return 11;
}
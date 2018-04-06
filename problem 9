#include <iostream>

using namespace std;

int tam(string cadena){
    int cont=0;
    while (cadena[cont]!='\0')
        cont++;
    return cont;
}
bool esPalindromo(string cadena, int tam){
    for(int i = 0; i < tam/2; i++)
        if(cadena[i] != cadena[tam-i-1])
            return false;
    return true;
}
int main()
{
    string cadena;
    cout << "Ingresa la cadena: ";
    getline(cin,cadena);
    if (esPalindromo(cadena,tam(cadena))==true)
        cout << "Es palindromo \n";
    else
        cout << "No es palindromo \n";
}

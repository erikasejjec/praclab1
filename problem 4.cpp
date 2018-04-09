#include <iostream>
using namespace std;

void ingresar(double  M[][10] ,double  f,double  c)
{
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++){
            cout<<"valor ";
            cin>>M[i][j];}
    }
}
void mostrar(double  M[][10] ,double  f,double  c)
{
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
            cout<<M[i][j]<<"       ";
         cout<<endl;
    }
}
void mulmatri(double  M[][10],double  f,double  c,double  n[][10],double  f2,double  c2,double  m[10][10])
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            m[i][j]=0;
            for(int k=0; k<c2; k++)
                m[i][j]= m[i][j]+(M[i][k]*m[k][j]);
        }
    }
}


int main()
{
    double M[10][10],n[10][10],m[10][10],f,c,f2,c2;
    cout<<"matriz 1 \n"<<"fila? ";cin>>f;
    cout<<"colmna? ";cin>>c;
    ingresar(M,f,c);
    cout<<"matriz 2 \n"<<"fila? ";cin>>f2;
    cout<<"colmna? ";cin>>c2;
    ingresar(n,f2,c2);
    mostrar(M,f,c);
    cout<<endl;
    mostrar(n,f2,c2);
    cout<<endl;
    mulmatri(M,f,c,n,f2,c2,m);
    cout<<"matriz multiplicada \n";
    mostrar(m,f2,c);
    return 0;
}

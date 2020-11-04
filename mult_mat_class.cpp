#include "matrices.h"
#include <iostream>
using namespace std;


////////////////////////////////////////////
int main()
{
    int N1, M1;
    int N2, M2;

    cout << "Filas Matriz 1? " ;
    cin >> N1;
    cout << endl;
    cout << "Columnas Matriz 1? " ;
    cin >> M1;
    cout << endl;
    matrices <float> matriz1(N1,M1);
    matriz1.recibeEntradas();
    matriz1.imprimir();

    cout << "Filas Matriz 2? " ;
    cin >> N2;
    cout << endl;
    cout << "Columnas Matriz 2? " ;
    cin >> M2;
    cout << endl;
    matrices <float> matriz2(N2,M2);
    matriz2.recibeEntradas( );
    matriz2.imprimir();

    matrices <float> prodMulMat(N1,M2);
    matrices <float> traspuestaMatriz2(M2,N2);

    prodMulMat.multMat(matriz1 , matriz2);
    cout<<"Primera versión del producto";
    prodMulMat.imprimir();

    cout<<endl<<"matrices usadas en el producto";
    matriz1.imprimir();
    matriz2.imprimir();


    matrices<float > *prodPOR;
    matrices<float > *traspuestaPROD;

    prodPOR = matriz1 * matriz2;
    cout<<"Segunda versión del producto";
    prodPOR->imprimir();

    traspuestaMatriz2.trasponerV1(matriz2);
    cout<<"traspuesta de la segunda matriz trasponer.v1";
    traspuestaMatriz2.imprimir();
    cout<<"traspuesta del producto en tercera version";
    traspuestaPROD = prodPOR->trasponerV3();
    traspuestaPROD->imprimir();
    return 0;
}


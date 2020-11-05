#ifndef MATRICES_H
#define MATRICES_H
#include <iostream>
using namespace std;

template <class T>  class Matrices
{
public:
    Matrices(int filas, int columnas);
    Matrices(Matrices &matrizACopiar);

    ~matrices();
    
    void rellenar( );
    void imprimir( );

    Matrices * operator * (matrices &mult);
    Matrices * operator + (matrices &sum);
    Matrices * operator - (matrices &sum);
    Matrices * operator * (float k);

    void trasponerV1(matrices &m1);
    Matrices  * trasponerV2();
private:
    T *matriz_;
    int filas_;
    int columnas_;
};



template <class T>  matrices <T>:: matrices( int filas1, int columnas1) {
   
}


template <class T>  matrices <T>:: ~matrices( ) {
  
}

template <class T> void matrices <T>:: rellenar( ) {
    .........
        {
            cout << "A[" << i + 1 << "][" << j + 1 <<"]= ";
            cin >> *(matriz_+columnas_*i+j);
        }
}

template <class T>  void matrices <T>:: imprimir( ) {
   
    .....
    {
        .....
        cout << *(matriz_ + columnas_*i+  j) <<" \t";
        cout << endl;
    }
    cout << endl;
}


template <class T>  matrices<T> *    matrices<T>::operator *( matrices &m2){
    matrices * ptrMatriz=new matrices(filas_, m2.columnas_);

    for (int i=0; i <filas_*columnas_; i++)
        *(ptrMatriz->matriz_ + i)=0;

    for ( int i=0; i < filas_; i++ )
        for(int k=0; k< m2.columnas_; k++)
            for( int j= 0; j < columnas_; j++)
                *(ptrMatriz->matriz_ + i*ptrMatriz->columnas_ +k)+= *(matriz_+i*columnas_+j) *  *(m2.matriz_+j*m2.columnas_+k);
    return ptrMatriz;
}


template <class T>void  matrices <T>:: trasponerV1(matrices &m1 )
{
    .....
    .....
    ....
    .....
    
            *(matriz_ + i*columnas_+j)= *(m1.matriz_ + j*filas_+i);
}

template <class T> matrices<T> *  matrices<T>::trasponerV2() {
   ....
    ....
    ....
    
            *(ptrMatriz->matriz_ + i*columnas_+j)= *(this->matriz_+j*filas_+i);
    .....
}

#endif // MATRICES_H

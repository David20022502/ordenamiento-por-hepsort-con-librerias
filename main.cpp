#include <iostream>
#include "ordenamiento.h"
using namespace std;
int main()
{
  int tam, arr[100];
  cout << "ingrese el tamaño del arreglo: ";
  cin >> tam;
  ingresar(arr,tam);
  ordenar(arr,tam);
  imprimir(arr,tam);
}

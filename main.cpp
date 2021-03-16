#include <iostream>
#include "heapsort.h"

using namespace std;

void heapsort(int b[],int n);

int main() 
{
  int A[100],n;
  cout<<"Ingresa la cantidad de elementos:";
  cin>>n;
  for(int i=1;i<=n;i++)
  cin>>A[i];

  heapsort(A,n);
  cout<<"El orden es:";
  for (int i=1;i<=n;i++)
  cout<<"|"<<A[i]<<"|";
  return 0;
}


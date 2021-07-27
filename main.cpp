#include <iostream>
using namespace std;

const int QTDE_NOTAS = 5;

void leNotas (float notas[QTDE_NOTAS]) {
  for (int i = 0; i < QTDE_NOTAS; i++) {
     cin >> notas[i];
       if (notas[i]<0 ||notas[i]>10)
       i--;
  } 
}

float calculaMedia (float notas[QTDE_NOTAS]) {
  float menor, soma, maior;
  soma  = 0;
  menor = notas[0];
  maior = notas[0];
  soma  = soma + notas[0];
  for (int i = 1; i < QTDE_NOTAS; i++) {
     if (notas[i] < menor)
       menor = notas [i];
     if (notas[i] > maior)
       maior = notas [i];
       soma = soma + notas [i];
  }
     soma = soma - menor;
     soma = soma - maior;
  return soma / (QTDE_NOTAS-2);
}

int main() {
  float notas [QTDE_NOTAS];
  leNotas (notas);
  cout << "Media = " << calculaMedia (notas) << endl;
  return 0;
}

//
//  main.cpp
//  Caluco PI
//
//  Created by Jonas Cesconetto on 02/11/20.
//

#include <iostream>
#include <locale>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Portuguese");

    int i = 1;
    float  n = 1.0, pi = 0.0;

    while(i <= 700){
        i = i + 1;
        if(i%2 != 0){
            pi = pi + (4/n);
        }else{
            pi = pi - (4/n);

        }

        n = n+2.0;
    }

    cout << "Valor de PI: " << abs(pi) << endl;
    
//    double pi,soma;
//    int i,j;
//
//    printf("Digite o numero de iteracoes para calcular o pi: ");
//    scanf("%d", &j);
//
//    soma = 0;
//    for (i = 0; i < j; i++) {
//      // Alternativa:
//      // soma = soma + pow(-1,i)/(2*i + 1);
//
//      if (i % 2 == 0) {
//        soma = soma + 1.0/(2*i + 1);
//      }
//      else {
//        soma = soma - 1.0/(2*i + 1);
//      }
//      printf("%.15lf\n", 4*soma);
//    }
//
//    pi = 4*soma;
//    printf("O valor aproximado de pi eh 5 (ou %.15lf)\n", pi);
    
    return(0);
}

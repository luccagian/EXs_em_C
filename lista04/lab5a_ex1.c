/*
Escreva uma função em linguagem C chamada fatorial que receba 
um valor inteiro 𝑛 ≥ 0 digitado pelo usuário e devolva o fatorial de 𝑛. Usamos a 
notação 𝑛! para denotar o fatorial de 𝑛. Ou seja, 𝑛! = 𝑛 ∗ (𝑛 − 1) ∗ (𝑛 − 2) ∗ … ∗
2 ∗ 1
Algumas observações: 
1) A função acima deve ser iterativa 
2) Após a execução da função fatorial, deve-se perguntar ao usuário do 
programa se ele deseja continuar ou não. Se o usuário desejar continuar 
então, neste caso, o programa deve solicitar que o usuário digite um novo 
valor inteiro para o cálculo do fatorial. 
3) O programa deve realizar a validação dos dados de entrada numéricos. Por 
exemplo. O programa não deve aceitar valores de entrada (digitados pelo 
usuário) negativos. Neste caso, deve-se exibir uma mensagem de aviso ao 
usuário e permitir que ele tente novamente. O usuário possui 3 tentativas 
consecutivas para entrar com um dado válido. Se após 3 tentativas 
consecutivas o usuário não tenha digitado um dado de entrada válido (ou 
seja, um número ≥ 0), então neste caso o programa deve exibir a mensagem 
ao usuário “Número de tentativas excedeu o limite! Tente mais tarde” e 
encerrar o programa. 
4) Você deve incluir também em seu programa o protótipo da função fatorial
*/

#include <stdio.h>

int fatorial(int n){

    int fat=1;

    for(int i=1; i<=n; i++){

        fat *= i;
    }

    return fat;
}

int main(){

    int n, fat;
    int x;
    char opc;

    do{
        printf("Insira um numero inteiro maior que 0: ");
        scanf("%d", &n);

        if (n>0){

            fat = fatorial(n);
            printf("Fatorial de %d eh: %d\n",n,fat);
        } else {

            x++;
            printf("Digite um numero valido! %d/3\n\n",x);

        }

        if (x == 3){

            printf("Numero de tentativas excedeu o limite! Tente mais tarde\n\n");
            return 1;
        }

        printf("Deseja continuar? s/n\n");
        scanf("%s", &opc);

    } while(opc == 's');

    if (opc == 'n'){

        printf("O programa se encerrou!\n");
        return 1;
    }

}

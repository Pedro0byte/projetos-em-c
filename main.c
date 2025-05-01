#include <stdio.h>
#include <string.h>


int main () {
    
    float primeiroNumero;
    float segundoNumero;
    double resultado;
    char operacao;

    primeiroNumero = 0;
    segundoNumero = 0;
    resultado = 0;

    printf (" +******************************+\n");
    printf (" |Sejan bem vindo a calculadora |\n");
    printf (" +******************************+\n\n");

    // pede para o usuario escolher uma operação matematica
    printf("Digite uma operação(+,/,- e *): ");
    scanf("%C", &operacao);

    //pergunda para o usuario um primeiro numero e o atribui a variavel primeiroNumero
    printf("Porfavor digite o primeiro valor: ");
    scanf("%f", &primeiroNumero);
    
    //pergunta ao usuario um segundo numero e o atribui a variavel segundoNUmero
    printf ("Digite um segundo numero: ");
    scanf ("%f", &segundoNumero);
    
    // define o resultado baseado em qual operação matematica foi escolhida
    switch (operacao){
        case '+': 

             resultado = primeiroNumero + segundoNumero;
             printf("O resultado da soma é: %1.2f\n", resultado);

           
             break;
        
        case '-':
             resultado = primeiroNumero - segundoNumero;
             printf("O resultado da subtração é+: %1.2f\n", resultado);
 
             break;

        case '*':
             resultado = primeiroNumero * segundoNumero;
             printf("O resultado da multiplicação é: %1.2f\n", resultado);
             break;

        case '/':
             if (primeiroNumero != 0) {
             resultado = primeiroNumero / segundoNumero;
             printf("O resultado da divisão é: %1.2f\n", resultado);
            }
            
             else {printf("Erro não é possivel dividir por zero\n");
            }


            if (segundoNumero != 0) {
                printf("o resultado da divisão é: %1.2f\n" , resultado);
            }

            else {printf("Erro não é possivel dividir por zero\n");
            }
             break;
        
        default:

             printf("Operação invalida\n");
               

    }
    
    
    return 0;
}  
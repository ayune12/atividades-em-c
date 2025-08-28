#include <stdio.h>

int main() {
    
    int matriz [5][4] = {
        {7, 8, 9, 4},
        {5, 10, 1, 0},
        {4, 10, 10, 10},
        {10, 1, 6, 0},
        {2, 8, 4, 0}
    };
    
       int soma = 0;
       
    printf("Imprimindo os elementos da matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
        printf("%d ", matriz[i][j]);
        
    
        }
        printf("\n");
    }
     return 0;
}

1)

#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma de %d e %d eh: %d\n", num1, num2, soma);

    return 0;
}


2)

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O numero %d eh PAR.\n", num);
    } else {
        printf("O numero %d eh IMPAR.\n", num);
    }

    return 0;
}


3)

#include <stdio.h>

int main() {
    int a, fat = 1, i;

    printf("Fatorial de: ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++) {
        fat = fat * i;
    }

    printf("Fatorial de %d eh: %d\n", a, fat);

    return 0;
}


4) 

#include <stdio.h>

int main() {
    int i, num, soma = 0;
    float media;

    printf("Digite 6 numeros inteiros:\n");

    for (i = 1; i <= 6; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &num);
        soma += num; 
    }

    media = soma / 6.0;

    printf("A media dos numeros digitados é: %.2f\n", media);

    return 0;
}


5) 

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}


6)

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O numero deve ser positivo.\n");
        return 0;
    }

    while (num % 2 == 0) {
        num = num / 2;
    }

    if (num == 1) {
        printf("É uma potência de 2.\n");
    } else {
        printf("Não é uma potência de 2.\n");
    }

    return 0;
}

7)

#include <stdio.h>

int main() {
    int n1, n2, n3, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    maior = n1;

    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}

8)

#include <stdio.h>
#include <math.h>  

int main() {
    double num, raiz;

    printf("Digite um número: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Não é possível calcular a raiz quadrada de número negativo.\n");
    } else {
        raiz = sqrt(num);  
        printf("A raiz quadrada de %.2lf é: %.2lf\n", num, raiz);
    }

    return 0;
}

9)

#include <stdio.h>

int main() {
    int num, n, soma = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    n = num; 

    if (num < 0) {
        n = -n;
    }

    while (n > 0) {
        digito = n % 10;       
        soma += digito * digito;
        n = n / 10;            
    }

    printf("A soma dos dígitos ao quadrado de %d é: %d\n", num, soma);

    return 0;
}

10)

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os três lados do triângulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("O triangulo é equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("As medidas fornecidas não formam um triângulo.\n");
    }

    return 0;
}


11) 

#include <stdio.h>

int main() {
    int numero, a = 0, b = 1, proximo;

    printf("Digite um número para a sequência de Fibonacci: ");
    scanf("%d", &numero);

    printf("Sequência de Fibonacci %d:\n", numero);

    while (a <= numero) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}


12)

#include <stdio.h>

int main() {
    int numeros[5];
    int i, j, temp;

    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Números em ordem crescente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}


13)

#include <stdio.h>

int main() {
    int n, i;
    float nota, peso, somaNotas = 0, somaPesos = 0, media;

    printf("Quantas notas deseja inserir? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        printf("Digite o peso da nota %d: ", i);
        scanf("%f", &peso);

        somaNotas += nota * peso; 
        somaPesos += peso;        
    }

    if (somaPesos == 0) {
        printf("Recuperação te aguarda.\n");
    } else {
        media = somaNotas / somaPesos;
        printf("A média ponderada das notas é: %.2f\n", media);
    }

    return 0;
}


15)

#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Informe um número: ");
    scanf("%d", &a);
    printf("Informe outro número: ");
    scanf("%d", &b);

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("O MDC dos números é: %d\n", a);
    return 0;
}


16) 

#include <stdio.h>

int main() {
    int n, i, primo = 1;

    printf("Informe um número: ");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("%d é um número primo.\n", n);
    else
        printf("%d não é um número primo.\n", n);

    return 0;
}

17)

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Digite sua primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite sua segunda nota:\n");
    scanf("%f", &n2);
    printf("Digite sua terceira nota:\n");
    scanf("%f", &n3);
    printf("Digite sua última nota:\n");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("A media das suas notas é: %.2f\n", media);

    return 0;
}


18)

#include <stdio.h>

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n > 0 && (n & (n - 1)) == 0)
        printf("%d é uma potência de 2.\n", n);
    else
        printf("%d não é uma potência de 2.\n", n);

    return 0;
}


19)

#include <stdio.h>

int main() {
    int numeros[5], i, j, maior;

    printf("Informe os cinco números:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                maior = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = maior;
            }
        }
    }

    printf("Aqui estão os números em ordem crescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}


20)

#include <stdio.h>

long fatorial(int n) {
    if (n <= 1)  
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Fatorial nao esta definido para números negativos.\n");
    else
        printf("O fatorial de %d eh: %ld\n", num, fatorial(num));

    return 0;
}


23)

#include <stdio.h>

int main() {
    float metros, dm, cm, mm;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    dm = metros * 10;    
    cm = metros * 100;   
    mm = metros * 1000;  

    printf("\n%.2f metros equivalem a:\n", metros);
    printf("%.2f decimetros\n", dm);
    printf("%.2f centimetros\n", cm);
    printf("%.2f milimetros\n", mm);

    return 0;
}


24) 

#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    printf("A tabuada do %d é:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}

25) 

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenheit equivalem a %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}


26)

#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    printf("\nResultados:\n");
    printf("Soma dos números: %.2f\n", num1 + num2);
    printf("Produto do primeiro pelo quadrado do segundo: %.2f\n", num1 * (num2 * num2));
    printf("Quadrado do primeiro número: %.2f\n", num1 * num1);
    printf("Raiz quadrada da soma dos quadrados: %.2f\n", sqrt((num1 * num1) + (num2 * num2)));
    printf("Seno da diferença do primeiro pelo segundo: %.2f\n", sin(num1 - num2));
    printf("Módulo do primeiro número: %.2f\n", fabs(num1));

    return 0;
}


27)

#include <stdio.h>

int main() {
    float preco;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    if (preco < 100) {
        preco *= 1.10;
    } else {
        preco *= 1.20;
    }

    printf("O novo preço do produto eh: %.2f\n", preco);

    return 0;
}


28)

#include <stdio.h>

int main() {
    float total, valorFinal, parcela;
    int opcao, qtdParcelas;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &total);

    printf("\nEscolha a forma de pagamento:\n");
    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Em 2x sem juros\n");
    printf("3 - De 3 a 10x com 3%% de juros ao mes (apenas para compras acima de R$100)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valorFinal = total * 0.90;
        printf("\nValor a vista com desconto: R$ %.2f\n", valorFinal);
    } 
    else if (opcao == 2) {
        parcela = total / 2;
        printf("\n2x de R$ %.2f (sem juros). Valor total: R$ %.2f\n", parcela, total);
    } 
    else if (opcao == 3) {
        if (total > 100) {
            printf("Digite a quantidade de parcelas (3 a 10): ");
            scanf("%d", &qtdParcelas);

            if (qtdParcelas >= 3 && qtdParcelas <= 10) {
                valorFinal = total + (total * 0.03 * qtdParcelas); 
                parcela = valorFinal / qtdParcelas;
                printf("\n%d parcelas de R$ %.2f. Valor total: R$ %.2f\n", qtdParcelas, parcela, valorFinal);
            } else {
                printf("\nQuantidade de parcelas invalida.\n");
            }
        } else {
            printf("\nParcelamento com juros disponível apenas para compras acima de R$100.\n");
        }
    } 
    else {
        printf("\nOpcao invalida!\n");
    }

    return 0;
}


29)

#include <stdio.h>

int main() {
    int i;
    float num, maior, menor;

    printf("Digite o 1º valor: ");
    scanf("%f", &num);

    maior = num;
    menor = num;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%f", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}

30)

#include <stdio.h>

int main() {
    int i, j;
    float numeros[10], temp;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (numeros[i] > numeros[j]) {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("\nValores em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    return 0;
}


31)

#include <stdio.h>

float calcularMedia(float notas[5]) {
    float soma = 0;
    int i;
    for (i = 0; i < 5; i++) {
        soma += notas[i];
    }
    return soma / 5;
}

int main() {
    float notas[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\nA media do aluno eh: %.2f\n", calcularMedia(notas));

    return 0;
}


32)

#include <stdio.h>

int main() {
    int n;

    printf("Quantos valores deseja digitar? ");
    scanf("%d", &n);

    double valores[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
    }

    printf("\nValores digitados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", valores[i]);
    }
    printf("\n");

    return 0;
}

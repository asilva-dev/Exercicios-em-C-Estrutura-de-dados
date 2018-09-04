#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//declarando variaveis que serão usadas no programa
float INSS, IRPF, deducoes, salarioBruto, salarioFamilia, vantagens;

//declarando funcao que faz o calculo de vantagens com parametros que serão usados pelo prgm
void calculoVantagens(float nHoras, float salarioHora, int nFilhos, float valorPorFilho);

//declarando funcao que faz o calculo que gera deducoes com parametros que serão usados pelo prgm
void calculoDeducoes(float salarioBruto);

int main(){
    setlocale(LC_ALL, "Portuguese");
    //chamando parametros da funcao calculo de Vantagens
    float salarioHora, nHoras, valorPorFilho;
    int nFilhos;

    //pedindo ao usuario insecao de dados
    printf("Informe o salario ganho por hora: ");
    scanf("%f", &salarioHora);
    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &nHoras);
    printf("Informe quantos filhos tem: ");
    scanf("%d", &nFilhos);
    printf("Informe o valor por filho: ");
    scanf("%f", &valorPorFilho);

    //Chamando as funcoes
    calculoVantagens(nHoras, salarioHora, nFilhos, valorPorFilho);
    calculoDeducoes(salarioBruto);

    //exibindo resultado após os calculos feitos
    printf("\n\nO salário bruto é: %.2f\\n", salarioBruto);
    printf("\n\nO salário familia é: %.2f\n", salarioFamilia);
    printf("\n\nO salário total (Vantagens) é: %.2f\n", vantagens);
    printf("\n\n");
    printf("\nINSS é: %.2f", INSS);
    printf("\nIRPF é: %.2f", IRPF);
    printf("\nO total de deducoes é: %.2f", deducoes);
    printf("\n\n");

    //parando o programa
    system("pause");

    }

    void calculoVantagens(float nHoras, float salarioHora, int nFilhos, float valorPorFilho){
        salarioBruto = nHoras * salarioHora;
        salarioFamilia = nFilhos * valorPorFilho;
        vantagens = salarioBruto + salarioFamilia;
    }

    void calculoDeducoes(float salarioFamilia){
        INSS = salarioBruto * 0.08;
        IRPF = salarioBruto * 0.27;
        deducoes = INSS + IRPF;
    }





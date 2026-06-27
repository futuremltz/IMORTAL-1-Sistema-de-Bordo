#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcular_media(double a,double b,double c) { //função para calcular a média dos três números
  double media = (a + b + c)/3;
  printf("A média é: %.2lf\n", media);
  return media;
}

double maximo(double a, double b, double c) { //função para calcular o máximo dos três números
  double max, maxc;
  max = (a+b+fabs(a-b))/2;
  maxc = (max+c+fabs(max-c))/2;
  printf("O máximo é: %.2lf\n", maxc);
  return maxc;
}

double minimo(double a, double b, double c) { //função para calcular o mínimo dos três números
  double min, minc;
  min = (a+b-fabs(a-b))/2;
  minc = (min+c-fabs(min-c))/2;
  printf("O mínimo é: %.2lf\n", minc);
  return minc;
}

void desvio(double a, double b, double c){//função para calcular o desvio dos três números em relação à média
  double media = (a + b + c) / 3;//calcula a média dos três números
  double desvio1 = a - media;
  double desvio2 = b - media;
  double desvio3 = c - media;
  printf("O desvio de %.2lf é: %.2lf\n", a, desvio1);
  printf("O desvio de %.2lf é: %.2lf\n", b, desvio2);
  printf("O desvio de %.2lf é: %.2lf\n", c, desvio3);
}

void verificar_faixa(double a, double b, double c, double min_aceito, double max_aceito){ //função para verificar se os números estão dentro da faixa de valores aceitáveis


  if (a < min_aceito) { //verifica se o número a está abaixo do valor mínimo aceito
    printf("A leitura 1 (%.2lf) está abaixo do valor mínimo aceito.\n", a);
  } else if (a > max_aceito) {
    printf("A leitura 1 (%.2lf) está acima do limite.\n", a);
  } else {
    printf("A leitura 1 (%.2lf) está ok.\n", a);
  }
  if (b < min_aceito) {
    printf("A leitura 2 (%.2lf) está abaixo do valor mínimo aceito.\n", b);
  } else if (b > max_aceito) {
    printf("A leitura 2 (%.2lf) está acima do limite.\n", b);
  } else {
    printf("A leitura 2 (%.2lf) está ok.\n", b);
  }
  if (c < min_aceito) {
    printf("A leitura 3 (%.2lf) está abaixo do valor mínimo aceito.\n", c);
  } else if (c > max_aceito) {
    printf("A leitura 3 (%.2lf) está acima do limite.\n", c);
  } else {
    printf("A leitura 3 (%.2lf) está ok.\n", c);
  }
}

void barra_grafica(double media){//função para imprimir a barra gráfica com base na média calculada
  int barra = (int)media; 
    if (barra >= 20) {// Se a média for maior que 20, define o limite como 20
        barra = 20;
    }

    printf("Barra gráfica (%.2lf):\n ", media);
    for (int i = 0; i < barra; i++) {
        printf("*");
    }
    printf("\n");
}



void relatorio(double a, double b, double c) { //função para gerar um relatório completo com todas as funcionalidades do programa

  double min_rel, max_rel; // Variáveis para armazenar os valores mínimo e máximo que o usuário deseja para o relatório

  printf("\n--- CONFIGURAÇÃO DO RELATÓRIO ---\n");// Título da seção de configuração do relatório
  printf("Digite o valor mínimo aceito: ");
  scanf("%lf", &min_rel);
  printf("Digite o valor máximo aceito: ");
  scanf("%lf", &max_rel);

  printf("\n\033[32m--RELATÓRIO COMPLETO--\033[0m\n"); 

 
  calcular_media(a, b, c);
  maximo(a, b, c);
  minimo(a, b, c);
  desvio(a, b, c);
  
  
  verificar_faixa(a, b, c, min_rel, max_rel); 

  double media = (a + b + c) / 3;
  barra_grafica(media);
}


int main() {//função principal do programa     //Main finalizado
  int escolha, dupla;
  double a, b, c, min_aceito, max_aceito;
  char continuar;

  int programa_rodando = 1;//variável para controlar o loop principal do programa

  printf("\033[34m--- IMORTAL-1 - SISTEMA DE BORDO ---\033[0m\n"); //título do programa

  while(programa_rodando) { //loop principal do programa
    printf("\nDigite a leitura 1: "); //comando para o usuário digitar os números
    scanf("%lf", &a);
    printf("Digite a leitura 2: "); //comando para o usuário digitar os números
    scanf("%lf", &b);
    printf("Digite a leitura 3: "); //comando para o usuário digitar os números
    scanf("%lf", &c);

    int menu = 1; //variável para controlar o loop do menu de opções
    while(menu) { //loop do menu de opções

      printf("\n\033[34m--MENU--\033[0m\n"); // menu de opções para o usuário escolher a funcionalidade desejada
      printf("1 - Média \n");
      printf("2 - Máx/Mín\n");
      printf("3 - Desvios\n");
      printf("4 - Verificação de faixa\n");
      printf("5 - Barra gráfica\n");
      printf("6 - Relatório\n");
      printf("0 - Sair\n");

      printf("\nEscolha uma opção: "); //comando para o usuário escolher a opção desejada
      scanf(" %d", &escolha);

      if (escolha == 0){
        printf("Saindo do programa...\n");
        programa_rodando = 0; // Encerra o programa principal
        break;// Sai do loop do menu de opções e do loop principal para encerrar o programa
      }else if (escolha == 1){
        printf("\n\033[32m--MÉDIA--\033[0m\n"); //título da funcionalidade de média
        calcular_media(a, b, c); //chama a função para calcular a média dos três números
      }else if (escolha == 2){
        printf("\n\033[32m--MÁXIMO E MÍNIMO--\033[0m\n"); //título da funcionalidade de máximo e mínimo
        maximo(a, b, c); //chama a função para calcular o máximo dos três números
        minimo(a, b, c); //chama a função para calcular o mínimo dos três números
      }else if (escolha == 3){

        printf("\n\033[32m--DESVIO--\033[0m\n"); //título da funcionalidade de desvio
        desvio(a, b, c); //chama a função para calcular o desvio dos três números em relação à média
      }else if(escolha == 4){  //opção para o usuário escolher a funcionalidade de verificação de faixa
        printf("Digite o valor mínimo: ");
        scanf("%lf", &min_aceito);
        printf("Digite o valor máximo: ");
        scanf("%lf", &max_aceito);

        printf("\n\033[32m--VERIFICAÇÃO DE FAIXA--\033[0m\n"); //título da funcionalidade de verificação de faixa
        verificar_faixa(a, b, c, min_aceito, max_aceito); //chama a função para verificar se os números estão dentro da faixa de valores aceitáveis
    
      }else if(escolha == 5){

        printf("\n\033[32m--BARRA GRÁFICA--\033[0m\n"); //título da funcionalidade de barra gráfica
        double media = calcular_media(a, b, c); //chama a função para calcular a média dos três números e armazena o resultado em uma variável
        barra_grafica(media); //chama a função para imprimir a barra gráfica com base na média calculada

      }else if(escolha == 6){
        relatorio(a, b, c);

      }else{
        printf("Opção inválida. Tente novamente.\n"); //mensagem de erro para opção inválida
      }

      printf("\nDeseja realizar outra operação? (s/n): ");//comando para o usuário escolher se deseja realizar outra operação
      scanf(" %c", &continuar);

      if (continuar == 'n' || continuar == 'N') {
        break; //sai do loop do menu de opções e volta para o início do loop principal para digitar novos números
      }
    }
    if (programa_rodando == 1) { //verifica se o programa ainda está rodando para perguntar se o usuário deseja digitar novos números ou sair
            
            int resposta_valida = 0;
            while (resposta_valida == 0) { // Garante que o usuário vai digitar 1 ou 2
                printf("\nDeseja digitar novos números ou sair? (1/2): ");
                scanf("%d", &dupla);

                if (dupla == 1) {
                    resposta_valida = 1; // O loop principal recomeça pedindo novos números!
                } else if (dupla == 2) {
                    printf("\nSaindo do programa. Até mais!\n");
                    resposta_valida = 1;
                    programa_rodando = 0; // Encerra o programa principal
                } else {
                    printf("\nOpção inválida. Tente novamente.\n");
                }
            }
        }
  }
  return 0;
}
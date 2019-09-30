#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(void){
	// Exibir Menu
	setlocale(LC_ALL, "Portuguese");
	printf("SEJA BEM - VINDO AO MENU INTERATIVO \n\n");
	printf("[1] - Exercício 1. \n");
	printf("[2] - Exercício 2. \n");
	printf("[3] - Exercício 3. \n");
	printf("[4] - Exercício 4. \n");
	printf("[5] - Exercício 5. \n");
	printf("[6] - Exercício 6. \n");
	printf("[7] - Exercício 7. \n");
	printf("[8] - Exercício 8. \n");
	printf("[9] - Exercício 9. \n");
	printf("[0] - Cancelar programa. \n\n");
	
	// Colher nº do usuário
	int escolha;
	
	printf("Escolha uma opção do menu: ");
	scanf("%d", &escolha);
	
	// Condicionais
	while(escolha) {
		if(escolha == 1){
			int num1;
			
			printf("\nIMPAR ou PAR? Eis a questão.\n");
			printf("\nInforme o número: ");
			scanf ("%i",&num1);
				if (num1 % 2 == 0){
			    	printf ("\nO número %i é PAR\n",num1);
				}else {
			    	printf("\nO número %i é IMPAR\n",num1);
				}
				return 0;
		}	else if	(escolha == 2){
			int x;
			
			// Elevado
			float y, potencia;
			
			printf("\nNúmero Inteiro: ");
			scanf("%d", &x);
		
			printf("\nNúmero ao qual ele sera elevado: ");
			scanf("%f", &y);
				
			potencia = pow(x,y);
				
			printf("\nO numero em notação cientifica fica assim %.1e",potencia);
			
			return 0;
		}	else if (escolha == 3){
			int x;
	
			// Raiz
			float y, raiz;
			
			printf("\nNúmero Inteiro: ");
			scanf("%d", &x);
		
			printf("\nPotência da Raiz: ");
			scanf("%f", &y);
			
			raiz = pow(x, 1.0/y);
				
			printf("\nO numero em notação cientifica fica assim %.5e",raiz);
				return 0;
		}	else if (escolha == 4){
			int ano, numCenter;
			bool bissexto;
	
			printf("Digite o ano: ");
		 
			scanf("%d", &ano);
			 
				if (ano % 400 == 0) {
					bissexto = true;		
				}
				else if ((ano % 4 == 0) && (ano % 100 != 0)) {
					bissexto = true;		
				}
				else {
					bissexto = false;
				}
			 
				if (bissexto == true) {
					printf("O ano é bissexto!");
				} else {
					printf("O ano não é bissexto!");
				}
			
			return 0;
			
		}	else if (escolha == 5){
			
			int nota1, nota2, nota3, media;
				
			printf("\nA 1ª nota (Peso 1): ");
		 	scanf("%d", &nota1);
		 	
		 	printf("\nA 2ª nota (Peso 1): ");
		 	scanf("%d", &nota2);
		 	
		 	printf("\nA 3ª nota (Peso 2): ");
			scanf("%d", &nota3);
			
			nota1 = nota1 * 10;
			nota2 = nota2 * 10;
			nota3 = nota3 * 20;
		
			media = (nota1 + nota2 + nota3) / 40;
			
			printf("\nA média do aluno é = %d\n\n", media);
			
				if( media >= 60){
					printf("Aluno Aprovado!!!");
				}else {
					printf("Aluno Reprovado.");
				}
			
			return 0;
			
		}	else if (escolha == 6){
			int nota1, nota2, media;
			
			printf("\nA 1ª nota: ");
		 	scanf("%d", &nota1);
			 	
			 	if(nota1 >= 0 && nota1 <= 10){
				 }else {
				 	printf("\nNota Inválida\n");
				 	return 0;	
				 }
		 	
		 	printf("\nA 2ª nota: ");
		 	scanf("%d", &nota2);
		 	
			 	if(nota2 >= 0 && nota2 <= 10){
				 }else {
				 	printf("\nNota Inválida\n");
				 	return 0; 	
				 }
		
			media = (nota1 + nota2) / 2;
			
			printf("\nA média do aluno é = %d\n\n", media);
			
				if( media >= 6){
					printf("Aluno Aprovado!!!");
				}else {
					printf("Aluno Reprovado.");
				}
			
			return 0;
			
		}	else if (escolha == 7){
			int fat, n;
			
			printf("Digite um número, e o programa retornará o fatorial dele: ");
			scanf("%d", &n) ;
			
			  for(fat = 1; n > 1; n = n - 1)
			  {
			      fat = fat * n;
			  }
			
			  printf("\n%d", fat);
			  
			return 0;
			
		}	else if (escolha == 8){
			 int num, i, resultado = 0;
			 
			 printf("Digite um número: ");
			 scanf("%d", &num);
			 
			 for (i = 2; i <= num / 2; i++) {
			    if (num % i == 0) {
			       resultado++;
			       break;
			    }
			 }
			 
			 if (resultado == 0)
			    printf("%d é um número primo\n", num);
			 else
			    printf("%d não é um número primo\n", num);
			return 0;
		}	else if (escolha == 9){
			printf("Este programa lhe pede N para que esse número seja aplicado a sequência de fibonacci");
			long int x, y, result, entrada;
			x = 0;
			y = 1;
			// result = x + y  
			// x = y;
			// y = result
			printf("\nDigite o número: ");
			scanf("%d", &entrada);
			for(int i=0; i<=entrada; i++){
				result = x + y;
				x = y;
				y = result;
				printf(" %d ", x);
			}
			return 0;
						
		}	else if (escolha == 0){
			printf("\nPrograma encerrado com sucesso!\n");
				getch();
				return 0;
	 	} else if (escolha >= 10 || escolha <= 0){
	 		printf("\nOpção inválida. Digite um número correspondente ao menu: \n");
	 			printf("[1] - Exibir mensagem de ânimo. \n");
				printf("[2] - Exibir mensagem de tristeza. \n");
				printf("[3] - Exibir mensagem de Albert Eisten. \n");
				printf("[4] - Exibir mensagem de Hillary Clinton. \n");
				printf("[5] - Exibir mensagem de Enoque. \n");
				printf("[6] - Exibir a data de aniverário de Derek. \n");
				printf("[7] - Exibir nome da pessoa mais feia do mundo. \n");
				printf("[8] - Exibir nome da pessoa mais linda do mundo. \n");
				printf("[9] - Exibir qualquer coisa (O programador já está sem ideia). \n");
				printf("[0] - Cancelar programa. \n\n");
					printf("Escolha uma opção do menu: ");
					scanf("%d", &escolha);
		 }
	}	
 
	return 0;
}

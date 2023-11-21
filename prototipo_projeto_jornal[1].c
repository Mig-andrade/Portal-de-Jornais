#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdint.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void exibirMateria (char materia[]) {
	printf("Matéria escolhida: %s\n", materia);
}
typedef struct {
	char nome[30];
	char email[40];
} Pessoa;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	//       menu/20dia/4jornal/materia

	FILE *arquivo = fopen("arquivo.txt", "wt");
	
	if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
	}
	Pessoa usuario;
	char str [20], str2 [30];

	
	int dia, jornal, materia, loop;
	system("color F1");
	
	printf("_______________\n");
	printf("|Login:        |\n");
	printf("|______________|\n\n");
	printf("Digite seu nome: ");
	scanf("%s", usuario.nome);
	strcpy(str, "Nome de usuário: ");
	fputs(str, arquivo);
	fputs(usuario.nome, arquivo);
	fputs("\n", arquivo);
	printf("Digite seu email: ");
	scanf("%s", usuario.email);
	strcpy(str2, "Email do usuário: ");
	fputs(str2, arquivo);
	fputs(usuario.email, arquivo);
		system("cls");
		
		do{
		system("cls");
		printf("___________________________________________________\n");
		printf("|Bem vindo a nossa coleção de jornais.             |\n");
		printf("|__________________________________________________|\n");
		printf("|22 de Outubro:                                    |\n");
		printf("|23 de Outubro:                                    |\n");
		printf("|24 de Outubro:                                    |\n");
		printf("|25 de Outubro:                                    |\n");
		printf("|26 de Outubro:                                    |\n");
		printf("|27 de Outubro:                                    |\n");
		printf("|28 de Outubro:                                    |\n");
		printf("|29 de Outubro:                                    |\n");
		printf("|30 de Outubro:                                    |\n");
		printf("|31 de Outubro:                                    |\n");
		printf("|1 de Novembro:                                    |\n");
		printf("|2 de Novembro:                                    |\n");
		printf("|3 de Novembro:                                    |\n");
		printf("|4 de Novembro:                                    |\n");
		printf("|5 de Novembro:                                    |\n");
		printf("|6 de Novembro:                                    |\n");
		printf("|7 de Novembro                                     |\n");
		printf("|8 de Novembro:                                    |\n");
		printf("|9 de Novembro:                                    |\n");
		printf("|10 de Novembro:                                   |\n");
		printf("|                                                  |\n");
		printf("|0. Sair:                                          |\n");
		printf("|--------------------------------------------------|\n");
		printf("|Digite o dia em que o jornal desejado se encontra:|\n");
		printf("|__________________________________________________|\n");
		scanf("%d", &dia);
	
	switch(dia){
		case 0:
			system ("cls");
			return 0;
			break;
		case 22://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 23://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 24://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 25://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 26://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 27://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 28://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 29://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 30://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 31://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 1://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 2://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 3://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 4://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 5://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 6://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um início de sexta-feira com dólar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confiança absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse também que não fará nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretários de Guedes pedirem demissão alegando motivos pessoais. Na mesma entrevista, o ministro negou a saída dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenográfica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;//come�o da mminha parte
	   	case 7://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("__________________________________________________________________________________________________\n");
				printf("|Mat�ria 1.R�ssia comemora 100 anos de revolu��o bolchevique com desfile militar em Moscou       |\n");
				printf("|Mat�ria 2. Coldplay no Brasil: Ingressos, setlist e tudo o que voc� precisa saber sobre os shows|\n");
				printf("|------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                                                                |\n");
				printf("|________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
					exibirMateria("R�ssia comemora 100 anos de revolu��o bolchevique com desfile militar em Moscou\n\n");
						printf("\tOnde ser�o os shows? H� ingressos?\nA banda toca em S�o Paulo nesta ter�a e na quarta; e em Porto Alegre no s�bado (11), em sua estreia na cidade. Os ingressos est�o esgotados, mas � bom ficar de olho no site de vendas, porque muitas vezes aparecem ingressos de �ltima hora.\n\nQuem far� os shows de abertura?\nNo primeiro dia em S�o Paulo, a abertura fica por conta da cantora carioca Iza. No segundo dia, quem abre � a inglesa Dua Lipa. Ela tamb�m abre o show em Porto Alegre. Dua Lipa tem 22 anos e um disco lan�ado, em junho deste ano. O repert�rio vai pelo pop dan�ante, com m�sicas como 'Hotter than Hell', 'Blow your mind' e 'New Rules'.\n\nComo saber que o show est� prestes a come�ar?\nTudo come�a ao som de �pera. Quando tocar 'O mio babbino caro' , � bom se preparar. Logo depois da m�sica da soprano grega Maria Callas, a banda aparece no palco.\n\nO Coldplay aceita pedidos da plateia?\nA �ltima m�sica do set ac�stico, logo antes do bis, sempre muda. � quando Chris Martin d� aten��o aos gritos dos f�s e escolhe a que ele julga ser a mais pedida. Nos �ltimos shows desta turn�, rolaram:\n'Green Eyes', 'O', 'Us Against the World', 'Trouble', 'Til kingdon come'\n\nQual � o prov�vel setlist?\nVeja set segundo a m�dia das m�sicas tocadas na turn�, feito pelo site Setlist.fm:\n'A Head Full Of Dreams'\n'Yellow'\n'Every Teardrop Is a Waterfall'\n'The  Scientist'\n'Birds'\n'Got Put a Smile Upon Your Face'\n'Paradise'\n'Aways in my head'\n''Magic'\n'Everglow'\n'Clocks'\b'Midnight'\n'Charlie Brown'\n'Hymn For The Weekend'\n'Fix You'\n'Viva La Vida'\n'Adventure of a Lifetime'\n'Kaleidoscope'\n'in My Place'\n'Don't Panic'\n'Us Against the World'\n'Something Just Like This'\n'A Sky Full Of Stars'\n'Up & Up'\n\nComo foi o �ltimo show em S�o Paulo?\nO �ltimo show em S�o Paulo teve pedido de casamento e coro de 45 mil f�s. Eles se esbaldaram por cerca de duas horas, entre pulseiras que piscavam em sincronia com as m�sicas e tempestades de estrelinhas recortadas.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Coldplay no Brasil: Ingressos, setlist e tudo o que voc� precisa saber sobre os shows\n\n");
						printf("\tO astro americano Alec Baldwin disparou uma arma cenogr�fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M�xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic�ptero ao hospital da Universidade do Novo M�xico, mas n�o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
//feito jornal 1 dia 7
			}
			if(jornal == 2){
				system ("cls");
				printf("_______________________________________________________________________________________________________________________\n");
				printf("|Mat�ria 1. Um r�u julgado pelos ataques antidemocr�ticos do 8 de janeiro for�ou o ministro do Supremo Tribunal Federal|\n");
				printf("| (STF) Alexandre de Moraes a ter que anular uma vota��o realizada no plen�rio virtual da Corte, que tinha a previs�o  |\n");
				printf("|de ser encerrada nesta ter�a-feira, dia 7                                                                             |\n\n");
				printf("|Matéria 2. Entenda a proposta do MDA para transfer�ncia de terras de devedores para a reforma agr�ria                |                                                             |\n");
				printf("|----------------------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                                     |\n");
				printf("|______________________________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Um r�u julgado pelos ataques antidemocr�ticos do 8 de janeiro for�ou o ministro do Supremo Tribunal Federal (STF) Alexandre de Moraes a ter que anular uma vota��o realizada no plen�rio virtual da Corte, que tinha a previs�o de ser encerrada nesta ter�a-feira, 7.\n\n");
						printf("Eduardo Zeferino Englert, de 42 anos, foi acusado de ser um dos integrantes do acampamento do Quartel-General do Ex�rcito em Bras�lia, mas ap�s a sua defesa argumentar que ele n�o estava l�, o julgamento foi zerado e marcado para ser realizado novamente no pr�ximo dia 17 de novembro. Alexandre de Moraes anulou julgamento virtual que se encerraria nesta ter�a-feira, 7, por conta de diverg�ncia sobre participa��o de r�u no QG do Ex�rcito Foto: WILTON JUNIOR Englert � um dos r�us acusados de participar dos ataques aos Tr�s Poderes. No voto, Moraes prop�s que ele fosse condenado a 17 anos de pris�o pelos crimes de associa��o criminosa armada, aboli��o violenta do Estado Democr�tico de Direito, golpe de Estado e dano qualificado. Moraes pontuou que 'est� comprovado' a participa��o do r�u 'como participante e integrante das caravanas que estavam no acampamento do QG do Ex�rcito naquele fim de semana'. Por�m, o advogado de Eduardo, Marcos Vinicius Rodrigues de Azevedo, entrou com uma peti��o no �ltimo dia 31 de outubro afirmando que o acusado tinha chegado na capital federal no in�cio da tarde do 8 de janeiro e, portanto, n�o poderia ter sidoum integrante do acampamento nos dias anteriores. 'O laudo pericial, neste ponto, confirma o que foi relatado pelo r�u em audi�ncia, de modo a ratificar a sa�da do r�u de Santa Maria, RS em 6/1/2023 e a chegada em Bras�lia em 8/1/2023, �s 13h45min no CTG [ Centro de Tradi��es Ga�chas] Jayme Caetano Braun, onde ficou por uma hora, sem qualquer passagem pelo Quartel General do Ex�rcito', afirmou a defesa na peti��o.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O Banco do Brasil informou que a pr�tica de aliena��o de bens utilizados como garantia em empr�stimos e financiamentos, por exemplo, � comum no sistema financeiro. Nesse processo, institui��es p�blicas, a exemplo de governos federal, estaduais e municipais podem adquirir as propriedades pelo valor de mercado. Em rela��o � sele��o de fam�lias que ocupar�o as terras transformadas em assentamentos, o processo atualmente � feito por meio de edital, de responsabilidade do Instituto Nacional de Coloniza��o e Reforma Agr�ria (Incra). A classifica��o dos benefici�rios se d� por ordem de prioridade para distribui��o de lotes e observando crit�rios como tamanho da fam�lia e for�a de trabalho, tempo na atividade agr�ria, renda e outros. As parcelas de terras dos assentamentos s�o destinadas a fam�lias de agricultores e trabalhadores rurais que n�o t�m condi��es de adquirir um im�vel.\nProposta de adjun��o de terras\nNo dia 9 de outubro de 2023, o ministro do Desenvolvimento Agr�rio e Agricultura Familiar, Paulo Teixeira, visitou o assentamento Dorcelina Folador, em Arapongas, no norte do Paran�. Ao lado do ministro do Desenvolvimento e Assist�ncia Social, Fam�lia e Combate � Fome do Brasil (MDS), Wellington Dias, o chefe da pasta visitou a Cooperativa da Comercializa��o e Reforma Agr�ria Camponesa (COPRAN), que produz latic�nios, e conheceu a produ��o de hortali�as e legumes de uma fam�lia de assentados. Durante a visita, Teixeira fez o discurso do qual foi retirado o trecho vinculado � pe�a de desinforma��o. O ministro fala sobre a proposta do governo de adjudicar terras de �maus pagadores� e destin�-las ao assentamento de fam�lias da reforma agr�ria. Adjudica��o � o nome que se d� ao processo de transfer�ncia de um bem de um devedor ao credor. Teixeira tamb�m garante que a primeira a��o do governo nesse sentido ser� no Paran�, nas �terras dos Atallas�, se referindo �s propriedades do Grupo Atalla. De acordo com o Mapa de Conflitos, desenvolvido pelo N�cleo Ecologias, Epistemologias e Promo��o Emancipat�ria da Sa�de da Fiocruz, a fam�lia � dona de cerca de 40 mil hectares de terras e tem hist�rico de viola��o de direitos trabalhistas, pr�ticas de trabalho escravo e mais de R$ 150 milh�es de d�vidas trabalhistas. A fala do ministro foi republicada pelo ex-presidente Jair Bolsonaro (PL). �Vem a� a expropria��o de terras�, escreveu ele. Ap�s a repercuss�o, Paulo Teixeira explicou a proposta. Ele afirmou que a possibilidade de adjudica��o de im�veis de �grandes devedores� j� est� prevista em lei. O Decreto n� 433/1992 autoriza a aquisi��o de im�veis rurais, mediante compra e venda, para fins de destina��o aos projetos do programa de reforma agr�ria. Existe ainda a Lei 13.105/2015, que discorre sobre a adjudica��o, na subse��o I, mais especificamente nos artigos 876, 877 e 888. Al�m disso, � comum que clientes usem im�veis e outros bens como garantia em empr�stimos, financiamentos e outras negocia��es feitas junto �s institui��es financeiras. No entanto, em caso de inadimpl�ncia, o banco pode tomar esses bens e vend�-los a pessoas f�sicas, jur�dicas e entidades governamentais. 'O Banco do Brasil atua com as melhores pr�ticas banc�rias no processo de cobran�a e regulariza��o de cr�ditos, priorizando o recebimento de parcelas em atraso no menor prazo poss�vel, atuando preventivamente, de modo a evitar a inadimpl�ncia e a ocorr�ncia de perdas, sempre na busca das melhores solu��es financeiras para seus clientes. No entanto, quando o rito de cobran�a n�o surte efeito, faz-se necess�ria a execu��o de garantias�, esclareceu o Banco do Brasil em nota ao Comprova.' 'Nos �ltimos 5 anos, por exemplo, foram vendidos mais de 6 mil im�veis neste processo, sendo 234 im�veis rurais e 5,814 mil urbanos', pontua. A proposta do governo, portanto, � a cria��o de novos assentamentos a partir da adjudica��o de im�veis rurais de propriet�rios com grandes d�vidas de impostos ou d�bitos em bancos. 'N�s temos uma demanda muito grande de agricultores que querem plantar, mas n�o t�m terra. E essas terras pertencem � sociedade brasileira, j� que s�o terras que foram dadas em garantia de impostos ou de financiamentos' defendeu o ministro. Ao Comprova, o MDA informou que o programa ainda est� em fase de constru��o.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
//feito jornal 2 dia 7



			}
			if(jornal == 3){
				system ("cls");
			printf("    ___________________________________________________________________________________________\n");
				printf("|Mat�ria 1. Greve convocada por bolsonaristas tem fake news e paralisa��es localizadas     |\n");
				printf("|Mat�ria 2. R�ssia comemora 100 anos da revolu��o bolchevique com desfile militar em Moscou|\n");
				printf("|------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                                                          |\n");
				printf("|__________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Greve convocada por bolsonaristas tem fake news e paralisa��es localizadas\n\n");
						printf("A greve geral convocada por bolsonaristas nesta segunda-feira (7) teve paralisa��es localizadas no Sul e Centro-Oeste do pa�s, fake news sobre empresa que teria aderido e uso de v�deos de atos de 7 de setembro. A convoca��o, que pedia a ades�o de empres�rios, tinha ares de locaute (greve de empresas, hoje proibida pela legisla��o). O Minist�rio P�blico do Trabalho tamb�m investiga den�ncias de funcion�rios que estariam sendo pressionados a participar de manifesta��es antidemocr�ticas. A gigante de alimentos Aurora, de Chapec� (SC), afirmou que foi alvo de fake news. V�deos e mensagens em grupos de WhatsApp e Telegram afirmavam que a cooperativa de alimentos iria paralisar suas unidades nesta segunda-feira, o que foi desmentido pela empresa, que funcionou normalmente. Todas as unidades agropecu�rias, industriais, comerciais, centros log�sticos e setores de apoio est�o operando normalmente. A log�stica de transporte continua atendendo �s demandas em todas as regi�es onde a empresa atua, disse, em nota. 'A emprea diz respetar o movimento' amparado pelo princ�pio constitucional da liberdade de manifesta��o e tem demonstrado seu car�ter pac�fico e ordeiro. Al�m disso, espera que em nome da paz social, todas as quest�es que emergiram nesse per�odo p�s-eleitoral sejam equacionadas pelo di�logo e pelo respeito entre os cidad�os-manifestantes e os Poderes da Rep�blica, informou. 'J� o Sistema Famasul, que integra a Federa��o da Agricultura e Pecu�ria do Mato Grosso do Sul, com sede em Campo Grande (MS), n�o teve expediente nesta segunda-feira (7). Segundo comunicado publicado em suas redes sociais, a paralisa��o � em apoio �s manifesta��es pac�ficas e ordeiras' que s�o feitas pelo Brasil. Em Mato Grosso do Sul, a suspens�o nas atividades da Famasul foi confirmada pela recep��o da entidade, que informou � reportagem n�o haver colaborador trabalhando no local nesta segunda. A Folha 'n�o conseguiu contato com respons�vel pela entidade para mais detalhes sobre o ato at� a publica��o deste texto.' A Famasul integra a CNA (Confedera��o da Agricultura e Pecu�ria do Brasil), o Senar (Servi�o Nacional de Aprendizagem Rural), al�m de congregar 69 sindicatos rurais e a Aprosoja (Associa��o dos Produtores de Soja e Milho de MS). Em nota publicada no site da entidade, no dia 2 de novembro, a Famasul fala sobre 'resgate e fortalecimento dos valores da fam�lia e de um Brasil mais soberano e independente', refor�ando n�o abrir m�o do 'direito de propriedade, liberdade, livre express�o, crescimento econ�mico e social do pa�s.' J� nos estados do Sul, nenhuma paralisa��o ou impacto foram confirmados por federa��es de ind�strias e agropecu�rias consultadas pela reportagem. Em Rondon�polis (MT), o presidente da Acir (Associa��o Comercial e Industrial), Renato Del Cistia, estima que 70% das empresas da cidade fecharam ou est�o trabalhando em regime de plant�o. Segundo ele, esta � uma percep��o pessoal, e inclui empresas do ramo do com�rcio, ind�stria, agroneg�cio e setor de servi�os. A associa��o comercial n�o pode, por estatuto, apoiar ou incentivar o fechamento de qualquer empresa. Mas Rondon�polis, com certeza, apoia esse movimento. N�s somos uma cidade do interior e as empresas e os empres�rios apoiam o movimento, afirma Del Cistia. Segundo Del Cistia, na manh� desta segunda, houve uma carreata em apoio aos manifestantes. O movimento se concentra em frente ao 18� GAC (Grupo de Artilharia de Campanha), do Ex�rcito Brasileiro. Lideran�as de caminhoneiros aut�nomos informaram que a categoria n�o participou da mobiliza��o desta segunda e que o fluxo nas rodovias foi normal. Dentro da categoria dos caminhoneiros, foram as grandes empresas que estiveram presentes [nos atos iniciados ap�s o resultado das elei��es presidenciais]. Transportadoras e grandes empres�rios. O caminhoneiro aut�nomo que estava nas rodovias ficou preso [nos bloqueios], diz Carlos Alberto Litti Dahmer, diretor da CNTTL (Confedera��o Nacional dos Trabalhadores em Transporte e Log�stica). No final da tarde, Santa Catarina teve o �ltimo bloqueio liberado ap�s confronto com a pol�cia e a maioria dos estados tinha estradas livres. No Paran�, manifestantes atacaram a PRF (Pol�cia Rodovi�ria Federal)  no momento em que policiais tentavam desbloquear o trecho da rodovia, um dos �ltimos pontos de interdi��o no pa�s. Na noite desta segunda-feira, havia obstru��es em rodovias federais de quatro estados: Rond�nia, Mato Grosso, Par� e Paran�. ");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("R�ssia comemora 100 anos de revolu��o bolchevique com desfile militar em Moscou\n\n");
						printf("Uma parada militar em Moscou celebra, nesta ter�a-feira (7), 100 anos da revolu��o bolchevique. O desfile, segundo o 'Washington Post', � tamb�m uma recria��o de uma parada militar realizada em 1941, quando a R�ssia desafiou as for�as alem�s, que chegavam aos arredores de Moscou na 2� Guerra Mundial. O l�der comunista Guennadi Ziuganov deve liderar a parada de comunistas e admiradores de L�nin. O presidente Vladimir Putin, no entanto, n�o deve participar de eventos oficiais em comemora��o ao centen�rio, segundo as ag�ncias internacionais. Segundo analistas, o atual presidente teme que o tema provoque novas divis�es entre os russos. O centen�rio foi ignorado completamente pelo Kremlin desde que Putin determinou, no final de 2016, que o acontecimento n�o fosse comemorado. Neste ano, nas poucas vezes em que se referiu ao centen�rio, os coment�rios do presidente foram acompanhados de pedidos de n�o 'trazer para nossos dias as divis�es, os �dios, as afrontas e a crueldade do passado'. 'Por acaso n�o era poss�vel progredir n�o por meio de uma revolu��o, mas atrav�s de uma evolu��o?', disse Putin recentemente. Segundo os analistas, Putin e o Kremlin sempre estiveram interessados em ressaltar outro fato hist�rico, o Dia da Vit�ria sobre a Alemanha nazista na Segunda Guerra Mundial, j� que � um evento que une todos os russos, independentemente de suas ideias pol�ticas, diferente da revolu��o. O centen�rio tamb�o coincide com o come�o dos preparativos das elei��es presidenciais de mar�o de 2018, nas quais Putin vai concorrer � reelei��o, segundo todas as previs�es.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
//feito jornal 3 dia 7


			}
			if(jornal == 4){
					system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat�ria 1. Lula bloqueia R$ 3,8 bilh�es de recursos para hospitais e livros did�ticos\n");
				printf("|Mat�ria 2. O pr�prio Hamas mostra por que Israel n�o pode deixar os terroristas continuarem em Gaza|\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Lula bloqueia R$ 3,8 bilh�es de recursos para hospitais e livros did�ticos\n\n");
						printf("Desde o in�cio do governo do presidente Luiz In�cio Lula da Silva (PT), at� o dia 1� de novembro, j� foram bloqueados cerca de R$ 3,8 bilh�es de verbas para o funcionamento de hospitais, o pagamento do�Aux�lio G�s�e a compra de livros did�ticos na educa��o b�sica. O valor do corte or�ament�rio corresponde a um levantamento da Associa��o Contas Abertas, com dados do Sistema Integrado de Planejamento e Or�amento (Siop), que foram divulgados nesta ter�a-feira (7) pelo Estad�o. O bloqueio dos recursos por parte do governo ocorre quando h� risco de descumprir as regras fiscais durante o ano, e isso pode paralisar ou atrasar as a��es do governo federal nas �reas afetadas. De acordo com os minist�rios, poder haver o impacto para atividades essenciais, mas n�o h� riscos de um �apag�o� nos programas at� o fim do ano. �O presidente promete n�o fazer em 2024 o que est� fazendo em 2023?, afirmou o secret�rio-geral da associa��o Contas Abertas, Gil Castello Branco, ao Estad�o. Segundo levantamento do Contas Abertas, a a��o que sofreu o maior bloqueio foi a que custeia os servi�os de assist�ncia hospitalar e ambulatorial, do�Minist�rio da Sa�de, um total de R$ 296 milh�es.�O dinheiro � destinado para realiza��o de consultas, exames, tratamentos e cirurgias.�O corte atingiu recursos indicados por bancadas estaduais do Congresso e envolve emendas n�o obrigat�rias. A verba � de forte interesse dos parlamentares e uma demanda de hospitais nos Estados e munic�pios Outro bloqueio de maior impacto, � o do Aux�lio G�s, no valor de R$ 262 milh�es. O Estad�o revelou que, se o dinheiro n�o for destravado at� o fim do ano,�2 milh�es de fam�lias correm o risco de n�o receber o benef�cio em dezembro. No Minist�rio da Educa��o, foram bloqueados R$ 179,8 milh�es do or�amento da produ��o e compra de livros did�ticos para a educa��o b�sica.�O valor poderia ser revertido, conforme apontou o Estad�o, na compra de aproximadamente 17 mil livros para professores e estudantes do ensino fundamental. Esse bloqueio se soma a outros cortes feitos pela pasta na alfabetiza��o, transporte escolar e bolsas de estudo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("O pr�prio Hamas mostra por que Israel n�o pode deixar os terroristas continuarem em Gaza\n\n");
						printf("O presidente Joe Biden, que inicialmente declarou seu apoio 'inabal�vel e s�lido como uma rocha' a Israel, pediu uma 'pausa' no ataque terrestre do Estado judeu a Gaza na quarta-feira (1�), em meio �s cr�ticas aos ataques a�reos israelenses. No entanto, um membro s�nior do gabinete pol�tico do Hamas mostrou exatamente por que Israel deve erradicar o grupo terrorista genocida ap�s o horr�vel pogrom de 7 de outubro, que matou mais de 1.400 israelenses. Ghazi Hamad, membro do gabinete pol�tico do Hamas e ex-vice-ministro das Rela��es Exteriores do grupo, prometeu que o ataque de 7 de outubro, no qual terroristas do Hamas assassinaram civis e at� beb�s, aconteceria de novo e de novo at� que os terroristas apagassem Israel da face da terra. 'Devemos ensinar uma li��o a Israel, e faremos isso de novo e de novo', disse Hamad, de acordo com uma entrevista em 24 de outubro na televis�o libanesa traduzida pelo Instituto de Pesquisa de M�dia do Oriente M�dio. 'A Invas�o em Al-Aqsa foi apenas a primeira, e haver� uma segunda, uma terceira, uma quarta, porque temos a determina��o, a vontade e as capacidades para lutar.' 'Israel � um pa�s que n�o tem lugar em nossa terra', declarou o l�der do Hamas. 'Devemos remover esse pa�s, porque constitui uma cat�strofe de seguran�a, militar e pol�tica para a na��o �rabe e isl�mica, e deve ser eliminado. N�o temos vergonha de dizer isso, com toda a for�a.' 'Somos chamados de na��o de m�rtires, e temos orgulho de sacrificar m�rtires', acrescentou Hamad. O l�der do Hamas declarou que 'a ocupa��o deve chegar ao fim', esclarecendo que n�o se referia apenas a Gaza, mas a 'todas as terras palestinas'. 'A exist�ncia de Israel � o que causa toda essa dor, sangue e l�grimas', acrescentou ele. '� Israel, n�o n�s. Somos v�timas da ocupa��o. Ponto. Portanto, ningu�m deveria nos culpar pelas coisas que fazemos.' Hamad insistiu que o Hamas n�o pretendia atacar civis, mas que os terroristas enfrentaram 'complica��es no terreno'. O Hamas atacou Israel no s�bado e na celebra��o de Simchat Torah, o dia mais alegre do calend�rio judaico. Os terroristas massacraram civis em suas casas e jovens em um festival de m�sica. Eles estupraram mulheres ao lado dos cad�veres de seus amigos. Eles mataram crian�as na frente de seus pais e pais na frente de seus filhos. Eles decapitaram beb�s. Eles se gabaram de matar judeus. Eles fizeram mais de 200 ref�ns, incluindo mulheres, crian�as e idosos. As observa��es de Hamad revelam que o Hamas n�o pretende parar esses ataques at� destruir completamente Israel. Isso apenas comprova o argumento do primeiro-ministro israelense, Benjamin Netanyahu, de que o estado judeu deve erradicar o Hamas para evitar essa amea�a existencial. Israel deve agir rapidamente para evitar que o Hamas se reorganize. Embora um cessar-fogo e a 'ajuda humanit�ria' soem nobres, o governo genocida que controla Gaza provou que tirar� vantagem de qualquer ajuda que o Ocidente envie. O Hamas transformou canos de �gua em foguetes para atacar Israel. Eles usaram materiais de constru��o para cavar t�neis de onde atacar Israel. Eles v�o militarizar qualquer demora para alcan�ar seu objetivo final - destruir o estado judeu. O Ir� direcionou dinheiro ao Hamas, e os outros agentes de Teer� na regi�o tamb�m est�o se voltando contra Israel. O estado judeu enfrentou ataques de todas as dire��es - no sudoeste, do Hamas; no norte, do Hezbollah; no oeste, da Jihad Isl�mica Palestina; e no sul, dos rebeldes Houthi no I�men. De acordo com minha an�lise do Daily Signal, o Ir� recebeu pelo menos US$ 71 bilh�es a mais sob Biden do que teria sob o ex-presidente Donald Trump, devido ao relaxamento de Biden na aplica��o das san��es e suas medidas de distens�o com os mul�s. Isso pode ter contribu�do para o 7 de outubro e para os outros ataques que Israel enfrenta dos agentes do Ir� na regi�o. Israel precisa encerrar rapidamente a guerra para evitar que ela se transforme em um conflito regional. Da mesma forma, os EUA devem impor san��es contra o Ir� e posicionar ativos militares para dissuadir os mul�s de entrar no conflito diretamente. O 7 de outubro mostrou que Israel deve levar o Hamas a s�rio, e as observa��es de Hamad mostram que n�o pode comprometer-se com o governo antissemita e genocida que controla Gaza. Israel deve manter o rumo, e os EUA devem oferecer apoio firme ao seu aliado para alcan�ar seu objetivo. Qualquer alternativa, como Hamad demonstra, seria inadmiss�vel.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
//feito jornal 4 dia 7			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 8://dia
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estad�o               |\n");
			printf("|3. Folha de S�o Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1. Comiss�o de Agricultura da C�mara convoca ministros por �discrimina��o� e �persegui��o� ao agro\n");
				printf("|Matéria 2.Fam�lia procura empres�rio brasileiro que desapareceu na Su��a ap�s viagem a neg�cios          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Calor de 44,8�C: Ara�ua� (MG) tem o dia mais quente no hist�rico de medi��es do Brasil, diz Inmet\n\n");
						printf("\tO munic�pio de Ara�ua� (MG), distante 678 km de Belo Horizonte, no Vale do Jequitinhonha, foi considerado o mais quente no hist�rico de medi��es do pa�s, de acordo com o Instituto Nacional de Meteorologia (Inmet). A cidade com 34.297 habitantes alcan�ou, no domingo (19), a temperatura de 44,8�C O recorde anterior tinha sido registrado no dia 21 de novembro de 2005, em Bom Jesus (PI), distante 632 km ao Sul de Teresina, quando a m�xima foi de 44,7�C. Um aquecimento pr�-frontal intensificou o calor no Nordeste de Minas Gerais, o que favoreceu a eleva��o da marca que ocorreu no d�cimo dia da onda de calor (entenda abaixo quais foram os fatores que causaram o novo recorde). Essa foi a oitava onda de calor registrada no Brasil neste ano. O fen�meno estava em atua��o desde o dia 8 de novembro e acabou no fim de semana. Um levantamento anterior do Inmet, por�m, indicou que a marca de 44,8�C j� havia sido registrada nos dias 4 e 5 de novembro de 2020, em Nova Maring� (MT). O g1 entrou em contato com o �rg�o para verificar se a informa��o de 2020 tem validade, mas at� a �ltima publica��o n�o obteve resposta.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Fam�lia procura empres�rio brasileiro que desapareceu na Su��a ap�s viagem a neg�cios\n\n");
						printf("\tM�rcio Rodrigues da Silva, de Itupeva (SP), foi a Zurique, no dia 7 de novembro. Esposa disse ao g1 que, no dia seguinte, o empres�rio contou que teve problemas com a empresa que fez neg�cios. Horas depois, parou de dar not�cias e teve o celular desligado. Um empres�rio brasileiro est� desaparecido desde 8 de novembro, ap�s uma viagem a neg�cios para a Su��a. A fam�lia de Itupeva (SP) est� � procura de informa��es sobre o paradeiro de M�rcio Rodrigues da Silva, 44 anos. Ana L�cia Rodrigues, esposa de M�rcio, disse ao g1 que o marido viajou ao pa�s europeu no dia 7 de novembro e que pousou em Zurique no dia seguinte. Ela diz que M�rcio chegou a mandar um v�deo e fotos para ela, mostrando que havia aterrissado no aeroporto sui�o. Segundo Ana, M�rcio viajou para assinar documentos de um investimento que havia feito pela internet e precisava ser feito pessoalmente, em Zurique. O empres�rio atua no ramo de produtos terap�uticos. A mulher diz que, ap�s o marido encontrar com um grupo de pessoas dessa suposta empresa, come�ou a dizer que achava que havia ca�do em um golpe. Conforme a esposa, por volta de 13h30 do dia 8 (hor�rio de Bras�lia), ele parou de dar not�cias e o celular foi desligado. Ela diz que o marido comentou que o grupo havia pego o passaporte dele, alegando que precisaria do documento, mas n�o devolveram mesmo ap�s pedido de M�rcio. Ana registrou um boletim de ocorr�ncia de pessoa desaparecida e est� em contato com a Interpol. O g1 pediu informa��es para o Minist�rio das Rela��es Exteriores, mas o �rg�o retornou dizendo que n�o pode comentar o caso, devido � privacidade prevista na Lei de Acesso � Informa��o. A pasta informou que est� � disposi��o da fam�lia, atrav�s do consulado brasileiro.")	
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1.Comiss�o de Agricultura da C�mara convoca ministros por �discrimina��o� e �persegui��o� ao agro|\n");
				printf("|Matéria 2.BYD d� seguro gr�tis para Dolphin, Yuan Plus e Song Plus em novembro                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Comiss�o de Agricultura da C�mara convoca ministros por �discrimina��o� e �persegui��o� ao agro\n\n");
						printf("A Comiss�o de Agricultura da C�mara dos Deputados aprovou, nesta quarta-feira, 8, a convoca��o dos ministros Camilo Santana (Educa��o) e Marina Silva (Meio Ambiente) para prestar esclarecimentos sobre posturas de �discrimina��o� e �persegui��o� feitas ao agroneg�cio, segundo os proponentes dos requerimentos. A ofensiva do colegiado ocorreu ap�s a pol�mica das quest�es do Exame Nacional do Ensino M�dio (Enem), que foram desaprovadas pela bancada que defende o setor. Os deputados aprovaram a convoca��o do ministro da Educa��o para que ele preste esclarecimentos sobre a �politiza��o� do Enem, que foi aplicado no �ltimo domingo, 5. O ministro deve comparecer ao colegiado no dia 22 de novembro. Na segunda-feira, 6, a Frente Nacional da Agropecu�ria (FPA), que conta a participa��o de 347 congressistas, pediu a anula��o de tr�s quest�es do exame, que abordaram os efeitos do agroneg�cio no Cerrado e na Floresta Amaz�nica e a nova corrida espacial feita por bilion�rios. A FPA tamb�m exigiu o comparecimento de Santana em audi�ncias na C�mara e no Senado Federal. �� inacredit�vel o governo federal se utilizar de desinforma��o em prova aplicada para quase 4 milh�es de alunos brasileiros que disputam uma vaga nas universidades do Brasil. A anula��o das quest�es � indiscut�vel, de acordo com literaturas cient�ficas sobre a atividade agropecu�ria no Brasil e no mundo, em respeito � academia cient�fica brasileira�, afirmou a FPA em nota divulgada na segunda. O requerimento de convoca��o de Camilo Santana � de autoria do deputado Evair Vieira de Melo (PP-ES), que disse que o agro reagiu com rep�dio �s quest�es do Enem. Segundo o parlamentar, o setor n�o pode ser simplificado como uma �for�a exclusivamente negativa� nas discuss�es sobre a preserva��o ambiental. �As perguntas em quest�o representam um perigoso desservi�o � na��o, dada a apresenta��o de uma abordagem unicamente cr�tica em rela��o � atividade agropecu�ria no Brasil, bem como uma escolha clara de uma corrente ideol�gica�, afirmou Evair no requerimento. O parlamentar solicita esclarecimentos �a respeito da politiza��o das provas do Enem de 2023, em especial sobre a discrimina��o do setor agropecu�rio da regi�o Centro-Oeste e seus habitantes�. Ao Estad�o, o presidente da comiss�o Ti�o Medeiros (PP-PR) afirmou que a convoca��o do ministro da Educa��o busca entender o objetivo das quest�es criticadas pelo setor. �O convite foi para falar sobre o quanto essa prova do Enem est� avaliando os alunos ou ideologizando eles�, afirmou.	");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("BYD d� seguro gr�tis para Dolphin, Yuan Plus e Song Plus em novembro\n\n");
						printf("Para muitas empresas, a Black Friday no Brasil n�o se resume a um dia apenas, mas a todo o m�s de novembro. Dessa forma, a BYD oferece seguro gr�tis por um ano para quem comprar os carros da marca. Na a��o ''Electric Days', os el�tricos Dolphin e Yuan Plus, e o h�brido Song Plus comprados em novembro ter�o um ano de seguro total gratuito. Em parceria com a Porto Seguro, a ap�lice inclui cobertura no valor integral da tabela Fipe, franquia reduzida e assist�ncia com quilometragem ilimitada. Al�m disso, tem danos materiais e danos corporais limitados a R$ 150 mil cada, cobertura para os vidros, carro reserva por 15 dias e um valor de R$ 5 mil para o passageiro em caso de acidente. Este s� n�o vale para quem exerce atividade remunerada com o ve�culo, como os motoristas de aplicativo. Os tr�s principais produtos da BYD dever�o ter produ��o no Brasil. A montadora chinesa comprou a antiga f�brica da Ford em Cama�ari (BA) e deve iniciar as opera��es entre o fim de 2024 e o come�o de 2025. Por R$ 149.800, o Dolphin � o carro de entrada. O hatch tem motor el�trico dianteiro de 95 cv e 18,3 mkgf de torque. Como resultado, a acelera��o de 0 a 100 km/h � feita em 10,9 segundos e a velocidade m�xima chega a 150 km/h. Segundo o Inmetro, a autonomia � de 291 km. J� o SUV Yuan Plus traz um motor de 204 cv e 31,6 mkgf e pode rodar at� 294 km de acordo com as medi��es brasileiras. Assim, acelera de 0 a 100 km/h em 7,3 segundos e atinge 160 km/h. O pre�o � de R$ 229.800. Ali�s. o Dolphin ganhou recentemente a vers�o Plus com este mesmo conjunto el�trico pelo pre�o de R$ 179.800. Por fim, o Song Plus � um SUV h�brido plug-in que tamb�m custa R$ 229.800 (mesma tabela do Yuan). O carro combina motor 1.5 a gasolina e um el�trico para entregar 235 cv pot�ncia e 40,8 mkgf. Dessa forma, chega aos 100 km/h em 7,9 segundos e alcan�a velocidade m�xima de 140 km/h.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Crian�as voltam � Folhinha para lembrar a 'fama' depois de aparecer no jornal|\n");//esse ta errado
				printf("|Matéria 2. Revis�o da vida toda do INSS volta a julgamento no STF no fim deste m�s|\n");//fazer esses depois
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("\n\n");
						printf("")
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}//falta 1 aqui folha de soa paulo dia 8 DEIXA FOLHA DE SAO PAULO POR ULTIMO QUE RAIVA DESSE JORNAL
					if(materia == 2){
						exibirMateria("Revis�o da vida toda do INSS volta a julgamento no STF no fim deste m�s\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat�ria 1. Congresso tenta aumentar controle sobre Or�amento com cronograma de repasses e emendas de lideran�a\n");
				printf("|Mat�ria 2. O pr�prio Hamas mostra por que Israel n�o pode deixar os terroristas continuarem em Gaza|\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Congresso tenta aumentar controle sobre Or�amento com cronograma de repasses e emendas de lideran�a\n\n");
						printf("Parlamentares est�o se articulando para aumentar ainda mais o controle do Congresso sobre o Or�amento por meio de emendas, diminuindo o poder do Executivo sobre verbas discricion�rias. H� pelo menos tr�s propostas em discuss�o: a cria��o de emendas de lideran�a, o estabelecimento de um cronograma para a libera��o de emendas parlamentares impositivas (como as individuais e de bancadas estaduais) e ainda um projeto de lei que quer tornar obrigat�rias as emendas de comiss�es permanentes da C�mara e do Senado. O relat�rio preliminar do projeto da Lei de Diretrizes Or�ament�rias (LDO) de 2024, aprovado nesta ter�a-feira (7) na Comiss�o Mista de Or�amento do Congresso, n�o prev� essas medidas. Mas o relator da mat�ria, deputado Danilo Forte (Uni�o-CE), afirmou que, no relat�rio final, ir� propor a cria��o de emendas de bancada partid�ria ou de lideran�a, que o deputado chamou de RP-5, para substituir as extintas emendas de relator. Atualmente, existem tr�s tipos de emendas parlamentares: as individuais (RP-6), as de bancadas estaduais (RP-7) e as emendas de comiss�o (RP-8). As emendas de relator (RP-9), conhecidas como "or�amento secreto", foram declaradas inconstitucionais no ano passado pelo Supremo Tribunal Federal (STF), em raz�o da falta de transpar�ncia � n�o era poss�vel identificar, por exemplo, qual parlamentar havia feito a indica��o da verba. Para realocar os R$ 19,4 bilh�es destinados a tais emendas no or�amento de 2023, o governo do presidente Luiz In�cio Lula da Silva (PT) dividiu o montante em duas frentes: para os minist�rios (RP-2) e para as emendas individuais (RP-6). As emendas de minist�rio s�o de uso discricion�rio do Executivo, mas parlamentares j� denunciaram que elas est�o sendo usadas como moeda de troca para apoio em projetos de lei de interesse do governo. O mesmo ocorre com as demais emendas, mesmo as impositivas (de execu��o obrigat�ria), j� que n�o h� a necessidade de cumprir um calend�rio para o repasse desses valores. No total, R$ 9,8 bilh�es que deveriam ser destinados para as emendas de relator foram parar nos minist�rios da Sa�de, Cidades, Agricultura, Educa��o e Integra��o Regional. Com a nova medida, Forte busca trazer de volta para o Congresso a execu��o desses recursos. O deputado n�o divulgou o valor que poder� ficar sob a responsabilidade das bancadas partid�rias (emenda de lideran�a). A porcentagem final dessa dota��o depende da revis�o da meta fiscal pelo governo. A favor das novas emendas, Forte defendeu a transpar�ncia e constitucionalidade da proposta. �N�s n�o estamos criando novas RP-9. Essas emendas partid�rias de bancada v�o ter origem, destino e acompanhamento. Ent�o, n�o vai ser nada camuflado do ponto de vista dos seus encaminhamentos. A RP-5 � uma rubrica clara com rela��o a essa quest�o e vai ter toda a tramita��o com os par�metros que um or�amento p�blico exige�, afirmou Forte. Contudo, a proposta da cria��o de uma emenda de lideran�a para substituir a de relator ainda est� em discuss�o. O deputado Alu�sio Mendes (Republicanos-MA), vice-l�der da maior bancada da C�mara, afirma que h� resist�ncia em apoiar o projeto e que ele ainda ser� debatido nos pr�ximos dias. �Foi feito um acerto h� uns 15 dias de que a melhor sa�da era a impositividade das emendas de comiss�o (RP-8), mas ele (Danilo Forte) entendeu que era melhor colocar as emendas por bancada partid�ria. Mas isso ainda vai ser discutido, ainda h� uma resist�ncia em apoiar a impositividade dessas emendas�, afirma. Alternativa �s emendas de comiss�o permanente. A obrigatoriedade do pagamento das emendas de comiss�o est� contida em um projeto do senador Zequinha Marinho (PL-PA). No dia 31 de outubro, a Comiss�o de Assuntos Econ�micos do Senado aprovou o PL que segue para avalia��o da Comiss�o de Constitui��o e Justi�a da Casa. A expectativa para o projeto � de que seja aprovado ainda este ano, em ambas as casas. A r�pida tramita��o e aceita��o do PL se deve ao crescente desconforto do Congresso Federal�diante dos frequentes atrasos nos repasses das emendas parlamentares pelo governo Lula. E n�o � s� a oposi��o que tem reclamado da demora para o dep�sito dos recursos. Deputados e senadores, at� mesmo da base aliada do PT, t�m criticado a falta de agilidade da Secretaria de Rela��es Institucionais (SRI), liderada pelo ministro Alexandre Padilha, em cumprir com os acordos estabelecidos. O cientista pol�tico e advogado Valdir Pucci avalia que o ministro faz o jogo do governo. �O Padilha � criticado pelos parlamentares na medida em que promete que determinada emenda ser� liberada, e acaba n�o sendo. Mas isso faz parte do jogo pol�tico do governo, da busca pelo apoio do Legislativo �s medidas que interessam ao Executivo�. Outra estrat�gia governista seria a demora que os parlamentares t�m encontrado para marcar reuni�es nos minist�rios. Esses encontros de gabinete s�o fundamentais para acertar o repasse das emendas. Alguns congressistas afirmam que a espera pode chegar a cerca de 60 dias para conseguir se reunir com determinados ministros, isso quando n�o deixam de ser recebidos. Al�m da barganha pol�tica, a pr�tica petista de aparelhar a administra��o com seu pessoal, retirando inclusive t�cnicos de carreira de cargos operacionais, tamb�m agrava a demora para execu��o dos repasses em raz�o da falta de pessoal treinado para realizar os processos. Uma das principais preocupa��es de deputados e senadores � que as emendas empenhadas, ou seja, aquelas cujos recursos j� est�o reservados para transfer�ncia, n�o sejam pagas at� o fim do ano. Nesse caso, elas entram na classe de �restos a pagar� e os tr�mites para que cheguem at� o seu destino no pr�ximo ano, tanto para estados quanto para munic�pios, s�o bem mais complexos. Cronograma de pagamentos para as emendas Para evitar que isso siga acontecendo, uma das apostas do Congresso � estabelecer um prazo para os repasses. Para tanto, pode ser criado um dispositivo na LDO que obrigue o pagamento da emenda no ano de sua indica��o. Caso isso n�o ocorra, poder� se tornar crime de responsabilidade ou o atraso ficar� sujeito a multas, por exemplo. Forte tamb�m mencionou a necessidade cria��o de um cronograma para a libera��o de emendas parlamentares. Mesmo assim, o deputado n�o esclareceu se o relat�rio final da LDO, previsto para ser votado at� o dia 24 de novembro, tratar� dessa quest�o. Atualmente, mesmo para aquelas de execu��o impositiva, como as individuais e de bancadas estaduais, n�o h� regras que estabele�am prazos definidos para o pagamento. Deste modo, os recursos de muitas emendas deixam de ser transferidos pelo governo. Estima-se que, at� o momento, aproximadamente entre 23% e 28% de todo o valor empenhado para as emendas parlamentares em 2023 ainda n�o foi transferido, contra cerca de 5% no mesmo per�odo do ano passado. A falta de obrigatoriedade para cumprir um cronograma de repasse do valor das emendas ou de san��o, no caso de atrasos, facilita o uso desses recursos como moeda de troca para a aprova��o das pautas governistas no Congresso. Dessa forma, o estabelecimento de um calend�rio de repasses, � um ponto crucial o Legislativo, que visa retomar sua autonomia or�ament�ria e, portanto, de execu��o, diminuindo o poder de barganha do PT. O atraso tem, inclusive, prejudicado prefeitos que apoiaram a elei��o de Lula. A falta de repasse estaria atrasando, por exemplo, o andamento de obras em todo o pa�s, al�m de atrapalhar investimentos em sa�de. O volume � expressivo. Para o or�amento de 2024, a LDO prev� R$ 37,6 bilh�es para emendas parlamentares individuais e de bancadas, sem contar com o total para as emendas extra. Em ano de elei��es municipais, a libera��o e a aplica��o desses recursos podem ser fundamentais para os resultados que o PT e os demais partidos ter�o nas prefeituras em todo o pa�s. �As emendas existem justamente para que os parlamentares possam encaminhar recursos para a sua base eleitoral, de forma leg�tima e democr�tica, como ocorre em qualquer democracia. O parlamentar � quem est� na base, mais presente junto a sua comunidade, junto a seu munic�pio � ele sabe a necessidade de um hospital, de uma estrada e as emendas servem para isso�, afirma Pucci. O cientista pol�tico tamb�m sinaliza que, caso as medidas para garantir a execu��o das emendas n�o sejam implementados, o governo ainda pode abrir m�o da libera��o de emendas para irrigar prefeituras e, consequentemente, campanhas dos seus aliados, enquanto sufoca financeiramente aquelas geridas por pol�ticos da oposi��o.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("O pr�prio Hamas mostra por que Israel n�o pode deixar os terroristas continuarem em Gaza\n\n");
						printf("O presidente Joe Biden, que inicialmente declarou seu apoio 'inabal�vel e s�lido como uma rocha' a Israel, pediu uma 'pausa' no ataque terrestre do Estado judeu a Gaza na quarta-feira (1�), em meio �s cr�ticas aos ataques a�reos israelenses. No entanto, um membro s�nior do gabinete pol�tico do Hamas mostrou exatamente por que Israel deve erradicar o grupo terrorista genocida ap�s o horr�vel pogrom de 7 de outubro, que matou mais de 1.400 israelenses. Ghazi Hamad, membro do gabinete pol�tico do Hamas e ex-vice-ministro das Rela��es Exteriores do grupo, prometeu que o ataque de 7 de outubro, no qual terroristas do Hamas assassinaram civis e at� beb�s, aconteceria de novo e de novo at� que os terroristas apagassem Israel da face da terra. 'Devemos ensinar uma li��o a Israel, e faremos isso de novo e de novo', disse Hamad, de acordo com uma entrevista em 24 de outubro na televis�o libanesa traduzida pelo Instituto de Pesquisa de M�dia do Oriente M�dio. 'A Invas�o em Al-Aqsa foi apenas a primeira, e haver� uma segunda, uma terceira, uma quarta, porque temos a determina��o, a vontade e as capacidades para lutar.' 'Israel � um pa�s que n�o tem lugar em nossa terra', declarou o l�der do Hamas. 'Devemos remover esse pa�s, porque constitui uma cat�strofe de seguran�a, militar e pol�tica para a na��o �rabe e isl�mica, e deve ser eliminado. N�o temos vergonha de dizer isso, com toda a for�a.' 'Somos chamados de na��o de m�rtires, e temos orgulho de sacrificar m�rtires', acrescentou Hamad. O l�der do Hamas declarou que 'a ocupa��o deve chegar ao fim', esclarecendo que n�o se referia apenas a Gaza, mas a 'todas as terras palestinas'. 'A exist�ncia de Israel � o que causa toda essa dor, sangue e l�grimas', acrescentou ele. '� Israel, n�o n�s. Somos v�timas da ocupa��o. Ponto. Portanto, ningu�m deveria nos culpar pelas coisas que fazemos.' Hamad insistiu que o Hamas n�o pretendia atacar civis, mas que os terroristas enfrentaram 'complica��es no terreno'. O Hamas atacou Israel no s�bado e na celebra��o de Simchat Torah, o dia mais alegre do calend�rio judaico. Os terroristas massacraram civis em suas casas e jovens em um festival de m�sica. Eles estupraram mulheres ao lado dos cad�veres de seus amigos. Eles mataram crian�as na frente de seus pais e pais na frente de seus filhos. Eles decapitaram beb�s. Eles se gabaram de matar judeus. Eles fizeram mais de 200 ref�ns, incluindo mulheres, crian�as e idosos. As observa��es de Hamad revelam que o Hamas n�o pretende parar esses ataques at� destruir completamente Israel. Isso apenas comprova o argumento do primeiro-ministro israelense, Benjamin Netanyahu, de que o estado judeu deve erradicar o Hamas para evitar essa amea�a existencial. Israel deve agir rapidamente para evitar que o Hamas se reorganize. Embora um cessar-fogo e a 'ajuda humanit�ria' soem nobres, o governo genocida que controla Gaza provou que tirar� vantagem de qualquer ajuda que o Ocidente envie. O Hamas transformou canos de �gua em foguetes para atacar Israel. Eles usaram materiais de constru��o para cavar t�neis de onde atacar Israel. Eles v�o militarizar qualquer demora para alcan�ar seu objetivo final - destruir o estado judeu. O Ir� direcionou dinheiro ao Hamas, e os outros agentes de Teer� na regi�o tamb�m est�o se voltando contra Israel. O estado judeu enfrentou ataques de todas as dire��es - no sudoeste, do Hamas; no norte, do Hezbollah; no oeste, da Jihad Isl�mica Palestina; e no sul, dos rebeldes Houthi no I�men. De acordo com minha an�lise do Daily Signal, o Ir� recebeu pelo menos US$ 71 bilh�es a mais sob Biden do que teria sob o ex-presidente Donald Trump, devido ao relaxamento de Biden na aplica��o das san��es e suas medidas de distens�o com os mul�s. Isso pode ter contribu�do para o 7 de outubro e para os outros ataques que Israel enfrenta dos agentes do Ir� na regi�o. Israel precisa encerrar rapidamente a guerra para evitar que ela se transforme em um conflito regional. Da mesma forma, os EUA devem impor san��es contra o Ir� e posicionar ativos militares para dissuadir os mul�s de entrar no conflito diretamente. O 7 de outubro mostrou que Israel deve levar o Hamas a s�rio, e as observa��es de Hamad mostram que n�o pode comprometer-se com o governo antissemita e genocida que controla Gaza. Israel deve manter o rumo, e os EUA devem oferecer apoio firme ao seu aliado para alcan�ar seu objetivo. Qualquer alternativa, como Hamad demonstra, seria inadmiss�vel.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
//esse jornal 4 do dia 8 esta errada			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 9://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Mat�ria 1. Prefeitura de Demerval Lob�o abre inscri��es de processo seletivo com 44 vagas e sal�rio de at� R$ 3 mil|\n");
				printf("|Mat�ria 2. Monitor da Viol�ncia: dois meses e meio depois, maioria dos casos de morte violenta est� em aberto       |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Prefeitura de Demerval Lob�o abre inscri��es de processo seletivo com 44 vagas e sal�rio de at� R$ 3 mil\n\n");
						priintf("\tA Prefeitura de Demerval Lob�o, Sul do Piau�, abriu nesta quinta-feira (9) as inscri��es do processo seletivo para a contrata��o de profissionais de n�vel superior. S�o ofertadas 44 vagas, al�m de cadastro de reserva, com sal�rio de at� R$ 3.315. As inscri��es podem ser feitas at� o dia 28 de novembro no site da organizadora do concurso, a Funda��o Vale do Piau� (Funvapi). A taxa de inscri��o custa R$ 70. Todas as vagas s�o de n�vel superior e as remunera��es variam de R$ 1,8 mil a R$ 3,3 mil. As vagas s�o para os seguintes cargos: Assistente Social (2); Psic�logo (2); Professor de Polival�ncia (22); Professor de L�ngua Portuguesa (4); Professor de Ci�ncias (1); Professor de Geografia (1); Professor de Hist�ria (1); Professor de Ingl�s (2); Professor de Matem�tica (4); Professor de Artes (2); Professor de Educa��o F�sica (3). O processos seletivo ocorrera em uma �nica etapa: prova objetiva de m�ltipla escolha, com 30 quest�es, que ser� de cunho eliminat�rio e classificat�rio. As provas v�o ser realizadas no dia 17 de dezembro. O resultado final ser� divulgado a partir de 5 de janeiro de 2024.")
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Monitor da Viol�ncia: dois meses e meio depois, maioria dos casos de morte violenta est� em aberto\n\n");
						printf("Dois meses e meio depois, 64% do total de casos de morte violenta ocorridos entre 21 e 27 de agosto no Brasil continuam em aberto e s� 12% registram alguma pris�o. � o que mostra um novo levantamento feito pelo G1 tendo como base todas as mortes registradas durante uma semana no pa�s. Se forem exclu�dos os casos em que a pol�cia n�o informa ou que n�o foi poss�vel obter o status dos crimes, o �ndice de casos em andamento sobe para 75% (e o de pris�es, para 15%). Mais de 230 jornalistas espalhados pelo pa�s apuraram e escreveram as hist�rias das v�timas. Agora, acompanham o andamento desses casos. O novo levantamento revela que: 761 casos est�o em andamento (64% do total OU 75% dos inqu�ritos aos quais o G1 teve acesso - 1.014) 216 casos est�o conclu�dos 27 inqu�ritos n�o foram nem sequer instaurados em 514 casos, a autoria ainda � desconhecida h� 370 casos com o autor ou os autores identificados pela pol�cia (sendo 512 pessoas ao todo) em 141 casos, foi efetuada a pris�o de um ou mais suspeitos (12% do total OU 15% se forem exclu�dos os casos n�o informados e os suic�dios) O C�digo de Processo Penal determina que um inqu�rito policial seja conclu�do em 10 dias quando houver pris�o em flagrante ou 30 dias em caso de inexist�ncia de pris�o cautelar. Os delegados, no entanto, podem pedir um prazo maior para elucidar o caso � o que normalmente acontece.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Brasileir�o 2023: Botafogo e Palmeiras reduzem chances de t�tulo e Gr�mio triplica sua condi��o|\n");
				printf("|Matéria 2. Terminal do mes�rio n�o mostra votos de eleitores; TSE esclareceu o boato                       |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria(" Brasileir�o 2023: Botafogo e Palmeiras reduzem chances de t�tulo e Gr�mio triplica sua condi��o\n\n");
						printf("Depois de sofrer a quarta derrota consecutiva, mais uma vez de virada, agora para o Gr�mio, no Rio, o Botafogo viu cair ainda mais as suas chances de ser campe�o do Brasileir�o de 2023, despencando para 30%, conforme as contas do Departamento de Matem�tica da Universidade Federal de Minas Gerais (UFMG). O time carioca ainda � l�der da competi��o, mas duas equipes t�m os mesmos 59 pontos: o Palmeiras, que tamb�m viu reduzir a probabilidade de erguer a ta�a depois de levar 3 a 0 do Flamengo, e o Gr�mio, que se colocou na luta pelo trof�u nacional nesta quinta. Terceiro colocado, o Palmeiras baixou de 25,4% para 19,8% a possibilidade de ganhar o torneio, enquanto que o Gr�mio, novo vice-l�der, mais que triplicou suas chances de ser campe�o do campeonato que n�o ganha desde 1996. A estat�stica de t�tulo do Red Bull Bragantino, derrotado pelo S�o Paulo por 1 a 0 na rodada e que caiu para o quarto lugar na tabela, tamb�m diminuiu, de 32,3% para 25,2%. Segundo os c�lculos da UFMG, depois do triunfo sobre o Palmeiras, o Flamengo, quinto colocado, com 56 pontos, aumentou a probabilidade de erguer o trof�u, mas o n�mero ainda � baixo. Subiu de 1,6% para 6,2%. Assim como o Botafogo e o Bragantino, o time rubro-negro tem 31 jogos disputados, um a menos, portanto, em rela��o aos demais. Sexto colocado, o Atl�tico Mineiro registra 0,42% de possibilidade de levantar a ta�a. Na parte de baixo da classifica��o, o Santos conseguiu respirar mais aliviado ao ganhar do Goi�s em Goi�nia por 1 a 0. Era disputa direta de rivais pr�ximos do Z-4. Com isso, subiu aos 41 pontos e viu o risco de queda baixar de 21,4% para 3,9%. Quem corre risco ainda maior de cair � o Corinthians, que trope�ou pelo segundo jogo seguido ao empatar com o Atl�tico Mineiro por 1 a 1 em casa. A possibilidade de o time de Mano Menezes ser rebaixado, por�m, ainda � baixa: de 7,5%. Dois dos outros times que lutam contra o descenso, Cruzeiro e Vasco, 17� e 16� colocados, ambos com 37 pontos, ainda se enfrentam pela 33� rodada, mas o jogo foi adiado. Ambos t�m 32,7% e 19,2% de probabilidades de retornar � S�rie B, respectivamente. Quem est� bastante amea�ado � o Bahia, que tamb�m tem 37 pontos, mas j� jogou e perdeu. O time do t�cnico Rog�rio Ceni, que ocupa a 15� posi��o, levou 3 a 0 do Cuiab� em casa e viu o risco de cair para a segunda divis�o subir consideravelmente, de 31,4% para 49,7%. Ceni foi contratado com a �nica miss�o de salvar a equipe da queda e n�o est� conseguindo fazer isso. O perigo s� n�o � maior do que o Goi�s, que soma 35 pontos e � 18�. Depois de perder para o Santos no confronto direto, a equipe goiana agora registra 84,8% de probabilidade de descer � S�rie B. O Coritiba (99,9%) pode ter seu rebaixamento decretado na pr�xima rodada e o Am�rica Mineiro foi o primeiro time a cair na competi��o.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){//falta 1 aqui estadao dia 9
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("De acordo com o TSE, a grava��o foi feita em uma se��o eleitoral em Rio Branco, no Acre. O painel mostrado no v�deo exibe duas linhas com duas sequ�ncias de n�meros cada. A primeira linha aponta, respectivamente, a quantidade de eleitores com e sem biometria que compareceram � se��o e o total de pessoas que votam naquele local. A segunda linha do painel diz respeito ao quantitativo de eleitores com biometria cadastrada que tiveram problemas no reconhecimento da digital. O �ltimo n�mero da sequ�ncia � referente �s pessoas com biometria cadastrada que compareceram ao local de vota��o at� o momento. Os dados da coluna inferior mudam concomitantemente porque h� possibilidade de o eleitor ter a biometria cadastrada, mas que n�o foi reconhecida pelo leitor biom�trico do terminal do mes�rio na hora da vota��o�, explica o TSE. Conforme explicado neste v�deo, o terminal permite que o mes�rio acompanhe diversas informa��es sobre o status da urna eletr�nica. Por exemplo, o tempo usado durante a vota��o, o n�vel de bateria, a conex�o com a energia, entre outras. No entanto, o mes�rio n�o tem acesso a qualquer dado sobre o voto do eleitor, que � sigiloso. Dessa forma, n�o � poss�vel saber em qual candidato o cidad�o votou. O desempenho de cada candidatura em uma se��o s� � disponibilizado ap�s o encerramento da vota��o, por meio do Boletim de Urna (BU), que traz um relat�rio completo sobre o n�mero de votos por candidato, partido, nulos e brancos. Conforme j� verificado pelo Comprova, o sistema de vota��o brasileiro pode ser auditado e nunca foi identificada ou comprovada qualquer fraude. Atualmente, o processo eleitoral passa por diversas etapas de auditoria e fiscaliza��o antes, durante e depois das elei��es. Entre as iniciativas promovidas pela Justi�a Eleitoral para aumentar a transpar�ncia e seguran�a sobre o processo est�o a abertura do c�digo-fonte, que � disponibilizado para entidades interessadas, e o Teste P�blico de Seguran�a, feito para identificar poss�veis vulnerabilidades nas urnas e corrigi-las antes das elei��es. Neste site, o TSE lista todas as oportunidades de auditoria e fiscaliza��o do sistema. Participam do processo de auditoria partidos pol�ticos, federa��es e coliga��es, Pol�cia Federal, Minist�rio P�blico, Congresso Nacional, Supremo Tribunal Federal e diversas outras entidades. O que diz o respons�vel pela publica��o: O Comprova entrou em contato com o perfil respons�vel pela postagem no X (antigo twitter), mas ele n�o aceita mensagens. Tamb�m houve contato por meio do perfil do respons�vel pela grava��o e pela conta do Kwai que publicou o v�deo, mas n�o obteve resposta at� a publica��o desta verifica��o.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1.Fim de semana em SP tem mostras de cinema, roda de samba e feira gastron�mica|\n");
				printf("|Matéria 2. Desmatamento na Amaz�nia fica abaixo de 10 mil km2 pela primeira vez desde 2018                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O segundo fim de semana de novembro est� recheado de op��es de lazer em S�o Paulo. Mostras de cinema, degusta��o de espumantes e feiras gastron�micas fazem parte da programa��o. Confira a seguir destaques da se��o especial O Melhor do Fim de Semana. Produzida pela equipe do Guia Folha e publicada sempre �s sextas, ela pretende orientar o leitor sobre o que h� de melhor na programa��o de S�o Paulo. Novembro tem sido um m�s agitado na capital paulista, com F�rmula 1, UFC e um extenso calend�rio de grandes shows. A movimenta��o tamb�m � vista no circuito de cinemas da capital, que s� nesta semana ter� a exibi��o de cinco mostras. Entre elas, h� op��es para quem gosta de filmes franceses e italianos, ou quer conhecer t�tulos que t�m a comida como tem�tica. Confira a lista com os destaques a seguir. Festival de Cinema Italiano no Brasil 2023 At� 9 de dezembro, seis endere�os de S�o Paulo exibem produ��es italianas da atualidade e do s�culo passado. A sele��o de 32 filmes � composta por 16 longas in�ditos e 16 cl�ssicos na retrospectiva "A Com�dia � Italiana", que chega a todo o Brasil pelo streaming, dispon�vel no site do festival. Os dois formatos podem ser assistidos de gra�a. Neste s�bado (11), o cinema Petra Belas Artes exibe "A Sombra de Caravaggio"; a sess�o acontece �s 16h. A cinebiografia que conta a hist�ria do artista tem dire��o de Michele Placido. Festival Varilux de Cinema Franc�s A edi��o de 2023 do festival come�ou na �ltima quinta-feira (9) e vai at� dia 22 de novembro. Em S�o Paulo, salas de nove cinemas recebem os 22 filmes selecionados. Exibido na Mostra Internacional de Cinema de S�o Paulo e premiado no Festival de Cannes, "Anatomia de uma Queda", de Justine Triet, pode ser assistido �s 20h40 deste s�bado (11) no Espa�o Ita� de Cinema Augusta. J� "Making Of", de C�dric Kahn, ser� exibido no Cine LT3, �s 20h neste domingo (12). Food Film Fest At� o dia 19, a mostra de cinema exibe, de gra�a, cerca de 30 produ��es ligadas � alimenta��o. Na sele��o est�o filmes como "Os Catadores e Eu", de Agn�s Varda. Quem assistir a "A Dama e o Vagabundo" neste s�bado �s 14h30 na Cinemateca Brasileira, poder� degustar um prato de macarronada como o da anima��o. MixBrasil O principal festival destinado � cultura LGBTQIA+ do pa�s retorna neste ano para sua 31� edi��o, entre os dias 9 e 19 de novembro, e novamente com vencedores do Teddy, trof�u destinado a filmes queer do Festival de Berlim. � o caso de "Todas as Cores Entre o Preto e o Branco", de Babatunde Apalowo, exibido �s 16h deste s�bado no Museu da Imagem e do Som em S�o Paulo. Novembro Negro O Instituto Moreira Sales exibe neste s�bado, �s 17h, os filmes "Ar condicionado", de Fradique, e "Palenque", de Sebasti�n Pinz�n Silva. A sequ�ncia de filmes, que se repete no dia 21 deste m�s, sai por R$ 10 na bilheteria do local ou pelo site.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Ap�s quatro anos consecutivos de taxas alt�ssimas, o desmatamento anual na Amaz�nia ficou abaixo de 10 mil km� pela primeira vez. De agosto de 2022 a julho de 2023, foram perdidos 9.001 km� de floresta, uma redu��o de 22,3% na compara��o com o per�odo anterior. Os dados s�o do programa Prodes, do Inpe (Instituto Nacional de Pesquisas Espaciais), que foram divulgados nesta quinta-feira (9) e s�o considerados os n�meros oficiais de desmate no pa�s, sendo usados na defini��o de pol�ticas p�blicas. A taxa rompe o padr�o estabelecido durante o governo do ex-presidente Jair Bolsonaro (PL) e representa uma vit�ria para o presidente Lula (PT), que tinha na pauta ambiental um dos focos da sua plataforma eleitoral.Marina Silva (Rede), escolhida pelo petista para chefiar novamente MMA (Minist�rio do Meio Ambiente e Mudan�a do Clima), foi a respons�vel pela cria��o do programa que reduziu o desmatamento de 27,8 mil km�, em 2004, para a m�nima hist�rica, de cerca de 4.600 km�, em 2012. A ministra afirmou que enfrentou neste ano uma situa��o mais complicada que em 2003, quando assumiu a pasta pela primeira vez. Segundo ela, o governo Bolsonaro foi leniente na regi�o e permitiu a prolifera��o de uma s�rie de crimes, como garimpo ilegal e tr�fico de armas e drogas. Hoje h� uma profus�o de criminalidades ap�s completo desmonte da estrutura de governan�a ambiental, de destrui��o de �rg�os de comando e controle e de incentivo, inclusive, a atividades que redundavam em desmatamento, disse. Ela apontou tamb�m que os dados poderiam ser melhores, mas o retrato ainda considera cinco meses da gest�o Bolsonaro. O per�odo avaliado pelo Prodes vai de agosto a julho por ser o intervalo entre as esta��es secas da floresta amaz�nica, quando o desmate � facilitado pela falta de chuvas. Conseguimos uma redu��o de 22% do desmatamento mesmo tendo uma 'contrata��o' de 6.000 km� [desmatados na Amaz�nia] do governo Bolsonaro, afirmou a ministra, referindo-se �s taxas de agosto a dezembro de 2022, que comp�em os n�meros rec�m-divulgados. Desde janeiro, quando assumimos o governo, o presidente Lula assumiu o compromisso com o desmatamento zero at� 2030. Grande parte desse desmatamento vem da Amaz�nia. N�s sab�amos que era um desafio muito grande. Esta foi a maior queda percentual no �ndice anual de desmatamento em uma d�cada. De 2011 para 2012, a redu��o tinha sido de quase 29% �no entanto, a extens�o do desmate era bem menor. Em 2011, tinham sido 6.418 km� derrubados. Em 2012, o valor atingiu o m�nimo hist�rico do Prodes, de 4.571 km�. Os n�meros s�o divulgados em meio a uma seca hist�rica na Amaz�nia, que fez rios virarem desertos e isolou comunidades. O fen�meno � provocado pela soma de fatores como o El Ni�o, as mudan�as clim�ticas, o aquecimento do Atl�ntico Norte e a degrada��o da floresta. A estiagem tamb�m facilita com que as queimadas associadas ao desmatamento se espalhem. Os inc�ndios florestais t�m deixado Manaus, a cidade mais populosa da regi�o, cheia de fuma�a por v�rios dias. Simultaneamente, o El Ni�o, que intensifica e prolonga secas no Norte e Nordeste , traz mais chuvas para o Sul �como tem acontecido nos alagamentos enfrentados no Rio Grande do Sul. A ministra destacou que, apesar de ser um fen�meno natural, o El Ni�o tem sido mais frequente e intenso. As consequ�ncias s�o dram�ticas. N�s temos que agir no emergencial, como estamos agindo �s� no estado do Amazonas j� foram mais de R$ 600 milh�es. Quando a gente olha para o Rio Grande do Sul, algo em torno de R$ 1 bilh�o [em recursos federais], afirmou. Marina disse ainda que a agenda de adapta��o clim�tica est� muito atrasada, mas que � uma das prioridades do governo. Agora, a melhor forma de enfrentar estruturalmente � continuar reduzindo a emiss�o de CO2, n�o s� no Brasil, mas no mundo", ponderou. "No Brasil, a melhor forma � combatendo o desmatamento. Os novos dados apresentados apontam que o desmate na Amaz�nia Legal caiu 40% no Amazonas, 21% no Par�, 42% em Rond�nia e teve um aumento de 9% em Mato Grosso. Esse �ltimo estado e outros da regi�o Centro-Oeste j� haviam apresentado alta nos crimes ambientais em outro bioma. Em setembro, houve o mais alto �ndice de desmatamento para o m�s j� registrado no cerrado. Foram perdidos 679,7 km�. A maior marca at� ent�o para o per�odo era de 451,5 km�, em setembro de 2018. Em rela��o ao mesmo m�s em 2022, o crescimento foi de 149% no bioma. Questionada se haveria a possibilidade de uma migra��o da atividade dos desmatadores do bioma amaz�nico para o cerrado, Marina Silva afirmou n�o ter ind�cios que apontem nesse sentido. AVAN�OS E LACUNAS Especialistas veem com otimismo os n�meros apresentados nesta quinta, enquanto apontam tamb�m lacunas e passos que deveriam ser seguidos. A redu��o do desmatamento na Amaz�nia observado pelo Prodes, ainda que considere o �ltimo semestre de 2022, � um �timo sinal, resultado de uma a��o coordenada do governo. Ainda assim, os n�veis de desmatamento continuam altos e precisamos zerar essa destrui��o, avaliou Mariana Napolitano, diretora de estrat�gia da ONG WWF-Brasil. Beto Mesquita, membro da Coaliz�o Brasil e diretor de florestas e pol�ticas p�blicas da BVRio, tamb�m destaca a atua��o do Estado. A redu��o na taxa de desmatamento n�o se deu de maneira aleat�ria. Os dados indicam que provavelmente foram consequ�ncia de um conjunto de a��es que v�m sendo tomadas pelos governos federal e estaduais, sobretudo pela articula��o entre eles, disse Mesquita. A��es como o cancelamento de CAR (Cadastro Ambiental Rural) em florestas p�blicas, a destrui��o de maquin�rio para desmate e a apreens�o de gado em terras ind�genas s�o sinais importantes das medidas de comando e controle, enumera Mesquita. Marcio Astrini, secret�rio-executivo do Observat�rio do Clima, avaliou que os n�meros evidenciam a diferen�a abissal entre a agenda ambiental do atual governo e a de seu antecessor. Astrini disse acreditar, por�m, que a atua��o do Congresso pode nublar as boas not�cias. N�o adianta a gente combater o crime ambiental no ch�o da floresta e fortalecer esse mesmo crime no carpete do Congresso. E � isso que est� acontecendo. A bancada ruralista, que � uma bancada que historicamente atua contra as legisla��es ambientais, est� tendo a benevol�ncia dos negociadores do governo dentro do Congresso, em v�rias agendas, destacou. Entre as pautas ambientalmente sens�veis que tramitam hoje na C�mara e no Senado est�o propostas que mudam o processo de licenciamento, a demarca��o de terras ind�genas e a libera��o de agrot�xicos. BOAS NOVAS PARA A COP28 Os n�meros positivos s�o uma boa not�cia para o governo brasileiro levar � COP28, a confer�ncia do clima da ONU (Organiza��o das Na��es Unidas), que acontece a partir de 30 de novembro em Dubai, nos Emirados �rabes. A c�pula � o principal espa�o de discuss�o global sobre as mudan�as clim�ticas, e o Brasil vinha sendo cobrado pelos resultados negativos sob Bolsonaro. Os dados do Inpe mostram que apenas os meses de agosto a dezembro de 2022 representaram uma alta de 54% em rela��o aos mesmos meses do ano anterior. Por outro lado, os sete primeiros meses do governo Lula tiveram uma redu��o no desmatamento de 42% em rela��o aos mesmos meses de 2022. Os n�meros mensais s�o referentes ao Deter (sistema usado para subsidiar as a��es de fiscaliza��o). A efetividade do combate ao crime ambiental aumenta a for�a do pa�s para cobrar demandas que considera importantes, como o cumprimento de promessas de financiamento e ado��o de metas mais ousadas por pa�ses ricos. N�s n�o queremos ficar na in�rcia dos resultados j� alcan�ados, afirmou Marina Silva. Vamos participar da COP28 buscando mais compromissos dos pa�ses desenvolvidos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat�ria 1.C�mara poder� fatiar reforma tribut�ria para facilitar nova aprova��o|\n");
				printf("|Mat�ria 2.Paran� p�e torcedores no vesti�rio e emociona: �Carregar time nas costas                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("C�mara poder� fatiar reforma tribut�ria para facilitar nova aprova��o\n\n");
						printf("Aprovada em dois turnos pelo Senado Federal na �ltima quarta-feira (8), com 53 votos a favor e 24 contra, a reforma tribut�ria volta � C�mara dos Deputados para uma nova rodada de discuss�es, j� que teve pontos alterados durante a passagem pelo Senado. A Proposta de Emenda � Constitui��o (PEC) 45/2019, que tinha sido aprovada pelos deputados numa longa semana de negocia��es no in�cio de julho, agora poder� ser fatiada para facilitar a nova aprova��o, e assim poder ser promulgada pelo governo ainda neste ano, como acena o presidente da Casa, Arthur Lira (PP-AL). Lira disse a jornalistas, antes mesmo do resultado da aprova��o do texto pelo Senado, que uma alternativa para facilitar a tramita��o da proposta seria aprovar logo os pontos de consenso entre C�mara e Senado, e deixar para uma discuss�o posterior as mudan�as efetuadas pelos senadores. �A C�mara ter� que se pronunciar sobre o que o Senado mudou, isso � um fato, ponto, o que n�o impede que se 90% do texto for comum, esses 90% sejam promulgados. Eu penso que, em um tema feito esse, o bom senso vai prevalecer�. Nos bastidores, parlamentares citaram o esfor�o de Lira quando o texto do Grupo de Trabalho formado na C�mara para discutir a proposta de reforma tribut�ria foi a Plen�rio, com grande resist�ncia de setores da economia e governadores. Eles acreditam que desta vez o presidente da Casa far� o mesmo, j� que a reforma, em discuss�o h� mais de 40 anos, pode ser o "grande legado" de sua gest�o na presid�ncia, que termina no in�cio de 2025. O relator da reforma tribut�ria na C�mara, deputado Aguinaldo Ribeiro (PP-PB), disse que vai aguardar agora a reda��o final do texto pelo Senado, e a chegada � C�mara, para que os deputados possam avaliar o que foi alterado pelo Senado, e, a partir de conversas entre Lira e os l�deres, seja estabelecido um calend�rio para aprovar e promulgar a mat�ria at� o final de 2023. �N�o � uma mat�ria simples, mas n�s vamos buscar manter na C�mara o imposto ideal, que � o que tem o menor impacto para o cidad�o brasileiro. Agora passa a ser o momento da C�mara, para que de forma bastante tranquila e cooperativa se fa�a essa discuss�o, para que n�s tenhamos o texto constitucional aprovado esse ano; e se evite o que algumas pessoas chamam de pingue-pongue, que se evite que o texto aprovado aqui v� para o Senado e fique num momento de discuss�o prolongada sem o fechamento do texto constitucional�. O relator disse que pretende conversar com o presidente da C�mara o quanto antes para decidirem a possibilidade de um eventual fatiamento da proposta, e sobre um calend�rio e a orienta��o de como a mat�ria ser� tratada na Casa, se ser� enviada � Comiss�o de Constitui��o e Justi�a ou se o texto ir� direto ao Plen�rio.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Paran� p�e torcedores no vesti�rio e emociona: �Carregar time nas costas�\n\n");
						printf("O departamento de marketing do Paran� levou torcedores, grupo de todas as faixas et�rias, para o vesti�rio da Vila Capanema. A ideia foi mostrar a import�ncia dos paranistas para os quatro jogos finais da disputa, a come�ar pelo Luverdense, sexta-feira (10), na Vila Capanema. �S� dependemos de n�s. S� a gente sabe o que passamos para chegar at� aqui. Restam quatro jogos e estamos no G4. Se faltar perna para os caras no campo, n�s vamos ajudar no nosso grito. No primeiro carrinho, vamos inflamar a arquibancada�, discursa torcedora do Paran�, no papel de treinadora. Os selecionados pelo v�deo se emocionaram de verdade com a produ��o, mais um trabalho de destaque do clube para divulgar o Paran� nas redes sociais. O trabalho paranista nas redes sociais � o destaque da temporada no futebol brasileiro. Contra o Oeste, mesmo com a derrota, o trabalho chamou a aten��o, com o uso dos jogadores conclamando os f�s para uma batalha no Oeste � uma guerra de 10 anos, em alus�o ao tempo de perman�ncia da equipe na S�rie B.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	case 10://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Matéria 1.Mundo Bita, 'A Bela e a Fera' e mais: o que fazer com crian�as no fim de semana e no feriado 15 de novembro|\n");
				printf("|Matéria 2.Rubem Valentim, Angelo Venosa, Evandro Teixeira e outras exposi��es no Rio de Janeiro         |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tRecrea��o gratuita no CCBB e na Casa Firjan, pe�a dos Detetives do Pr�dio Azul e montagem baseada no livro 'Di�rio de Pilar na Amaz�nia' animam o fim de semana no Rio de Janeiro. J� no feriado da Proclama��o da Rep�blica do Brasil (15 de novembro), ter�o apresenta��o do Mundo Bita na Arena Jockey, concerto da 'A Bela e a Fera' e atividades na Ecovilla Ri Happy, entre as op��es para a crian�ada se divertir. Confira a agenda de eventos infantis entre os dias 9 a 15 de novembro:Fique por dentro: siga o Rio Show no Instagram (@rioshowoglobo), assine a nossa newsletter e entre na comunidade do WhatsApp para ficar por dentro do melhor da cidade D.P.A., a pe�a 2' mistura refer�ncias do cinema e os mist�rios da s�rie do Gloob; Casa Firjan. O espa�o recebe um festival que re�ne escolas de Botafogo, cada uma a frente de atividades e oficinas como de musicaliza��o infantil (�s 14h), e de rob�tica (�s 14h30). Rua Guilhermina Guinle 211, Botafogo. S�b, das 9h �s 17h. Gr�tis. Futuro Presente 2023. Entre as atividades do festival, que termina no fim do m�s, h� oficinas de realidade aumentada (�s 11h e �s 15h) e de intelig�ncia artificial (�s 12h30 e �s16h30). Ambas para crian�as a partir de 8 anos. CCBB. S�b, a partir das 10h. Gr�tis. Teatro, dan�a, musicais e shows �A cigarra e a formiga�. A f�bula de Esopo ganha montagem dirigida por R� Sant�Anna e Alexandre Regis. Cine Teatro, Shopping Barra Point. S�b e dom, �s 16h. R$ 20 (meia). At� 26 de novembro. Circo Dux. No espet�culo �Teco Teco�, dois palha�os da companhia encontram um tesouro recheado de mem�rias da hist�ria do circo brasileiro. Sesc Tijuca. Rua Bar�o de Mesquita 539. S�b e dom, �s 16h. R$ 5 (meia). At� 26 de novembro. �Di�rio de Pilar na Amaz�nia�. Com Miriam Freeland � frente do elenco, a pe�a baseada em livro hom�nimo de Fl�via Lins e Silva conta a aventura de Pilar e seus amigos na tentativa de impedir um grupo de madeireiros de desmatarem a floresta. Teatro Clara Nunes, Shopping da G�vea. S�b e dom, �s 16h. R$ 19,80 (meia balc�o superior. R$ 45 (meia plateia e balc�o). At� 26 de novembro. 'Di�rio de Pilar na Amaz�nia' , 'Di�rio de Pilar na Amaz�nia' � Foto: Divulga��o/ Gal Oliveira �D.P.A., a pe�a 2 � Um mist�rio musical em Magowood�. Com o elenco principal da s�rie do Gloob, os detetives mirins tentam desvendar mais um mist�rio. Com participa��o de Helo�sa e Luisa P�riss�. Teatro Multiplan, VillageMall. S�b e dom, �s 14h e �s 16h30. A partir de R$ 19,80 (meia). At� 19 de novembro. 'Gag�'. Com texto de Marcelo Romagnoli, a pe�a mostra a dupla Tant� e Lel� em aventuras guiadas pela imagina��o, com palha�aria, brincadeiras, m�sica e dan�a. Teatro dos Quatro, Shopping da G�vea. S�b e dom, �s 16h. R$ 40 (meia). At� 3 de dezembro. �Louise/os ursos.� Adapta��o da Pandorga Cia de Teatro para a pe�a da francesa Karin Serres sobre uma menina que v� ursos transparentes. Centro Cultural Justi�a Federal, Cinel�ndia. S�b e dom, �s 16h. R$ 15 (meia). At� 12 de novembro. �Miguel, o invis�vel�. Baseada no livro hom�nimo de Tati Ingrid Ad�o, a pe�a mostra dilemas e questionamentos do universo infantojuvenil. Barra Point Shopping,Sala Del�Art. Av. Armando Lombardi 350.S�b, �s 17 h. R$ 35 (meia). At� 25 novembro. �O pescador e a estrela�. No musical, um menino se sente sozinho e infeliz, at� receber a visita de uma mensageira das estrelas. EcoVilla Ri Happy, dentro do Jardim Bot�nico. S�b e dom, �s 16h. R$ 35 (meia). At� 12 de novembro. �Vamos brincar�. Com um repert�rio de can��es autorais, Tio J� e sua trupe de m�sicos e artistas circenses abordam a import�ncia da brincadeira na vida das crian�as. Teatro Glaucio Gill. Pra�a Cardeal Arcoverde, Copacabana. S�b e dom, �s 16h. R$ 25 (meia). At� 26 de novembro. Parques de divers�o Esta��o Turma da M�nica. O parque dedicado � personagem de Mauricio de Sousa tem casa na �rvore, brinqued�es, tobog�, casinha com miniatura dos personagens, entre outras atra��es. Shopping Metropolitano. Seg a sex, das 13h �s 21h. S�b, das 10h �s 22h. Dom e feriados, das 12h �s 21h. A partir de R$ 99,90 (crian�as com adulto acompanhante, por 3 horas). Parque da Magia. Escorregas, brinquedos e atividades com �gua est�o entre as 21 atra��es a c�u aberto do parque, para crian�as de at� 12 anos. ParkJacarepagu�. Ter a dom, das 10h �s 22h. R$ 15 (meia). Sujeito a cancelamento em condi��es clim�ticas ruins. Passeios BioParque do Rio. O zool�gico abriga mais de mil animais de 140 esp�cies. Quinta da Boa Vista. Diariamente, das 9h �s 16h. A partir de R$ 23,50 (infantil). Lagoa Aventuras. Em meio � Mata Atl�ntica, no Parque da Catacumba, � poss�vel praticar atividades como arvorismo (a partir de R$ 30), tirolesa (R$ 30) e rapel (R$ 80). H� pacotes promocionais. Ter a dom (inclusive feriados), das 9h30 �s 16h30. Fazendinha Rio. O espa�o tem dezenas de animais, como vacas, porcos, gansos, cavalos, coelhos e cabras, al�m de restaurantes, campo de futebol, trilha de arvorismo e pacotes de col�nias de f�rias. Estrada dos Bandeirantes 26.645, Vargem Grande. S�b, dom e feriados, das 10h �s 17h. R$ 54 (meia). Atividades canceladas em dias de chuva. Planet�rio da G�vea. Al�m do Museu do Universo, com uma s�rie de atra��es interativas sobre o espa�o sideral, h� sess�es de c�pula voltadas para o p�blico infantil: �Brincando entre estrelas� (s�b e dom, �s 11h15, �s 13h, �s 15h15. Dom, �s 16h30); e �Uma aventura no Planet�rio� (dom, �s 14h). Rua Vice-Governador Rubens Berardo 100, G�vea. Museu: R$ 10 (meia). Sess�o de C�pula e Museu: R$ 20 (meia). Tour no Maracan�. Para toda a fam�lia, a visita guiada passa pelo acervo com pe�as cedidas por craques, zona mista, salas de aquecimento dos jogadores e vesti�rio. Av. Presidente Castelo Branco, port�o 2. Diariamente, das 9h �s 17h (hor�rio pode mudar em dias de jogo). R$ 30 (meia). Indoor Barra Bowling Grill. Al�m das 20 pistas de boliche, o espa�o tamb�m oferece restaurantes e � uma op��o para eventos, como festas de anivers�rio. Barra Shopping. Seg a sex, das 16h �s 22h. S�b, 13h �s 22h. Dom e feriados, 13h �s 21h. A partir de R$ 210. Escape 60. No jogo, mais indicado para crian�as a partir de 10 anos, os participantes t�m uma hora para resolver um enigma e �escapar � da sala. Entre os temas que mais agradam fam�lias, est� um sobre a s�rie �Chaves�. O n�mero de participantes depende de cada desafio, sempre com reserva. Via Parque: 97916-3891. Downtown: 98068-0812. Copacabana: 99287-3530. A partir de R$ 99,90, por pessoa. Neon party. Enquanto os respons�veis assistem aos espet�culos do Hall Ecovilla Ri Happy os pequenos (a partir de 5 anos ) podem curtir atividades com recreadores em um espa�o ao lado. O tema deste m�s � festa neon, com pista de dan�a, oficina de bijuterias e gincanas. Sex, das 19h30 �s 21h30 (durante o per�odo do espet�culo no Hall EcoVilla Ri Happy). R$ 100. At� o final de novembro. NBA Store. Mais do que a loja da NBA, o que faz a cabe�a de pequenos f�s de basquete � jogar numa quadra oficial (com cestas em mais de uma altura) e visitar a r�plica de um vesti�rio. � recomendado reservar (a partir de R$ 50, para usar a quadra). Uptown Barra. Av. Ayrton Senna 5.500 (97233-4874). Seg, ter, qui a s�b, das 11h �s 21h. Qua (dia 15) e dom, das 12h �s 20h. Impulso Park e Big Jump USA. Camas el�sticas, piscina com espuma para se jogar, entre outras atividades s�o espa�os especializados em pula-pula (� preciso usar meia antiderrapante). Impulso Park: Casa Shopping. Seg a sex, das 13h �s 22h. S�b, das 10h �s 22h.Dom, das 10h �s 20h. A partir de R$ 70, meia. Big Jump USA: Shopping Aerotown, Barra. Seg a qui e dom, das 10h �s 21h. Sex, das 14h �s 22h. S�b, das 10h �s 22h.R$ 54 (seg a qui) e R$ 64 (sex a dom). Roller Arena. Al�m da pista de patina��o, h� atividades como arco e flecha (R$ 50, meia hora, para maiores de 13 anos) e minigolfe (R$ 20, m�nimo 5 anos). Via Parque. Ter a s�b, das 10h �s 22h. Dom e feriados, das 12h �s 21h.R$ 60 (uma hora, com aluguel de patins, ou por tempo ilimitado, se levar o patins). Museu, centros culturais e exposi��es. Futuros � Arte e Tecnologia. Al�m de um museu com mais de 130 mil itens da hist�ria das telecomunica��es, o centro cultural oferece passeio de bal�o feito por realidade virtual (� necess�rio retirar a senha, qua a dom, das 12h �s 18 h). Rua Dois de Dezembro 63, Flamengo. Qua a dom, das 11h �s 20h. AquaRio. Para celebrar seus sete anos, visitantes que tamb�m comemoram o anivers�rio em novembro t�m gratuidade at� o fim do m�s na visita ao aqu�rio. Al�m de ver os animais marinhos, � poss�vel conferir a instala��o �Mar de espelhos� , com nove ambientes e proje��es do teto ao ch�o, e o Museu de Cera, com mais de 30 est�tuas. Pra�a Muhammad, Gamboa. Seg a sex, das 9h �s 17h. S�b, dom e feriados, das 9h �s 18h. �ltima entrada 1h antes. AquaRio: R$ 70 (meia). Mar de Espelhos e Museu de Cera: R$ 29,50 cada (meia). Combo para os tr�s: R$ 129 (meia). Espa�o Cultural Marinha e Ilha fiscal. Um programa que vale por dois. No Espa�o Cultural, o p�blico pode entrar no submarino Riachuelo e conhecer o navio Bauru, o helic�ptero Sea King e uma recria��o da �Nau do descobrimento�. Dali, partem os passeios de barco para a Ilha Fiscal, onde aconteceu o �ltimo baile do Imp�rio. Orla Conde, Pra�a Quinze. Espa�o Cultural: ter a dom e feriados, das 11h �s 17h. R$ 10 (meia). Ilha Fiscal: qui a dom, �s 12h45, �s 14h15 e �s 15h30. Gr�tis (at� 2 anos) e R$ 25 (meia). Museu de Astronomia e Ci�ncias Afins (Mast). Al�m de exposi��es tempor�rias, o Mast tem acervo que conta a hist�ria da astronomia. Todo primeiro s�bado do m�s (exceto em dias de chuva), tem observa��o do c�u ( a partir das 18h) e planet�rio infl�vel. Rua General Bruce 586, S�o Crist�v�o. Ter a sex, das 9h �s 16h30. S�b e feriados, das 14h �s 17h30. Gr�tis. Museu da Vida Fiocruz. Al�m de visitar o castelo hist�rico, � poss�vel passar por mais cinco espa�os que mostram curiosidades cient�ficas e sobre a institui��o. Av. Brasil 4.365, Manguinhos. Ter a sex, das 9h �s 16h30. S�b, das 10h �s 16h. N�o abre nos feriados. Gr�tis. Museu dos Bombeiros. O Centro Hist�rico e Cultural do CBMERJ mostra a hist�ria da corpora��o e elementos usados desde o 1� Corpo do Brasil, criado pelo Imperador Dom Pedro II. Por ser �rea militar, n�o pode entrar com roupas acima do joelho, bon�s, decotes e transpar�ncias. Pra�a da Rep�blica 45, Centro. Ter a sex, de 10h �s 17h. S�b, das 9h �s 16h. Gr�tis. Museu das Ilus�es. O espa�o re�ne mais de 80 instala��es que brincam com a ilus�o de �tica. Via Parque, Barra. Seg a s�b, das 10h �s 22h. Dom e feriado, das 12h �s 20h. �ltima entrada 1h antes. R$ 35 (meia). Pacotes para grupos: R$ 105 (3 pessoas), R$ 140 (4) e R$ 175 (5). �Pasteur, o cientista�. A mostra interativa conta com sete espa�os que passeiam pela trajet�ria e os feitos do cientista franc�s. F�brica de Espet�culos. Av. Rodrigues Alves 323, Gamboa. Ter a sex, das 9h �s 17h. S�b , dom e feriado, das 10h �s 18h. At� 3 de dezembro. Gr�tis. �Pegadas do Pequeno Pr�ncipe�. Com dez ambientes, a mostra interativa prop�e um mergulho no universo do cl�ssico de Antoine Saint-Exup�ry. Rio Sul. Ter a s�b, das 10h20 �s 21h . Dom e feriados, das 12h20 �s 20h. Ingressos a partir de R$ 19,80 (meia). At� 19 de novembro. Planet�rio da G�vea. Al�m do Museu do Universo, com uma s�rie de atra��es interativas sobre o espa�o sideral, o local oferece sess�es de c�pula voltadas para o p�blico infantil: �Brincando entre estrelas� (qui e dom, �s 11h15, �s 13h, �s 15h15 e �s 16h30); e �Uma aventura no Planet�rio� (qui e dom, �s 14h). Rua Vice-Governador Rubens Berardo 100, G�vea. Museu: R$ 10 (meia). Sess�o de C�pula e Museu: R$ 20 (meia). �A Bela e a Fera in concert�. O cl�ssico da Disney sobe ao palco ao som de uma orquestra ao vivo. Cidade das Artes. Av. das Am�ricas 5.300, Barra. Qua, �s 15h e �s 17h30. A partir de R$ 60 (meia). EcoVilla Ri Happy. Para festejar seu primeiro ano de funcionamento, o espa�o promove apresenta��o de malabarismo, perna de pau, oficinas e outras brincadeiras. Jardim Bot�nico. Qua, das 14h �s 18h. Mundo Bita. A turma, que coleciona mais de 12 milh�es de inscritos no YouTube, apresenta o show �Vamos cultivar amizades�, com sucessos como �Fazendinha� e �Safari�. Arena Jockey. Pra�a Santos Dumont 31. Qua, �s 17h.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Rubem Valentim, Angelo Venosa, Evandro Teixeira e outras exposi��es no Rio de Janeiro\n\n");
						printf("Entre os destaques das exposi��es em cartaz no Rio de Janeiro, de 9 a 15 de novembro, est�o Rubem Valentim - Sagrada geometria, na Pinakotheke Cultural (abertura segunda-feira, 13 de novembro), que foi eleita pela Associa��o Paulista de Cr�ticos de Arte (APCA) como a melhor retrospectiva de 2022 e Auto-acusa��o, no Centro Municipal de Arte H�lio Oiticica (abertura s�bado, 11 de novembro, �s 14h), a primeira individual da atriz e diretora B�rbara Paz no Rio. S�o os �ltimos dias para conferir Angelo Venosa, escultor, na Casa Roberto Marinho (at� domingo), 'Evandro Teixeira, Chile, 1973', no CCBB (at� segunda-feira) e 'Sai-Fai: fic��o cient�fica � brasileira', no Museu do Amanh� (at� domingo), entre muitas outras. Confira abaixo um roteiro mais detalhado das mostras em cartaz na cidade nesta semana: Fique por dentro: siga o perfil do Rio Show no Instagram (@rioshowoglobo), assine a newsletter semanal e entre na comunidade do WhatsApp para saber tudo sobre a programa��o da cidade .Melhor retrospectiva do ano em SP: mostra de Rubem Valentim chega ao Rio .Veja fotos das exposi��es em cartaz no Rio 'Radiola de promessa', da s�rie 'Atualiza��es traum�ticas de Debret', de G� Viana: trabalho exposto na sala que destaca as origens soul do funk, no MAR	Passeata dos 100 mil, no Rio de Janeiro, em 1968, em cartaz no CCBB � Foto: Evandro Teixeira/Acervo IMS Museus e centros culturais da cidade t�m programa��o extensa, 'Carolina Maria de Jesus: um Brasil para os brasileiros'. A mostra re�ne mais de 400 itens, entre livros, manuscritos e fotos, al�m de trabalhos de artistas que dialogam com vida e obra da escritora, conhecida principalmente por �Quarto de despejo� (1960). At� 26 de novembro. 'A constru��o do MAR e a Pequena �frica'. Em comemora��o aos dez anos do museu, a mostra percorre a sua hist�ria e projeto arquitet�nico, com mais de cem obras, entre fotos e v�deos. At� 31 de dezembro. Pra�a Mau� 5, Centro. Ter a dom, das 11h �s 18h. R$ 20. Centro Cultural do Banco do Brasil (CCBB) 'Evandro Teixeira, Chile, 1973'. Um dos grandes nomes do fotojornalismo nacional, Evandro Teixeira ganha uma exposi��o com 190 imagens, que focam na cobertura do golpe militar naquele pa�s. (Para saber mais, leia a mat�ria). At� 13 de novembro. 'Evandro Teixeira, Chile, 1973' A �ltima sala da exposi��o 'Evandro Teixeira, Chile, 1973' foca na cobertura hist�rica da morte do poeta chileno Pablo Neruda � Foto: Guito Moreto/Ag�ncia O Glob Totens com fotos de Evandro Teixeira durante os dias que passou no Chile, em 1973, registrando a brutalidade daquele tempo.  Tomada do Forte de Copacabana durante o golpe militar de 1964 � Foto: Evandro Teixeira/Acervo IMS .Exposi��o no CCBB exibe 190 imagens emblem�ticas das ditaduras chilena e brasileira Tesouros ancestrais do Peru'. A mostra re�ne 162 pe�as � entre trabalhos de ouro, prata, cobre, cer�mica e t�xteis � do Museo Oro del Per� y Armas del Mundo de antigas civiliza��es andinas. (Para saber mais, leia a mat�ria). At� 29 de janeiro. Objeto de ouro, parte de um conjunto funer�rio.  Estilo Frias, Costa Norte do Per� 200 a.C � 700 d.C � Foto: Divulga��o/Ag�ncia Galo Representa uma figura ornitomorfa com asas estendidas. Ouro.  Cultura Nasca, Costa Sul do Peru 200 a.C � 400 d.C M�scara e coroa. Costa sul do Peru 200 a.C-400 d.C � Foto: Divulga��o/Ag�ncia Gal Pe�as do Museu do Ouro 'Do sal ao digital: o dinheiro na cole��o Banco do Brasil '. Com alguns itens hist�ricos, como a pe�a da coroa��o de D. Pedro I, que nunca foi posta em circula��o, a mostra permanente do espa�o conta a origem do dinheiro no pa�s e no mundo. Atividades interativas, obras de arte e mais de 800 moedas e c�dulas est�o em exibi��o. Exposi��o permanente. Rua Primeiro de Mar�o 66, Centro. Qua a seg, das 9h �s 20h. Gr�tis. Museu do Amanh� 'Sai-Fai: fic��o cient�fica � brasileira'. Uma ode � imagina��o, a mostra de literatura expandida traz trechos de contos e ilustra��es para debater temas como afrofuturismo e futurismo ind�gena. At� 12 de novembro. Mostra permanente. Para abordar o impacto do homem no planeta, a exibi��o se divide em cinco partes � Cosmos, Terra, Antropoceno, Amanh�s e N�s. Pra�a Mau� 1, Centro.Ter a dom e feriados, 10h �s 18h. R$ 30 (de gra�a �s ter�as). Museu de Arte Moderna (MAM) 'Instala��o sonora itinerante'. A Orquestra Petrobras Sinf�nica apresenta a mostra que j� percorreu tr�s cidades e oferece uma experi�ncia imersiva ao p�blico. Ao todo, 16 caixas reproduzem os sons da orquestra. At� 12 de novembro. 'Museu-escola-cidade: o MAM Rio em cinco perspectivas'. A mostra em comemora��o ao anivers�rio do museu re�ne 250 obras e 250 documentos que retratam parte da hist�ria da institui��o. Focada nas tr�s primeiras d�cadas de funcionamento, antes do inc�ndio que destruiu a maior parte do acervo em 1978, tem obras de artistas nacionais (entre eles Antonio Bandeira, Anna Bella Geiger e Lygia Clark) e internacionais, com curadoria coletiva dos funcion�rios do museu. At� 3 de dezembro. 'MAM Rio: origem e constru��o'. Seguindo as comemora��es por seus 75 anos, o espa�o inaugura a mostra, com cerca de 160 itens documentais � entre fotografias, cartas, jornais e plantas baixas �, que contam a hist�ria da institui��o. At� 3 de dezembro. Av. Infante Dom Henrique 85, Aterro do Flamengo. Qua a dom, das 10h �s 18h. Gr�tis, com contribui��o sugerida de R$ 20. Museu de Arte Contempor�nea de Niter�i (MAC) 'Mekukradj� Obik�r�: com os p�s em dois mundos'. A cultura Kayap� � o tema da exposi��o no que conta com experi�ncias imersivas e obras produzidas pela nova gera��o do povo Meb�ng�kre-Kayap�. At� 26 de novembro. Mirante da Boa Viagem, Niter�i. Ter a dom, das 10h �s 18h. Gr�tis (qua) e R$ 16. 14 anos. Museu Hist�rico Nacional ��and� � Aqui est�vamos, aqui estamos�. A exibi��o de longa dura��o aborda a trajet�ria dos povos origin�rios brasileiros desde antes da chegada dos portugueses at� os dias atuais. S�o diversos objetos etnogr�ficos e obras de artistas ind�genas, como Denilson Baniwa, Diakara Desana, Mayra Karvalho e Tapixi Guajajara. Pra�a Marechal �ncora, Centro. Qua a dom, das 10h �s 17h. Gr�tis. Museu da Hist�ria e da Cultura Afro-Brasileira (Muhcab) �Mixagens Urbanas�. A exposi��o de lambe-lambes ocupa as ruas da regi�o portu�ria, entre Gamboa e Sa�de, com um trajeto que sai do Muhcab. A ideia �, com um olhar �decolonial�, propor que espa�os e imagin�rios hist�ricos sejam redefinidos. Rua Pedro Ernesto 80, Gamboa. At� 13 de novembro. Museu do Pontal 'O circo chegou!'. A coletiva comemora um ano da nova sede do museu com uma exposi��o dedicada ao circo. Trabalhos de artistas de diversas partes do pa�s e da Fran�a comp�em a mostra que tem como centro a obra cin�tica "O circo", de Adalton Fernandes Lopes. A curadoria � de Angela Mascelani e Lucas Van de Beuque, diretores do museu. Av. Celia Ribeiro da Silva Mendes 3.300, Barra. Qui a dom, das 10h �s 18h. Contribui��o volunt�ria. Casa Fran�a-Brasil 'Franz Weissmann: ritmo e movimento'. Onze anos depois da �ltima individual de Franz Weissmann (1911-2005) no Rio, 18 das ic�nicas esculturas geom�tricas do artista nascido na �ustria poder�o ser vistas novamente. Com visitas mediadas di�rias. Rua Visconde de Itabora� 78, Centro. Ter a dom, das 10h �s 17h. Gr�tis. At� 13 de novembro. Pinakotheke Cultural Rubem Valentim - Sagrada geometria'. Com curadoria de Max Perlingeiro e consultoria de Ben� Fonteles, artista pl�stico, poeta e amigo de Rubem Valentim (1922-1991), a mostra re�ne, em quatro salas, cerca de 75 obras, entre pinturas, desenhos e objetos do artista. Com os signos do candombl� e um olhar para o sacro atrav�s dos orix�s, ele criou uma linguagem pr�pria traduzida no conceito de �geometria sagrada�. (Para saber mais, leia a mat�ria). Centro Cultural Justi�a Federal O espa�o recebe quatro exposi��es: "8 de Janeiro: jamais fomos modernos", do artista fluminense Alex Frechette; "Transeunte", do paulista Andr� Bahia; "Urucum: a natureza � queer", da paraense Rafael BQueer, e "Matrizes", de Paula Sacamparini. Todas at� 7 de janeiro. 'Casas da justi�a' e 'Quem � o jurisdicionado'. As mostras, ambas com fotos do acervo do Conselho da Justi�a Federal, fazem parte do projeto "A Justi�a Federal nos 35 anos de Constitui��o da Rep�blica". (Para saber mais, leia a mat�ria). At� 12 de novembro. Av. Rio Branco 241, Cinel�ndia. Ter a dom, das 11h �s 19h. Gr�tis. Centro Cultural da PGE-RJ 'Abstra��es'. Com obras de cinco artistas mulheres � Fayga Ostrower, Renina Katz, Anna Letycia, Anna Maria Maiolino e Ana Cl�udia Almeida �, a mostra se debru�a sobre a chamada �abstra��o informal�.Pra�a Quinze, em frente ao Pa�o Imperial. Ter a s�b, das 10h �s 18h. At� 19 de janeiro. Gr�tis. Centro Cultural Correios 'Caleidosc�pio'. Com obras de 28 artistas de diferentes gera��es da cole��o local, a coletiva celebra os 30 anos do espa�o. Curadoria da muse�loga Roseane Novaes. At� 4 de dezembro. 'Entre fronteiras'. O fotojornalista Pedro Mendes Levier inaugura a exposi��o com fotos sobre migrantes em busca de ref�gio e suas hist�rias. At� 11 de novembro. 'Resist�ncia � Gravura e pintura contempor�neas na Escola de Belas Artes da UFRJ'. A mostra traz obras de ex-alunos e professores da institui��o. At� 11 de novembro. Rua Visconde de Itabora� 20, Centro. Ter a s�b, das 12h �s 19h. Gr�tis. Caixa Cultural 'Passeio P�blico'. Mostra com trabalhos in�ditos de 18 artistas � entre eles Denilson Baniwa, Mois�s Patr�cio, Luana Aguiar e Barbara Copque � olha para o primeiro parque p�blico do pa�s como espelho das desigualdades brasileiras. (Para saber mais, leia a mat�ria). At� 17 de dezembro. 'Mem�ria e heran�a: �lbum de fam�lia'. A partir da colagem digital, a mostra prop�e uma reinterpreta��o de fotografias de pessoas negras escravizadas do s�culo XIX. At� 26 de novembro. Rua do Passeio 38. Ter a dom, das 9h �s 17h30. Feriados, das 11h �s 18h. Gr�tis. Casa Roberto Marinh 'Angelo Venosa, escultor'. A mostra ocupa todo o espa�o expositivo com 85 trabalhos, do in�cio da d�cada de 1970 � produ��o mais recente do artista, de 2021. O escultor, que integra a chamada Gera��o 80 e come�ou estudando pintura, tornou-se refer�ncia na arte contempor�nea brasileira com um trabalho sem semelhantes aqui ou l� fora, como destaca o curador Paulo Venancio. (Para saber mais, leia a mat�ria). At� 12 de novembro. Rua Cosme Velho 1.105. Ter a dom, das 12h �s 18h. Gr�tis (qua) e R$ 10; aos domingos, R$ 10 (para grupos de quatro pessoas). EAV Parque Lage 'Gianguido Bonfanti: massas de energia no espa�o'. Com 70 trabalhos in�ditos, a mostra celebra os 55 anos de carreira do mais longevo professor da institui��o. Rua Jardim Bot�nico 414. Qui a ter, das 10h �s 17h. At� 7 de janeiro. Futuros - Arte e Tecnologia Musehum. Localizado dentro do centro, a exposi��o fixa no local traz os primeiros aparelhos residenciais, de mesa ou parede, orelh�es, entre as dezenas de tipos de telefones de diferentes �pocas. No total, s�o mais de 130 mil itens da hist�ria das telecomunica��es, entre fotos, listas telef�nicas e equipamentos. Rua Dois de Dezembro 63, Flamengo. Qua a dom, das 11h �s 20h. Gr�tis. Centro Sebrae de Refer�ncia do Artesanato Brasileiro (Crab) 'Artesania ancestral nos 95 anos de Mangueira'. A mostra conta a Hist�ria de quase um s�culo da tradicional escola de samba carioca � e do pr�prio carnaval � atrav�s do trabalho dos artes�os da Esta��o Primeira. At� 31 de dezembro de 2024. 'Bens do Brasil: gente, saberes e tradi��es'. Dos brinquedos de miriti que circulam em Bel�m durante o C�rio de Nazar� aos produtos comercializados na Feira de Caruaru, a mostra traz o Patrim�nio Cultural da Amaz�nia ao Rio. At� 18 de novembro. Pra�a Tiradentes 69/71, Centro. Gr�tis. Ter a s�b, das 10h �s 17h. Centro Municipal de Arte H�lio Oiticica 'Auto-acusa��o'. A atriz e diretora B�rbara Paz inaugura sua primeira exposi��o individual no Rio. Com v�deos, fotos, instala��es e performances, a artista exp�e as cicatrizes do acidente sofrido em 1992. Abertura s�bado, 11 de novembro, �s 14h. At� 2 de dezembro. 'Cosmococa 5 Hendrix War (vers�o priv�)'. A �ltima das 11 instala��es criadas por H�lio Oiticica com o cineasta Neville D�Almeida para a s�rie �Cosmococa � Programa in Progress� se torna publica na mostra. A "Cosmococa 5 Hendrix War (vers�o priv�)" ser� exibida em projetores instalados em um c�modo que remete a um apartamento, idealizada pelo curador C�sar Oiticica Filho. At� 10 de dezembro. 'Cidade Mulher'. A exposi��o provoca reflex�es sobre direito das mulheres atrav�s de interven��es art�sticas, instala��es e v�deos. At� 16 de dezembro. Rua Lu�s de Cam�es 68, Pra�a Tiradentes. Seg a s�b, das 10h �s 18h. Gr�tis. Academia Brasileira de Letras (ABL) 'Nova Babel (In)finita'. 300 obras raras do acervo do bibli�filo ga�cho Gilberto Schwarstmann est�o na mostra, que exp�e o olhar do escritor argentino Jorge Luis Borges sobre cl�ssicos da literatura ocidental, como �A B�blia Sagrada�, �A divina com�dia�, �Il�ada� e �Em busca do tempo pedido�. Av. Presidente Wilson 203. Seg a qui, das 10h �s 18h. At� 31 de janeiro. Museu da Ch�cara do C�u 'Os amigos da gravura'. Herbert Sobral, indicado ao Pr�mio PIPA 2023, � o artista convidado desta edi��o do projeto. Al�m disso, sua obra �Espa�o contempor�neo do c�u�, com um banco e dois murais feitos de azulejos, ficar� exposta em car�ter permanente no terra�o (com entrada gratuita, diariamente, das 9h �s 17h). At� 20 de novembro. Rua Murtinho Nobre 93, Santa Teresa. Qua a seg, das 12h �s 17h. R$ 8 (quarta com gratuidade) Museu Carmen Miranda 'Viva Carmen'. Dez anos depois de ser fechado para obras de revitaliza��o, o espa�o reabre. Entre os 120 itens originais expostos, com curadoria de Ruy Castro e Heloisa Seixas, est�o alguns figurinos que fizeram hist�ria com a Pequena Not�vel, como turbantes, pulseiras e vestidos, al�m de fotos, programas e cartazes. Av. Rui Barbosa (em frente ao n�mero 560). Ter a sex, das 11h �s 17h. S�b, dom e feriados, das 12h �s 17h. Gr�tis. Museu do Samba 'Aos her�is da liberdade'. Com curadoria de Gringo Cardia, a exposi��o apresenta a hist�ria do samba. A mostra � costurada por textos do historiador Luiz Ant�nio Simas, instala��es cenogr�ficas, instrumentos e fantasias, al�m de vozes e imagens de grandes sambistas, como Cartola, Tia Surica, Dona Ivone Lara e Martinho da Vila, com recursos audiovisuais. At� 31 de dezembro. 'A for�a feminina do samba'. A exposi��o, que chega ao espa�o na Semana da mulher negra latino-americana e caribenha, re�ne m�sicas, artes pl�sticas, literatura, figurinos e indument�rias para contar a hist�ria do samba atrav�s da lideran�a de mulheres negras como Tia Ciata, Clementina de Jesus, Dona Ivone Lara, Leci Brand�o e Alcione, entre outras. At� dezembro. Rua Visconde de Niter�i 1.296, Mangueira. Seg a sex, das 10h �s 17h. S�b, das 10h �s 16h. R$ 20. Casas, galerias e outros Galeria Z42 Arte 'Meu mundo caiu � Outros pa�ses na cole��o do Mian'. A exposi��o traz um recorte in�dito de obras de 120 artistas internacionais que integram o acervo do Museu Internacional de Arte Na�f do Brasil, fechado em 2016 por falta de recursos. Curadoria de Ulisses Carrilho. Mostra 'Meu mundo caiu � Outros pa�ses na cole��o do Mian'");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Israel atualiza n�mero e diz que atendados do Hamas mataram 1,2 mil pessoas|\n");
				printf("|Matéria 2.A estrela da Davi � um s�mbolo judaico que foi usado para identificar casas e com�rcios de judeus durante o nazismo|\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Homenagem em Berlim na ter�a-feira (7) aos mortos nos ataques do Hamas a Israel em 7 de outubro. O governo de Israel atualizou nesta sexta-feira (10) o n�mero de mortos nos ataques do grupo terrorista Hamas ao seu territ�rio no dia 7 de outubro. Os novos dados indicam que cerca de 1,2 mil israelenses morreram nos atentados, o mais letal ataque a civis israelenses desde o Holocausto � antes, os n�meros oficiais indicavam 1,4 mil mortos. Em declara��o publicada pela ag�ncia France-Presse, o porta-voz do Minist�rio das Rela��es Exteriores de Israel, Lior Haiat, alegou que o n�mero atualizado � menor que o divulgado anteriormente �devido ao fato de que havia muitos corpos que n�o foram identificados e agora achamos que eram de terroristas, e n�o de v�timas israelenses�. Israel vem realizando uma contraofensiva na Faixa de Gaza com o objetivo de destruir o Hamas, que controla o enclave. O Minist�rio da Sa�de de Gaza alega que mais de 11 mil pessoas morreram no territ�rio desde o in�cio da guerra, mas Israel contesta esses n�meros.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("A estrela da Davi � um s�mbolo judaico que foi usado para identificar casas e com�rcios de judeus durante o nazismo\n\n");
						printf("O governo de Roma, na It�lia, informou nesta quinta-feira (9) que removeu picha��es antissemitas de edif�cios do antigo bairro judeu da cidade. Entre os desenhos estavam estrelas de Davi e su�sticas, s�mbolos muito usados durante o nazismo. �Acontecimentos como esse causam consterna��o, enorme preocupa��o e lembram o per�odo de persegui��o contra os judeus�, disse Alessandro Luzon, representante da Comunidade Judaica em Roma. Segundo o jornal Times of Israel, a cidade de Treviso, no norte do pa�s, tamb�m registrou um epis�dio de antissemitismo em uma escola particular de ensino fundamental e m�dio, que suspendeu as atividades ap�s uma professora supostamente fazer declara��es antissemitas em suas redes sociais. A institui��o de ensino se pronunciou, afirmando que �a linguagem odiosa � a ant�tese absoluta dos valores que a escola acredita�. O caso se une a dezenas de outras den�ncias de viol�ncia contra judeus na Europa, desde o in�cio da guerra no Oriente M�dio. Epis�dios semelhantes de picha��es foram encontrados na Fran�a, Alemanha e Reino Unido, nos �ltimos dias.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Dengue vai piorar no pa�s em 2024, dizem especialistas|\n");
				printf("|Matéria 2. Ativista do Ir� que ganhou Nobel da Paz encerra greve de fome ap�s conseguir ir a hospital sem v�u                      |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("A cidade de S�o Paulo registrou, at� 1� de novembro deste ano, 12.663 casos de dengue. No mesmo per�odo de 2022, foram 11.607 �uma alta de 9%. O n�mero de casos em 2023 j� � maior do que a soma de janeiro a dezembro do ano passado, quando houve 11.920 confirma��es da doen�a. Outubro de 2023 foi o que mais somou casos novos (256), se observado o mesmo m�s desde 2015. Na opini�o dos infectologistas J�lio Croda, presidente da Sociedade Brasileira de Medicina Tropical, e Carlos Magno Fortaleza, presidente da Sociedade Paulista de Infectologia, a dengue em 2024 poder� ser maior, inclusive com a amea�a de uma epidemia causada pelo sorotipo 3 �j� h� o encontro dele no Norte do pa�s. "Essas ondas de v�rus diferentes aumentam, sobretudo, os casos graves. Isso � o que preocupa. N�s tivemos um ciclo de predom�nio do sorotipo 1, que n�o confere imunidade para o 3. As pessoas que contra�rem o 3 e j� tiveram o 1 ou 2 anteriormente podem desenvolver a forma grave, que necessita de interna��o ou coloca a vida em risco", explica Fortaleza. A dengue possui quatro sorotipos. Quando um indiv�duo � infectado por um deles adquire imunidade contra aquele v�rus, mas ainda fica suscet�vel aos demais. "N�s nunca tivemos tantos casos de dengue no per�odo interepid�mico. O El Ni�o e o aumento da temperatura global v�o impactar no vetor. N�s j� vimos isso no inverno. O ver�o, o per�odo epid�mico da doen�a, ser� bastante complicado. Poderemos ter um maior n�mero de casos e �bitos do que tivemos ano passado", diz Croda. Ele defende um plano de conting�ncia voltado aos estados e munic�pios para 2024, no sentido de treinar profissionais de sa�de para o atendimento a casos graves de dengue, ofertar locais para hidrata��o, atendimento e de organizar os fluxos de interna��o no per�odo epid�mico. Segundo o infectologista, a medida � necess�ria principalmente no Sul do pa�s, onde os servi�os de sa�de n�o est�o acostumados com este tipo de paciente. "N�o t�nhamos dengue no Rio Grande do Sul e em Santa Catarina. Houve uma expans�o do vetor, da sua �rea geogr�fica e da expans�o da doen�a. E quando a gente olha a mortalidade e a letalidade por causa da dengue, essas regi�es novas de transmiss�o da doen�a, no Sul do pa�s, s�o regi�es s�o mais preocupantes porque n�o est�o acostumadas a ter essas epidemias. A popula��o nunca foi exposta. A chance de ter casos mais graves � maior", afirma J�lio Croda. Duas vacinas contra a dengue foram aprovadas para uso comercial no Brasil �Dengvaxia (Sanofi Pasteur) e Qdenga (Takeda Pharma), mas nenhuma est� incorporada ao SUS (Sistema �nico de Sa�de). A da Sanofi � para quem j� teve dengue. A da Takeda n�o tem restri��es. O imunizante est� aprovado para indiv�duos de 4 a 60 anos. A incorpora��o da vacina ao SUS depende de uma an�lise da Conitec (Comiss�o Nacional de Incorpora��o de Tecnologias no Sistema �nico de Sa�de). "Existe uma recomenda��o da OMS de introduzir essa vacina em crian�as e adolescentes de 6 a 16 anos, de 1 a 2 anos antes da faixa et�ria onde tem maior soropreval�ncia. A Conitec t� muito lenta em rela��o a isso. A vacina n�o vai resolver todos os problemas relativos a essa epidemia, mas � importante a gente ter dispon�vel mais um tipo de estrat�gia para a popula��o, principalmente as crian�as", esclarece. "Se a Conitec recomendar a incorpora��o dessa vacina, o Minist�rio da Sa�de n�o ter� tempo h�bil de fazer essa aquisi��o e passaremos pelo per�odo epid�mico sem oferecer prote��o a crian�as e adolescentes", finaliza. At� o dia 1 de novembro deste ano, segundo o Minist�rio da Sa�de, foram registrados 1.638.563 casos de dengue no pa�s. Mesmo faltando dois meses para o fim do ano, o n�mero de casos em 2023 j� � maior do que o do ano passado, quando foram registrados um milh�o de casos. S� em 2022, foram mais de mil mortes, o ano mais letal da s�rie hist�rica at� ent�o. Este ano, tamb�m j� chegamos aos mil �bitos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Ativista do Ir� que ganhou Nobel da Paz encerra greve de fome ap�s conseguir ir a hospital sem v�u\n\n");
						printf("A ativista do Ir� Narges Mohammadi, vencedora do Nobel da Paz de 2023, encerrou sua greve de fome na pris�o ap�s conseguir ser transferida para um hospital sem cobrir a cabe�a com um v�u, segundo publica��es no seu Instagram. Eu fui da pris�o para o hospital sem usar o hijab obrigat�rio, vestindo casaco e saia, no meio de dezenas de agentes de seguran�a, e depois voltei, afirmou ela. Se a Rep�blica Isl�mica considera que o n�o uso de um len�o na cabe�a est� de acordo com os regulamentos e protocolos, ent�o deveria, sem d�vida, aplicar o mesmo a todas as mulheres iranianas. A ativista de 51 anos, conhecida por sua luta contra a pena de morte e pelo direito das mulheres, iniciou uma greve de fome na �ltima segunda (6). Anteriormente, as autoridades penitenci�rias haviam se recusado a hospitalizar Mohammadi, que sofre de problemas card�acos, ap�s ela n�o aceitar cobrir a cabe�a com um v�u durante a transfer�ncia, segundo familiares. Um exame de imagem havia mostrado duas veias com grandes obstru��es e press�o pulmonar elevada, raz�o pela qual ela precisaria passar por procedimentos m�dicos. Ela est� disposta a arriscar sua vida por n�o usar o 'hijab obrigat�rio', inclusive para se tratar, disse a fam�lia na ocasi�o. A Rep�blica Isl�mica � respons�vel por tudo o que possa acontecer com nossa querida Narges. Outras sete companheiras de pris�o, incluindo a escritora Golrokh Iraee e a ativista Vida Rabbani, haviam se juntado ao protesto. Foi uma manifesta��o contra a pol�tica de 'morte', ou 'hijab obrigat�rio', que ceifou in�meras vidas nas �ltimas quatro d�cadas", afirmaram elas. "Na quinta-feira, 9 de novembro, ap�s a transfer�ncia de Narges para o hospital sem usar o hijab obrigat�rio, rompemos a greve de fome. Amigos e conhecidos que a esperavam na entrada do hospital foram detidos brevemente e interrogados, e suas c�meras fotogr�ficas foram confiscadas. O governo temia que eu fosse vista sem v�u, disse Mohammadi, que manifestou sua disposi��o para continuar andando com a cabe�a descoberta at� a aboli��o da obrigatoriedade do hijab. A ativista est� detida desde 2021 na pris�o de Evin, em Teer�, sob a acusa��o de espalhar propaganda contra o Estado. No dia 6 de outubro, foi laureada com o Nobel por promover os direitos humanos e a liberdade para todos. A persegui��o do regime iraniano come�ou h� 30 anos, quando ela ingressou na universidade e come�ou seu ativismo. Mohammadi foi presa 13 vezes pelas for�as estatais e condenada cinco vezes a um total de 31 anos de pris�o e 154 chicotadas, de acordo com Berit Reiss-Andersen, presidente do comit� da premia��o. O Nobel da Paz foi concedido ap�s uma s�rie de protestos no Ir� pela morte de Mahsa Amini, que estava sob cust�dia policial, em setembro de 2022. A jovem foi detida sob a acusa��o de violar o rigoroso c�digo de vestimenta para mulheres em vigor no pa�s. Segundo o comit� noruegu�s, o lema Mulher, Vida, Liberdade, adotado pelos manifestantes, expressa adequadamente a dedica��o e o trabalho de Narges Mohammadi, seja no que se refere � sua luta contra a opress�o das mulheres quanto � sua busca por promover os direitos humanos e a liberdade para todos. A l�urea deste ano ainda reconheceu os milhares que se manifestaram contra as pol�ticas de discrimina��o e opress�o do regime iraniano.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1.GLO deixa de fora portos resons�veis por 80% do transpote internacional de cargas brasileiro|\n");
				printf("|Matéria 2.�O T�nel dos Pombos� explora vida, obra e os causos do autor John le Carr�                 |\n");
				printf("|----------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("GLO deixa de fora portos resons�veis por 80% do transpote internacional de cargas brasileiro\n\n");
						printf("Funcion�rios da Receita Federal fazem apreens�o de drogas acomodadas em casco de navio. A Opera��o de Garantia da Lei e da Ordem (GLO) criada recentemente pelo governo de Luiz In�cio Lula da Silva (PT) para usar militares para combater o tr�fico de coca�na feito por fac��es criminosas est� focada em apenas tr�s portos, no Rio de Janeiro e S�o Paulo. Mas ela deixa de lado outros 410 portos brasileiros que respondem por cerca de 80% do transporte mar�timo internacional no Brasil. Ou seja, a fiscaliza��o focada nos portos do Rio de Janeiro (RJ), Itagua� (RJ) e Santos (SP) pode fazer a criminalidade mudar suas opera��es para outros portos, segundo afirmou o general da reserva Marco Aur�lio Vieira, ex-secret�rio especial do Esporte do governo do ex-presidente Jair Bolsonaro (PL), durante o programa Assunto Capital, da Gazeta do Povo. "O Brasil tem 8,5 mil quil�metros de costa, ent�o, se voc� resolve fazer isso no porto do Rio de Janeiro, voc� acha que consegue impedir que isso (o tr�fico) aconte�a nos outros?", afirmou o general. Clique aqui e veja o programa completo. �� como se voc� anunciasse para os traficantes que, a partir de uma determinada data, n�o fosse deixar que eles utilizem certos portos e aeroportos�, disse. Opera��o n�o interromper� tr�fico nem nos portos fiscalizados, diz procurado Al�m disso, mesmo nos portos fiscalizados a opera��o dificilmente vai conseguir impedir o tr�fico internacional de coca�na. Isso porque, na pr�tica, mesmo com o refor�o de militares � imposs�vel fiscalizar todos os cont�ineres suspeitos sem causar um colapso no transporte mar�timo do Brasil. �A grosso modo, a droga que � exportada vai por cont�ineres � e s�o milhares deles em cada porto. Ent�o, na for�a bruta, a GLO, se conseguir, ir� fiscalizar cerca de 1% dos cont�ineres nesses portos e os resultados s�o improv�veis�, afirmou o procurador do Minist�rio P�blico de S�o Paulo Marcio Sergio Christino. Ele foi um dos primeiros membros do Minist�rio P�blico a investigar o Primeiro Comando da Capital (PCC), fac��o que � uma das maiores operadoras da rota de coca�na. Christino tamb�m � autor do livro "La�os de Sangue: A hist�ria secreta do PCC" (Ed. Matrix; 2017). De acordo com o Estat�stico Aquavi�rio da Ag�ncia Nacional de Transportes Aquavi�rios (Antaq), entre janeiro e setembro desse ano, 93,3 milh�es de cont�ineres foram movimentados nos portos brasileiros. Somente o Porto de Santos foi respons�vel pela movimenta��o de 26 milh�es de unidades, seguidos pelos Terminais Portu�rios de Navegantes (SC) com 11,4 milh�es e pelo Porto de Paranagu� com 8,6 milh�es. Autoridades portu�rias usam m�quinas de raio-X para selecionar cont�ineres para inspe��o. Mas a inspe��o de uma �nica unidade leva horas, pois toda a mercadoria tem que ser descarregada e depois recarregada manualmente. �As fac��es criminosas n�o est�o nem a� para essa fiscaliza��o, porque � quase imposs�vel para a Marinha encontrar os cont�ineres que est�o carregados com coca�na. Quando h� uma apreens�o feita pela Receita Federal (RFB), por exemplo, � porque houve uma investiga��o anterior e uma informa��o a respeito de onde est� a droga. Assim, ao acaso, � muito pouco prov�vel que a GLO tenha qualquer resultado�, afirma o procurador. O volume de transporte nos portos da GLO � um impedimento Desde o dia 6 de novembro, a GLO emprega 1.100 militares da Marinha do Brasil para fiscalizar pessoas e cargas em tr�s dos 413 portos e terminais portu�rios, p�blicos e privados no Brasil.�Outros 800 marinheiros trabalham em embarca��es para impedir o acesso de criminosos aos portos usando pequenos barcos. As atividades est�o sendo implementadas nos Portos de Santos (SP), do Rio de Janeiro (RJ) e de Itagua� (RJ) que, juntos, responderam pela movimenta��o de 148,6 milh�es de toneladas entre janeiro e setembro deste ano. Esse total equivale a 21,8 % dos 680 milh�es de toneladas transportadas em rotas internacionais a partir de todos os portos e terminais mar�timos nacionais, segundo dados da Ag�ncia Nacional de Transportes Aquavi�rios (Antaq). Dois dos principais portos nacionais, o Terminal Mar�timo de Porto Madeira, no Maranh�o, respons�vel pelo embarque e transporte de 119 milh�es de toneladas, e o Terminal de Tubar�o, no Esp�rito Santo, com 56 milh�es, ficaram de fora da GLO. Apesar do volume menos expressivo de cargas, os portos baianos de Aratu e de Salvador, respons�veis por, respectivamente, 5 e 3 milh�es de toneladas, tamb�m n�o foram inclu�dos na opera��o. Desde o in�cio do ano, a Bahia enfrenta uma grave crise de seguran�a p�blica com aumento da criminalidade relacionada ao tr�fico de drogas. Coca�na andina passa pelo Brasil e vai para a Europa e �frica Os portos s�o o principal vetor para a exporta��o de coca�na dos pa�ses andinos para a Europa por meio do Brasil. Isso ocorre porque os navios de carga que saem do pa�s rumo � Europa podem levar centenas de quilos, at� toneladas, de coca�na de uma s� vez sem chamar aten��o. � muito mais, por exemplo, do que podem levar as chamadas "mulas do tr�fico", pessoas que embarcam em voos levando coca�na na mala ou escondida no corpo. Segundo Christino, a fac��o criminosa Primeiro Comando da Capital, ou PCC, � a principal respons�vel pela exporta��o de coca�na nos portos nacionais - cerca de 90%. Ele explicou que a fac��o se aliou a produtores da Bol�via para que a droga chegue ao rico mercado europeu. O Comando Vermelho (CV) tamb�m tem sua parcela nas exporta��es de coca�na, mas atua nos portos ao Norte do pa�s para escoar a produ��o que vem do Peru. O procurador afirma que o CV tem maior proemin�ncia no tr�fico interno, que se utiliza da costa do Nordeste brasileiro para fazer com que a droga chegue ao Sudeste. No ano passado, 25 toneladas de coca�na foram apreendidas nos portos brasileiros pela Receita Federal. O porto de Santos foi o principal ponto de apreens�o, com 16,4 toneladas encontradas. Segundo autoridades europeias, Santos � um dos maiores pontos, em todo o mundo, de envio de coca�na para o continente. N�o h� dados sobre os portos do Rio de Janeiro. Mas portos menores tamb�m s�o utilizados. O Relat�rio Global do Escrit�rio das Na��es Unidas para Drogas e Crime (UNODC), divulgado em julho de 2022, refor�a a informa��o do procurador: o documento diz que portos localizados no Norte e Nordeste tamb�m se tornaram entrepostos para o tr�fico internacional de coca�na. Al�m de transportar as drogas em meio aos alimentos e outras cargas nos cont�ineres, h� volumes de droga que chegam a ser acomodados por mergulhadores altamente capacitados nos cascos e compartimentos submersos dos navios. Atualmente, os traficantes utilizam navios rumo � Europa, mas com paradas em portos africanos para despistar a fiscaliza��o de pa�ses como B�lgica, It�lia e Holanda. Os principais destinos da droga que sai do Brasil s�o Espanha e Portugal. As estrat�gias e a dura��o da GLO Em princ�pio, a Marinha divulgou que as a��es no �mbito da GLO visam refor�ar a fiscaliza��o de pessoas e mercadorias nos portos. A a��o pretende aumentar as capacidades da Receita Federal e da Pol�cia Federal de fiscalizar os cont�ineres que ser�o embarcados. Ao todo, 750 fuzileiros foram destacados para os Portos do Rio de Janeiro e Itagua� e 350 para Santos. Al�m disso, est� prevista a atua��o de 20 embarca��es, como lanchas blindadas, navios de patrulha de grande porte e motos aqu�ticas. A ideia � impedir que pequenos barcos carregados com coca�na se aproximem dos navios e fa�am o embarque ilegal da droga. Segundo Christino, opera��es de combate ao tr�fico s� podem gerar resultados efetivos caso sejam focadas em a��es de investiga��o. Mas ele disse que n�o sabe se ser�o feitas investiga��es no escopo de a��es da GLO. No entanto, sem o trabalho de colher elementos e buscar informa��es privilegiadas sobre as cargas � poss�vel, mas improv�vel, que a GLO gere os efeitos desejados. ��O uso de massa bruta para executar uma a��o fiscalizat�ria como uma forma de inibir o tr�fico em si, n�o me parece uma estrat�gia boa�, afirmou. A Opera��o de Garantia da Lei e da Ordem foi decretada no dia 1� de novembro pelo Governo Federal em resposta a ondas de viol�ncia no Rio de Janeiro e na Bahia � ainda que o estado nordestino n�o seja alvo de nenhuma das a��es anunciadas. Foi iniciada em 6 de novembro e a estimativa � de que as atividades sigam at� o dia 3 de maio de 2024.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("�O T�nel dos Pombos� explora vida, obra e os causos do autor John le Carr�");
						printf("�Recrutar algu�m para o servi�o secreto � dif�cil. Voc� precisa de algu�m um pouco mau, mas, ao mesmo tempo, leal... E eu me encaixava perfeitamente.� Essa frase � apenas um dos muitos exemplos de sinceridade e confian�a dados por David Cornwell em suas entrevistas exibidas no document�rio O T�nel dos Pombos, rec�m-lan�ado na Apple TV+. Caso esse nome n�o seja o suficiente para saber quem � o homem que fala com tanta propriedade sobre a espionagem, talvez seu pseud�nimo traga um pouco de luz: ele era conhecido mundialmente como John le Carr�, autor de best-sellers como O Espi�o que Saiu do Frio, O Espi�o que Sabia Demais e Um Espi�o Perfeito, todos transformados em longas-metragens. Antes de morrer, em dezembro de 2020, o escritor conversou por quase 14 horas com o documentarista Errol Morris, que ganhou um Oscar em 2003 ap�s um trabalho sobre Robert McNamara, ex-secret�rio de Defesa dos Estados Unidos. Esse papo sem precedentes (considerando que le Carr� n�o era muito de dar entrevistas) foi pautado a partir do material divulgado pelo pr�prio em sua primeira autobiografia, lan�ada com o mesmo t�tulo do novo document�rio, em 2016. Sem muito enrolar, o longa j� explica nos primeiros dez minutos o que � o tal do t�nel dos pombos: uma met�fora ligada ao esporte tipicamente brit�nico de tiro ao pombo, que vez ou outra foi considerada pelo escritor como um poss�vel t�tulo para v�rios de seus livros, inclusive os citados no par�grafo anterior. Mas a gra�a n�o est� no t�tulo e, sim, na pr�pria figura de le Carr�. Sua maneira de se portar e contar bem at� as hist�rias traum�ticas da inf�ncia, com um pai estelionat�rio e uma m�e ausente, fazem o espectador sentir que est� lendo algum texto muito bem polido do autor de espionagem. Sua franqueza, seja ela real ou n�o, � um aspecto respons�vel por prender quem assiste ao material. Nos minutos iniciais, ele questiona Morris (que se coloca como personagem da pr�pria produ��o) sobre suas inten��es com a entrevista, para entender se ser�o amigos ou inimigos. John le Carr� demonstra entender bem a natureza e as din�micas de um interrogat�rio, afinal, antes da carreira ilustre escrevendo livros, ele foi agente do servi�o secreto, trabalhando tanto no MI5 quanto no MI6 ao longo dos anos de 1950 e 1960. Moralmente amb�guo   Muitos dos posicionamentos e pensamentos de le Carr�, que pode ser traduzido do franc�s como �o quadrado�, s�o escancarados no document�rio. Ele repete que os espi�es s�o figuras moralmente amb�guas em diferentes momentos do longa, indicando que a �trai��o� � uma das quest�es mais importantes da vida. O escritor defende isso firmemente, pois teve de abandonar a espionagem quando Kim Philby, um chef�o do MI6, desertou para a R�ssia e revelou o nome real de diversos agentes secretos do Reino Unido, incluindo o de David Cornwell � ele assinava suas obras com o pseud�nimo de John le Carr�, em um primeiro momento, justamente para manter sua identidade e sua seguran�a em segredo. O T�nel dos Pombos se debru�a nesse acontecimento basilar de sua vida, revelando como tamb�m serviu de combust�vel para a confec��o de O Espi�o que Sabia Demais. Mesmo se n�o estiver familiarizado com o texto original, publicado em 1974, o espectador achar� o relato dele irresist�vel e mais realista sobre o mundo da espionagem do que qualquer texto de Ian Fleming, o criador de James Bond, o agente 007. Mais um trunfo do document�rio � sua maneira de explorar as dualidades entre o Ocidente e o Oriente durante a Guerra Fria. Cornwell esteve infiltrado na Alemanha Ocidental como um diplomata e acompanhou a cria��o do Muro de Berlim, descrito por ele como o �s�mbolo mais imoral da insanidade da luta humana�. Ele n�o apoiava nenhum dos lados e indicava crer que a polariza��o extrema da sociedade travava seu avan�o. Para f�s de hist�ria, pol�tica ou somente causos de agentes secretos, O T�nel dos Pombos � um dos melhores document�rios na pra�a. Al�m de trazer as �timas entrevistas com le Carr�, a produ��o agrega boas dramatiza��es e cenas de cl�ssicos filmes da espionagem, como O Espi�o que Saiu do Frio. Tudo isso com uma trilha sonora assinada por Philip Glass e Paul Leonard-Morgan, que d� o tom de suspense caracter�stico do universo dos servi�os secretos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	}

} while (jornal < 5);
	fclose(arquivo);
	return 0;
}

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

	FILE *arquivo = fopen("arquivo.txt", "a");
	
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
	fputs("\n\n", arquivo);
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
				printf("________________________________________________________________________________________________\n");
				printf("|Matéria 1. 'Aqui tem outra guerra: guerra de procurar comida e água', relata brasileiro em Gaza|\n");
				printf("|Matéria 2. Jovem com autismo que quase não fala cria mentalmente sinfonia                      |\n");
				printf("|-----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                               |\n");
				printf("|_______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("'Aqui tem outra guerra: guerra de procurar comida e água', relata brasileiro em Gaza\n");
						printf("\tOs brasileiros que estão na Faixa de Gaza voltaram a dar notícias. Na sexta-feira (27), a comunicação foi cortada em Gaza, após bombardeios intensos. O silêncio durou até este sábado (28). Depois de horas sem contato, a equipe do Fantástico falou com alguns deles para saber como está a situação hoje na fronteira com o Egito. A maior preocupação é a falta de comida e água. Hoje, trinta e quatro pessoas esperam a repatriação ao Brasil. Pela manhã, Hasan Rabee, um dos brasileiros em Gaza, falou novamente com a equipe do Fantástico. Ele, que está em Khan Yunis, só conseguiu fazer a ligação graças a um chip de celular que tinha do Brasil.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Jovem com autismo que quase não fala cria mentalmente sinfonia\n\n");
						printf("\tJacob, um jovem de 19 anos com autismo, sabe apontar para aquilo que ele precisa. Em geral, é música. Mas no repertório verbal, duas palavras: 'comer' e 'sim'. O pai do rapaz americano não precisa de frases pra ler o filho. Só que nem ele fazia ideia do segredo do filho: Jacob guardava uma sinfonia inteira na cabeça.A revelação veio depois de sete anos aprendendo a digitar. O clique aconteceu quando a escola fechou na pandemia. A família californiana ficou ainda mais perto. E de mãos dadas, guiava o filho até o teclado, onde Jacob encontrou a sua voz.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("____________________________________________________________________________________________________\n");
				printf("|Matéria 1.Tarcísio diz que não vai ampliar número de câmeras corporais da polícia em São Paulo     |\n");
				printf("|Matéria 2. Bruna Marquezine diz que novela ‘Deus Salve o Rei’ a deixou ‘completamente traumatizada’|\n");
				printf("|---------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                   |\n");
				printf("|___________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Tarcísio diz que não vai ampliar número de câmeras corporais da polícia em São Paulo\n\n");
						printf("\tO governador de São Paulo, Tarcísio de Freitas (Republicanos), declarou nesta segunda-feira, 30, que não pretende adquirir novas câmeras corporais para a polícia paulista neste ano nem no próximo. Ele disse que a gestão estadual possui 'várias demandas' e que pretende priorizar 'aquilo que realmente vai proporcionar ganho para o cidadão' ao comentar direcionamentos para o orçamento. rganizações haviam alertado na semana passada para o risco de ''desmonte' da política pública que acumula resultados positivos na redução da violência letal cometidas por agentes do Estado. As mortes cometidas por policiais militares em serviço cresceram 86% no terceiro trimestre deste ano em relação ao ano passado; a Operação Escudo, realizada no litoral, ajudou a puxar o dado para cima ao contabilizar 28 mortos em agosto.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Bruna Marquezine diz que novela ‘Deus Salve o Rei’ a deixou ‘completamente traumatizada’\n\n");
						printf("\tBruna Marquezine não hesitou em compartilhar detalhes sobre sua experiência na novela Deus Salve o Rei e disse que saiu do projeto 'completamente traumatizada'. Durante sua participação no programa De Frente com a Blogueirinha desta segunda-feira, 30, a atriz trouxe à tona sentimentos e desafios enfrentados ao interpretar sua primeira vilã, Catarina. Bruna disse que, mesmo tendo iniciado o projeto 'muito entusiasmada', já que era sua primeira vilã, a reação do público foi inesperada. 'A personagem foi rejeitada de cara pelo público', desabafou. Essa rejeição inicial tomou um peso emocional sobre Marquezine. 'Eu não gostava de fazer [a novela], estava infeliz, estava muito cansada', admitiu. E mesmo com a afirmação de que alguém gostava de sua atuação, ela brincou: 'Você e minha mãe só'.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("___________________________________________________________________________________________________\n");
				printf("|Matéria 1.Secretaria de Segurança do Amazonas vai comprar 18 PlayStations 5                        |\n");
				printf("|Matéria 2. O que se sabe sobre a queda de avião que deixou 12 pessoas mortas em Rio Branco, no Acre|\n");
				printf("|---------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                   |\n");
				printf("|___________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Secretaria de Segurança do Amazonas vai comprar 18 PlayStations 5\n\n");
						printf("\tA Secretaria de Segurança Pública do Amazonas vai realizar no próximo dia 7 uma licitação para adquirir mobiliário e equipamentos para um programa de qualidade de vida no trabalho que inclui 18 videogames PlayStation 5, 96 puffs, 18 poltronas massageadoras e 18 máquinas de café com 12 seleções de bebidas. Os itens estão descritos em um termo de referência datado de 25 de setembro e autorizado pelo secretário-executivo da pasta, o coronel da Polícia Militar Anézio Brito de Paiva. Na parte em que cita o videogame, cujas especificações são as do PS5, o termo estabelece que se inclua um plano de assinatura com disponibilidade de download de jogos pelo período de cinco anos. Um console com dois controles sai por cerca de R$ 4.600.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("O que se sabe sobre a queda de avião que deixou 12 pessoas mortas em Rio Branco, no Acre\n\n");
						printf("\tO Serviço Regional de Investigação e Prevenção de Acidentes Aeronáuticos, em Manaus, vai apurar as causas da queda de um avião de pequeno porte que deixou 12 pessoas mortas em Rio Branco, no Acre. O acidente ocorreu neste domingo (29), próximo ao aeroporto da cidade. De acordo com a Aeronáutica, serão utilizadas técnicas específicas na investigação, conduzidas por pessoal qualificado e credenciado que realiza a coleta e confirmação de dados, a preservação de indícios, a verificação inicial de danos causados à aeronave, ou pela aeronave, e o levantamento de outras informações necessárias ao processo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("______________________________________________________________________________________________________\n");
				printf("|Matéria 1.Mercado vê inflação, taxa de juros e rombo fiscal maiores após fala de Lula                |\n");
				printf("|Matéria 2. O plano do governo de interferir na gestão de empresas privadas. Disputa na América do Sul|\n");
				printf("|-----------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                     |\n");
				printf("|_____________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Mercado vê inflação, taxa de juros e rombo fiscal maiores após fala de Lula\n\n");
						printf("\tO mercado financeiro começou a mudar suas projeções depois que o presidente Luiz Inácio Lula da Silva (PT) descartou chances de déficit zero nas contas públicas em 2024. Segundo o boletim Focus, publicado pelo Banco Central na manhã desta segunda-feira (30), bancos e consultorias passaram a esperar inflação, taxa básica de juros e déficit primário maiores no ano que vem.A coleta de dados foi feita na sexta-feira (27), mesmo dia em que Lula afirmou que o governo 'dificilmente' conseguirá zerar o déficit. 'Até porque não queremos fazer corte de investimentos e de obras'', explicou o presidente.A meta de eliminar o rombo das contas públicas no ano que vem consta do novo arcabouço fiscal, preparado pelo Ministério da Fazenda, que foi sancionado pelo próprio Lula há apenas dois meses. O petista chamou o mercado de 'ganancioso demais' por cobrar o cumprimento desse objetivo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Governo de Israel confirma morte de DJ alemã sequestrada pelo Hamas\n\n");
						printf("\tO governo israelense confirmou nesta segunda-feira (30) a morte da jovem DJ germano-israelense Shani Louk, de 23 anos, cujo corpo foi exibido em uma caminhonete por terroristas do grupo Hamas, em um vídeo que correu o mundo.'Estamos arrasados por informar que o corpo da germano-israelense Shani Louk foi encontrado e identificado', afirmou o Ministério das Relações Exteriores israelense na rede social X (antigo Twitter).Um porta-voz do governo acrescentou à Agência EFE que, na verdade, uma parte do corpo da jovem foi localizada, foi realizado teste de reconhecimento por DNA, o que confirma sua morte. Um parente de Shani disse que ao portal The Jerusalem Post que a família da vítima recebeu um aviso oficial das Forças de Defesa de Israel (IDF), confirmando a identificação de um osso da base do crânio pertencente a ela.O comunicado do Ministério das Relações Exteriores diz que a jovem foi raptada por milicianos do Hamas durante a invasão ao festival de música eletrônica que acontecia perto da Faixa de Gaza no dia 7 de outubro.");
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
				printf("______________________________________________________________________________________________\n");
				printf("|Matéria 1. A 'segunda etapa' da guerra entre Israel e Hamas                                   |\n");
				printf("|Matéria 2. Dia de Finados é o penúltimo feriadão nacional e 2024 terá poucos; veja quais      |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("A 'segunda etapa' da guerra entre Israel e Hamas\n\n");
						printf("\tA guerra entre Hamas e Israel entrou na quarta semana com a maior série de bombardeios israelenses contra a Faixa de Gaza, e com a expansão das operações terrestres dentro do território palestino. Com o conflito longe do fim, o primeiro ministro de Israel, Benjamin Netanyahu, alertou que os combates estão entrando em uma 'segunda fase', e que serão 'longos de difíceis'. Mesmo diante de pedidos globais para um cessar-fogo, para tentar avançar na libertação dos mais de 200 reféns em poder do Hamas, para garantir a segurança dos civis e a entrega da ajuda humanitária, Netanyahu, com o aval dos Estados Unidos, vem rejeitando a suspensão dos combates. Ontem, ele alegou que o pedido de um cessar-fogo 'é um pedido para que Israel se renda à barbárie, ao terrorismo' e que 'isto não vai acontecer'.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Dia de Finados é o penúltimo feriadão nacional e 2024 terá poucos; veja quais\n\n");
						printf("\tCelebrado em 2 de novembro, o Dia de Finados é o próximo e último feriado prolongado de 2023. Por cair em uma quinta-feira, diferentes empresas e órgãos públicos adotam a sexta-feira como ponto facultativo e emendam a folga. Este ano, quem gosta de viajar teve um prato cheio, com sete feriadões. Assim como Finados, Independência do Brasil (7 de setembro) e Nossa Senhora Aparecida (12 de outubro) também caíram em quintas-feiras, com a possibilidade da 'famosa' emenda. Outros quatro foram na segunda ou na sexta-feira: Paixão de Cristo (7 de abril), Tiradentes (21 de abril), Dia Mundial do Trabalho (1º de maio). O Natal (25 de dezembro) também será em uma segunda-feira.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
			}
			if(jornal == 2){
				system ("cls");
				printf("_______________________________________________________________________________________________________\n");
				printf("|Matéria 1.São Paulo teve o mês de outubro mais chuvoso em 80 anos; veja previsão para os próximos dias|\n");
				printf("|Matéria 2. Lula elogia Vini Jr. por Prêmio Sócrates no Bola de Ouro; leia mensagem                    |\n");
				printf("|------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                      |\n");
				printf("|______________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("São Paulo teve o mês de outubro mais chuvoso em 80 anos; veja previsão para os próximos dias\n\n");
						printf("\tO mês de outubro foi o mais chuvoso no município de São Paulo desde que o Instituto Nacional de Meteorologia (Inmet) começou a fazer a medição, em 1943. O mês teve 356,0 milímetros (mm) de chuva, 180% acima da média história de 1991 a 2020, que é de 127,2 mm. Antes, o recorde era de 237,9 mm, registrado em 1969, segundo o Inmet. A medição deste ano foi feita na estação meteorológica situada no Mirante de Santana, na zona norte. O maior volume de chuva em 24 horas ocorreu no dia 9, quando choveu 86,6 mm. A temperatura máxima em outubro na capital paulista foi de 33,7°C, registrada no dia 24, e a mínima foi de 14,4°C, no dia 14. Essas temperaturas também foram registradas no Mirante de Santana. Não chovia tanto em São Paulo durante o mês de outubro desde 1943. ");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Lula elogia Vini Jr. por Prêmio Sócrates no Bola de Ouro; leia mensagem\n\n");
						printf("\tO presidente Luiz Inácio Lula da Silva (PT) elogiou o atacante brasileiro Vinícius Júnior em suas redes sociais na noite desta terça-feira. O chefe do Executivo repercutiu o prêmio conquistado pelo jogador do Real Madrid no evento realizado pela revista France Football, que concedeu a oitava Bola de Ouro para o argentino Lionel Messi. Vini Jr. foi agraciado com o Prêmio Sócrates, nomeado dessa forma em homenagem ao ídolo corintiano e da seleção brasileira, conhecido por seu engajamento político. O troféu foi entregue ao atacante brasileiro como reconhecimento pelos serviços prestados à sociedade pelo Instituto Vini Jr., um projeto voltado à educação de jovens por meio do esporte, fundado em 2020. 'Meus parabéns ao Vini Jr. pelo Prêmio Sócrates no Bola de Ouro 2023. Prêmio que leva o nome do meu grande amigo Sócrates e reconhece iniciativas sociais no esporte. Parabéns pelo seu trabalho, lutas sociais e o combate ao racismo. O Brasil abre o #NovembroNegro com esse importante registro de luta', escreveu Lula, destacando o mês da Consciência Negra para refletir sobre uma sociedade mais igualitária, inclusiva e antirracista.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("____________________________________________________________________________________________________\n");
				printf("|Matéria 1.Tribunais são enviesados contra mulheres e negros e não fazem justiça, diz advogada da OAB|\n");
				printf("|Matéria 2. Bolsonaro reage a nova condenação no TSE citando multas contra ele e Braga Netto         |\n");
				printf("|----------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                    |\n");
				printf("|____________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("\tOs Tribunais de Justiça são enviesados e, por isso, não fazem justiça, afirma Dione Almeida, secretária-geral adjunta da OAB-SP. Segundo ela, quem mais acessa o sistema de Justiça são negros, pobres e mães solo. Por isso, diz, é preciso olhar para essa realidade para pensar o futuro do direito.A justiça pensada até hoje, afirma Dione, 'é feita por pessoas que são muito diferentes de nós'. 'Por isso, não resolve os nossos problemas. Porque não parte da ideia de nós aqui dentro'. Em julho, por ocasião do Dia da Mulher Negra, Latino-Americana e Caribenha, Dione foi nomeada presidente interina da OAB-SP por dois dias. Com isso, tornou-se a primeira mulher negra a ocupar o cargo na seccional paulista, em 91 anos de existência da entidade.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Bolsonaro reage a nova condenação no TSE citando multas contra ele e Braga Netto\n\n");
						printf("\tO ex-presidente Jair Bolsonaro (PL) reagiu à nova condenação sofrida no TSE (Tribunal Superior Eleitoral) com a publicação, em redes sociais, dos valores das multas aplicadas contra ele e contra seu candidato a vice, o ex-ministro Walter Braga Netto. 'Novas multas: Bolsonaro: R$ 425.000,00. Braga Netto: R$ 212.800,00', escreveu Bolsonaro. A mensagem foi acompanhada de uma notícia de que o TSE o condenou novamente numa ação eleitoral, desta vez por abuso de poder político nas celebrações do 7 de Setembro do ano passado, e declarou Braga Netto inelegível até 2030. Em rede social, o deputado federal Eduardo Bolsonaro (PL-SP), nesta quarta (1º), chamou a condenação na Justiça Eleitoral de 'perseguição implacável'.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("______________________________________________________________________________________________\n");
				printf("|Matéria 1.Governo de São Paulo lança concurso para contratação de 2,7 mil policiais militares |\n");
				printf("|Matéria 2. Brasil deixa presidência do Conselho de Segurança da ONU; China assumirá o posto   |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Governo de São Paulo lança concurso para contratação de 2,7 mil policiais militares\n\n");
						printf("\tA Secretaria da Segurança Pública do estado de São Paulo anunciou, nesta terça-feira (31), concurso para a contratação de 2,7 mil policiais de segunda classe para a Polícia Militar. As inscrições começam às 10h no dia 6 de novembro e vão até 20 de dezembro. O salário inicial é de R$ 4.852,21 - incluindo salário-base e Regime Especial de Trabalho Policial.Este é o terceiro concurso público da corporação aberto pela gestão do governador Tarcísio de Freitas (Republicanos). Os outros dois processos seletivos foram abertos nos meses de maio e junho, com 2,7 mil vagas para soldados 2ª classe e 200 vagas para alunos-oficiais. Além disso, no último dia 19 foram autorizadas mais 200 vagas de alunos-oficiais para um novo edital, que ainda não tem data de publicação.Aumentar o efetivo da Polícia Militar foi uma das promessas de campanha de Tarcísio, que no início da gestão concedeu um reajuste considerado recorde para a categoria.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Brasil deixa presidência do Conselho de Segurança da ONU; China assumirá o posto\n\n");
						printf("\tO Brasil termina nesta terça (31) o mandato na presidência rotativa do Conselho de Segurança da Organização das Nações Unidas (ONU) sem resolver ou indicar um caminho para o fim do conflito entre Israel e o Hamas, que marcou a gestão do país no órgão praticamente desde o início - a partir do final da primeira semana, no dia 7 de outubro.Embora tenha tido um desempenho de tentar o consenso entre todos os membros, a diplomacia brasileira sai do colegiado frustrada por não conseguir resolver o primeiro grande desafio.O ministro Mauro Vieira, das Relações Internacionais, chefiou a delegação brasileira no Conselho e disse, na sessão de emergência desta segunda (30), que o órgão está 'falhando vergonhosamente'' em acabar com a guerra na Faixa de Gaza. A crítica deixou clara a frustração do Brasil à frente do colegiado por não ter chegado a um acordo com todos os membros.O chanceler enfatizou que, desde o início da guerra, o Conselho de Segurança realizou reuniões e ouviu discursos, mas não conseguiu tomar a decisão de 'pôr fim ao sofrimento humano no território'. Ele ressaltou que o colegiado possui os meios para tomar medidas eficazes, mas, 'repetida e vergonhosamente', não o fez.");
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
				printf("______________________________________________________________________________________________\n");
				printf("|Matéria 1. Enchente nas Cataratas do Iguaçu: Veja imagens e saiba o que provocou as cheias    |\n");
				printf("|Matéria 2. Antissemitismo e islamofobia crescem em meio a guerra entre Israel e Hamas         |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Enchente nas Cataratas do Iguaçu: Veja imagens e saiba o que provocou as cheias\n\n");
						printf("\tAs Cataratas do Iguaçu estão em situação complicada desde pelo menos o último domingo (29), quando atingiram a até então maior vazão histórica de água na região. Segundo a Companhia Paranense de Energia (Copel), nesse dia, as cachoeiras deram passagem a 18,6 milhões de litros por segundo - fluxo que é mais de 16 vezes superior ao usual, de 1,5 milhão. Nesta terça-feira (31), as enchentes continuam, e as passarelas de visitação, agora fechadas, estão completamente inundadas pela água.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Antissemitismo e islamofobia crescem em meio a guerra entre Israel e Hamas\n\n");
						printf("\tEstrelas de Davi pichadas em portas e fachadas de edifícios em Paris, na França, uma invasão a um aeroporto em uma república russa e ameaças publicadas na Internet contra um centro comunitário judaico no campus de uma universidade americana. Do outro lado, uma criança muçulmana de seis anos assassinada a facadas nos Estados Unidos. No rescaldo das quase quatro semanas da guerra entre Israel e o Hamas - que estourou após o ataque do grupo terrorista ao território israelense em 7 de outubro, deixando ao menos 1,4 mil mortos e levando Israel a realizar a maior ofensiva militar da História na Faixa de Gaza -, manifestações antissemitas e islamofóbicas aumentaram ao redor do globo, sobretudo nos EUA e em países europeus, alertam autoridades e ONGs.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________________________________________________\n");
				printf("|Matéria 1. Aeroporto de Congonhas fica fechado por 2 horas devido a problema em trem de pouso de avião |\n");
				printf("|Matéria 2. Thiago Brennand é condenado a 1 ano e 8 meses de prisão por agredir modelo em academia de SP|\n");
				printf("|-------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                       |\n");
				printf("|_______________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Aeroporto de Congonhas fica fechado por 2 horas devido a problema em trem de pouso de avião\n\n");
						printf("\tO aeroporto de Congonhas, na zona sul de São Paulo, ficou interditado por praticamente duas horas na noite desta quarta-feira, 1.º, véspera do feriado prolongado de Finados, devido a um problema com o trem de pouso de uma aeronave de pequeno porte. Segundo a Aena, empresa concessionária do aeroporto, ninguém se feriu, mas 13 voos foram cancelados e 17 transferidos para outros aeroportos. O problema ocorreu às 19h50 e se estendeu até as 21h49.Em nota, a concessionária informou que 'uma aeronave de pequeno porte, modelo Piper Aircraft PA-42, procedente de Cuiabá para o aeroporto de Congonhas, teve problemas com o trem de pouso durante a aterrissagem, às 19h50.'");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Thiago Brennand é condenado a 1 ano e 8 meses de prisão por agredir modelo em academia de SP\n\n");
						printf("\tO empresário Thiago Brennand, de 43 anos, foi condenado a um ano e oito meses de prisão por agredir a modelo Alliny Helena Gomes em uma academia de ginástica, em São Paulo. A decisão, divulgada nesta quarta-feira, 1º, foi dada pelo juiz Henrique Vergueiro Loureiro, da 6.ª Vara Criminal Central da capital. O magistrado estabeleceu ainda o pagamento de R$ 50 mil a título de indenização para a vítima. A defesa do empresário avalia entrar com recurso. Nesse mesmo processo, Brennand foi absolvido da acusação de corrupção de menor por estar acompanhado do filho no dia das agressões. A nova condenação prevê o cumprimento da pena em regime semiaberto, mas Brennand já foi condenado a dez anos e seis meses de prisão em outro processo e continua preso.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("______________________________________________________________________________________________\n");
				printf("|Matéria 1.Seca extrema na amazônia destrói turismo em comunidades ribeirinhas                 |\n");
				printf("|Matéria 2. Brasil envelhece sem estabelecer parâmetros para combater desigualdade             |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Seca extrema na amazônia destrói turismo em comunidades ribeirinhas\n\n");
						printf("\tComunidades do rio Negro que, até pouco tempo atrás, ofereciam quartos com vista para uma imensidão de águas amazônicas miram agora, vazias de visitantes, o solo rachado pela seca histórica que atinge a amazônia. Com as reservas canceladas em pousadas e restaurantes comunitários na região, quase R$ 200 mil deixaram de ser arrecadados em outubro. A Folha esteve, no último final de semana, em duas comunidades ribeirinhas do Amazonas em que o chamado turismo de base comunitária é uma das fontes de renda. Como tem ocorrido desde o início da seca, não havia turistas no Saracá e em Santa Helena do Inglês. A consequência para a economia local é lógica: potencial acúmulo de dívidas. Na comunidade Saracá, localizada dentro da RDS (Reserva de Desenvolvimento Sustentável) Rio Negro, no município de Iranduba (AM), Pedrina Brito de Mendonça, 40, aproveitou a ausência total de visitantes para reformar parte das hospedagens oferecidas.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Brasil envelhece sem estabelecer parâmetros para combater desigualdade\n\n");
						printf("\tLi semana passada, aqui na Folha, a divulgação dos dados do Censo Demográfico 2022, levantado pelo IBGE (Instituto Brasileiro de Geografia e Estatística) informando que o Brasil já contabiliza 37.814 pessoas centenárias. Para uma nação com 203,1 milhões de habitantes, este número é muito representativo. Além do mais, dada a nossa grande desigualdade, pela forte concentração de renda na mão de poucos, em geral concentrados nas regiões Sul e Sudeste, e, sobretudo, pela situação da precariedade dos serviços ofertados à velhice, é um feito a chegada de uma pessoa aos três dígitos de existência. O combate à desigualdade deve ser o primeiro parâmetro para se pensar em um Brasil de cidadãos e cidadãs centenariamente saudáveis. Envelhecer no Brasil representa um desafio enorme – ainda mais para pessoas negras, como é o caso de dona Maria Cardoso. Ela trabalhou na roça, casou aos 18 anos, teve cinco filhos e após ultrapassar a marca dos cem anos deu uma rasteira na velhice e virou 'influencer de vinho' de uma grande empresa do setor.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("__________________________________________________________________________________________________\n");
				printf("|Matéria 1.STF notifica Eduardo Bolsonaro por fala que supostamente compara professor a traficante|\n");
				printf("|Matéria 2. Membro do Hamas ameaça novos ataques “até que Israel seja completamente aniquilado”   |\n");
				printf("|-------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                 |\n");
				printf("|_________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("STF notifica Eduardo Bolsonaro por fala que supostamente compara professor a traficante\n\n");
						printf("\tO ministro Nunes Marques, do Supremo Tribunal Federal (STF) notificou o deputado federal Eduardo Bolsonaro (PL-SP) para que dê explicações sobre um discurso em que supostamente comparou professores a traficantes de drogas em julho deste ano, em um evento em São Paulo.Na decisão do dia 23 de outubro que foi divulgada nesta terça (31), Nunes Marques acolheu uma queixa-crime da deputada federal Luciene Cavalcanti (PSOL-SP) em que acusa o parlamentar de calúnia e difamação pelas redes sociais.O magistrado deu um prazo de 15 dias para Eduardo Bolsonaro se pronunciar (veja na íntegra). Nunes Marques também acolheu a outras duas petições referentes ao mesmo tema apresentadas por sindicatos de professores e pela Confederação Nacional dos Trabalhadores em Estabelecimentos de Ensino (Contee). Durante o evento em São Paulo, organizado pelo Movimento Pró-Armas, Eduardo Bolsonaro disse que 'não tem diferença de um professor doutrinador para um traficante de drogas que tenta sequestrar os nossos filhos para o mundo do crime'.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Membro do Hamas ameaça novos ataques “até que Israel seja completamente aniquilado” \n\n");
						printf("\tGhazi Hamad, membro do gabinete político do grupo terrorista palestino Hamas, assumiu a responsabilidade dos terroristas pelo massacre de civis israelenses realizado durante os ataques do Hamas contra o Estado de Israel, ocorridos no último dia 7 de outubro. Em uma entrevista concedida à emissora libanesa LCB, Hamad também declarou que o ataque realizado em outubro, que resultou na morte de 1,4 mil israelenses e no sequestro de 239 reféns levados para a Faixa de Gaza, foi apenas o 'começo' de uma série de outros ataques que poderão ocorrer novamente. Respondendo de maneira fria as perguntas sobre o massacre de judeus, Hamad afirmou que Israel 'não tem lugar'' na terra que ele disse pertencer aos terroristas do Hamas. Hamad ainda disse que a 'ocupação israelense' causou as ações devastadoras do grupo terrorista palestino. 'Nós somos as vítimas da ocupação. Portanto, ninguém deve nos culpar pelas coisas que fazemos. Em 7 de outubro, 10 de outubro, 1.000.000 de outubro: tudo o que fazemos está justificado', disse.");
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
				printf("______________________________________________________________________________________________\n");
				printf("|Matéria 1.Chefe de facção armada de Uganda é capturado após assassinar turistas em safári     |\n");
				printf("|Matéria 2. São Paulo tem 676 blocos inscritos para o Carnaval 2024                            |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Chefe de facção armada de Uganda é capturado após assassinar turistas em safári\n\n");
						printf("\tAutoridades de Uganda anunciaram, nesta quinta-feira, que capturaram o chefe de uma facção armada acusado de matar dois turistas estrangeiros em lua de mel e seu guia local em um parque nacional no mês passado. causar o caos, matar turistas, queimar escolas e hospitais foi eliminado -, afirmou Akiiki. - O único sobrevivente é o comandante que capturamos -, disse ele, acrescentando que será julgado. Akiiki disse que Njovu foi encontrado com alguns pertences dos turistas mortos e a carteira de identidade do guia ugandense.As vítimas do ataque de Outubro foram o britânico David Barlow, a sua esposa sul-africana Celia e o guia Eric Ayai.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("São Paulo tem 676 blocos inscritos para o Carnaval 2024\n\n");
						printf("\tA cidade de São Paulo soma 676 blocos inscritos para o Carnaval de rua do ano que vem, segundo divulgou a prefeitura de São Paulo nesta quinta-feira. Destes, 448 já têm endereço, hora e dia para acontecer. A capital paulista contará com oito dias de folia em 2024, com início no primeiro final de semana de fevereiro. A fase de registro dos blocos terminou na última terça-feira. A publicação dos nomes confirmados é feita no Diário Oficial sempre que o bloco atende aos critérios estabelecidos pelo poder municipal. Na próxima semana, cerca de 50 desfiles devem ser divulgados.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("______________________________________________________________________________________________________________\n");
				printf("|Matéria 1. Atriz que encontrou Matthew Perry um dia antes de sua morte diz que ele parecia ‘feliz e saudável’|\n");
				printf("|Matéria 2. Câmara dos EUA aprova ajuda a Israel, mas não para Ucrânia                                        |\n");
				printf("|-------------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                             |\n");
				printf("|_____________________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Atriz que encontrou Matthew Perry um dia antes de sua morte diz que ele parecia ‘feliz e saudável’\n\n");
						printf("\tEm entrevista publicada pela revista People na noite desta quinta, 2, a atriz e modelo Athenna Crosby, 25, afirmou que o ator Matthew Perry estava “muito bem” um dia antes de sua morte, quando ambos se encontraram para almoçar. “Ele parecia feliz. Ele parecia saudável. Ele só tinha coisas boas a dizer”, contou. Perry, que tinha 54 anos, foi encontrado morto por afogamento em sua casa, em Los Angeles, no dia 28. O encontro com Crosby aconteceu na véspera, no Bel Air Hotel. Segundo a atriz, eles se conheceram por amigos em comum e partiu dela a iniciativa de chamá-lo para sair. “Foi muito generoso da parte dele topar esse encontro comigo”, disse Crosby. “Eu estava começando a conhecê-lo melhor e ver se tínhamos coisas em comum, projetos que poderíamos fazer juntos no futuro.” “Ele me disse que ficar nessa indústria é um processo árduo, mas que se eu realmente me conhecesse e quisesse ser bem-sucedida, ninguém poderia me parar”, conta a artista. “Acho que é algo que ele sentia sobre sua própria vida”, completou.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Câmara dos EUA aprova ajuda a Israel, mas não para Ucrânia\n\n");
						printf("\tUma Câmara dividida aprovou nesta quinta-feira, 2, um projeto de lei redigido pelos republicanos que vincula US$ 14,3 bilhões em ajuda militar dos Estados Unidos a Israel para sua guerra contra o Hamas a cortes de gastos domésticos, desafiando uma ameaça de veto do presidente Biden e a oposição bipartidária no Senado. Os republicanos aprovaram a medida em uma votação majoritariamente partidária de 226 a 196, uma ocorrência rara porque os pacotes de ajuda a Israel normalmente contam com amplo apoio bipartidário. Mas a legislação, apresentada pelo recém-eleito porta-voz republicano Mike Johnson, alienou os democratas porque cortaria uma iniciativa de aplicação de impostos, uma parte da Lei de Redução da Inflação que é uma peça-chave da agenda de Biden. A medida está sendo encaminhada para um bloco bipartidário de oposição no Senado, onde os legisladores são a favor de agrupar a ajuda a Israel com dinheiro para ajudar a Ucrânia a se defender da invasão da Rússia, bem como para outras crises globais. Biden solicitou esse pacote, totalizando US$ 105 bilhões, e as autoridades da Casa Branca disseram na terça-feira que ele vetaria o projeto de lei da Câmara porque era limitado a Israel e continha “compensações de pílulas de veneno partidárias”. O senador Chuck Schumer, democrata de Nova York e líder da maioria, disse em um discurso antes da votação da Câmara na quinta-feira que o Senado não aceitaria a proposta aprovada pela Câmara e, em vez disso, elaboraria seu próprio projeto de lei bipartidário contendo ajuda para Israel e Ucrânia e ajuda humanitária para Gaza. A disputa resultante poderia se estender por semanas, atrasando a ajuda.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("_____________________________________________________________________________________________________\n");
				printf("|Matéria 1.UFC volta a São Paulo com embate entre Malhadinho e Derrick Lewis; veja como assistir     |\n");
				printf("|Matéria 2. Fim de semana em SP tem evento de cultura mexicana, shows e festival de música eletrônica|\n");
				printf("|----------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                    |\n");
				printf("|____________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("UFC volta a São Paulo com embate entre Malhadinho e Derrick Lewis; veja como assistir\n\n");
						printf("\tDepois de quatro anos, o UFC volta a São Paulo para um evento com 13 lutas neste sábado (4). Os fãs que conseguiram ingressos (já esgotados) vão assistir a luta mais esperada do dia entre o brasileiro Jailton 'Malhadinho' Almeida e o americano Derrick Lewis. Os portões externos do evento abrem às 17h para que o público consiga tirar fotos e pegar autógrafos de ídolos da franquia. Às 19h, começam as sete lutas do card preliminar, todas com brasileiros e brasileiras. Mais tarde, às 22h, os participantes das seis lutas principais entram no tatame. Quem não conseguiu ingressos para acompanhar a competição no ginásio poderá acompanhar os embates pelo streaming. O UFC Fight Pass, que tem assinaturas a partir de R$ 24,90, transmite o evento ao vivo a partir das 19 horas (horário de Brasília).");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Fim de semana em SP tem evento de cultura mexicana, shows e festival de música eletrônica\n\n");
						printf("\tO mês de novembro tem uma agenda cultura agitada em São Paulo. Quem não foi viajar neste feriadão do Dia de Finados pode aproveitar shows, festivais, bares e restaurantes na cidade.  Día de los Muertos - O Memorial da América Latina recebe eventos que têm a data mexicana, que homenageia aqueles que já partiram, como tema entre os dias 4 e 12 deste mês, com entrada gratuita. A programação conta com exposição de altares, feira gastronômica, shows e festival de cinema. No primeiro final de semana, das 11h às 21h, acontece o festival de tacos. O cardápio terá também outras comidas típicas, como burritos e quesadillas. A exposição 'Altares del Día de los Muertos' será inaugurada no sábado (4), na galeria Marta Traba, e fica em cartaz até domingo, 12 de novembro. A proposta é promover reflexões sobre as diferenças entre sentimentos e rituais ligados à morte entre Brasil e México. Bololô Restaurant & Bar - O novo estabelecimento de MC Ryan, autor do hit 'Tubarão Te Amo', que na zona leste viralizou no TikTok.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("__________________________________________________________________________________________________\n");
				printf("|Matéria 1. Paraná tem 15 trechos de rodovias com bloqueio total no feriado                       |\n");
				printf("|Matéria 2. São Paulo abre mais empresas do que os 16 estados das regiões Norte e Nordeste somados|\n");
				printf("|-------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                 |\n");
				printf("|_________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Paraná tem 15 trechos de rodovias com bloqueio total no feriado\n\n");
						printf("\tAlagamentos, rachaduras no asfalto, deslizamentos e riscos de queda de encostas devido às chuvas dos últimos dias levaram o Departamento de Estradas de Rodagem (DER-PR) a manter 15 trechos de rodovias paranaenses totalmente interditados no feriado de Finados. Em outros seis pontos, a interdição é parcial. Na PRC-476, em União da Vitória, um trecho danificado foi parcialmente recuperado e liberado de forma provisória para o tráfego de veículos na véspera do feriado. Veja quais são os pontos de interdição total de rodovias no estado, que, segundo o DER-PR, estão todos sinalizados.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("São Paulo abre mais empresas do que os 16 estados das regiões Norte e Nordeste somados\n\n");
						printf("\tO estado de São Paulo abriu aproximadamente 208 mil empresas de janeiro até agosto deste ano, segundo dados da Junta Comercial do Estado de São Paulo (Jucesp), o que é mais que as regiões Norte e Nordeste do Brasil, somadas, no mesmo período. O Nordeste teve um pouco mais de 106 mil empreendimentos abertos. Já o Norte do país registrou 33 mil novas empresas. As regiões representam 16 estados que, juntos, abriram cerca de 139 mil empresas, de acordo com o Cadastro Nacional da Pessoa Jurídica. Os números não levam em consideração a Microempresa Individual (MEI). Embora o estado paulista tenha mais empresas abertas, o processo é mais burocrático se comparado com as regões Norte e Nordeste. Segundo informações da Jucesp, que é vinculada à Secretaria de Desenvolvimento Econômico, o tempo médio para se abrir uma empresa é de 1 dia e 20 horas em São Paulo. Nos estados nortistas e nordestinos, o tempo médio é de 18 horas para obter um novo CNPJ.   ");
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
	   	break;
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
	   	case 8://jornal
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
	}

} while (jornal < 5);
	fclose(arquivo);
	return 0;
}

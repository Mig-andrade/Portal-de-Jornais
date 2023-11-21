#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdint.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void exibirMateria (char materia[]) {
	printf("MatÃ©ria escolhida: %s\n", materia);
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
	strcpy(str, "Nome de usuÃ¡rio: ");
	fputs(str, arquivo);
	fputs(usuario.nome, arquivo);
	fputs("\n", arquivo);
	printf("Digite seu email: ");
	scanf("%s", usuario.email);
	strcpy(str2, "Email do usuÃ¡rio: ");
	fputs(str2, arquivo);
	fputs(usuario.email, arquivo);
		system("cls");
		
		do{
		system("cls");
		printf("___________________________________________________\n");
		printf("|Bem vindo a nossa coleÃ§Ã£o de jornais.             |\n");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|MatÃ©ria 2. Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um inÃ­cio de sexta-feira com dÃ³lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confianÃ§a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tambÃ©m que nÃ£o farÃ¡ nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secretÃ¡rios de Guedes pedirem demissÃ£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a saÃ­da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogrÃ¡fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogrÃ¡fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo MÃ©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicÃ³ptero ao hospital da Universidade do Novo MÃ©xico, mas nÃ£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|MatÃ©ria 2. CecÃ­lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;//começo da mminha parte
	   	case 7://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|Matéria 1.Rússia comemora 100 anos de revolução bolchevique com desfile militar em Moscou       |\n");
				printf("|Matéria 2. Coldplay no Brasil: Ingressos, setlist e tudo o que você precisa saber sobre os shows|\n");
				printf("|------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                |\n");
				printf("|________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
					exibirMateria("Rússia comemora 100 anos de revolução bolchevique com desfile militar em Moscou\n\n");
						printf("\tOnde serão os shows? Há ingressos?\nA banda toca em São Paulo nesta terça e na quarta; e em Porto Alegre no sábado (11), em sua estreia na cidade. Os ingressos estão esgotados, mas é bom ficar de olho no site de vendas, porque muitas vezes aparecem ingressos de última hora.\n\nQuem fará os shows de abertura?\nNo primeiro dia em São Paulo, a abertura fica por conta da cantora carioca Iza. No segundo dia, quem abre é a inglesa Dua Lipa. Ela também abre o show em Porto Alegre. Dua Lipa tem 22 anos e um disco lançado, em junho deste ano. O repertório vai pelo pop dançante, com músicas como 'Hotter than Hell', 'Blow your mind' e 'New Rules'.\n\nComo saber que o show está prestes a começar?\nTudo começa ao som de ópera. Quando tocar 'O mio babbino caro' , é bom se preparar. Logo depois da música da soprano grega Maria Callas, a banda aparece no palco.\n\nO Coldplay aceita pedidos da plateia?\nA última música do set acústico, logo antes do bis, sempre muda. É quando Chris Martin dá atenção aos gritos dos fãs e escolhe a que ele julga ser a mais pedida. Nos últimos shows desta turnê, rolaram:\n'Green Eyes', 'O', 'Us Against the World', 'Trouble', 'Til kingdon come'\n\nQual é o provável setlist?\nVeja set segundo a média das músicas tocadas na turnê, feito pelo site Setlist.fm:\n'A Head Full Of Dreams'\n'Yellow'\n'Every Teardrop Is a Waterfall'\n'The  Scientist'\n'Birds'\n'Got Put a Smile Upon Your Face'\n'Paradise'\n'Aways in my head'\n''Magic'\n'Everglow'\n'Clocks'\b'Midnight'\n'Charlie Brown'\n'Hymn For The Weekend'\n'Fix You'\n'Viva La Vida'\n'Adventure of a Lifetime'\n'Kaleidoscope'\n'in My Place'\n'Don't Panic'\n'Us Against the World'\n'Something Just Like This'\n'A Sky Full Of Stars'\n'Up & Up'\n\nComo foi o último show em São Paulo?\nO último show em São Paulo teve pedido de casamento e coro de 45 mil fãs. Eles se esbaldaram por cerca de duas horas, entre pulseiras que piscavam em sincronia com as músicas e tempestades de estrelinhas recortadas.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Coldplay no Brasil: Ingressos, setlist e tudo o que você precisa saber sobre os shows\n\n");
						printf("\tO astro americano Alec Baldwin disparou uma arma cenográfica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo México. Halyna Hutchins tinha 42 anos e chegou a ser levada de helicóptero ao hospital da Universidade do Novo México, mas não resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
//feito jornal 1 dia 7
			}
			if(jornal == 2){
				system ("cls");
				printf("_______________________________________________________________________________________________________________________\n");
				printf("|Matéria 1. Um réu julgado pelos ataques antidemocráticos do 8 de janeiro forçou o ministro do Supremo Tribunal Federal|\n");
				printf("| (STF) Alexandre de Moraes a ter que anular uma votação realizada no plenário virtual da Corte, que tinha a previsão  |\n");
				printf("|de ser encerrada nesta terça-feira, dia 7                                                                             |\n\n");
				printf("|MatÃ©ria 2. Entenda a proposta do MDA para transferência de terras de devedores para a reforma agrária                |                                                             |\n");
				printf("|----------------------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                                                                     |\n");
				printf("|______________________________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Um réu julgado pelos ataques antidemocráticos do 8 de janeiro forçou o ministro do Supremo Tribunal Federal (STF) Alexandre de Moraes a ter que anular uma votação realizada no plenário virtual da Corte, que tinha a previsão de ser encerrada nesta terça-feira, 7.\n\n");
						printf("Eduardo Zeferino Englert, de 42 anos, foi acusado de ser um dos integrantes do acampamento do Quartel-General do Exército em Brasília, mas após a sua defesa argumentar que ele não estava lá, o julgamento foi zerado e marcado para ser realizado novamente no próximo dia 17 de novembro. Alexandre de Moraes anulou julgamento virtual que se encerraria nesta terça-feira, 7, por conta de divergência sobre participação de réu no QG do Exército Foto: WILTON JUNIOR Englert é um dos réus acusados de participar dos ataques aos Três Poderes. No voto, Moraes propôs que ele fosse condenado a 17 anos de prisão pelos crimes de associação criminosa armada, abolição violenta do Estado Democrático de Direito, golpe de Estado e dano qualificado. Moraes pontuou que 'está comprovado' a participação do réu 'como participante e integrante das caravanas que estavam no acampamento do QG do Exército naquele fim de semana'. Porém, o advogado de Eduardo, Marcos Vinicius Rodrigues de Azevedo, entrou com uma petição no último dia 31 de outubro afirmando que o acusado tinha chegado na capital federal no início da tarde do 8 de janeiro e, portanto, não poderia ter sidoum integrante do acampamento nos dias anteriores. 'O laudo pericial, neste ponto, confirma o que foi relatado pelo réu em audiência, de modo a ratificar a saída do réu de Santa Maria, RS em 6/1/2023 e a chegada em Brasília em 8/1/2023, às 13h45min no CTG [ Centro de Tradições Gaúchas] Jayme Caetano Braun, onde ficou por uma hora, sem qualquer passagem pelo Quartel General do Exército', afirmou a defesa na petição.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O Banco do Brasil informou que a prática de alienação de bens utilizados como garantia em empréstimos e financiamentos, por exemplo, é comum no sistema financeiro. Nesse processo, instituições públicas, a exemplo de governos federal, estaduais e municipais podem adquirir as propriedades pelo valor de mercado. Em relação à seleção de famílias que ocuparão as terras transformadas em assentamentos, o processo atualmente é feito por meio de edital, de responsabilidade do Instituto Nacional de Colonização e Reforma Agrária (Incra). A classificação dos beneficiários se dá por ordem de prioridade para distribuição de lotes e observando critérios como tamanho da família e força de trabalho, tempo na atividade agrária, renda e outros. As parcelas de terras dos assentamentos são destinadas a famílias de agricultores e trabalhadores rurais que não têm condições de adquirir um imóvel.\nProposta de adjunção de terras\nNo dia 9 de outubro de 2023, o ministro do Desenvolvimento Agrário e Agricultura Familiar, Paulo Teixeira, visitou o assentamento Dorcelina Folador, em Arapongas, no norte do Paraná. Ao lado do ministro do Desenvolvimento e Assistência Social, Família e Combate à Fome do Brasil (MDS), Wellington Dias, o chefe da pasta visitou a Cooperativa da Comercialização e Reforma Agrária Camponesa (COPRAN), que produz laticínios, e conheceu a produção de hortaliças e legumes de uma família de assentados. Durante a visita, Teixeira fez o discurso do qual foi retirado o trecho vinculado à peça de desinformação. O ministro fala sobre a proposta do governo de adjudicar terras de “maus pagadores” e destiná-las ao assentamento de famílias da reforma agrária. Adjudicação é o nome que se dá ao processo de transferência de um bem de um devedor ao credor. Teixeira também garante que a primeira ação do governo nesse sentido será no Paraná, nas “terras dos Atallas”, se referindo às propriedades do Grupo Atalla. De acordo com o Mapa de Conflitos, desenvolvido pelo Núcleo Ecologias, Epistemologias e Promoção Emancipatória da Saúde da Fiocruz, a família é dona de cerca de 40 mil hectares de terras e tem histórico de violação de direitos trabalhistas, práticas de trabalho escravo e mais de R$ 150 milhões de dívidas trabalhistas. A fala do ministro foi republicada pelo ex-presidente Jair Bolsonaro (PL). “Vem aí a expropriação de terras”, escreveu ele. Após a repercussão, Paulo Teixeira explicou a proposta. Ele afirmou que a possibilidade de adjudicação de imóveis de “grandes devedores” já está prevista em lei. O Decreto nº 433/1992 autoriza a aquisição de imóveis rurais, mediante compra e venda, para fins de destinação aos projetos do programa de reforma agrária. Existe ainda a Lei 13.105/2015, que discorre sobre a adjudicação, na subseção I, mais especificamente nos artigos 876, 877 e 888. Além disso, é comum que clientes usem imóveis e outros bens como garantia em empréstimos, financiamentos e outras negociações feitas junto às instituições financeiras. No entanto, em caso de inadimplência, o banco pode tomar esses bens e vendê-los a pessoas físicas, jurídicas e entidades governamentais. 'O Banco do Brasil atua com as melhores práticas bancárias no processo de cobrança e regularização de créditos, priorizando o recebimento de parcelas em atraso no menor prazo possível, atuando preventivamente, de modo a evitar a inadimplência e a ocorrência de perdas, sempre na busca das melhores soluções financeiras para seus clientes. No entanto, quando o rito de cobrança não surte efeito, faz-se necessária a execução de garantias”, esclareceu o Banco do Brasil em nota ao Comprova.' 'Nos últimos 5 anos, por exemplo, foram vendidos mais de 6 mil imóveis neste processo, sendo 234 imóveis rurais e 5,814 mil urbanos', pontua. A proposta do governo, portanto, é a criação de novos assentamentos a partir da adjudicação de imóveis rurais de proprietários com grandes dívidas de impostos ou débitos em bancos. 'Nós temos uma demanda muito grande de agricultores que querem plantar, mas não têm terra. E essas terras pertencem à sociedade brasileira, já que são terras que foram dadas em garantia de impostos ou de financiamentos' defendeu o ministro. Ao Comprova, o MDA informou que o programa ainda está em fase de construção.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
//feito jornal 2 dia 7



			}
			if(jornal == 3){
				system ("cls");
			printf("    ___________________________________________________________________________________________\n");
				printf("|Matéria 1. Greve convocada por bolsonaristas tem fake news e paralisações localizadas     |\n");
				printf("|Matéria 2. Rússia comemora 100 anos da revolução bolchevique com desfile militar em Moscou|\n");
				printf("|------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                          |\n");
				printf("|__________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Greve convocada por bolsonaristas tem fake news e paralisações localizadas\n\n");
						printf("A greve geral convocada por bolsonaristas nesta segunda-feira (7) teve paralisações localizadas no Sul e Centro-Oeste do país, fake news sobre empresa que teria aderido e uso de vídeos de atos de 7 de setembro. A convocação, que pedia a adesão de empresários, tinha ares de locaute (greve de empresas, hoje proibida pela legislação). O Ministério Público do Trabalho também investiga denúncias de funcionários que estariam sendo pressionados a participar de manifestações antidemocráticas. A gigante de alimentos Aurora, de Chapecó (SC), afirmou que foi alvo de fake news. Vídeos e mensagens em grupos de WhatsApp e Telegram afirmavam que a cooperativa de alimentos iria paralisar suas unidades nesta segunda-feira, o que foi desmentido pela empresa, que funcionou normalmente. Todas as unidades agropecuárias, industriais, comerciais, centros logísticos e setores de apoio estão operando normalmente. A logística de transporte continua atendendo às demandas em todas as regiões onde a empresa atua, disse, em nota. 'A emprea diz respetar o movimento' amparado pelo princípio constitucional da liberdade de manifestação e tem demonstrado seu caráter pacífico e ordeiro. Além disso, espera que em nome da paz social, todas as questões que emergiram nesse período pós-eleitoral sejam equacionadas pelo diálogo e pelo respeito entre os cidadãos-manifestantes e os Poderes da República, informou. 'Já o Sistema Famasul, que integra a Federação da Agricultura e Pecuária do Mato Grosso do Sul, com sede em Campo Grande (MS), não teve expediente nesta segunda-feira (7). Segundo comunicado publicado em suas redes sociais, a paralisação é em apoio às manifestações pacíficas e ordeiras' que são feitas pelo Brasil. Em Mato Grosso do Sul, a suspensão nas atividades da Famasul foi confirmada pela recepção da entidade, que informou à reportagem não haver colaborador trabalhando no local nesta segunda. A Folha 'não conseguiu contato com responsável pela entidade para mais detalhes sobre o ato até a publicação deste texto.' A Famasul integra a CNA (Confederação da Agricultura e Pecuária do Brasil), o Senar (Serviço Nacional de Aprendizagem Rural), além de congregar 69 sindicatos rurais e a Aprosoja (Associação dos Produtores de Soja e Milho de MS). Em nota publicada no site da entidade, no dia 2 de novembro, a Famasul fala sobre 'resgate e fortalecimento dos valores da família e de um Brasil mais soberano e independente', reforçando não abrir mão do 'direito de propriedade, liberdade, livre expressão, crescimento econômico e social do país.' Já nos estados do Sul, nenhuma paralisação ou impacto foram confirmados por federações de indústrias e agropecuárias consultadas pela reportagem. Em Rondonópolis (MT), o presidente da Acir (Associação Comercial e Industrial), Renato Del Cistia, estima que 70% das empresas da cidade fecharam ou estão trabalhando em regime de plantão. Segundo ele, esta é uma percepção pessoal, e inclui empresas do ramo do comércio, indústria, agronegócio e setor de serviços. A associação comercial não pode, por estatuto, apoiar ou incentivar o fechamento de qualquer empresa. Mas Rondonópolis, com certeza, apoia esse movimento. Nós somos uma cidade do interior e as empresas e os empresários apoiam o movimento, afirma Del Cistia. Segundo Del Cistia, na manhã desta segunda, houve uma carreata em apoio aos manifestantes. O movimento se concentra em frente ao 18º GAC (Grupo de Artilharia de Campanha), do Exército Brasileiro. Lideranças de caminhoneiros autônomos informaram que a categoria não participou da mobilização desta segunda e que o fluxo nas rodovias foi normal. Dentro da categoria dos caminhoneiros, foram as grandes empresas que estiveram presentes [nos atos iniciados após o resultado das eleições presidenciais]. Transportadoras e grandes empresários. O caminhoneiro autônomo que estava nas rodovias ficou preso [nos bloqueios], diz Carlos Alberto Litti Dahmer, diretor da CNTTL (Confederação Nacional dos Trabalhadores em Transporte e Logística). No final da tarde, Santa Catarina teve o último bloqueio liberado após confronto com a polícia e a maioria dos estados tinha estradas livres. No Paraná, manifestantes atacaram a PRF (Polícia Rodoviária Federal)  no momento em que policiais tentavam desbloquear o trecho da rodovia, um dos últimos pontos de interdição no país. Na noite desta segunda-feira, havia obstruções em rodovias federais de quatro estados: Rondônia, Mato Grosso, Pará e Paraná. ");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Rússia comemora 100 anos de revolução bolchevique com desfile militar em Moscou\n\n");
						printf("Uma parada militar em Moscou celebra, nesta terça-feira (7), 100 anos da revolução bolchevique. O desfile, segundo o 'Washington Post', é também uma recriação de uma parada militar realizada em 1941, quando a Rússia desafiou as forças alemãs, que chegavam aos arredores de Moscou na 2ª Guerra Mundial. O líder comunista Guennadi Ziuganov deve liderar a parada de comunistas e admiradores de Lênin. O presidente Vladimir Putin, no entanto, não deve participar de eventos oficiais em comemoração ao centenário, segundo as agências internacionais. Segundo analistas, o atual presidente teme que o tema provoque novas divisões entre os russos. O centenário foi ignorado completamente pelo Kremlin desde que Putin determinou, no final de 2016, que o acontecimento não fosse comemorado. Neste ano, nas poucas vezes em que se referiu ao centenário, os comentários do presidente foram acompanhados de pedidos de não 'trazer para nossos dias as divisões, os ódios, as afrontas e a crueldade do passado'. 'Por acaso não era possível progredir não por meio de uma revolução, mas através de uma evolução?', disse Putin recentemente. Segundo os analistas, Putin e o Kremlin sempre estiveram interessados em ressaltar outro fato histórico, o Dia da Vitória sobre a Alemanha nazista na Segunda Guerra Mundial, já que é um evento que une todos os russos, independentemente de suas ideias políticas, diferente da revolução. O centenário tambéo coincide com o começo dos preparativos das eleições presidenciais de março de 2018, nas quais Putin vai concorrer à reeleição, segundo todas as previsões.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
//feito jornal 3 dia 7


			}
			if(jornal == 4){
					system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Lula bloqueia R$ 3,8 bilhões de recursos para hospitais e livros didáticos\n");
				printf("|Matéria 2. O próprio Hamas mostra por que Israel não pode deixar os terroristas continuarem em Gaza|\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Lula bloqueia R$ 3,8 bilhões de recursos para hospitais e livros didáticos\n\n");
						printf("Desde o início do governo do presidente Luiz Inácio Lula da Silva (PT), até o dia 1º de novembro, já foram bloqueados cerca de R$ 3,8 bilhões de verbas para o funcionamento de hospitais, o pagamento do Auxílio Gás e a compra de livros didáticos na educação básica. O valor do corte orçamentário corresponde a um levantamento da Associação Contas Abertas, com dados do Sistema Integrado de Planejamento e Orçamento (Siop), que foram divulgados nesta terça-feira (7) pelo Estadão. O bloqueio dos recursos por parte do governo ocorre quando há risco de descumprir as regras fiscais durante o ano, e isso pode paralisar ou atrasar as ações do governo federal nas áreas afetadas. De acordo com os ministérios, poder haver o impacto para atividades essenciais, mas não há riscos de um “apagão” nos programas até o fim do ano. “O presidente promete não fazer em 2024 o que está fazendo em 2023?, afirmou o secretário-geral da associação Contas Abertas, Gil Castello Branco, ao Estadão. Segundo levantamento do Contas Abertas, a ação que sofreu o maior bloqueio foi a que custeia os serviços de assistência hospitalar e ambulatorial, do Ministério da Saúde, um total de R$ 296 milhões. O dinheiro é destinado para realização de consultas, exames, tratamentos e cirurgias. O corte atingiu recursos indicados por bancadas estaduais do Congresso e envolve emendas não obrigatórias. A verba é de forte interesse dos parlamentares e uma demanda de hospitais nos Estados e municípios Outro bloqueio de maior impacto, é o do Auxílio Gás, no valor de R$ 262 milhões. O Estadão revelou que, se o dinheiro não for destravado até o fim do ano, 2 milhões de famílias correm o risco de não receber o benefício em dezembro. No Ministério da Educação, foram bloqueados R$ 179,8 milhões do orçamento da produção e compra de livros didáticos para a educação básica. O valor poderia ser revertido, conforme apontou o Estadão, na compra de aproximadamente 17 mil livros para professores e estudantes do ensino fundamental. Esse bloqueio se soma a outros cortes feitos pela pasta na alfabetização, transporte escolar e bolsas de estudo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("O próprio Hamas mostra por que Israel não pode deixar os terroristas continuarem em Gaza\n\n");
						printf("O presidente Joe Biden, que inicialmente declarou seu apoio 'inabalável e sólido como uma rocha' a Israel, pediu uma 'pausa' no ataque terrestre do Estado judeu a Gaza na quarta-feira (1º), em meio às críticas aos ataques aéreos israelenses. No entanto, um membro sênior do gabinete político do Hamas mostrou exatamente por que Israel deve erradicar o grupo terrorista genocida após o horrível pogrom de 7 de outubro, que matou mais de 1.400 israelenses. Ghazi Hamad, membro do gabinete político do Hamas e ex-vice-ministro das Relações Exteriores do grupo, prometeu que o ataque de 7 de outubro, no qual terroristas do Hamas assassinaram civis e até bebês, aconteceria de novo e de novo até que os terroristas apagassem Israel da face da terra. 'Devemos ensinar uma lição a Israel, e faremos isso de novo e de novo', disse Hamad, de acordo com uma entrevista em 24 de outubro na televisão libanesa traduzida pelo Instituto de Pesquisa de Mídia do Oriente Médio. 'A Invasão em Al-Aqsa foi apenas a primeira, e haverá uma segunda, uma terceira, uma quarta, porque temos a determinação, a vontade e as capacidades para lutar.' 'Israel é um país que não tem lugar em nossa terra', declarou o líder do Hamas. 'Devemos remover esse país, porque constitui uma catástrofe de segurança, militar e política para a nação árabe e islâmica, e deve ser eliminado. Não temos vergonha de dizer isso, com toda a força.' 'Somos chamados de nação de mártires, e temos orgulho de sacrificar mártires', acrescentou Hamad. O líder do Hamas declarou que 'a ocupação deve chegar ao fim', esclarecendo que não se referia apenas a Gaza, mas a 'todas as terras palestinas'. 'A existência de Israel é o que causa toda essa dor, sangue e lágrimas', acrescentou ele. 'É Israel, não nós. Somos vítimas da ocupação. Ponto. Portanto, ninguém deveria nos culpar pelas coisas que fazemos.' Hamad insistiu que o Hamas não pretendia atacar civis, mas que os terroristas enfrentaram 'complicações no terreno'. O Hamas atacou Israel no sábado e na celebração de Simchat Torah, o dia mais alegre do calendário judaico. Os terroristas massacraram civis em suas casas e jovens em um festival de música. Eles estupraram mulheres ao lado dos cadáveres de seus amigos. Eles mataram crianças na frente de seus pais e pais na frente de seus filhos. Eles decapitaram bebês. Eles se gabaram de matar judeus. Eles fizeram mais de 200 reféns, incluindo mulheres, crianças e idosos. As observações de Hamad revelam que o Hamas não pretende parar esses ataques até destruir completamente Israel. Isso apenas comprova o argumento do primeiro-ministro israelense, Benjamin Netanyahu, de que o estado judeu deve erradicar o Hamas para evitar essa ameaça existencial. Israel deve agir rapidamente para evitar que o Hamas se reorganize. Embora um cessar-fogo e a 'ajuda humanitária' soem nobres, o governo genocida que controla Gaza provou que tirará vantagem de qualquer ajuda que o Ocidente envie. O Hamas transformou canos de água em foguetes para atacar Israel. Eles usaram materiais de construção para cavar túneis de onde atacar Israel. Eles vão militarizar qualquer demora para alcançar seu objetivo final - destruir o estado judeu. O Irã direcionou dinheiro ao Hamas, e os outros agentes de Teerã na região também estão se voltando contra Israel. O estado judeu enfrentou ataques de todas as direções - no sudoeste, do Hamas; no norte, do Hezbollah; no oeste, da Jihad Islâmica Palestina; e no sul, dos rebeldes Houthi no Iêmen. De acordo com minha análise do Daily Signal, o Irã recebeu pelo menos US$ 71 bilhões a mais sob Biden do que teria sob o ex-presidente Donald Trump, devido ao relaxamento de Biden na aplicação das sanções e suas medidas de distensão com os mulás. Isso pode ter contribuído para o 7 de outubro e para os outros ataques que Israel enfrenta dos agentes do Irã na região. Israel precisa encerrar rapidamente a guerra para evitar que ela se transforme em um conflito regional. Da mesma forma, os EUA devem impor sanções contra o Irã e posicionar ativos militares para dissuadir os mulás de entrar no conflito diretamente. O 7 de outubro mostrou que Israel deve levar o Hamas a sério, e as observações de Hamad mostram que não pode comprometer-se com o governo antissemita e genocida que controla Gaza. Israel deve manter o rumo, e os EUA devem oferecer apoio firme ao seu aliado para alcançar seu objetivo. Qualquer alternativa, como Hamad demonstra, seria inadmissível.");
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
				printf("|MatÃ©ria 1. Comissão de Agricultura da Câmara convoca ministros por ‘discriminação’ e ‘perseguição’ ao agro\n");
				printf("|MatÃ©ria 2.Família procura empresário brasileiro que desapareceu na Suíça após viagem a negócios          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Calor de 44,8°C: Araçuaí (MG) tem o dia mais quente no histórico de medições do Brasil, diz Inmet\n\n");
						printf("\tO município de Araçuaí (MG), distante 678 km de Belo Horizonte, no Vale do Jequitinhonha, foi considerado o mais quente no histórico de medições do país, de acordo com o Instituto Nacional de Meteorologia (Inmet). A cidade com 34.297 habitantes alcançou, no domingo (19), a temperatura de 44,8°C O recorde anterior tinha sido registrado no dia 21 de novembro de 2005, em Bom Jesus (PI), distante 632 km ao Sul de Teresina, quando a máxima foi de 44,7°C. Um aquecimento pré-frontal intensificou o calor no Nordeste de Minas Gerais, o que favoreceu a elevação da marca que ocorreu no décimo dia da onda de calor (entenda abaixo quais foram os fatores que causaram o novo recorde). Essa foi a oitava onda de calor registrada no Brasil neste ano. O fenômeno estava em atuação desde o dia 8 de novembro e acabou no fim de semana. Um levantamento anterior do Inmet, porém, indicou que a marca de 44,8°C já havia sido registrada nos dias 4 e 5 de novembro de 2020, em Nova Maringá (MT). O g1 entrou em contato com o órgão para verificar se a informação de 2020 tem validade, mas até a última publicação não obteve resposta.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Família procura empresário brasileiro que desapareceu na Suíça após viagem a negócios\n\n");
						printf("\tMárcio Rodrigues da Silva, de Itupeva (SP), foi a Zurique, no dia 7 de novembro. Esposa disse ao g1 que, no dia seguinte, o empresário contou que teve problemas com a empresa que fez negócios. Horas depois, parou de dar notícias e teve o celular desligado. Um empresário brasileiro está desaparecido desde 8 de novembro, após uma viagem a negócios para a Suíça. A família de Itupeva (SP) está à procura de informações sobre o paradeiro de Márcio Rodrigues da Silva, 44 anos. Ana Lúcia Rodrigues, esposa de Márcio, disse ao g1 que o marido viajou ao país europeu no dia 7 de novembro e que pousou em Zurique no dia seguinte. Ela diz que Márcio chegou a mandar um vídeo e fotos para ela, mostrando que havia aterrissado no aeroporto suiço. Segundo Ana, Márcio viajou para assinar documentos de um investimento que havia feito pela internet e precisava ser feito pessoalmente, em Zurique. O empresário atua no ramo de produtos terapêuticos. A mulher diz que, após o marido encontrar com um grupo de pessoas dessa suposta empresa, começou a dizer que achava que havia caído em um golpe. Conforme a esposa, por volta de 13h30 do dia 8 (horário de Brasília), ele parou de dar notícias e o celular foi desligado. Ela diz que o marido comentou que o grupo havia pego o passaporte dele, alegando que precisaria do documento, mas não devolveram mesmo após pedido de Márcio. Ana registrou um boletim de ocorrência de pessoa desaparecida e está em contato com a Interpol. O g1 pediu informações para o Ministério das Relações Exteriores, mas o órgão retornou dizendo que não pode comentar o caso, devido à privacidade prevista na Lei de Acesso à Informação. A pasta informou que está à disposição da família, através do consulado brasileiro.")	
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1.Comissão de Agricultura da Câmara convoca ministros por ‘discriminação’ e ‘perseguição’ ao agro|\n");
				printf("|MatÃ©ria 2.BYD dá seguro grátis para Dolphin, Yuan Plus e Song Plus em novembro                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Comissão de Agricultura da Câmara convoca ministros por ‘discriminação’ e ‘perseguição’ ao agro\n\n");
						printf("A Comissão de Agricultura da Câmara dos Deputados aprovou, nesta quarta-feira, 8, a convocação dos ministros Camilo Santana (Educação) e Marina Silva (Meio Ambiente) para prestar esclarecimentos sobre posturas de “discriminação” e “perseguição” feitas ao agronegócio, segundo os proponentes dos requerimentos. A ofensiva do colegiado ocorreu após a polêmica das questões do Exame Nacional do Ensino Médio (Enem), que foram desaprovadas pela bancada que defende o setor. Os deputados aprovaram a convocação do ministro da Educação para que ele preste esclarecimentos sobre a “politização” do Enem, que foi aplicado no último domingo, 5. O ministro deve comparecer ao colegiado no dia 22 de novembro. Na segunda-feira, 6, a Frente Nacional da Agropecuária (FPA), que conta a participação de 347 congressistas, pediu a anulação de três questões do exame, que abordaram os efeitos do agronegócio no Cerrado e na Floresta Amazônica e a nova corrida espacial feita por bilionários. A FPA também exigiu o comparecimento de Santana em audiências na Câmara e no Senado Federal. “É inacreditável o governo federal se utilizar de desinformação em prova aplicada para quase 4 milhões de alunos brasileiros que disputam uma vaga nas universidades do Brasil. A anulação das questões é indiscutível, de acordo com literaturas científicas sobre a atividade agropecuária no Brasil e no mundo, em respeito à academia científica brasileira”, afirmou a FPA em nota divulgada na segunda. O requerimento de convocação de Camilo Santana é de autoria do deputado Evair Vieira de Melo (PP-ES), que disse que o agro reagiu com repúdio às questões do Enem. Segundo o parlamentar, o setor não pode ser simplificado como uma “força exclusivamente negativa” nas discussões sobre a preservação ambiental. “As perguntas em questão representam um perigoso desserviço à nação, dada a apresentação de uma abordagem unicamente crítica em relação à atividade agropecuária no Brasil, bem como uma escolha clara de uma corrente ideológica”, afirmou Evair no requerimento. O parlamentar solicita esclarecimentos “a respeito da politização das provas do Enem de 2023, em especial sobre a discriminação do setor agropecuário da região Centro-Oeste e seus habitantes”. Ao Estadão, o presidente da comissão Tião Medeiros (PP-PR) afirmou que a convocação do ministro da Educação busca entender o objetivo das questões criticadas pelo setor. “O convite foi para falar sobre o quanto essa prova do Enem está avaliando os alunos ou ideologizando eles”, afirmou.	");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("BYD dá seguro grátis para Dolphin, Yuan Plus e Song Plus em novembro\n\n");
						printf("Para muitas empresas, a Black Friday no Brasil não se resume a um dia apenas, mas a todo o mês de novembro. Dessa forma, a BYD oferece seguro grátis por um ano para quem comprar os carros da marca. Na ação ''Electric Days', os elétricos Dolphin e Yuan Plus, e o híbrido Song Plus comprados em novembro terão um ano de seguro total gratuito. Em parceria com a Porto Seguro, a apólice inclui cobertura no valor integral da tabela Fipe, franquia reduzida e assistência com quilometragem ilimitada. Além disso, tem danos materiais e danos corporais limitados a R$ 150 mil cada, cobertura para os vidros, carro reserva por 15 dias e um valor de R$ 5 mil para o passageiro em caso de acidente. Este só não vale para quem exerce atividade remunerada com o veículo, como os motoristas de aplicativo. Os três principais produtos da BYD deverão ter produção no Brasil. A montadora chinesa comprou a antiga fábrica da Ford em Camaçari (BA) e deve iniciar as operações entre o fim de 2024 e o começo de 2025. Por R$ 149.800, o Dolphin é o carro de entrada. O hatch tem motor elétrico dianteiro de 95 cv e 18,3 mkgf de torque. Como resultado, a aceleração de 0 a 100 km/h é feita em 10,9 segundos e a velocidade máxima chega a 150 km/h. Segundo o Inmetro, a autonomia é de 291 km. Já o SUV Yuan Plus traz um motor de 204 cv e 31,6 mkgf e pode rodar até 294 km de acordo com as medições brasileiras. Assim, acelera de 0 a 100 km/h em 7,3 segundos e atinge 160 km/h. O preço é de R$ 229.800. Aliás. o Dolphin ganhou recentemente a versão Plus com este mesmo conjunto elétrico pelo preço de R$ 179.800. Por fim, o Song Plus é um SUV híbrido plug-in que também custa R$ 229.800 (mesma tabela do Yuan). O carro combina motor 1.5 a gasolina e um elétrico para entregar 235 cv potência e 40,8 mkgf. Dessa forma, chega aos 100 km/h em 7,9 segundos e alcança velocidade máxima de 140 km/h.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Crianças voltam à Folhinha para lembrar a 'fama' depois de aparecer no jornal|\n");//esse ta errado
				printf("|MatÃ©ria 2. Revisão da vida toda do INSS volta a julgamento no STF no fim deste mês|\n");//fazer esses depois
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
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
						exibirMateria("Revisão da vida toda do INSS volta a julgamento no STF no fim deste mês\n\n");
						printf("InformaÃ§Ãµes de como a CÃ©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Congresso tenta aumentar controle sobre Orçamento com cronograma de repasses e emendas de liderança\n");
				printf("|Matéria 2. O próprio Hamas mostra por que Israel não pode deixar os terroristas continuarem em Gaza|\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Congresso tenta aumentar controle sobre Orçamento com cronograma de repasses e emendas de liderança\n\n");
						printf("Parlamentares estão se articulando para aumentar ainda mais o controle do Congresso sobre o Orçamento por meio de emendas, diminuindo o poder do Executivo sobre verbas discricionárias. Há pelo menos três propostas em discussão: a criação de emendas de liderança, o estabelecimento de um cronograma para a liberação de emendas parlamentares impositivas (como as individuais e de bancadas estaduais) e ainda um projeto de lei que quer tornar obrigatórias as emendas de comissões permanentes da Câmara e do Senado. O relatório preliminar do projeto da Lei de Diretrizes Orçamentárias (LDO) de 2024, aprovado nesta terça-feira (7) na Comissão Mista de Orçamento do Congresso, não prevê essas medidas. Mas o relator da matéria, deputado Danilo Forte (União-CE), afirmou que, no relatório final, irá propor a criação de emendas de bancada partidária ou de liderança, que o deputado chamou de RP-5, para substituir as extintas emendas de relator. Atualmente, existem três tipos de emendas parlamentares: as individuais (RP-6), as de bancadas estaduais (RP-7) e as emendas de comissão (RP-8). As emendas de relator (RP-9), conhecidas como "orçamento secreto", foram declaradas inconstitucionais no ano passado pelo Supremo Tribunal Federal (STF), em razão da falta de transparência – não era possível identificar, por exemplo, qual parlamentar havia feito a indicação da verba. Para realocar os R$ 19,4 bilhões destinados a tais emendas no orçamento de 2023, o governo do presidente Luiz Inácio Lula da Silva (PT) dividiu o montante em duas frentes: para os ministérios (RP-2) e para as emendas individuais (RP-6). As emendas de ministério são de uso discricionário do Executivo, mas parlamentares já denunciaram que elas estão sendo usadas como moeda de troca para apoio em projetos de lei de interesse do governo. O mesmo ocorre com as demais emendas, mesmo as impositivas (de execução obrigatória), já que não há a necessidade de cumprir um calendário para o repasse desses valores. No total, R$ 9,8 bilhões que deveriam ser destinados para as emendas de relator foram parar nos ministérios da Saúde, Cidades, Agricultura, Educação e Integração Regional. Com a nova medida, Forte busca trazer de volta para o Congresso a execução desses recursos. O deputado não divulgou o valor que poderá ficar sob a responsabilidade das bancadas partidárias (emenda de liderança). A porcentagem final dessa dotação depende da revisão da meta fiscal pelo governo. A favor das novas emendas, Forte defendeu a transparência e constitucionalidade da proposta. “Nós não estamos criando novas RP-9. Essas emendas partidárias de bancada vão ter origem, destino e acompanhamento. Então, não vai ser nada camuflado do ponto de vista dos seus encaminhamentos. A RP-5 é uma rubrica clara com relação a essa questão e vai ter toda a tramitação com os parâmetros que um orçamento público exige”, afirmou Forte. Contudo, a proposta da criação de uma emenda de liderança para substituir a de relator ainda está em discussão. O deputado Aluísio Mendes (Republicanos-MA), vice-líder da maior bancada da Câmara, afirma que há resistência em apoiar o projeto e que ele ainda será debatido nos próximos dias. “Foi feito um acerto há uns 15 dias de que a melhor saída era a impositividade das emendas de comissão (RP-8), mas ele (Danilo Forte) entendeu que era melhor colocar as emendas por bancada partidária. Mas isso ainda vai ser discutido, ainda há uma resistência em apoiar a impositividade dessas emendas”, afirma. Alternativa às emendas de comissão permanente. A obrigatoriedade do pagamento das emendas de comissão está contida em um projeto do senador Zequinha Marinho (PL-PA). No dia 31 de outubro, a Comissão de Assuntos Econômicos do Senado aprovou o PL que segue para avaliação da Comissão de Constituição e Justiça da Casa. A expectativa para o projeto é de que seja aprovado ainda este ano, em ambas as casas. A rápida tramitação e aceitação do PL se deve ao crescente desconforto do Congresso Federal diante dos frequentes atrasos nos repasses das emendas parlamentares pelo governo Lula. E não é só a oposição que tem reclamado da demora para o depósito dos recursos. Deputados e senadores, até mesmo da base aliada do PT, têm criticado a falta de agilidade da Secretaria de Relações Institucionais (SRI), liderada pelo ministro Alexandre Padilha, em cumprir com os acordos estabelecidos. O cientista político e advogado Valdir Pucci avalia que o ministro faz o jogo do governo. “O Padilha é criticado pelos parlamentares na medida em que promete que determinada emenda será liberada, e acaba não sendo. Mas isso faz parte do jogo político do governo, da busca pelo apoio do Legislativo às medidas que interessam ao Executivo”. Outra estratégia governista seria a demora que os parlamentares têm encontrado para marcar reuniões nos ministérios. Esses encontros de gabinete são fundamentais para acertar o repasse das emendas. Alguns congressistas afirmam que a espera pode chegar a cerca de 60 dias para conseguir se reunir com determinados ministros, isso quando não deixam de ser recebidos. Além da barganha política, a prática petista de aparelhar a administração com seu pessoal, retirando inclusive técnicos de carreira de cargos operacionais, também agrava a demora para execução dos repasses em razão da falta de pessoal treinado para realizar os processos. Uma das principais preocupações de deputados e senadores é que as emendas empenhadas, ou seja, aquelas cujos recursos já estão reservados para transferência, não sejam pagas até o fim do ano. Nesse caso, elas entram na classe de “restos a pagar” e os trâmites para que cheguem até o seu destino no próximo ano, tanto para estados quanto para municípios, são bem mais complexos. Cronograma de pagamentos para as emendas Para evitar que isso siga acontecendo, uma das apostas do Congresso é estabelecer um prazo para os repasses. Para tanto, pode ser criado um dispositivo na LDO que obrigue o pagamento da emenda no ano de sua indicação. Caso isso não ocorra, poderá se tornar crime de responsabilidade ou o atraso ficará sujeito a multas, por exemplo. Forte também mencionou a necessidade criação de um cronograma para a liberação de emendas parlamentares. Mesmo assim, o deputado não esclareceu se o relatório final da LDO, previsto para ser votado até o dia 24 de novembro, tratará dessa questão. Atualmente, mesmo para aquelas de execução impositiva, como as individuais e de bancadas estaduais, não há regras que estabeleçam prazos definidos para o pagamento. Deste modo, os recursos de muitas emendas deixam de ser transferidos pelo governo. Estima-se que, até o momento, aproximadamente entre 23% e 28% de todo o valor empenhado para as emendas parlamentares em 2023 ainda não foi transferido, contra cerca de 5% no mesmo período do ano passado. A falta de obrigatoriedade para cumprir um cronograma de repasse do valor das emendas ou de sanção, no caso de atrasos, facilita o uso desses recursos como moeda de troca para a aprovação das pautas governistas no Congresso. Dessa forma, o estabelecimento de um calendário de repasses, é um ponto crucial o Legislativo, que visa retomar sua autonomia orçamentária e, portanto, de execução, diminuindo o poder de barganha do PT. O atraso tem, inclusive, prejudicado prefeitos que apoiaram a eleição de Lula. A falta de repasse estaria atrasando, por exemplo, o andamento de obras em todo o país, além de atrapalhar investimentos em saúde. O volume é expressivo. Para o orçamento de 2024, a LDO prevê R$ 37,6 bilhões para emendas parlamentares individuais e de bancadas, sem contar com o total para as emendas extra. Em ano de eleições municipais, a liberação e a aplicação desses recursos podem ser fundamentais para os resultados que o PT e os demais partidos terão nas prefeituras em todo o país. “As emendas existem justamente para que os parlamentares possam encaminhar recursos para a sua base eleitoral, de forma legítima e democrática, como ocorre em qualquer democracia. O parlamentar é quem está na base, mais presente junto a sua comunidade, junto a seu município – ele sabe a necessidade de um hospital, de uma estrada e as emendas servem para isso”, afirma Pucci. O cientista político também sinaliza que, caso as medidas para garantir a execução das emendas não sejam implementados, o governo ainda pode abrir mão da liberação de emendas para irrigar prefeituras e, consequentemente, campanhas dos seus aliados, enquanto sufoca financeiramente aquelas geridas por políticos da oposição.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("O próprio Hamas mostra por que Israel não pode deixar os terroristas continuarem em Gaza\n\n");
						printf("O presidente Joe Biden, que inicialmente declarou seu apoio 'inabalável e sólido como uma rocha' a Israel, pediu uma 'pausa' no ataque terrestre do Estado judeu a Gaza na quarta-feira (1º), em meio às críticas aos ataques aéreos israelenses. No entanto, um membro sênior do gabinete político do Hamas mostrou exatamente por que Israel deve erradicar o grupo terrorista genocida após o horrível pogrom de 7 de outubro, que matou mais de 1.400 israelenses. Ghazi Hamad, membro do gabinete político do Hamas e ex-vice-ministro das Relações Exteriores do grupo, prometeu que o ataque de 7 de outubro, no qual terroristas do Hamas assassinaram civis e até bebês, aconteceria de novo e de novo até que os terroristas apagassem Israel da face da terra. 'Devemos ensinar uma lição a Israel, e faremos isso de novo e de novo', disse Hamad, de acordo com uma entrevista em 24 de outubro na televisão libanesa traduzida pelo Instituto de Pesquisa de Mídia do Oriente Médio. 'A Invasão em Al-Aqsa foi apenas a primeira, e haverá uma segunda, uma terceira, uma quarta, porque temos a determinação, a vontade e as capacidades para lutar.' 'Israel é um país que não tem lugar em nossa terra', declarou o líder do Hamas. 'Devemos remover esse país, porque constitui uma catástrofe de segurança, militar e política para a nação árabe e islâmica, e deve ser eliminado. Não temos vergonha de dizer isso, com toda a força.' 'Somos chamados de nação de mártires, e temos orgulho de sacrificar mártires', acrescentou Hamad. O líder do Hamas declarou que 'a ocupação deve chegar ao fim', esclarecendo que não se referia apenas a Gaza, mas a 'todas as terras palestinas'. 'A existência de Israel é o que causa toda essa dor, sangue e lágrimas', acrescentou ele. 'É Israel, não nós. Somos vítimas da ocupação. Ponto. Portanto, ninguém deveria nos culpar pelas coisas que fazemos.' Hamad insistiu que o Hamas não pretendia atacar civis, mas que os terroristas enfrentaram 'complicações no terreno'. O Hamas atacou Israel no sábado e na celebração de Simchat Torah, o dia mais alegre do calendário judaico. Os terroristas massacraram civis em suas casas e jovens em um festival de música. Eles estupraram mulheres ao lado dos cadáveres de seus amigos. Eles mataram crianças na frente de seus pais e pais na frente de seus filhos. Eles decapitaram bebês. Eles se gabaram de matar judeus. Eles fizeram mais de 200 reféns, incluindo mulheres, crianças e idosos. As observações de Hamad revelam que o Hamas não pretende parar esses ataques até destruir completamente Israel. Isso apenas comprova o argumento do primeiro-ministro israelense, Benjamin Netanyahu, de que o estado judeu deve erradicar o Hamas para evitar essa ameaça existencial. Israel deve agir rapidamente para evitar que o Hamas se reorganize. Embora um cessar-fogo e a 'ajuda humanitária' soem nobres, o governo genocida que controla Gaza provou que tirará vantagem de qualquer ajuda que o Ocidente envie. O Hamas transformou canos de água em foguetes para atacar Israel. Eles usaram materiais de construção para cavar túneis de onde atacar Israel. Eles vão militarizar qualquer demora para alcançar seu objetivo final - destruir o estado judeu. O Irã direcionou dinheiro ao Hamas, e os outros agentes de Teerã na região também estão se voltando contra Israel. O estado judeu enfrentou ataques de todas as direções - no sudoeste, do Hamas; no norte, do Hezbollah; no oeste, da Jihad Islâmica Palestina; e no sul, dos rebeldes Houthi no Iêmen. De acordo com minha análise do Daily Signal, o Irã recebeu pelo menos US$ 71 bilhões a mais sob Biden do que teria sob o ex-presidente Donald Trump, devido ao relaxamento de Biden na aplicação das sanções e suas medidas de distensão com os mulás. Isso pode ter contribuído para o 7 de outubro e para os outros ataques que Israel enfrenta dos agentes do Irã na região. Israel precisa encerrar rapidamente a guerra para evitar que ela se transforme em um conflito regional. Da mesma forma, os EUA devem impor sanções contra o Irã e posicionar ativos militares para dissuadir os mulás de entrar no conflito diretamente. O 7 de outubro mostrou que Israel deve levar o Hamas a sério, e as observações de Hamad mostram que não pode comprometer-se com o governo antissemita e genocida que controla Gaza. Israel deve manter o rumo, e os EUA devem oferecer apoio firme ao seu aliado para alcançar seu objetivo. Qualquer alternativa, como Hamad demonstra, seria inadmissível.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|Matéria 1. Prefeitura de Demerval Lobão abre inscrições de processo seletivo com 44 vagas e salário de até R$ 3 mil|\n");
				printf("|Matéria 2. Monitor da Violência: dois meses e meio depois, maioria dos casos de morte violenta está em aberto       |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Prefeitura de Demerval Lobão abre inscrições de processo seletivo com 44 vagas e salário de até R$ 3 mil\n\n");
						priintf("\tA Prefeitura de Demerval Lobão, Sul do Piauí, abriu nesta quinta-feira (9) as inscrições do processo seletivo para a contratação de profissionais de nível superior. São ofertadas 44 vagas, além de cadastro de reserva, com salário de até R$ 3.315. As inscrições podem ser feitas até o dia 28 de novembro no site da organizadora do concurso, a Fundação Vale do Piauí (Funvapi). A taxa de inscrição custa R$ 70. Todas as vagas são de nível superior e as remunerações variam de R$ 1,8 mil a R$ 3,3 mil. As vagas são para os seguintes cargos: Assistente Social (2); Psicólogo (2); Professor de Polivalência (22); Professor de Língua Portuguesa (4); Professor de Ciências (1); Professor de Geografia (1); Professor de História (1); Professor de Inglês (2); Professor de Matemática (4); Professor de Artes (2); Professor de Educação Física (3). O processos seletivo ocorrera em uma única etapa: prova objetiva de múltipla escolha, com 30 questões, que será de cunho eliminatório e classificatório. As provas vão ser realizadas no dia 17 de dezembro. O resultado final será divulgado a partir de 5 de janeiro de 2024.")
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Monitor da Violência: dois meses e meio depois, maioria dos casos de morte violenta está em aberto\n\n");
						printf("Dois meses e meio depois, 64% do total de casos de morte violenta ocorridos entre 21 e 27 de agosto no Brasil continuam em aberto e só 12% registram alguma prisão. É o que mostra um novo levantamento feito pelo G1 tendo como base todas as mortes registradas durante uma semana no país. Se forem excluídos os casos em que a polícia não informa ou que não foi possível obter o status dos crimes, o índice de casos em andamento sobe para 75% (e o de prisões, para 15%). Mais de 230 jornalistas espalhados pelo país apuraram e escreveram as histórias das vítimas. Agora, acompanham o andamento desses casos. O novo levantamento revela que: 761 casos estão em andamento (64% do total OU 75% dos inquéritos aos quais o G1 teve acesso - 1.014) 216 casos estão concluídos 27 inquéritos não foram nem sequer instaurados em 514 casos, a autoria ainda é desconhecida há 370 casos com o autor ou os autores identificados pela polícia (sendo 512 pessoas ao todo) em 141 casos, foi efetuada a prisão de um ou mais suspeitos (12% do total OU 15% se forem excluídos os casos não informados e os suicídios) O Código de Processo Penal determina que um inquérito policial seja concluído em 10 dias quando houver prisão em flagrante ou 30 dias em caso de inexistência de prisão cautelar. Os delegados, no entanto, podem pedir um prazo maior para elucidar o caso – o que normalmente acontece.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Brasileirão 2023: Botafogo e Palmeiras reduzem chances de título e Grêmio triplica sua condição|\n");
				printf("|MatÃ©ria 2. Terminal do mesário não mostra votos de eleitores; TSE esclareceu o boato                       |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria(" Brasileirão 2023: Botafogo e Palmeiras reduzem chances de título e Grêmio triplica sua condição\n\n");
						printf("Depois de sofrer a quarta derrota consecutiva, mais uma vez de virada, agora para o Grêmio, no Rio, o Botafogo viu cair ainda mais as suas chances de ser campeão do Brasileirão de 2023, despencando para 30%, conforme as contas do Departamento de Matemática da Universidade Federal de Minas Gerais (UFMG). O time carioca ainda é líder da competição, mas duas equipes têm os mesmos 59 pontos: o Palmeiras, que também viu reduzir a probabilidade de erguer a taça depois de levar 3 a 0 do Flamengo, e o Grêmio, que se colocou na luta pelo troféu nacional nesta quinta. Terceiro colocado, o Palmeiras baixou de 25,4% para 19,8% a possibilidade de ganhar o torneio, enquanto que o Grêmio, novo vice-líder, mais que triplicou suas chances de ser campeão do campeonato que não ganha desde 1996. A estatística de título do Red Bull Bragantino, derrotado pelo São Paulo por 1 a 0 na rodada e que caiu para o quarto lugar na tabela, também diminuiu, de 32,3% para 25,2%. Segundo os cálculos da UFMG, depois do triunfo sobre o Palmeiras, o Flamengo, quinto colocado, com 56 pontos, aumentou a probabilidade de erguer o troféu, mas o número ainda é baixo. Subiu de 1,6% para 6,2%. Assim como o Botafogo e o Bragantino, o time rubro-negro tem 31 jogos disputados, um a menos, portanto, em relação aos demais. Sexto colocado, o Atlético Mineiro registra 0,42% de possibilidade de levantar a taça. Na parte de baixo da classificação, o Santos conseguiu respirar mais aliviado ao ganhar do Goiás em Goiânia por 1 a 0. Era disputa direta de rivais próximos do Z-4. Com isso, subiu aos 41 pontos e viu o risco de queda baixar de 21,4% para 3,9%. Quem corre risco ainda maior de cair é o Corinthians, que tropeçou pelo segundo jogo seguido ao empatar com o Atlético Mineiro por 1 a 1 em casa. A possibilidade de o time de Mano Menezes ser rebaixado, porém, ainda é baixa: de 7,5%. Dois dos outros times que lutam contra o descenso, Cruzeiro e Vasco, 17º e 16º colocados, ambos com 37 pontos, ainda se enfrentam pela 33ª rodada, mas o jogo foi adiado. Ambos têm 32,7% e 19,2% de probabilidades de retornar à Série B, respectivamente. Quem está bastante ameaçado é o Bahia, que também tem 37 pontos, mas já jogou e perdeu. O time do técnico Rogério Ceni, que ocupa a 15ª posição, levou 3 a 0 do Cuiabá em casa e viu o risco de cair para a segunda divisão subir consideravelmente, de 31,4% para 49,7%. Ceni foi contratado com a única missão de salvar a equipe da queda e não está conseguindo fazer isso. O perigo só não é maior do que o Goiás, que soma 35 pontos e é 18º. Depois de perder para o Santos no confronto direto, a equipe goiana agora registra 84,8% de probabilidade de descer à Série B. O Coritiba (99,9%) pode ter seu rebaixamento decretado na próxima rodada e o América Mineiro foi o primeiro time a cair na competição.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){//falta 1 aqui estadao dia 9
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("De acordo com o TSE, a gravação foi feita em uma seção eleitoral em Rio Branco, no Acre. O painel mostrado no vídeo exibe duas linhas com duas sequências de números cada. A primeira linha aponta, respectivamente, a quantidade de eleitores com e sem biometria que compareceram à seção e o total de pessoas que votam naquele local. A segunda linha do painel diz respeito ao quantitativo de eleitores com biometria cadastrada que tiveram problemas no reconhecimento da digital. O último número da sequência é referente às pessoas com biometria cadastrada que compareceram ao local de votação até o momento. Os dados da coluna inferior mudam concomitantemente porque há possibilidade de o eleitor ter a biometria cadastrada, mas que não foi reconhecida pelo leitor biométrico do terminal do mesário na hora da votação”, explica o TSE. Conforme explicado neste vídeo, o terminal permite que o mesário acompanhe diversas informações sobre o status da urna eletrônica. Por exemplo, o tempo usado durante a votação, o nível de bateria, a conexão com a energia, entre outras. No entanto, o mesário não tem acesso a qualquer dado sobre o voto do eleitor, que é sigiloso. Dessa forma, não é possível saber em qual candidato o cidadão votou. O desempenho de cada candidatura em uma seção só é disponibilizado após o encerramento da votação, por meio do Boletim de Urna (BU), que traz um relatório completo sobre o número de votos por candidato, partido, nulos e brancos. Conforme já verificado pelo Comprova, o sistema de votação brasileiro pode ser auditado e nunca foi identificada ou comprovada qualquer fraude. Atualmente, o processo eleitoral passa por diversas etapas de auditoria e fiscalização antes, durante e depois das eleições. Entre as iniciativas promovidas pela Justiça Eleitoral para aumentar a transparência e segurança sobre o processo estão a abertura do código-fonte, que é disponibilizado para entidades interessadas, e o Teste Público de Segurança, feito para identificar possíveis vulnerabilidades nas urnas e corrigi-las antes das eleições. Neste site, o TSE lista todas as oportunidades de auditoria e fiscalização do sistema. Participam do processo de auditoria partidos políticos, federações e coligações, Polícia Federal, Ministério Público, Congresso Nacional, Supremo Tribunal Federal e diversas outras entidades. O que diz o responsável pela publicação: O Comprova entrou em contato com o perfil responsável pela postagem no X (antigo twitter), mas ele não aceita mensagens. Também houve contato por meio do perfil do responsável pela gravação e pela conta do Kwai que publicou o vídeo, mas não obteve resposta até a publicação desta verificação.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1.Fim de semana em SP tem mostras de cinema, roda de samba e feira gastronômica|\n");
				printf("|MatÃ©ria 2. Desmatamento na Amazônia fica abaixo de 10 mil km2 pela primeira vez desde 2018                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O segundo fim de semana de novembro está recheado de opções de lazer em São Paulo. Mostras de cinema, degustação de espumantes e feiras gastronômicas fazem parte da programação. Confira a seguir destaques da seção especial O Melhor do Fim de Semana. Produzida pela equipe do Guia Folha e publicada sempre às sextas, ela pretende orientar o leitor sobre o que há de melhor na programação de São Paulo. Novembro tem sido um mês agitado na capital paulista, com Fórmula 1, UFC e um extenso calendário de grandes shows. A movimentação também é vista no circuito de cinemas da capital, que só nesta semana terá a exibição de cinco mostras. Entre elas, há opções para quem gosta de filmes franceses e italianos, ou quer conhecer títulos que têm a comida como temática. Confira a lista com os destaques a seguir. Festival de Cinema Italiano no Brasil 2023 Até 9 de dezembro, seis endereços de São Paulo exibem produções italianas da atualidade e do século passado. A seleção de 32 filmes é composta por 16 longas inéditos e 16 clássicos na retrospectiva "A Comédia à Italiana", que chega a todo o Brasil pelo streaming, disponível no site do festival. Os dois formatos podem ser assistidos de graça. Neste sábado (11), o cinema Petra Belas Artes exibe "A Sombra de Caravaggio"; a sessão acontece às 16h. A cinebiografia que conta a história do artista tem direção de Michele Placido. Festival Varilux de Cinema Francês A edição de 2023 do festival começou na última quinta-feira (9) e vai até dia 22 de novembro. Em São Paulo, salas de nove cinemas recebem os 22 filmes selecionados. Exibido na Mostra Internacional de Cinema de São Paulo e premiado no Festival de Cannes, "Anatomia de uma Queda", de Justine Triet, pode ser assistido às 20h40 deste sábado (11) no Espaço Itaú de Cinema Augusta. Já "Making Of", de Cédric Kahn, será exibido no Cine LT3, às 20h neste domingo (12). Food Film Fest Até o dia 19, a mostra de cinema exibe, de graça, cerca de 30 produções ligadas à alimentação. Na seleção estão filmes como "Os Catadores e Eu", de Agnès Varda. Quem assistir a "A Dama e o Vagabundo" neste sábado às 14h30 na Cinemateca Brasileira, poderá degustar um prato de macarronada como o da animação. MixBrasil O principal festival destinado à cultura LGBTQIA+ do país retorna neste ano para sua 31ª edição, entre os dias 9 e 19 de novembro, e novamente com vencedores do Teddy, troféu destinado a filmes queer do Festival de Berlim. É o caso de "Todas as Cores Entre o Preto e o Branco", de Babatunde Apalowo, exibido às 16h deste sábado no Museu da Imagem e do Som em São Paulo. Novembro Negro O Instituto Moreira Sales exibe neste sábado, às 17h, os filmes "Ar condicionado", de Fradique, e "Palenque", de Sebastián Pinzón Silva. A sequência de filmes, que se repete no dia 21 deste mês, sai por R$ 10 na bilheteria do local ou pelo site.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Após quatro anos consecutivos de taxas altíssimas, o desmatamento anual na Amazônia ficou abaixo de 10 mil km² pela primeira vez. De agosto de 2022 a julho de 2023, foram perdidos 9.001 km² de floresta, uma redução de 22,3% na comparação com o período anterior. Os dados são do programa Prodes, do Inpe (Instituto Nacional de Pesquisas Espaciais), que foram divulgados nesta quinta-feira (9) e são considerados os números oficiais de desmate no país, sendo usados na definição de políticas públicas. A taxa rompe o padrão estabelecido durante o governo do ex-presidente Jair Bolsonaro (PL) e representa uma vitória para o presidente Lula (PT), que tinha na pauta ambiental um dos focos da sua plataforma eleitoral.Marina Silva (Rede), escolhida pelo petista para chefiar novamente MMA (Ministério do Meio Ambiente e Mudança do Clima), foi a responsável pela criação do programa que reduziu o desmatamento de 27,8 mil km², em 2004, para a mínima histórica, de cerca de 4.600 km², em 2012. A ministra afirmou que enfrentou neste ano uma situação mais complicada que em 2003, quando assumiu a pasta pela primeira vez. Segundo ela, o governo Bolsonaro foi leniente na região e permitiu a proliferação de uma série de crimes, como garimpo ilegal e tráfico de armas e drogas. Hoje há uma profusão de criminalidades após completo desmonte da estrutura de governança ambiental, de destruição de órgãos de comando e controle e de incentivo, inclusive, a atividades que redundavam em desmatamento, disse. Ela apontou também que os dados poderiam ser melhores, mas o retrato ainda considera cinco meses da gestão Bolsonaro. O período avaliado pelo Prodes vai de agosto a julho por ser o intervalo entre as estações secas da floresta amazônica, quando o desmate é facilitado pela falta de chuvas. Conseguimos uma redução de 22% do desmatamento mesmo tendo uma 'contratação' de 6.000 km² [desmatados na Amazônia] do governo Bolsonaro, afirmou a ministra, referindo-se às taxas de agosto a dezembro de 2022, que compõem os números recém-divulgados. Desde janeiro, quando assumimos o governo, o presidente Lula assumiu o compromisso com o desmatamento zero até 2030. Grande parte desse desmatamento vem da Amazônia. Nós sabíamos que era um desafio muito grande. Esta foi a maior queda percentual no índice anual de desmatamento em uma década. De 2011 para 2012, a redução tinha sido de quase 29% —no entanto, a extensão do desmate era bem menor. Em 2011, tinham sido 6.418 km² derrubados. Em 2012, o valor atingiu o mínimo histórico do Prodes, de 4.571 km². Os números são divulgados em meio a uma seca histórica na Amazônia, que fez rios virarem desertos e isolou comunidades. O fenômeno é provocado pela soma de fatores como o El Niño, as mudanças climáticas, o aquecimento do Atlântico Norte e a degradação da floresta. A estiagem também facilita com que as queimadas associadas ao desmatamento se espalhem. Os incêndios florestais têm deixado Manaus, a cidade mais populosa da região, cheia de fumaça por vários dias. Simultaneamente, o El Niño, que intensifica e prolonga secas no Norte e Nordeste , traz mais chuvas para o Sul —como tem acontecido nos alagamentos enfrentados no Rio Grande do Sul. A ministra destacou que, apesar de ser um fenômeno natural, o El Niño tem sido mais frequente e intenso. As consequências são dramáticas. Nós temos que agir no emergencial, como estamos agindo –só no estado do Amazonas já foram mais de R$ 600 milhões. Quando a gente olha para o Rio Grande do Sul, algo em torno de R$ 1 bilhão [em recursos federais], afirmou. Marina disse ainda que a agenda de adaptação climática está muito atrasada, mas que é uma das prioridades do governo. Agora, a melhor forma de enfrentar estruturalmente é continuar reduzindo a emissão de CO2, não só no Brasil, mas no mundo", ponderou. "No Brasil, a melhor forma é combatendo o desmatamento. Os novos dados apresentados apontam que o desmate na Amazônia Legal caiu 40% no Amazonas, 21% no Pará, 42% em Rondônia e teve um aumento de 9% em Mato Grosso. Esse último estado e outros da região Centro-Oeste já haviam apresentado alta nos crimes ambientais em outro bioma. Em setembro, houve o mais alto índice de desmatamento para o mês já registrado no cerrado. Foram perdidos 679,7 km². A maior marca até então para o período era de 451,5 km², em setembro de 2018. Em relação ao mesmo mês em 2022, o crescimento foi de 149% no bioma. Questionada se haveria a possibilidade de uma migração da atividade dos desmatadores do bioma amazônico para o cerrado, Marina Silva afirmou não ter indícios que apontem nesse sentido. AVANÇOS E LACUNAS Especialistas veem com otimismo os números apresentados nesta quinta, enquanto apontam também lacunas e passos que deveriam ser seguidos. A redução do desmatamento na Amazônia observado pelo Prodes, ainda que considere o último semestre de 2022, é um ótimo sinal, resultado de uma ação coordenada do governo. Ainda assim, os níveis de desmatamento continuam altos e precisamos zerar essa destruição, avaliou Mariana Napolitano, diretora de estratégia da ONG WWF-Brasil. Beto Mesquita, membro da Coalizão Brasil e diretor de florestas e políticas públicas da BVRio, também destaca a atuação do Estado. A redução na taxa de desmatamento não se deu de maneira aleatória. Os dados indicam que provavelmente foram consequência de um conjunto de ações que vêm sendo tomadas pelos governos federal e estaduais, sobretudo pela articulação entre eles, disse Mesquita. Ações como o cancelamento de CAR (Cadastro Ambiental Rural) em florestas públicas, a destruição de maquinário para desmate e a apreensão de gado em terras indígenas são sinais importantes das medidas de comando e controle, enumera Mesquita. Marcio Astrini, secretário-executivo do Observatório do Clima, avaliou que os números evidenciam a diferença abissal entre a agenda ambiental do atual governo e a de seu antecessor. Astrini disse acreditar, porém, que a atuação do Congresso pode nublar as boas notícias. Não adianta a gente combater o crime ambiental no chão da floresta e fortalecer esse mesmo crime no carpete do Congresso. E é isso que está acontecendo. A bancada ruralista, que é uma bancada que historicamente atua contra as legislações ambientais, está tendo a benevolência dos negociadores do governo dentro do Congresso, em várias agendas, destacou. Entre as pautas ambientalmente sensíveis que tramitam hoje na Câmara e no Senado estão propostas que mudam o processo de licenciamento, a demarcação de terras indígenas e a liberação de agrotóxicos. BOAS NOVAS PARA A COP28 Os números positivos são uma boa notícia para o governo brasileiro levar à COP28, a conferência do clima da ONU (Organização das Nações Unidas), que acontece a partir de 30 de novembro em Dubai, nos Emirados Árabes. A cúpula é o principal espaço de discussão global sobre as mudanças climáticas, e o Brasil vinha sendo cobrado pelos resultados negativos sob Bolsonaro. Os dados do Inpe mostram que apenas os meses de agosto a dezembro de 2022 representaram uma alta de 54% em relação aos mesmos meses do ano anterior. Por outro lado, os sete primeiros meses do governo Lula tiveram uma redução no desmatamento de 42% em relação aos mesmos meses de 2022. Os números mensais são referentes ao Deter (sistema usado para subsidiar as ações de fiscalização). A efetividade do combate ao crime ambiental aumenta a força do país para cobrar demandas que considera importantes, como o cumprimento de promessas de financiamento e adoção de metas mais ousadas por países ricos. Nós não queremos ficar na inércia dos resultados já alcançados, afirmou Marina Silva. Vamos participar da COP28 buscando mais compromissos dos países desenvolvidos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1.Câmara poderá fatiar reforma tributária para facilitar nova aprovação|\n");
				printf("|Matéria 2.Paraná põe torcedores no vestiário e emociona: “Carregar time nas costas                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Câmara poderá fatiar reforma tributária para facilitar nova aprovação\n\n");
						printf("Aprovada em dois turnos pelo Senado Federal na última quarta-feira (8), com 53 votos a favor e 24 contra, a reforma tributária volta à Câmara dos Deputados para uma nova rodada de discussões, já que teve pontos alterados durante a passagem pelo Senado. A Proposta de Emenda à Constituição (PEC) 45/2019, que tinha sido aprovada pelos deputados numa longa semana de negociações no início de julho, agora poderá ser fatiada para facilitar a nova aprovação, e assim poder ser promulgada pelo governo ainda neste ano, como acena o presidente da Casa, Arthur Lira (PP-AL). Lira disse a jornalistas, antes mesmo do resultado da aprovação do texto pelo Senado, que uma alternativa para facilitar a tramitação da proposta seria aprovar logo os pontos de consenso entre Câmara e Senado, e deixar para uma discussão posterior as mudanças efetuadas pelos senadores. “A Câmara terá que se pronunciar sobre o que o Senado mudou, isso é um fato, ponto, o que não impede que se 90% do texto for comum, esses 90% sejam promulgados. Eu penso que, em um tema feito esse, o bom senso vai prevalecer”. Nos bastidores, parlamentares citaram o esforço de Lira quando o texto do Grupo de Trabalho formado na Câmara para discutir a proposta de reforma tributária foi a Plenário, com grande resistência de setores da economia e governadores. Eles acreditam que desta vez o presidente da Casa fará o mesmo, já que a reforma, em discussão há mais de 40 anos, pode ser o "grande legado" de sua gestão na presidência, que termina no início de 2025. O relator da reforma tributária na Câmara, deputado Aguinaldo Ribeiro (PP-PB), disse que vai aguardar agora a redação final do texto pelo Senado, e a chegada à Câmara, para que os deputados possam avaliar o que foi alterado pelo Senado, e, a partir de conversas entre Lira e os líderes, seja estabelecido um calendário para aprovar e promulgar a matéria até o final de 2023. “Não é uma matéria simples, mas nós vamos buscar manter na Câmara o imposto ideal, que é o que tem o menor impacto para o cidadão brasileiro. Agora passa a ser o momento da Câmara, para que de forma bastante tranquila e cooperativa se faça essa discussão, para que nós tenhamos o texto constitucional aprovado esse ano; e se evite o que algumas pessoas chamam de pingue-pongue, que se evite que o texto aprovado aqui vá para o Senado e fique num momento de discussão prolongada sem o fechamento do texto constitucional”. O relator disse que pretende conversar com o presidente da Câmara o quanto antes para decidirem a possibilidade de um eventual fatiamento da proposta, e sobre um calendário e a orientação de como a matéria será tratada na Casa, se será enviada à Comissão de Constituição e Justiça ou se o texto irá direto ao Plenário.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Paraná põe torcedores no vestiário e emociona: “Carregar time nas costas”\n\n");
						printf("O departamento de marketing do Paraná levou torcedores, grupo de todas as faixas etárias, para o vestiário da Vila Capanema. A ideia foi mostrar a importância dos paranistas para os quatro jogos finais da disputa, a começar pelo Luverdense, sexta-feira (10), na Vila Capanema. “Só dependemos de nós. Só a gente sabe o que passamos para chegar até aqui. Restam quatro jogos e estamos no G4. Se faltar perna para os caras no campo, nós vamos ajudar no nosso grito. No primeiro carrinho, vamos inflamar a arquibancada”, discursa torcedora do Paraná, no papel de treinadora. Os selecionados pelo vídeo se emocionaram de verdade com a produção, mais um trabalho de destaque do clube para divulgar o Paraná nas redes sociais. O trabalho paranista nas redes sociais é o destaque da temporada no futebol brasileiro. Contra o Oeste, mesmo com a derrota, o trabalho chamou a atenção, com o uso dos jogadores conclamando os fãs para uma batalha no Oeste – uma guerra de 10 anos, em alusão ao tempo de permanência da equipe na Série B.");
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
			printf("|2. EstadÃ£o               |\n");
			printf("|3. Folha de SÃ£o Paulo    |\n");
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
				printf("|MatÃ©ria 1.Mundo Bita, 'A Bela e a Fera' e mais: o que fazer com crianças no fim de semana e no feriado 15 de novembro|\n");
				printf("|MatÃ©ria 2.Rubem Valentim, Angelo Venosa, Evandro Teixeira e outras exposições no Rio de Janeiro         |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tRecreação gratuita no CCBB e na Casa Firjan, peça dos Detetives do Prédio Azul e montagem baseada no livro 'Diário de Pilar na Amazônia' animam o fim de semana no Rio de Janeiro. Já no feriado da Proclamação da República do Brasil (15 de novembro), terão apresentação do Mundo Bita na Arena Jockey, concerto da 'A Bela e a Fera' e atividades na Ecovilla Ri Happy, entre as opções para a criançada se divertir. Confira a agenda de eventos infantis entre os dias 9 a 15 de novembro:Fique por dentro: siga o Rio Show no Instagram (@rioshowoglobo), assine a nossa newsletter e entre na comunidade do WhatsApp para ficar por dentro do melhor da cidade D.P.A., a peça 2' mistura referências do cinema e os mistérios da série do Gloob; Casa Firjan. O espaço recebe um festival que reúne escolas de Botafogo, cada uma a frente de atividades e oficinas como de musicalização infantil (às 14h), e de robótica (às 14h30). Rua Guilhermina Guinle 211, Botafogo. Sáb, das 9h às 17h. Grátis. Futuro Presente 2023. Entre as atividades do festival, que termina no fim do mês, há oficinas de realidade aumentada (às 11h e às 15h) e de inteligência artificial (às 12h30 e às16h30). Ambas para crianças a partir de 8 anos. CCBB. Sáb, a partir das 10h. Grátis. Teatro, dança, musicais e shows ‘A cigarra e a formiga’. A fábula de Esopo ganha montagem dirigida por Rô Sant’Anna e Alexandre Regis. Cine Teatro, Shopping Barra Point. Sáb e dom, às 16h. R$ 20 (meia). Até 26 de novembro. Circo Dux. No espetáculo “Teco Teco”, dois palhaços da companhia encontram um tesouro recheado de memórias da história do circo brasileiro. Sesc Tijuca. Rua Barão de Mesquita 539. Sáb e dom, às 16h. R$ 5 (meia). Até 26 de novembro. ‘Diário de Pilar na Amazônia’. Com Miriam Freeland à frente do elenco, a peça baseada em livro homônimo de Flávia Lins e Silva conta a aventura de Pilar e seus amigos na tentativa de impedir um grupo de madeireiros de desmatarem a floresta. Teatro Clara Nunes, Shopping da Gávea. Sáb e dom, às 16h. R$ 19,80 (meia balcão superior. R$ 45 (meia plateia e balcão). Até 26 de novembro. 'Diário de Pilar na Amazônia' , 'Diário de Pilar na Amazônia' — Foto: Divulgação/ Gal Oliveira ‘D.P.A., a peça 2 — Um mistério musical em Magowood’. Com o elenco principal da série do Gloob, os detetives mirins tentam desvendar mais um mistério. Com participação de Heloísa e Luisa Périssé. Teatro Multiplan, VillageMall. Sáb e dom, às 14h e às 16h30. A partir de R$ 19,80 (meia). Até 19 de novembro. 'Gagá'. Com texto de Marcelo Romagnoli, a peça mostra a dupla Tantã e Lelé em aventuras guiadas pela imaginação, com palhaçaria, brincadeiras, música e dança. Teatro dos Quatro, Shopping da Gávea. Sáb e dom, às 16h. R$ 40 (meia). Até 3 de dezembro. ‘Louise/os ursos.’ Adaptação da Pandorga Cia de Teatro para a peça da francesa Karin Serres sobre uma menina que vê ursos transparentes. Centro Cultural Justiça Federal, Cinelândia. Sáb e dom, às 16h. R$ 15 (meia). Até 12 de novembro. ‘Miguel, o invisível’. Baseada no livro homônimo de Tati Ingrid Adão, a peça mostra dilemas e questionamentos do universo infantojuvenil. Barra Point Shopping,Sala Del’Art. Av. Armando Lombardi 350.Sáb, às 17 h. R$ 35 (meia). Até 25 novembro. ‘O pescador e a estrela’. No musical, um menino se sente sozinho e infeliz, até receber a visita de uma mensageira das estrelas. EcoVilla Ri Happy, dentro do Jardim Botânico. Sáb e dom, às 16h. R$ 35 (meia). Até 12 de novembro. ‘Vamos brincar’. Com um repertório de canções autorais, Tio Jô e sua trupe de músicos e artistas circenses abordam a importância da brincadeira na vida das crianças. Teatro Glaucio Gill. Praça Cardeal Arcoverde, Copacabana. Sáb e dom, às 16h. R$ 25 (meia). Até 26 de novembro. Parques de diversão Estação Turma da Mônica. O parque dedicado à personagem de Mauricio de Sousa tem casa na árvore, brinquedões, tobogã, casinha com miniatura dos personagens, entre outras atrações. Shopping Metropolitano. Seg a sex, das 13h às 21h. Sáb, das 10h às 22h. Dom e feriados, das 12h às 21h. A partir de R$ 99,90 (crianças com adulto acompanhante, por 3 horas). Parque da Magia. Escorregas, brinquedos e atividades com água estão entre as 21 atrações a céu aberto do parque, para crianças de até 12 anos. ParkJacarepaguá. Ter a dom, das 10h às 22h. R$ 15 (meia). Sujeito a cancelamento em condições climáticas ruins. Passeios BioParque do Rio. O zoológico abriga mais de mil animais de 140 espécies. Quinta da Boa Vista. Diariamente, das 9h às 16h. A partir de R$ 23,50 (infantil). Lagoa Aventuras. Em meio à Mata Atlântica, no Parque da Catacumba, é possível praticar atividades como arvorismo (a partir de R$ 30), tirolesa (R$ 30) e rapel (R$ 80). Há pacotes promocionais. Ter a dom (inclusive feriados), das 9h30 às 16h30. Fazendinha Rio. O espaço tem dezenas de animais, como vacas, porcos, gansos, cavalos, coelhos e cabras, além de restaurantes, campo de futebol, trilha de arvorismo e pacotes de colônias de férias. Estrada dos Bandeirantes 26.645, Vargem Grande. Sáb, dom e feriados, das 10h às 17h. R$ 54 (meia). Atividades canceladas em dias de chuva. Planetário da Gávea. Além do Museu do Universo, com uma série de atrações interativas sobre o espaço sideral, há sessões de cúpula voltadas para o público infantil: “Brincando entre estrelas” (sáb e dom, às 11h15, às 13h, às 15h15. Dom, às 16h30); e “Uma aventura no Planetário” (dom, às 14h). Rua Vice-Governador Rubens Berardo 100, Gávea. Museu: R$ 10 (meia). Sessão de Cúpula e Museu: R$ 20 (meia). Tour no Maracanã. Para toda a família, a visita guiada passa pelo acervo com peças cedidas por craques, zona mista, salas de aquecimento dos jogadores e vestiário. Av. Presidente Castelo Branco, portão 2. Diariamente, das 9h às 17h (horário pode mudar em dias de jogo). R$ 30 (meia). Indoor Barra Bowling Grill. Além das 20 pistas de boliche, o espaço também oferece restaurantes e é uma opção para eventos, como festas de aniversário. Barra Shopping. Seg a sex, das 16h às 22h. Sáb, 13h às 22h. Dom e feriados, 13h às 21h. A partir de R$ 210. Escape 60. No jogo, mais indicado para crianças a partir de 10 anos, os participantes têm uma hora para resolver um enigma e “escapar ” da sala. Entre os temas que mais agradam famílias, está um sobre a série “Chaves”. O número de participantes depende de cada desafio, sempre com reserva. Via Parque: 97916-3891. Downtown: 98068-0812. Copacabana: 99287-3530. A partir de R$ 99,90, por pessoa. Neon party. Enquanto os responsáveis assistem aos espetáculos do Hall Ecovilla Ri Happy os pequenos (a partir de 5 anos ) podem curtir atividades com recreadores em um espaço ao lado. O tema deste mês é festa neon, com pista de dança, oficina de bijuterias e gincanas. Sex, das 19h30 às 21h30 (durante o período do espetáculo no Hall EcoVilla Ri Happy). R$ 100. Até o final de novembro. NBA Store. Mais do que a loja da NBA, o que faz a cabeça de pequenos fãs de basquete é jogar numa quadra oficial (com cestas em mais de uma altura) e visitar a réplica de um vestiário. É recomendado reservar (a partir de R$ 50, para usar a quadra). Uptown Barra. Av. Ayrton Senna 5.500 (97233-4874). Seg, ter, qui a sáb, das 11h às 21h. Qua (dia 15) e dom, das 12h às 20h. Impulso Park e Big Jump USA. Camas elásticas, piscina com espuma para se jogar, entre outras atividades são espaços especializados em pula-pula (é preciso usar meia antiderrapante). Impulso Park: Casa Shopping. Seg a sex, das 13h às 22h. Sáb, das 10h às 22h.Dom, das 10h às 20h. A partir de R$ 70, meia. Big Jump USA: Shopping Aerotown, Barra. Seg a qui e dom, das 10h às 21h. Sex, das 14h às 22h. Sáb, das 10h às 22h.R$ 54 (seg a qui) e R$ 64 (sex a dom). Roller Arena. Além da pista de patinação, há atividades como arco e flecha (R$ 50, meia hora, para maiores de 13 anos) e minigolfe (R$ 20, mínimo 5 anos). Via Parque. Ter a sáb, das 10h às 22h. Dom e feriados, das 12h às 21h.R$ 60 (uma hora, com aluguel de patins, ou por tempo ilimitado, se levar o patins). Museu, centros culturais e exposições. Futuros — Arte e Tecnologia. Além de um museu com mais de 130 mil itens da história das telecomunicações, o centro cultural oferece passeio de balão feito por realidade virtual (é necessário retirar a senha, qua a dom, das 12h às 18 h). Rua Dois de Dezembro 63, Flamengo. Qua a dom, das 11h às 20h. AquaRio. Para celebrar seus sete anos, visitantes que também comemoram o aniversário em novembro têm gratuidade até o fim do mês na visita ao aquário. Além de ver os animais marinhos, é possível conferir a instalação “Mar de espelhos” , com nove ambientes e projeções do teto ao chão, e o Museu de Cera, com mais de 30 estátuas. Praça Muhammad, Gamboa. Seg a sex, das 9h às 17h. Sáb, dom e feriados, das 9h às 18h. Última entrada 1h antes. AquaRio: R$ 70 (meia). Mar de Espelhos e Museu de Cera: R$ 29,50 cada (meia). Combo para os três: R$ 129 (meia). Espaço Cultural Marinha e Ilha fiscal. Um programa que vale por dois. No Espaço Cultural, o público pode entrar no submarino Riachuelo e conhecer o navio Bauru, o helicóptero Sea King e uma recriação da “Nau do descobrimento”. Dali, partem os passeios de barco para a Ilha Fiscal, onde aconteceu o último baile do Império. Orla Conde, Praça Quinze. Espaço Cultural: ter a dom e feriados, das 11h às 17h. R$ 10 (meia). Ilha Fiscal: qui a dom, às 12h45, às 14h15 e às 15h30. Grátis (até 2 anos) e R$ 25 (meia). Museu de Astronomia e Ciências Afins (Mast). Além de exposições temporárias, o Mast tem acervo que conta a história da astronomia. Todo primeiro sábado do mês (exceto em dias de chuva), tem observação do céu ( a partir das 18h) e planetário inflável. Rua General Bruce 586, São Cristóvão. Ter a sex, das 9h às 16h30. Sáb e feriados, das 14h às 17h30. Grátis. Museu da Vida Fiocruz. Além de visitar o castelo histórico, é possível passar por mais cinco espaços que mostram curiosidades científicas e sobre a instituição. Av. Brasil 4.365, Manguinhos. Ter a sex, das 9h às 16h30. Sáb, das 10h às 16h. Não abre nos feriados. Grátis. Museu dos Bombeiros. O Centro Histórico e Cultural do CBMERJ mostra a história da corporação e elementos usados desde o 1º Corpo do Brasil, criado pelo Imperador Dom Pedro II. Por ser área militar, não pode entrar com roupas acima do joelho, bonés, decotes e transparências. Praça da República 45, Centro. Ter a sex, de 10h às 17h. Sáb, das 9h Às 16h. Grátis. Museu das Ilusões. O espaço reúne mais de 80 instalações que brincam com a ilusão de ótica. Via Parque, Barra. Seg a sáb, das 10h às 22h. Dom e feriado, das 12h às 20h. Última entrada 1h antes. R$ 35 (meia). Pacotes para grupos: R$ 105 (3 pessoas), R$ 140 (4) e R$ 175 (5). ‘Pasteur, o cientista’. A mostra interativa conta com sete espaços que passeiam pela trajetória e os feitos do cientista francês. Fábrica de Espetáculos. Av. Rodrigues Alves 323, Gamboa. Ter a sex, das 9h às 17h. Sáb , dom e feriado, das 10h às 18h. Até 3 de dezembro. Grátis. ‘Pegadas do Pequeno Príncipe’. Com dez ambientes, a mostra interativa propõe um mergulho no universo do clássico de Antoine Saint-Exupéry. Rio Sul. Ter a sáb, das 10h20 às 21h . Dom e feriados, das 12h20 às 20h. Ingressos a partir de R$ 19,80 (meia). Até 19 de novembro. Planetário da Gávea. Além do Museu do Universo, com uma série de atrações interativas sobre o espaço sideral, o local oferece sessões de cúpula voltadas para o público infantil: “Brincando entre estrelas” (qui e dom, às 11h15, às 13h, às 15h15 e às 16h30); e “Uma aventura no Planetário” (qui e dom, às 14h). Rua Vice-Governador Rubens Berardo 100, Gávea. Museu: R$ 10 (meia). Sessão de Cúpula e Museu: R$ 20 (meia). ‘A Bela e a Fera in concert’. O clássico da Disney sobe ao palco ao som de uma orquestra ao vivo. Cidade das Artes. Av. das Américas 5.300, Barra. Qua, às 15h e às 17h30. A partir de R$ 60 (meia). EcoVilla Ri Happy. Para festejar seu primeiro ano de funcionamento, o espaço promove apresentação de malabarismo, perna de pau, oficinas e outras brincadeiras. Jardim Botânico. Qua, das 14h às 18h. Mundo Bita. A turma, que coleciona mais de 12 milhões de inscritos no YouTube, apresenta o show “Vamos cultivar amizades”, com sucessos como “Fazendinha” e “Safari”. Arena Jockey. Praça Santos Dumont 31. Qua, às 17h.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Rubem Valentim, Angelo Venosa, Evandro Teixeira e outras exposições no Rio de Janeiro\n\n");
						printf("Entre os destaques das exposições em cartaz no Rio de Janeiro, de 9 a 15 de novembro, estão Rubem Valentim - Sagrada geometria, na Pinakotheke Cultural (abertura segunda-feira, 13 de novembro), que foi eleita pela Associação Paulista de Críticos de Arte (APCA) como a melhor retrospectiva de 2022 e Auto-acusação, no Centro Municipal de Arte Hélio Oiticica (abertura sábado, 11 de novembro, às 14h), a primeira individual da atriz e diretora Bárbara Paz no Rio. São os últimos dias para conferir Angelo Venosa, escultor, na Casa Roberto Marinho (até domingo), 'Evandro Teixeira, Chile, 1973', no CCBB (até segunda-feira) e 'Sai-Fai: ficção científica à brasileira', no Museu do Amanhã (até domingo), entre muitas outras. Confira abaixo um roteiro mais detalhado das mostras em cartaz na cidade nesta semana: Fique por dentro: siga o perfil do Rio Show no Instagram (@rioshowoglobo), assine a newsletter semanal e entre na comunidade do WhatsApp para saber tudo sobre a programação da cidade .Melhor retrospectiva do ano em SP: mostra de Rubem Valentim chega ao Rio .Veja fotos das exposições em cartaz no Rio 'Radiola de promessa', da série 'Atualizações traumáticas de Debret', de Gê Viana: trabalho exposto na sala que destaca as origens soul do funk, no MAR	Passeata dos 100 mil, no Rio de Janeiro, em 1968, em cartaz no CCBB — Foto: Evandro Teixeira/Acervo IMS Museus e centros culturais da cidade têm programação extensa, 'Carolina Maria de Jesus: um Brasil para os brasileiros'. A mostra reúne mais de 400 itens, entre livros, manuscritos e fotos, além de trabalhos de artistas que dialogam com vida e obra da escritora, conhecida principalmente por “Quarto de despejo” (1960). Até 26 de novembro. 'A construção do MAR e a Pequena África'. Em comemoração aos dez anos do museu, a mostra percorre a sua história e projeto arquitetônico, com mais de cem obras, entre fotos e vídeos. Até 31 de dezembro. Praça Mauá 5, Centro. Ter a dom, das 11h às 18h. R$ 20. Centro Cultural do Banco do Brasil (CCBB) 'Evandro Teixeira, Chile, 1973'. Um dos grandes nomes do fotojornalismo nacional, Evandro Teixeira ganha uma exposição com 190 imagens, que focam na cobertura do golpe militar naquele país. (Para saber mais, leia a matéria). Até 13 de novembro. 'Evandro Teixeira, Chile, 1973' A última sala da exposição 'Evandro Teixeira, Chile, 1973' foca na cobertura histórica da morte do poeta chileno Pablo Neruda — Foto: Guito Moreto/Agência O Glob Totens com fotos de Evandro Teixeira durante os dias que passou no Chile, em 1973, registrando a brutalidade daquele tempo.  Tomada do Forte de Copacabana durante o golpe militar de 1964 — Foto: Evandro Teixeira/Acervo IMS .Exposição no CCBB exibe 190 imagens emblemáticas das ditaduras chilena e brasileira Tesouros ancestrais do Peru'. A mostra reúne 162 peças — entre trabalhos de ouro, prata, cobre, cerâmica e têxteis — do Museo Oro del Perú y Armas del Mundo de antigas civilizações andinas. (Para saber mais, leia a matéria). Até 29 de janeiro. Objeto de ouro, parte de um conjunto funerário.  Estilo Frias, Costa Norte do Perú 200 a.C – 700 d.C — Foto: Divulgação/Agência Galo Representa uma figura ornitomorfa com asas estendidas. Ouro.  Cultura Nasca, Costa Sul do Peru 200 a.C – 400 d.C Máscara e coroa. Costa sul do Peru 200 a.C-400 d.C — Foto: Divulgação/Agência Gal Peças do Museu do Ouro 'Do sal ao digital: o dinheiro na coleção Banco do Brasil '. Com alguns itens históricos, como a peça da coroação de D. Pedro I, que nunca foi posta em circulação, a mostra permanente do espaço conta a origem do dinheiro no país e no mundo. Atividades interativas, obras de arte e mais de 800 moedas e cédulas estão em exibição. Exposição permanente. Rua Primeiro de Março 66, Centro. Qua a seg, das 9h às 20h. Grátis. Museu do Amanhã 'Sai-Fai: ficção científica à brasileira'. Uma ode à imaginação, a mostra de literatura expandida traz trechos de contos e ilustrações para debater temas como afrofuturismo e futurismo indígena. Até 12 de novembro. Mostra permanente. Para abordar o impacto do homem no planeta, a exibição se divide em cinco partes — Cosmos, Terra, Antropoceno, Amanhãs e Nós. Praça Mauá 1, Centro.Ter a dom e feriados, 10h às 18h. R$ 30 (de graça às terças). Museu de Arte Moderna (MAM) 'Instalação sonora itinerante'. A Orquestra Petrobras Sinfônica apresenta a mostra que já percorreu três cidades e oferece uma experiência imersiva ao público. Ao todo, 16 caixas reproduzem os sons da orquestra. Até 12 de novembro. 'Museu-escola-cidade: o MAM Rio em cinco perspectivas'. A mostra em comemoração ao aniversário do museu reúne 250 obras e 250 documentos que retratam parte da história da instituição. Focada nas três primeiras décadas de funcionamento, antes do incêndio que destruiu a maior parte do acervo em 1978, tem obras de artistas nacionais (entre eles Antonio Bandeira, Anna Bella Geiger e Lygia Clark) e internacionais, com curadoria coletiva dos funcionários do museu. Até 3 de dezembro. 'MAM Rio: origem e construção'. Seguindo as comemorações por seus 75 anos, o espaço inaugura a mostra, com cerca de 160 itens documentais — entre fotografias, cartas, jornais e plantas baixas —, que contam a história da instituição. Até 3 de dezembro. Av. Infante Dom Henrique 85, Aterro do Flamengo. Qua a dom, das 10h às 18h. Grátis, com contribuição sugerida de R$ 20. Museu de Arte Contemporânea de Niterói (MAC) 'Mekukradjá Obikàrà: com os pés em dois mundos'. A cultura Kayapó é o tema da exposição no que conta com experiências imersivas e obras produzidas pela nova geração do povo Mebêngôkre-Kayapó. Até 26 de novembro. Mirante da Boa Viagem, Niterói. Ter a dom, das 10h às 18h. Grátis (qua) e R$ 16. 14 anos. Museu Histórico Nacional ‘Îandé – Aqui estávamos, aqui estamos’. A exibição de longa duração aborda a trajetória dos povos originários brasileiros desde antes da chegada dos portugueses até os dias atuais. São diversos objetos etnográficos e obras de artistas indígenas, como Denilson Baniwa, Diakara Desana, Mayra Karvalho e Tapixi Guajajara. Praça Marechal Âncora, Centro. Qua a dom, das 10h às 17h. Grátis. Museu da História e da Cultura Afro-Brasileira (Muhcab) ‘Mixagens Urbanas’. A exposição de lambe-lambes ocupa as ruas da região portuária, entre Gamboa e Saúde, com um trajeto que sai do Muhcab. A ideia é, com um olhar “decolonial”, propor que espaços e imaginários históricos sejam redefinidos. Rua Pedro Ernesto 80, Gamboa. Até 13 de novembro. Museu do Pontal 'O circo chegou!'. A coletiva comemora um ano da nova sede do museu com uma exposição dedicada ao circo. Trabalhos de artistas de diversas partes do país e da França compõem a mostra que tem como centro a obra cinética "O circo", de Adalton Fernandes Lopes. A curadoria é de Angela Mascelani e Lucas Van de Beuque, diretores do museu. Av. Celia Ribeiro da Silva Mendes 3.300, Barra. Qui a dom, das 10h às 18h. Contribuição voluntária. Casa França-Brasil 'Franz Weissmann: ritmo e movimento'. Onze anos depois da última individual de Franz Weissmann (1911-2005) no Rio, 18 das icônicas esculturas geométricas do artista nascido na Áustria poderão ser vistas novamente. Com visitas mediadas diárias. Rua Visconde de Itaboraí 78, Centro. Ter a dom, das 10h às 17h. Grátis. Até 13 de novembro. Pinakotheke Cultural Rubem Valentim - Sagrada geometria'. Com curadoria de Max Perlingeiro e consultoria de Bené Fonteles, artista plástico, poeta e amigo de Rubem Valentim (1922-1991), a mostra reúne, em quatro salas, cerca de 75 obras, entre pinturas, desenhos e objetos do artista. Com os signos do candomblé e um olhar para o sacro através dos orixás, ele criou uma linguagem própria traduzida no conceito de “geometria sagrada”. (Para saber mais, leia a matéria). Centro Cultural Justiça Federal O espaço recebe quatro exposições: "8 de Janeiro: jamais fomos modernos", do artista fluminense Alex Frechette; "Transeunte", do paulista André Bahia; "Urucum: a natureza é queer", da paraense Rafael BQueer, e "Matrizes", de Paula Sacamparini. Todas até 7 de janeiro. 'Casas da justiça' e 'Quem é o jurisdicionado'. As mostras, ambas com fotos do acervo do Conselho da Justiça Federal, fazem parte do projeto "A Justiça Federal nos 35 anos de Constituição da República". (Para saber mais, leia a matéria). Até 12 de novembro. Av. Rio Branco 241, Cinelândia. Ter a dom, das 11h às 19h. Grátis. Centro Cultural da PGE-RJ 'Abstrações'. Com obras de cinco artistas mulheres — Fayga Ostrower, Renina Katz, Anna Letycia, Anna Maria Maiolino e Ana Cláudia Almeida —, a mostra se debruça sobre a chamada “abstração informal”.Praça Quinze, em frente ao Paço Imperial. Ter a sáb, das 10h às 18h. Até 19 de janeiro. Grátis. Centro Cultural Correios 'Caleidoscópio'. Com obras de 28 artistas de diferentes gerações da coleção local, a coletiva celebra os 30 anos do espaço. Curadoria da museóloga Roseane Novaes. Até 4 de dezembro. 'Entre fronteiras'. O fotojornalista Pedro Mendes Levier inaugura a exposição com fotos sobre migrantes em busca de refúgio e suas histórias. Até 11 de novembro. 'Resistência — Gravura e pintura contemporâneas na Escola de Belas Artes da UFRJ'. A mostra traz obras de ex-alunos e professores da instituição. Até 11 de novembro. Rua Visconde de Itaboraí 20, Centro. Ter a sáb, das 12h às 19h. Grátis. Caixa Cultural 'Passeio Público'. Mostra com trabalhos inéditos de 18 artistas — entre eles Denilson Baniwa, Moisés Patrício, Luana Aguiar e Barbara Copque — olha para o primeiro parque público do país como espelho das desigualdades brasileiras. (Para saber mais, leia a matéria). Até 17 de dezembro. 'Memória e herança: álbum de família'. A partir da colagem digital, a mostra propõe uma reinterpretação de fotografias de pessoas negras escravizadas do século XIX. Até 26 de novembro. Rua do Passeio 38. Ter a dom, das 9h às 17h30. Feriados, das 11h às 18h. Grátis. Casa Roberto Marinh 'Angelo Venosa, escultor'. A mostra ocupa todo o espaço expositivo com 85 trabalhos, do início da década de 1970 à produção mais recente do artista, de 2021. O escultor, que integra a chamada Geração 80 e começou estudando pintura, tornou-se referência na arte contemporânea brasileira com um trabalho sem semelhantes aqui ou lá fora, como destaca o curador Paulo Venancio. (Para saber mais, leia a matéria). Até 12 de novembro. Rua Cosme Velho 1.105. Ter a dom, das 12h às 18h. Grátis (qua) e R$ 10; aos domingos, R$ 10 (para grupos de quatro pessoas). EAV Parque Lage 'Gianguido Bonfanti: massas de energia no espaço'. Com 70 trabalhos inéditos, a mostra celebra os 55 anos de carreira do mais longevo professor da instituição. Rua Jardim Botânico 414. Qui a ter, das 10h às 17h. Até 7 de janeiro. Futuros - Arte e Tecnologia Musehum. Localizado dentro do centro, a exposição fixa no local traz os primeiros aparelhos residenciais, de mesa ou parede, orelhões, entre as dezenas de tipos de telefones de diferentes épocas. No total, são mais de 130 mil itens da história das telecomunicações, entre fotos, listas telefônicas e equipamentos. Rua Dois de Dezembro 63, Flamengo. Qua a dom, das 11h às 20h. Grátis. Centro Sebrae de Referência do Artesanato Brasileiro (Crab) 'Artesania ancestral nos 95 anos de Mangueira'. A mostra conta a História de quase um século da tradicional escola de samba carioca — e do próprio carnaval — através do trabalho dos artesãos da Estação Primeira. Até 31 de dezembro de 2024. 'Bens do Brasil: gente, saberes e tradições'. Dos brinquedos de miriti que circulam em Belém durante o Círio de Nazaré aos produtos comercializados na Feira de Caruaru, a mostra traz o Patrimônio Cultural da Amazônia ao Rio. Até 18 de novembro. Praça Tiradentes 69/71, Centro. Grátis. Ter a sáb, das 10h às 17h. Centro Municipal de Arte Hélio Oiticica 'Auto-acusação'. A atriz e diretora Bárbara Paz inaugura sua primeira exposição individual no Rio. Com vídeos, fotos, instalações e performances, a artista expõe as cicatrizes do acidente sofrido em 1992. Abertura sábado, 11 de novembro, às 14h. Até 2 de dezembro. 'Cosmococa 5 Hendrix War (versão privê)'. A última das 11 instalações criadas por Hélio Oiticica com o cineasta Neville D’Almeida para a série “Cosmococa – Programa in Progress” se torna publica na mostra. A "Cosmococa 5 Hendrix War (versão privê)" será exibida em projetores instalados em um cômodo que remete a um apartamento, idealizada pelo curador César Oiticica Filho. Até 10 de dezembro. 'Cidade Mulher'. A exposição provoca reflexões sobre direito das mulheres através de intervenções artísticas, instalações e vídeos. Até 16 de dezembro. Rua Luís de Camões 68, Praça Tiradentes. Seg a sáb, das 10h às 18h. Grátis. Academia Brasileira de Letras (ABL) 'Nova Babel (In)finita'. 300 obras raras do acervo do bibliófilo gaúcho Gilberto Schwarstmann estão na mostra, que expõe o olhar do escritor argentino Jorge Luis Borges sobre clássicos da literatura ocidental, como “A Bíblia Sagrada”, “A divina comédia”, “Ilíada” e “Em busca do tempo pedido”. Av. Presidente Wilson 203. Seg a qui, das 10h às 18h. Até 31 de janeiro. Museu da Chácara do Céu 'Os amigos da gravura'. Herbert Sobral, indicado ao Prêmio PIPA 2023, é o artista convidado desta edição do projeto. Além disso, sua obra “Espaço contemporâneo do céu”, com um banco e dois murais feitos de azulejos, ficará exposta em caráter permanente no terraço (com entrada gratuita, diariamente, das 9h às 17h). Até 20 de novembro. Rua Murtinho Nobre 93, Santa Teresa. Qua a seg, das 12h às 17h. R$ 8 (quarta com gratuidade) Museu Carmen Miranda 'Viva Carmen'. Dez anos depois de ser fechado para obras de revitalização, o espaço reabre. Entre os 120 itens originais expostos, com curadoria de Ruy Castro e Heloisa Seixas, estão alguns figurinos que fizeram história com a Pequena Notável, como turbantes, pulseiras e vestidos, além de fotos, programas e cartazes. Av. Rui Barbosa (em frente ao número 560). Ter a sex, das 11h às 17h. Sáb, dom e feriados, das 12h às 17h. Grátis. Museu do Samba 'Aos heróis da liberdade'. Com curadoria de Gringo Cardia, a exposição apresenta a história do samba. A mostra é costurada por textos do historiador Luiz Antônio Simas, instalações cenográficas, instrumentos e fantasias, além de vozes e imagens de grandes sambistas, como Cartola, Tia Surica, Dona Ivone Lara e Martinho da Vila, com recursos audiovisuais. Até 31 de dezembro. 'A força feminina do samba'. A exposição, que chega ao espaço na Semana da mulher negra latino-americana e caribenha, reúne músicas, artes plásticas, literatura, figurinos e indumentárias para contar a história do samba através da liderança de mulheres negras como Tia Ciata, Clementina de Jesus, Dona Ivone Lara, Leci Brandão e Alcione, entre outras. Até dezembro. Rua Visconde de Niterói 1.296, Mangueira. Seg a sex, das 10h às 17h. Sáb, das 10h às 16h. R$ 20. Casas, galerias e outros Galeria Z42 Arte 'Meu mundo caiu — Outros países na coleção do Mian'. A exposição traz um recorte inédito de obras de 120 artistas internacionais que integram o acervo do Museu Internacional de Arte Naïf do Brasil, fechado em 2016 por falta de recursos. Curadoria de Ulisses Carrilho. Mostra 'Meu mundo caiu – Outros países na coleção do Mian'");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Israel atualiza número e diz que atendados do Hamas mataram 1,2 mil pessoas|\n");
				printf("|MatÃ©ria 2.A estrela da Davi é um símbolo judaico que foi usado para identificar casas e comércios de judeus durante o nazismo|\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Homenagem em Berlim na terça-feira (7) aos mortos nos ataques do Hamas a Israel em 7 de outubro. O governo de Israel atualizou nesta sexta-feira (10) o número de mortos nos ataques do grupo terrorista Hamas ao seu território no dia 7 de outubro. Os novos dados indicam que cerca de 1,2 mil israelenses morreram nos atentados, o mais letal ataque a civis israelenses desde o Holocausto – antes, os números oficiais indicavam 1,4 mil mortos. Em declaração publicada pela agência France-Presse, o porta-voz do Ministério das Relações Exteriores de Israel, Lior Haiat, alegou que o número atualizado é menor que o divulgado anteriormente “devido ao fato de que havia muitos corpos que não foram identificados e agora achamos que eram de terroristas, e não de vítimas israelenses”. Israel vem realizando uma contraofensiva na Faixa de Gaza com o objetivo de destruir o Hamas, que controla o enclave. O Ministério da Saúde de Gaza alega que mais de 11 mil pessoas morreram no território desde o início da guerra, mas Israel contesta esses números.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("A estrela da Davi é um símbolo judaico que foi usado para identificar casas e comércios de judeus durante o nazismo\n\n");
						printf("O governo de Roma, na Itália, informou nesta quinta-feira (9) que removeu pichações antissemitas de edifícios do antigo bairro judeu da cidade. Entre os desenhos estavam estrelas de Davi e suásticas, símbolos muito usados durante o nazismo. “Acontecimentos como esse causam consternação, enorme preocupação e lembram o período de perseguição contra os judeus”, disse Alessandro Luzon, representante da Comunidade Judaica em Roma. Segundo o jornal Times of Israel, a cidade de Treviso, no norte do país, também registrou um episódio de antissemitismo em uma escola particular de ensino fundamental e médio, que suspendeu as atividades após uma professora supostamente fazer declarações antissemitas em suas redes sociais. A instituição de ensino se pronunciou, afirmando que “a linguagem odiosa é a antítese absoluta dos valores que a escola acredita”. O caso se une a dezenas de outras denúncias de violência contra judeus na Europa, desde o início da guerra no Oriente Médio. Episódios semelhantes de pichações foram encontrados na França, Alemanha e Reino Unido, nos últimos dias.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1. Dengue vai piorar no país em 2024, dizem especialistas|\n");
				printf("|MatÃ©ria 2. Ativista do Irã que ganhou Nobel da Paz encerra greve de fome após conseguir ir a hospital sem véu                      |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("A cidade de São Paulo registrou, até 1º de novembro deste ano, 12.663 casos de dengue. No mesmo período de 2022, foram 11.607 –uma alta de 9%. O número de casos em 2023 já é maior do que a soma de janeiro a dezembro do ano passado, quando houve 11.920 confirmações da doença. Outubro de 2023 foi o que mais somou casos novos (256), se observado o mesmo mês desde 2015. Na opinião dos infectologistas Júlio Croda, presidente da Sociedade Brasileira de Medicina Tropical, e Carlos Magno Fortaleza, presidente da Sociedade Paulista de Infectologia, a dengue em 2024 poderá ser maior, inclusive com a ameaça de uma epidemia causada pelo sorotipo 3 —já há o encontro dele no Norte do país. "Essas ondas de vírus diferentes aumentam, sobretudo, os casos graves. Isso é o que preocupa. Nós tivemos um ciclo de predomínio do sorotipo 1, que não confere imunidade para o 3. As pessoas que contraírem o 3 e já tiveram o 1 ou 2 anteriormente podem desenvolver a forma grave, que necessita de internação ou coloca a vida em risco", explica Fortaleza. A dengue possui quatro sorotipos. Quando um indivíduo é infectado por um deles adquire imunidade contra aquele vírus, mas ainda fica suscetível aos demais. "Nós nunca tivemos tantos casos de dengue no período interepidêmico. O El Niño e o aumento da temperatura global vão impactar no vetor. Nós já vimos isso no inverno. O verão, o período epidêmico da doença, será bastante complicado. Poderemos ter um maior número de casos e óbitos do que tivemos ano passado", diz Croda. Ele defende um plano de contingência voltado aos estados e municípios para 2024, no sentido de treinar profissionais de saúde para o atendimento a casos graves de dengue, ofertar locais para hidratação, atendimento e de organizar os fluxos de internação no período epidêmico. Segundo o infectologista, a medida é necessária principalmente no Sul do país, onde os serviços de saúde não estão acostumados com este tipo de paciente. "Não tínhamos dengue no Rio Grande do Sul e em Santa Catarina. Houve uma expansão do vetor, da sua área geográfica e da expansão da doença. E quando a gente olha a mortalidade e a letalidade por causa da dengue, essas regiões novas de transmissão da doença, no Sul do país, são regiões são mais preocupantes porque não estão acostumadas a ter essas epidemias. A população nunca foi exposta. A chance de ter casos mais graves é maior", afirma Júlio Croda. Duas vacinas contra a dengue foram aprovadas para uso comercial no Brasil –Dengvaxia (Sanofi Pasteur) e Qdenga (Takeda Pharma), mas nenhuma está incorporada ao SUS (Sistema Único de Saúde). A da Sanofi é para quem já teve dengue. A da Takeda não tem restrições. O imunizante está aprovado para indivíduos de 4 a 60 anos. A incorporação da vacina ao SUS depende de uma análise da Conitec (Comissão Nacional de Incorporação de Tecnologias no Sistema Único de Saúde). "Existe uma recomendação da OMS de introduzir essa vacina em crianças e adolescentes de 6 a 16 anos, de 1 a 2 anos antes da faixa etária onde tem maior soroprevalência. A Conitec tá muito lenta em relação a isso. A vacina não vai resolver todos os problemas relativos a essa epidemia, mas é importante a gente ter disponível mais um tipo de estratégia para a população, principalmente as crianças", esclarece. "Se a Conitec recomendar a incorporação dessa vacina, o Ministério da Saúde não terá tempo hábil de fazer essa aquisição e passaremos pelo período epidêmico sem oferecer proteção a crianças e adolescentes", finaliza. Até o dia 1 de novembro deste ano, segundo o Ministério da Saúde, foram registrados 1.638.563 casos de dengue no país. Mesmo faltando dois meses para o fim do ano, o número de casos em 2023 já é maior do que o do ano passado, quando foram registrados um milhão de casos. Só em 2022, foram mais de mil mortes, o ano mais letal da série histórica até então. Este ano, também já chegamos aos mil óbitos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Ativista do Irã que ganhou Nobel da Paz encerra greve de fome após conseguir ir a hospital sem véu\n\n");
						printf("A ativista do Irã Narges Mohammadi, vencedora do Nobel da Paz de 2023, encerrou sua greve de fome na prisão após conseguir ser transferida para um hospital sem cobrir a cabeça com um véu, segundo publicações no seu Instagram. Eu fui da prisão para o hospital sem usar o hijab obrigatório, vestindo casaco e saia, no meio de dezenas de agentes de segurança, e depois voltei, afirmou ela. Se a República Islâmica considera que o não uso de um lenço na cabeça está de acordo com os regulamentos e protocolos, então deveria, sem dúvida, aplicar o mesmo a todas as mulheres iranianas. A ativista de 51 anos, conhecida por sua luta contra a pena de morte e pelo direito das mulheres, iniciou uma greve de fome na última segunda (6). Anteriormente, as autoridades penitenciárias haviam se recusado a hospitalizar Mohammadi, que sofre de problemas cardíacos, após ela não aceitar cobrir a cabeça com um véu durante a transferência, segundo familiares. Um exame de imagem havia mostrado duas veias com grandes obstruções e pressão pulmonar elevada, razão pela qual ela precisaria passar por procedimentos médicos. Ela está disposta a arriscar sua vida por não usar o 'hijab obrigatório', inclusive para se tratar, disse a família na ocasião. A República Islâmica é responsável por tudo o que possa acontecer com nossa querida Narges. Outras sete companheiras de prisão, incluindo a escritora Golrokh Iraee e a ativista Vida Rabbani, haviam se juntado ao protesto. Foi uma manifestação contra a política de 'morte', ou 'hijab obrigatório', que ceifou inúmeras vidas nas últimas quatro décadas", afirmaram elas. "Na quinta-feira, 9 de novembro, após a transferência de Narges para o hospital sem usar o hijab obrigatório, rompemos a greve de fome. Amigos e conhecidos que a esperavam na entrada do hospital foram detidos brevemente e interrogados, e suas câmeras fotográficas foram confiscadas. O governo temia que eu fosse vista sem véu, disse Mohammadi, que manifestou sua disposição para continuar andando com a cabeça descoberta até a abolição da obrigatoriedade do hijab. A ativista está detida desde 2021 na prisão de Evin, em Teerã, sob a acusação de espalhar propaganda contra o Estado. No dia 6 de outubro, foi laureada com o Nobel por promover os direitos humanos e a liberdade para todos. A perseguição do regime iraniano começou há 30 anos, quando ela ingressou na universidade e começou seu ativismo. Mohammadi foi presa 13 vezes pelas forças estatais e condenada cinco vezes a um total de 31 anos de prisão e 154 chicotadas, de acordo com Berit Reiss-Andersen, presidente do comitê da premiação. O Nobel da Paz foi concedido após uma série de protestos no Irã pela morte de Mahsa Amini, que estava sob custódia policial, em setembro de 2022. A jovem foi detida sob a acusação de violar o rigoroso código de vestimenta para mulheres em vigor no país. Segundo o comitê norueguês, o lema Mulher, Vida, Liberdade, adotado pelos manifestantes, expressa adequadamente a dedicação e o trabalho de Narges Mohammadi, seja no que se refere à sua luta contra a opressão das mulheres quanto à sua busca por promover os direitos humanos e a liberdade para todos. A láurea deste ano ainda reconheceu os milhares que se manifestaram contra as políticas de discriminação e opressão do regime iraniano.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|MatÃ©ria 1.GLO deixa de fora portos resonsáveis por 80% do transpote internacional de cargas brasileiro|\n");
				printf("|MatÃ©ria 2.“O Túnel dos Pombos” explora vida, obra e os causos do autor John le Carré                 |\n");
				printf("|----------------------------------------------------------------|\n");
				printf("|Digite a matÃ©ria que deseja ver:                               |\n");
				printf("|________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("GLO deixa de fora portos resonsáveis por 80% do transpote internacional de cargas brasileiro\n\n");
						printf("Funcionários da Receita Federal fazem apreensão de drogas acomodadas em casco de navio. A Operação de Garantia da Lei e da Ordem (GLO) criada recentemente pelo governo de Luiz Inácio Lula da Silva (PT) para usar militares para combater o tráfico de cocaína feito por facções criminosas está focada em apenas três portos, no Rio de Janeiro e São Paulo. Mas ela deixa de lado outros 410 portos brasileiros que respondem por cerca de 80% do transporte marítimo internacional no Brasil. Ou seja, a fiscalização focada nos portos do Rio de Janeiro (RJ), Itaguaí (RJ) e Santos (SP) pode fazer a criminalidade mudar suas operações para outros portos, segundo afirmou o general da reserva Marco Aurélio Vieira, ex-secretário especial do Esporte do governo do ex-presidente Jair Bolsonaro (PL), durante o programa Assunto Capital, da Gazeta do Povo. "O Brasil tem 8,5 mil quilômetros de costa, então, se você resolve fazer isso no porto do Rio de Janeiro, você acha que consegue impedir que isso (o tráfico) aconteça nos outros?", afirmou o general. Clique aqui e veja o programa completo. “É como se você anunciasse para os traficantes que, a partir de uma determinada data, não fosse deixar que eles utilizem certos portos e aeroportos”, disse. Operação não interromperá tráfico nem nos portos fiscalizados, diz procurado Além disso, mesmo nos portos fiscalizados a operação dificilmente vai conseguir impedir o tráfico internacional de cocaína. Isso porque, na prática, mesmo com o reforço de militares é impossível fiscalizar todos os contêineres suspeitos sem causar um colapso no transporte marítimo do Brasil. “A grosso modo, a droga que é exportada vai por contêineres – e são milhares deles em cada porto. Então, na força bruta, a GLO, se conseguir, irá fiscalizar cerca de 1% dos contêineres nesses portos e os resultados são improváveis”, afirmou o procurador do Ministério Público de São Paulo Marcio Sergio Christino. Ele foi um dos primeiros membros do Ministério Público a investigar o Primeiro Comando da Capital (PCC), facção que é uma das maiores operadoras da rota de cocaína. Christino também é autor do livro "Laços de Sangue: A história secreta do PCC" (Ed. Matrix; 2017). De acordo com o Estatístico Aquaviário da Agência Nacional de Transportes Aquaviários (Antaq), entre janeiro e setembro desse ano, 93,3 milhões de contêineres foram movimentados nos portos brasileiros. Somente o Porto de Santos foi responsável pela movimentação de 26 milhões de unidades, seguidos pelos Terminais Portuários de Navegantes (SC) com 11,4 milhões e pelo Porto de Paranaguá com 8,6 milhões. Autoridades portuárias usam máquinas de raio-X para selecionar contêineres para inspeção. Mas a inspeção de uma única unidade leva horas, pois toda a mercadoria tem que ser descarregada e depois recarregada manualmente. “As facções criminosas não estão nem aí para essa fiscalização, porque é quase impossível para a Marinha encontrar os contêineres que estão carregados com cocaína. Quando há uma apreensão feita pela Receita Federal (RFB), por exemplo, é porque houve uma investigação anterior e uma informação a respeito de onde está a droga. Assim, ao acaso, é muito pouco provável que a GLO tenha qualquer resultado”, afirma o procurador. O volume de transporte nos portos da GLO é um impedimento Desde o dia 6 de novembro, a GLO emprega 1.100 militares da Marinha do Brasil para fiscalizar pessoas e cargas em três dos 413 portos e terminais portuários, públicos e privados no Brasil. Outros 800 marinheiros trabalham em embarcações para impedir o acesso de criminosos aos portos usando pequenos barcos. As atividades estão sendo implementadas nos Portos de Santos (SP), do Rio de Janeiro (RJ) e de Itaguaí (RJ) que, juntos, responderam pela movimentação de 148,6 milhões de toneladas entre janeiro e setembro deste ano. Esse total equivale a 21,8 % dos 680 milhões de toneladas transportadas em rotas internacionais a partir de todos os portos e terminais marítimos nacionais, segundo dados da Agência Nacional de Transportes Aquaviários (Antaq). Dois dos principais portos nacionais, o Terminal Marítimo de Porto Madeira, no Maranhão, responsável pelo embarque e transporte de 119 milhões de toneladas, e o Terminal de Tubarão, no Espírito Santo, com 56 milhões, ficaram de fora da GLO. Apesar do volume menos expressivo de cargas, os portos baianos de Aratu e de Salvador, responsáveis por, respectivamente, 5 e 3 milhões de toneladas, também não foram incluídos na operação. Desde o início do ano, a Bahia enfrenta uma grave crise de segurança pública com aumento da criminalidade relacionada ao tráfico de drogas. Cocaína andina passa pelo Brasil e vai para a Europa e África Os portos são o principal vetor para a exportação de cocaína dos países andinos para a Europa por meio do Brasil. Isso ocorre porque os navios de carga que saem do país rumo à Europa podem levar centenas de quilos, até toneladas, de cocaína de uma só vez sem chamar atenção. É muito mais, por exemplo, do que podem levar as chamadas "mulas do tráfico", pessoas que embarcam em voos levando cocaína na mala ou escondida no corpo. Segundo Christino, a facção criminosa Primeiro Comando da Capital, ou PCC, é a principal responsável pela exportação de cocaína nos portos nacionais - cerca de 90%. Ele explicou que a facção se aliou a produtores da Bolívia para que a droga chegue ao rico mercado europeu. O Comando Vermelho (CV) também tem sua parcela nas exportações de cocaína, mas atua nos portos ao Norte do país para escoar a produção que vem do Peru. O procurador afirma que o CV tem maior proeminência no tráfico interno, que se utiliza da costa do Nordeste brasileiro para fazer com que a droga chegue ao Sudeste. No ano passado, 25 toneladas de cocaína foram apreendidas nos portos brasileiros pela Receita Federal. O porto de Santos foi o principal ponto de apreensão, com 16,4 toneladas encontradas. Segundo autoridades europeias, Santos é um dos maiores pontos, em todo o mundo, de envio de cocaína para o continente. Não há dados sobre os portos do Rio de Janeiro. Mas portos menores também são utilizados. O Relatório Global do Escritório das Nações Unidas para Drogas e Crime (UNODC), divulgado em julho de 2022, reforça a informação do procurador: o documento diz que portos localizados no Norte e Nordeste também se tornaram entrepostos para o tráfico internacional de cocaína. Além de transportar as drogas em meio aos alimentos e outras cargas nos contêineres, há volumes de droga que chegam a ser acomodados por mergulhadores altamente capacitados nos cascos e compartimentos submersos dos navios. Atualmente, os traficantes utilizam navios rumo à Europa, mas com paradas em portos africanos para despistar a fiscalização de países como Bélgica, Itália e Holanda. Os principais destinos da droga que sai do Brasil são Espanha e Portugal. As estratégias e a duração da GLO Em princípio, a Marinha divulgou que as ações no âmbito da GLO visam reforçar a fiscalização de pessoas e mercadorias nos portos. A ação pretende aumentar as capacidades da Receita Federal e da Polícia Federal de fiscalizar os contêineres que serão embarcados. Ao todo, 750 fuzileiros foram destacados para os Portos do Rio de Janeiro e Itaguaí e 350 para Santos. Além disso, está prevista a atuação de 20 embarcações, como lanchas blindadas, navios de patrulha de grande porte e motos aquáticas. A ideia é impedir que pequenos barcos carregados com cocaína se aproximem dos navios e façam o embarque ilegal da droga. Segundo Christino, operações de combate ao tráfico só podem gerar resultados efetivos caso sejam focadas em ações de investigação. Mas ele disse que não sabe se serão feitas investigações no escopo de ações da GLO. No entanto, sem o trabalho de colher elementos e buscar informações privilegiadas sobre as cargas é possível, mas improvável, que a GLO gere os efeitos desejados.  “O uso de massa bruta para executar uma ação fiscalizatória como uma forma de inibir o tráfico em si, não me parece uma estratégia boa”, afirmou. A Operação de Garantia da Lei e da Ordem foi decretada no dia 1º de novembro pelo Governo Federal em resposta a ondas de violência no Rio de Janeiro e na Bahia – ainda que o estado nordestino não seja alvo de nenhuma das ações anunciadas. Foi iniciada em 6 de novembro e a estimativa é de que as atividades sigam até o dia 3 de maio de 2024.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("“O Túnel dos Pombos” explora vida, obra e os causos do autor John le Carré");
						printf("“Recrutar alguém para o serviço secreto é difícil. Você precisa de alguém um pouco mau, mas, ao mesmo tempo, leal... E eu me encaixava perfeitamente.” Essa frase é apenas um dos muitos exemplos de sinceridade e confiança dados por David Cornwell em suas entrevistas exibidas no documentário O Túnel dos Pombos, recém-lançado na Apple TV+. Caso esse nome não seja o suficiente para saber quem é o homem que fala com tanta propriedade sobre a espionagem, talvez seu pseudônimo traga um pouco de luz: ele era conhecido mundialmente como John le Carré, autor de best-sellers como O Espião que Saiu do Frio, O Espião que Sabia Demais e Um Espião Perfeito, todos transformados em longas-metragens. Antes de morrer, em dezembro de 2020, o escritor conversou por quase 14 horas com o documentarista Errol Morris, que ganhou um Oscar em 2003 após um trabalho sobre Robert McNamara, ex-secretário de Defesa dos Estados Unidos. Esse papo sem precedentes (considerando que le Carré não era muito de dar entrevistas) foi pautado a partir do material divulgado pelo próprio em sua primeira autobiografia, lançada com o mesmo título do novo documentário, em 2016. Sem muito enrolar, o longa já explica nos primeiros dez minutos o que é o tal do túnel dos pombos: uma metáfora ligada ao esporte tipicamente britânico de tiro ao pombo, que vez ou outra foi considerada pelo escritor como um possível título para vários de seus livros, inclusive os citados no parágrafo anterior. Mas a graça não está no título e, sim, na própria figura de le Carré. Sua maneira de se portar e contar bem até as histórias traumáticas da infância, com um pai estelionatário e uma mãe ausente, fazem o espectador sentir que está lendo algum texto muito bem polido do autor de espionagem. Sua franqueza, seja ela real ou não, é um aspecto responsável por prender quem assiste ao material. Nos minutos iniciais, ele questiona Morris (que se coloca como personagem da própria produção) sobre suas intenções com a entrevista, para entender se serão amigos ou inimigos. John le Carré demonstra entender bem a natureza e as dinâmicas de um interrogatório, afinal, antes da carreira ilustre escrevendo livros, ele foi agente do serviço secreto, trabalhando tanto no MI5 quanto no MI6 ao longo dos anos de 1950 e 1960. Moralmente ambíguo   Muitos dos posicionamentos e pensamentos de le Carré, que pode ser traduzido do francês como “o quadrado”, são escancarados no documentário. Ele repete que os espiões são figuras moralmente ambíguas em diferentes momentos do longa, indicando que a “traição” é uma das questões mais importantes da vida. O escritor defende isso firmemente, pois teve de abandonar a espionagem quando Kim Philby, um chefão do MI6, desertou para a Rússia e revelou o nome real de diversos agentes secretos do Reino Unido, incluindo o de David Cornwell – ele assinava suas obras com o pseudônimo de John le Carré, em um primeiro momento, justamente para manter sua identidade e sua segurança em segredo. O Túnel dos Pombos se debruça nesse acontecimento basilar de sua vida, revelando como também serviu de combustível para a confecção de O Espião que Sabia Demais. Mesmo se não estiver familiarizado com o texto original, publicado em 1974, o espectador achará o relato dele irresistível e mais realista sobre o mundo da espionagem do que qualquer texto de Ian Fleming, o criador de James Bond, o agente 007. Mais um trunfo do documentário é sua maneira de explorar as dualidades entre o Ocidente e o Oriente durante a Guerra Fria. Cornwell esteve infiltrado na Alemanha Ocidental como um diplomata e acompanhou a criação do Muro de Berlim, descrito por ele como o “símbolo mais imoral da insanidade da luta humana”. Ele não apoiava nenhum dos lados e indicava crer que a polarização extrema da sociedade travava seu avanço. Para fãs de história, política ou somente causos de agentes secretos, O Túnel dos Pombos é um dos melhores documentários na praça. Além de trazer as ótimas entrevistas com le Carré, a produção agrega boas dramatizações e cenas de clássicos filmes da espionagem, como O Espião que Saiu do Frio. Tudo isso com uma trilha sonora assinada por Philip Glass e Paul Leonard-Morgan, que dá o tom de suspense característico do universo dos serviços secretos.");
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

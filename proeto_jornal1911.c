#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdint.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void exibirMateria (char materia[]) {
	printf("Mat�ria escolhida: %s\n", materia);
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

	
	int dia, jornal, materia, loop = 1;
	system("color F1");
	
	printf("_______________\n");
	printf("|Login:        |\n");
	printf("|______________|\n\n");
	printf("Digite seu nome: ");
	scanf("%s", usuario.nome);
	strcpy(str, "Nome de usu�rio: ");
	fputs(str, arquivo);
	fputs(usuario.nome, arquivo);
	fputs("\n", arquivo);
	printf("Digite seu email: ");
	scanf("%s", usuario.email);
	strcpy(str2, "Email do usu�rio: ");
	fputs(str2, arquivo);
	fputs(usuario.email, arquivo);
		system("cls");
		system("cls");
		printf("___________________________________________________\n");
		printf("|Bem vindo a nossa cole��o de jornais.             |\n");
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
		case 22://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estad�o               |\n");
			printf("|3. Folha de S�o Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________\n");
				printf("|Mat�ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat�ria 2. Alec Baldwin dispara arma cenogr�fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in�cio de sexta-feira com d�lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian�a absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb�m que n�o far� nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret�rios de Guedes pedirem demiss�o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa�da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr�fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr�fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M�xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic�ptero ao hospital da Universidade do Novo M�xico, mas n�o resistiu aos ferimentos.");
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat�ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat�ria 2. Cec�lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informa��es de como a C�cilia vendeu um site de 80 mil reais.");
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat�ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat�ria 2. Cec�lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informa��es de como a C�cilia vendeu um site de 80 mil reais.");
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat�ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat�ria 2. Cec�lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informa��es de como a C�cilia vendeu um site de 80 mil reais.");
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	
	   	case 7:
	   		do{
	   				system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estad�o               |\n");
			printf("|3. Folha de S�o Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			system("cls");
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
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat�ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat�ria 2. Cec�lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informa��es de como a C�cilia vendeu um site de 80 mil reais.");
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("____________________________________________________________________________________________\n");
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
						printf("\n\nDigite 1 para voltar ou digite 0  para siar\n");
						scanf("%d", &jornal);				
					}
					if(materia == 2){
						exibirMateria("R�ssia comemora 100 anos de revolu��o bolchevique com desfile militar em Moscou\n\n");
						printf("Uma parada militar em Moscou celebra, nesta ter�a-feira (7), 100 anos da revolu��o bolchevique. O desfile, segundo o 'Washington Post', � tamb�m uma recria��o de uma parada militar realizada em 1941, quando a R�ssia desafiou as for�as alem�s, que chegavam aos arredores de Moscou na 2� Guerra Mundial. O l�der comunista Guennadi Ziuganov deve liderar a parada de comunistas e admiradores de L�nin. O presidente Vladimir Putin, no entanto, n�o deve participar de eventos oficiais em comemora��o ao centen�rio, segundo as ag�ncias internacionais. Segundo analistas, o atual presidente teme que o tema provoque novas divis�es entre os russos. O centen�rio foi ignorado completamente pelo Kremlin desde que Putin determinou, no final de 2016, que o acontecimento n�o fosse comemorado. Neste ano, nas poucas vezes em que se referiu ao centen�rio, os coment�rios do presidente foram acompanhados de pedidos de n�o 'trazer para nossos dias as divis�es, os �dios, as afrontas e a crueldade do passado'. 'Por acaso n�o era poss�vel progredir n�o por meio de uma revolu��o, mas atrav�s de uma evolu��o?', disse Putin recentemente. Segundo os analistas, Putin e o Kremlin sempre estiveram interessados em ressaltar outro fato hist�rico, o Dia da Vit�ria sobre a Alemanha nazista na Segunda Guerra Mundial, j� que � um evento que une todos os russos, independentemente de suas ideias pol�ticas, diferente da revolu��o. O centen�rio tamb�o coincide com o come�o dos preparativos das elei��es presidenciais de mar�o de 2018, nas quais Putin vai concorrer � reelei��o, segundo todas as previs�es.");
						printf("\n\nDigite 1 para voltar ou digite 0  para sair\n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat�ria 1. Hamas e Jihad convocam confer�ncia alternativa sobre o Oriente M�dio|\n");
				printf("|Mat�ria 2. Cec�lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Hamas e Jihad convocam confer�ncia alternativa sobre o Oriente M�dio");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar ou digite 0  para siar\n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informa��es de como a C�cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar ou digite 0  para siar\n");
						scanf("%d", &jornal);
					}

			}
			   }while(jornal != 0);
			   
	}

	
	fclose(arquivo);
	return 0;
}

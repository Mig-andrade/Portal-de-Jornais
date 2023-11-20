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

	
	int dia, jornal, materia, loop = 1;
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
		case 22://jornal
		do {

			system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
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
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
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
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
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
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
					}

			}
			
			
		
	    }  while (jornal != 0);
	   	break;
	   	
	   	case 7:
	   		do{
	   				system ("cls");
			printf("__________________________\n");
			printf("|1. O Globo               |\n");
			printf("|2. Estadão               |\n");
			printf("|3. Folha de São Paulo    |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			system("cls");
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
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("____________________________________________________________________________________________\n");
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
						printf("\n\nDigite 1 para voltar ou digite 0  para siar\n");
						scanf("%d", &jornal);				
					}
					if(materia == 2){
						exibirMateria("Rússia comemora 100 anos de revolução bolchevique com desfile militar em Moscou\n\n");
						printf("Uma parada militar em Moscou celebra, nesta terça-feira (7), 100 anos da revolução bolchevique. O desfile, segundo o 'Washington Post', é também uma recriação de uma parada militar realizada em 1941, quando a Rússia desafiou as forças alemãs, que chegavam aos arredores de Moscou na 2ª Guerra Mundial. O líder comunista Guennadi Ziuganov deve liderar a parada de comunistas e admiradores de Lênin. O presidente Vladimir Putin, no entanto, não deve participar de eventos oficiais em comemoração ao centenário, segundo as agências internacionais. Segundo analistas, o atual presidente teme que o tema provoque novas divisões entre os russos. O centenário foi ignorado completamente pelo Kremlin desde que Putin determinou, no final de 2016, que o acontecimento não fosse comemorado. Neste ano, nas poucas vezes em que se referiu ao centenário, os comentários do presidente foram acompanhados de pedidos de não 'trazer para nossos dias as divisões, os ódios, as afrontas e a crueldade do passado'. 'Por acaso não era possível progredir não por meio de uma revolução, mas através de uma evolução?', disse Putin recentemente. Segundo os analistas, Putin e o Kremlin sempre estiveram interessados em ressaltar outro fato histórico, o Dia da Vitória sobre a Alemanha nazista na Segunda Guerra Mundial, já que é um evento que une todos os russos, independentemente de suas ideias políticas, diferente da revolução. O centenário tambéo coincide com o começo dos preparativos das eleições presidenciais de março de 2018, nas quais Putin vai concorrer à reeleição, segundo todas as previsões.");
						printf("\n\nDigite 1 para voltar ou digite 0  para sair\n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Matéria 1. Hamas e Jihad convocam conferência alternativa sobre o Oriente Médio|\n");
				printf("|Matéria 2. Cecília vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                               |\n");
				printf("|_______________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Hamas e Jihad convocam conferência alternativa sobre o Oriente Médio");
						printf("O professor William da Etec de Nova Odessa nesta quarta feira repentinamente deixou o plano terreno e se tornou um ser celestial.");
						printf("\n\nDigite 1 para voltar ou digite 0  para siar\n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("Informações de como a Cécilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar ou digite 0  para siar\n");
						scanf("%d", &jornal);
					}

			}
			   }while(jornal != 0);
			   
	}

	
	fclose(arquivo);
	return 0;
}

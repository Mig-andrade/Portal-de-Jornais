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
				printf("|Matéria 1. Israel tem 200 mil deslocados internos pela guerra com o Hamas, aponta gabinete de Netanyahu|\n");
				printf("|Matéria 2. Alec Baldwin dispara arma cenográfica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Israel tem 200 mil deslocados internos pela guerra com o Hamas, aponta gabinete de Netanyahus\n\n");
						printf("\tDe acordo com um porta-voz do gabinete do premier, citado pelo jornal Times of Israel, cerca de metade dos 200 mil deslocados foram instru�dos a evacuar 105 comunidades perto das fronteiras de Gaza e do L�bano, no sul e no norte, diante das amea�as de seguran�a provocadas pelo Hamas e pelo Hezbollah.");
						printf ("Ainda de acordo com o mesmo porta-voz, a outra metade deixou �reas pr�ximas a fronteira por vontade pr�pria.\n\n");
						printf ("A Autoridade Nacional de Gest�o de Emerg�ncias (Nema), vinculada ao Minist�rio da Defesa, aponta que cerca de 120 mil israelenses est�o recebendo atendimento do �rg�o, ap�s serem ret\n\n");
						printf ("? Desde a independ�ncia, em 1948, n�o havia um deslocamento da popula��o dentro de Israel por quest�es de seguran�a como estamos observando agora, com cidades inteiras desalojadas, como Kiryat Shmona, perto da fronteira com o L�bano, com mais de 20 mil habitantes ? afirmou o historiador israelense Meir Margalit, de 71 anos, em entrevista ao jornal El Pa�s.\n\n");
						printf ("De acordo com o historiador, contudo, o n�mero n�o � compar�vel ao �xodo provocado pelos bombardeios israelenses contra o enclave palestino.\n\n");
						printf (" N�o Segundo a ONU, o n�mero de civis que teve que se deslocar internamente na Faixa de Gaza, desde o dia 7 de outubro, chegou em 1 milh�o. Mais de 500 mil deles ele procurou ref�gio em instala��es da ONU para os Refugiados Palestinos \n\n");
						
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
				printf("___________________________________________________________________________________________________________________________\n");
				printf("|Matéria 1. Liberta��o de ref�ns: veja o que se sabe sobre o acordo entre Israel e o grupo terrorista Hamas.              |\n");
				printf("|Matéria 2. Bar amea�ado de despejo consegue decis�o in�dita e pode virar patrim�nio cultural de SP; entenda              |\n");
				printf("|--------------------------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat�ria que deseja ver:                                                                                          |\n"); 
				printf("|__________________________________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Liberta��o de ref�ns: veja o que se sabe sobre o acordo entre Israel e o grupo terrorista Hamas.\n\n");
						printf("O governo de Israel aprovou na ter�a-feira, 21, o acordo mediado pelo Catar para uma tr�gua tempor�ria em Gaza, ap�s 45 dias de guerra com o grupo terrorista Hamas, que domina o enclave. Esta pausa de quatro dias � a primeira no conflito desde 7 de outubro, quando comunidades israelenses foram invadidas e cerca de 240 pessoas foram sequestradas por terroristas do Hamas.\n");
						printf ("O acordo ser� o primeiro respiro aos palestinos de Gaza, onde mais de 11 mil pessoas, a maioria mulheres e crian�as, foram mortas, de acordo com autoridades. Tamb�m pode representar um vislumbre de esperan�a para fam�lias daqueles que foram sequestrados semanas atr�s.\n");
						printf ("O trato, mediado pelo Catar, pelos Estados Unidos e pelo Egito, foi anunciado enquanto os combates se intensificavam nos bairros centrais da cidade de Gaza. Ele encerra semanas de negocia��es indiretas intermitentes e prepara o terreno para um per�odo tenso que poder� determinar o curso da guerra, que j� est� quase na s�tima semana. \n");
						printf ("Israel, Hamas e Catar anunciaram diferentes detalhes do acordo, mas essas informa��es n�o parecem contradizer umas as outras. Veja o que se sabe at� agora. ");
						printf ("Catar anunciou na madrugada desta quarta-feira, 22, que o Hamas ir� soltar 50 ref�ns em troca do que o grupo terrorista disse que seriam 150 palestinos presos detidos por Israel. Essas pessoas libertadas, em ambos os lados, seriam mulheres e menores de idade. \n");
						printf ("Os ref�ns seriam soltos em etapas durante os quatro dias de cessar-fogo. Uma vez que a primeira leva for solta, espera-se que Israel liberte o primeiro grupo de palestinos presos. ");
						printf ("Os que est�o � espera de liberta��o incluem muitos adolescentes detidos durante uma onda de viol�ncia na Cisjord�nia em 2022 ou 2023 e acusados de crimes como lan�amento de pedras ou perturba��o da ordem p�blica, de acordo com uma lista de prisioneiros eleg�veis publicada pelo Minist�rio da Justi�a de Israel nesta quarta-feira. Israel det�m atualmente cerca de 7 mil palestinos acusados ou condenados por crimes de seguran�a. \n");
						printf ("Israel disse que a tr�gua seria prorrogada por um dia a cada 10 ref�ns adicionais liberados. O Catar tamb�m disse que Israel ainda iria permitir mais combust�vel e ajuda humanit�ria em Gaza, mas n�o forneceu mais detalhes. ");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Bar amea�ado de despejo consegue decis�o in�dita e pode virar patrim�nio cultural de SP; entenda\n\n");
						printf("Em meio a uma a��o de despejo, a mobiliza��o pela preserva��o do bar e casa de espet�culos � do Borogod� obteve uma vit�ria significativa nesta semana. O Conselho Municipal de Preserva��o do Patrim�nio Hist�rico, Cultural e Ambiental da Cidade de S�o Paulo (Conpresp) aprovou a abertura de estudo para avaliar a possibilidade de reconhecer o tradicional espa�o de samba da Vila Madalena, no distrito Pinheiros, como �rea de prote��o cultural.\n\n");
						printf ("Com a decis�o, uma demoli��o, reforma, amplia��o ou outra altera��o no im�vel onde o bar est� localizado dever� ser analisada e deliberada pelo conselho. Essa obriga��o tamb�m inclui uma eventual pausa nas atividades art�sticas do espa�o. O bar � alvo de a��o de despejo pelos propriet�rios do im�vel, mas se recusa a deixar o endere�o mesmo ap�s uma notifica��o extrajudicial, em maio.\n \n");
						printf ("O reconhecimento provis�rio permanecer� durante um estudo mais aprofundado sobre o eventual enquadramento definitivo como Zona Especial de Prote��o Ambiental - �rea de Prote��o Cultural (Zepec-APC), o que pode levar de meses at� alguns anos. A decis�o � in�dita para um bar. Esse � o mesmo tipo de prote��o tempor�ria determinada neste ano para o Santa Marina Atl�tico Clube, na zona oeste, e o Espa�o Ita� de Cinema da Rua Augusta, na regi�o central.\n \n");
						printf ("Hoje, h� uma Zepec-APC definitiva na cidade: o Cine Belas Artes. A decis�o � de 2016, um ano ap�s uma lei municipal regulamentar essa classifica��o, prevista no Plano Diretor de 2014.\n\n");
						printf ("Esse tipo de reconhecimento n�o � uma desapropria��o, tanto que o im�vel reconhecido pode seguir de propriedade privada. Tamb�m n�o � um tombamento, porque n�o envolve aspectos materiais (como a arquitetura em si). Embora exija avalia��o pr�via pelo conselho, n�o pro�be necessariamente uma obra ou demoli��o, desde que autorizada e que mantenha aquele tipo de atividade cultural.\n\n");
						printf ("Na pr�tica, a determina��o dificulta a possibilidade do im�vel ser vendido para a constru��o de um pr�dio no endere�o, na Rua Hor�cio Lane, 21, na esquina com a Rua Cardeal Arcoverde. Situa��o semelhante tamb�m desencadeou uma mobiliza��o do Bar Balc�o, nos Jardins, mas o espa�o recentemente anunciou que uma incorporadora desistiu de um projeto de edif�cio para o local.\n\n	");
						printf ("A abertura de estudo no Conpresp foi celebrada pelos frequentadores e propriet�rios do bar, que atua no local h� 22 anos e � um dos principais pontos de encontro do samba e choro na zona oeste. �Mais um passo. Precisamos de todos nessa luta pela perman�ncia! O � faz a cidade mais bonita!�, publicaram nas redes sociais.\n\n");
						printf ("A campanha �Fica Ӕ obteve 2,9 mil signat�rios em abaixo-assinado virtual. Al�m disso, a Comiss�o de Patrim�nio Cultural do Conselho de Arquitetura e Urbanismo de S�o Paulo (CAU/SP) tamb�m manifestou apoio.\n\n");
						printf ("Em reportagem do Estad�o de 2021, sobre transforma��es no bairro, os s�cios do � do Borogod� j� comentavam sobre considerar o espa�o como de �resist�ncia� em meio � valoriza��o da Vila Madalena. �O �Ӓ � uma espelunca, feito de outras mat�rias. A gente tinha aluguel barato (no in�cio). Na medida em que a Vila foi crescendo, sofre com o aumento de aluguel�, falaram � �poca.\n\n");
						printf ("O boom da verticaliza��o em Pinheiros tem motivado cr�ticas de parte dos moradores, que conseguiram o tombamento provis�rio de mais de 600 constru��es. A decis�o � tempor�ria e n�o foi bem recebida por todos os propriet�rios. O Estad�o desenvolveu um mapa interativo com os endere�os.\n\n");
						printf ("No Conpresp, a decis�o destacou que o espa�o atende a �requisitos m�nimos para enquadramento como Zepec-APC� e que as atividades�confluem com outras a��es de reconhecimento, prote��o e apoio da express�o musical popular paulistana � como o samba e o samba-rock�. O pedido de an�lise foi protocolado em car�ter de urg�ncia pelo Instituto Casa da Cidade, tamb�m da Vila Madalena.\n\n");
						printf ("O � do Borogod� chegou a propor a compra � vista da parte que ocupa do im�vel, assim como a compra total (com o restante do valor parcelado em 100 presta��es). N�o obteve, por�m, retorno positivo dos propriet�rios.\n\n");
						printf ("Na a��o de despejo, os donos do im�vel afirmam ter feito tentativas de acordos entre as partes a respeito da venda do espa�o. Tamb�m destacam que os locat�rios tinham ci�ncia de que o contrato est� com prazo indeterminado desde julho de 2022. �N�o obstante, ap�s o recebimento da notifica��o a requerida quedou-se inerte, demonstrando recusa em desocupar o im�vel dentro do prazo pretendido (25 de junho de 2023)�.\n\n");
						printf ("A prote��o do bar tamb�m obteve posicionamento favor�vel da Comiss�o T�cnica de An�lise (CTA) da Zona Especial de Preserva��o Cultural � �rea de Prote��o Cultural (ZEPEC-APC), da Prefeitura, em outubro. O entendimento foi remetido ao Conpresp e embasou a decis�o do conselho.\n\n");
						printf ("Na delibera��o, o comit� destaca que �quando uma atividade cultural se exerce h� anos em um mesmo lugar, tornando-se parte do bairro, n�o � poss�vel mover a atividade cultural de maneira for�ada para outro local sem que haja significativa perda simb�lica�.\n\n");
						printf ("A comiss�o tamb�m lembrou da �intensa disputa imobili�ria� que tem transformado a paisagem de Pinheiros nos �ltimos anos, citando espa�os culturais fechados no distrito nos anos 2000, como o Espa�o Cultural Rio Verde, o Canto Madalena, o Espa�o Z� Presidente e o Puxadinho da Pra�a, dentre outros. �Considerando que a Zepec-APC tem o papel tamb�m de preserva��o de mem�ria dos bairros, � interessante sua aplica��o neste caso raro de espa�o remanescente�, diz.\n\n");
						printf ("�Percebe-se, pelos relatos, que o lugar n�o � apenas um estabelecimento comercial que tem m�sica como sua principal atra��o � o que poderia enfraquecer a abertura do processo de enquadramento como Zepec-APC �, mas um lugar que congrega pessoas (...). Se um espa�o de m�sica se torna ponto de encontro entre m�sicos, que podem ali criar juntos, testar composi��es, ensaiar de forma aberta ao p�blico e conectar com ele, ver sua rea��o, experimentar novas formas de fazer m�sica, etc, esse espa�o est� n�o apenas tendo a m�sica como uma �atra��o�, mas est� participando ativamente na produ��o de m�sica na cidade. Sendo assim, � inegavelmente um espa�o de cultura. (...)�, salientou.\n\n");
						printf ("A Zepec-APC � prevista no Plano Diretor desde 2014, o qual define que a �prote��o � necess�ria � manuten��o da identidade e mem�ria do Munic�pio e de seus habitantes, para a dinamiza��o da vida cultural, social, urbana, tur�stica e econ�mica da cidade�.\n\n");
						printf ("Esse tipo de prote��o foi regulamentada por lei municipal de 2015. Prev� que o enquadramento contemple �locais destinados � forma��o, produ��o e exibi��o p�blica de conte�dos culturais e art�sticos� e �espa�os com significado afetivo, simb�lico e religioso para a comunidade, por meio de atividades ali exercidas�.\n\n");
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
				printf("|Matéria 1. Itamaraty confirma que brasileiro de 59 anos est� desaparecido em Israel|\n");
				printf("|Matéria 2. Jogos Pan-Americanos: Acostumados � �carreira solo�, skatistas vivem nova realidade no mundo ol�mpico |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Itamaraty confirma que brasileiro de 59 anos est� desaparecido em Israel\n\n");
						printf("\tA Interpol comunicou ao Itamaraty, no domingo, o desaparecimento do brasileiro Michel Nisenbaum, de 59 anos. A informa��o foi confirmada ao GLOBO pelo �rg�o. Ainda n�o h� detalhes sobre a data do �ltimo contato, tampouco o local em que ele estava em Israel quando o grupo terrorista Hamas iniciou o ataque, no �ltimo dia 7.\n\n");
						printf ("De acordo com o Itamaraty, Nisenbaum tem dupla cidadania e � o �nico brasileiro que o governo trata como desaparecido no momento. At� agora, as mortes de tr�s brasileiros foram confirmadas: Ranani Glazer, Bruna Valeanu e Karla Stelzer, todos no ataque do Hamas. Tr�s israelenses com ascend�ncia brasileira tamb�m foram mortos: Gabriel Yishay Barel, Celeste Fishbein e um terceiro sem identifica��o.\n\n");
						printf ("Nesta segunda-feira, o oitavo voo de repatria��o de brasileiros situados em Israel pousou no Rio de Janeiro com 209 passageiros e nove animais de estima��o. Com isso, a Opera��o Voltando em Paz j� resgatou, desde o dia 10 de outubro, 1.410 brasileiros e 53 pets que estavam no pa�s israelense, al�m de tr�s cidad�s bolivianas.\n\n");
						printf ("Al�m deles, um grupo com pouco menos de 30 brasileiros ainda aguarda evacua��o no sul da Faixa de Gaza, perto da fronteira com o Egito.\n\n");
						printf ("\n\n");
						printf ("\n\n");
						printf ("\n\n");
						printf ("\n\n");
						printf ("\n\n");
						printf ("\n\n");
						printf ("\n\n");
						printf ("\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Jogos Pan-Americanos: Acostumados � �carreira solo�, skatistas vivem nova realidade no mundo ol�mpico\n\n");
						printf("O skate, que estreou como modalidade ol�mpica em T�quio-2020, ainda se adapta � realidade dos esportes abra�ados pelo Comit� Ol�mpico Internacional (COI). Diferentemente dos torneios mundo afora, em que os atletas competem de forma individual, nos ol�mpicos eles representam um pa�s, fazem parte de uma delega��o, usam uniforme e precisam se adaptar �s regras para o conjunto. E os Jogos Pan-Americanos de Santiago, que n�o contaram pontos para Paris, foram o �ltimo evento nesse formato �time� antes dos Jogos de 2024 na capital francesa. \n\n");
						printf ("� No Pan, os atletas se vestem com uniforme do Brasil, n�o com a roupa que gostam de usar nas competi��es do circuito. � quando eles sentem que representam de fato um pa�s. Pensando em Paris, isso � importante, coloc�-los de novo no clima de uma competi��o diferente. Para o skate, ainda � uma novidade � diz Eduardo Musa, presidente da Confedera��o Brasileira da modalidade (CBSK). � J� existe uma mudan�a de T�quio para c�, mas ainda � preciso mais competi��es. O skate ainda n�o se sente uma modalidade ol�mpica.\n\n");
						printf ("Para Musa, at� o uso do uniforme do Time Brasil, obrigat�rio para todos os membros da delega��o, faz diferen�a. Ele conta que, desde T�quio, quando isso acontece, �parece que os atletas viram uma chave�.\n\n");
						printf ("� O Pan foi importante para refor�ar o clima dos Jogos, o clima de ser Brasil. E tamb�m por eles terem de se adaptar aos hor�rios da organiza��o, a andar de �nibus, dividir quarto com outro atleta. Esse clima � muito diferente para os skatistas � opina. � Eles representam marcas, fazem agendas... Tudo gira em torno do atleta individualmente. O Pan faz com que ele entenda: �N�o sou eu, � o Brasil�.\n\n");
						printf ("Em T�quio, o skate conquistou tr�s medalhas de prata (Kelvin Hoefler e Rayssa Leal no street e Pedro Barros no park) e foi o esporte com mais p�dios para o Brasil, ao lado do boxe e da nata��o.\n\n");
						printf ("Desde ent�o, a modalidade soma medalhas em todos os eventos da cena ol�mpica disputados. Nos Pan de Santiago, encerrado ontem para o skate, n�o foi diferente, com cinco p�dios, mais que qualquer outro pa�s.\n\n");
						printf ("No street feminino, disputado no s�bado, Rayssa Leal, prata em T�quio, conquistou o ouro. Ela sobrou na pista. P�mela Rosa, que n�o foi �s finais no Jap�o por les�o, ficou com a prata. No masculino, o Brasil obteve ouro com Lucas Rabelo.\n\n");
						printf ("Na modalidade park, domingo, Raicca Ventura garantiu a medalha de prata na �ltima volta. No masculino, Augusto Akio subiu ao p�dio na mesma posi��o.\n\n");
						printf ("O skate vive seu segundo ciclo ol�mpico, mas faz sua estreia em Pan-Americanos nesta edi��o, depois de ficar fora em Lima-2019.\n\n");
						printf ("� Penso nisso desde que cheguei, que o Pan � grandioso, e este � o primeiro da Hist�ria. Estar num torneio assim me colocou dentro da Vila dos Atletas, algo diferente, com todo mundo, trocando pins, conhecendo gente de outros esportes � comemorou Raicca, que estava nervosa na disputa.\n\n");
						printf ("No caso de Rayssa, Santiago-2023 foi a primeira competi��o no modelo ol�mpico desde T�quio-2020. Ela tem dez patrocinadores pessoais, e, eventualmente, pode �ser time� de alguma marca em torneios espec�ficos. Como Brasil, s� mesmo em competi��es como o Pan:\n\n");
						printf ("� A grande diferen�a de um evento ol�mpico � que me divirto mais, porque toda a sele��o brasileira est� aqui. Estou me acostumando a esse estilo de competi��o, apesar de ter ficado seis dias sem minha m�e na Vila � conta Rayssa, de 15 anos, que costuma viajar e ficar ao lado da m�e e coach durante os torneios. No Chile, ela dividiu quarto com P�mela. � Fizemos tudo juntas, menos ir ao banheiro (risos).\n\n");
						printf ("Para Rayssa, a medalha no Pan trouxe mais confian�a rumo � Olimp�ada de Paris, mesmo que ela prefira n�o pensar �t�o longe assim�:\n\n");
						printf ("� � sim um treinamento para Paris, o mesmo formato, a mesma vibe. Foi muito bom para pegar confian�a.\n\n");
						printf ("A classifica��o ol�mpica se dar� via ranking mundial. Desde o ciclo de T�quio, a CBSK tem sele��es permanentes. A entidade proporciona aos atletas treinamento e condi��es de disputa de torneios como parte do Time Brasil e com foco na pontua��o ol�mpica. Em janeiro, os 44 primeiros de cada modalidade e naipe avan�am � segunda fase de classifica��o. O Brasil deve levar tr�s atletas por grupo a Paris-2024.\n\n");
						printf ("Recuperado de grave contus�o no joelho e na briga pela vaga ol�mpica, Lucas Rabelo comemorou o ouro no street em Santiago. Ele j� havia sido campe�o pan-americano j�nior em Cali, em 2021, e por isso integrou o Time Brasil no Chile. Mas agora esteve pela primeira vez em um torneio do tipo na categoria adulta.\n\n");
						printf ("Lucas conta que �foi um choque� olhar para o lado e ver atletas de modalidades diferentes. Teve a sensa��o de pertencimento e vontade de �fazer acontecer�:\n\n");
						printf ("� A partir do momento em que o skate entrou nos Jogos, virou um sonho para mim. A gente representa de onde veio, e levo isso como motiva��o. Sou o Lucas, natural de Fortaleza, do bairro Pirambu, e estou aqui hoje.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("_________________________________________________________________________________________________\n");
				printf("|Matéria 1. Morre Bobi, o cachorro mais velho do mundo, aos 31 anos                            |\n");
				printf("|Matéria 2. Festival Sabores de Juazeiro: Confira programa��o do evento que celebra o Nordeste |\n");
				printf("|-----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                              |\n");
				printf("|_______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Morre Bobi, o cachorro mais velho do mundo, aos 31 anos\n\n");
						printf("Morreu no �ltimo s�bado, 21 de outubro, Bobi, cachorro considerado como o mais velho do mundo pelo Guinness World Records, o Livro dos Recordes. Ele havia celebrado 31 anos em maio com uma festa para mais de 100 pessoas na pequena vila de Portugal onde vivia.\n\n");
						printf ("Bobi � um rafeiro alentejano, ra�a tradicional portuguesa cuja expectativa de vida � entre 12 e 14 anos. A not�cia da morte foi compartilhada pela veterin�ria Karen Becker no Facebook e divulgado pelo Guinness nesta segunda, 23.\n\n");
						printf ("Cachorro mais velho do mundo completa 31 anos, segundo o �Guinness World Records�\n\n");
						printf ("Cachorro mais velho do mundo completa 31 anos, segundo o �Guinness World Records�\n\n");
						printf ("�Na noite passada, esse doce menino ganhou asas. Apesar de ter vivido mais que todos os c�es da hist�ria, seus 11.478 dias na Terra nunca seriam suficientes para aqueles que o amavam�, escreveu Karen.\n\n");
						printf ("�Quando perguntamos a Leonel [Costa, tutor de Bobi] qual era a receita para a vida excepcionalmente longa de Bobi, sua resposta foi r�pida: �Boa nutri��o, contato constante com a natureza, liberdade para descobrir seu ambiente, cuidados veterin�rios consistentes e amor�. Bobi sabe que � profundamente amado��, completou\n\n");
						printf ("O c�o foi reconhecido como mais velho do mundo em fevereiro de 2023. Ele nasceu em 1992 e teve a idade verificada pelo SIAC, um banco de dados de animais de estima��o autorizado pelo governo portugu�s e administrado pelo SNMV (Sindicato Nacional dos M�dicos Veterin�rios).\n\n");
						printf ("Quando Bobi foi anunciado como recordista, o tutor dele revelou que o cachorro sobreviveu ap�s ter sido enterrado junto com outros filhotes. O pai de Leonel decidiu sacrific�-los por n�o ter muito dinheiro e espa�o em casa para sustentar os c�es- uma pr�tica que, segundo ele, era comum na �poca. Bobi foi o �nico que conseguiu se salvar.\n\n");
						printf ("Leonel disse que acreditava que o c�o conseguiu viver por tanto tempo por estar em um �ambiente calmo e tranquilo�, vivendo �longe das cidades�. Nos seus �ltimos anos de vida, Bobi enfrentou dificuldades de andar e problemas de vis�o, mas continuava sendo um animal soci�vel, segundo o tutor.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Festival Sabores de Juazeiro: Confira programa��o do evento que celebra o Nordeste\n\n");
						printf("Os festivais gastron�micos que ocorrer�o em outubro e novembro no Nordeste s�o uma ode aos sabores, cores, temperos e aromas da cozinha baiana tradicional. Uma jornada pelo universo culin�rio marcante e diversificado, que destaca a qualidade e valoriza os produtos locais.\n\n");
						printf ("Por isso, segundo o Portal In, a 3� edi��o do Festival Sabores de Juazeiro, de 23 de outubro a 12 de novembro, visa incentivar o consumo de produtos locais e explorar o potencial da fruticultura e do Rio S�o Francisco. Promovido pelo Sebrae e Artfully, em colabora��o com a Prefeitura Municipal de Juazeiro, o evento, sob o tema �De Juazeiro para o Mundo�, reunir� 59 empresas. Os menus apresentados refor�ar�o os la�os gastron�micos, talentos e identidade local, refletidos na culin�ria juazeirense.\n\n");
						printf ("Os participantes competir�o em cinco categorias - Prato Principal, Petisco, Lanche, Sobremesa e Drink - em ambientes internos (nos estabelecimentos participantes) e externos (na Mostra Cultural Pop-up �Nossa Raiz, Tocando Horizontes�). A edi��o de 2023 traz inova��es, como oficinas preparat�rias ministradas por especialistas em gastronomia. Destacam-se tamb�m eventos culturais que incluem m�sica ao vivo, apresenta��es audiovisuais, elementos culturais e folcl�ricos, destacando figuras hist�ricas de Juazeiro e da regi�o.\n\n");
						printf ("A programa��o do festival incluir� uma Cozinha Show com chef convidado, uma performance musical homenageando a Bossa Nova e uma exposi��o fotogr�fica e audiovisual apresentando os pratos, ingredientes inspiradores e m�todos de prepara��o.\n\n");
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
			printf("|2. Estadão              |\n");
			printf("|3. Folha de São Paulo   |\n");
			printf("|4. Gazeta do Povo        |\n");
			printf("|                         |\n");
			printf("|0. Voltar:               |\n");
			printf("|-------------------------|\n");
			printf("|Digite o jornal desejado:|\n");//parte do jornal
			printf("|_________________________|\n");
			scanf("%d", &jornal);
			if(jornal == 1){
				system ("cls");
				printf("___________________________________________________________________________________________________________________\n");
				printf("|Matéria 1. Van Gogh em realidade virtual no Brasil pela primeira vez                                             |\n");
				printf("|Matéria 2. Jogos decisivos na Data Fifa escancaram que, mesmo melhorado, calend�rio segue problem�tico no Brasil |\n");
				printf("|------------------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                                 |\n");
				printf("|__________________________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Van Gogh em realidade virtual no Brasil pela primeira vez\n\n");
						printf("\tTr�s quadros de Van Gogh estar�o � mostra no Brasil em realidade virtual pela primeira vez. S�o as obras 'O Quarto em Arles', 'Terra�o do Caf� � Noite' e 'Noite estrelada'. A ideia � que adultos e crian�as possam explorar os detalhes do trabalho do artista holand�s.");
						printf ("As pinturas estar�o expostas na edi��o 2023 do Festival de Cultura Digital, Hacktudo, que come�a no pr�ximo dia 26 na Cidade das Artes, no Rio. A iniciativa � idealizada pelo curador e diretor Miguel Colker.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Jogos decisivos na Data Fifa escancaram que, mesmo melhorado, calend�rio segue problem�tico no Brasil\n\n");
						printf("Nesta temporada, a CBF tentou buscar uma solu��o para livrar os clubes de compromissos durante a Data Fifa. No entanto, o calend�rio ainda apresenta apertos, datas coincidentes com a reta final da Libertadores e da Sul-Americana � assim como espa�o grande para os Estaduais �, e pouca margem para manobras, como acontece agora. \n\n");
						printf ("A reta final do Brasileir�o virou o momento que menos apresenta flexibilidade, e justamente onde esta �bolha estourou�. Mais de um ter�o da competi��o � disputada nos dois meses finais, sendo que o campeonato dura oito.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("_____________________________________________________________________________________________________________\n");
				printf("|Matéria 1.Lula sanciona compensa��o a Estados por perdas com ICMS e veta trecho que cria obriga��o � Uni�o|\n");
				printf("|Matéria 2. Governo Lula exonera n�mero 3 da Abin e mais dois diretores, alvos da PF por espionagem ilegal |                        |\n");
				printf("|-----------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                                                          |\n");
				printf("|__________________________________________________________________________________________________________s_|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Lula sanciona compensa��o a Estados por perdas com ICMS e veta trecho que cria obriga��o � Uni�o\n\n");
						printf("BRAS�LIA - O presidente Luiz In�cio Lula da Silva sancionou, nesta ter�a-feira, 24, o Projeto de Lei Complementar (PLP) 136, que trata do acordo feito pelo governo federal com os Estados para compensar perdas com a arrecada��o do ICMS no ano passado. Ele barrou trecho que criaria nova obriga��o para a Uni�o. A san��o foi publicada em edi��o extra do Di�rio Oficial da Uni�o (DOU). \n\n");
						printf ("O dispositivo prev� uma compensa��o de R$ 27 bilh�es da Uni�o para os Estados e o Distrito Federal por conta da mudan�a do ICMS sobre combust�veis e reduz gastos com o piso da Sa�de este ano.\n\n");
						printf ("O projeto prev� uma antecipa��o de R$ 10 bilh�es dos recursos a Estados e munic�pios decorrentes da compensa��o das perdas com a arrecada��o do ICMS no ano passado, seja por repasses diretos do Tesouro ou abatimento de d�vidas. O valor seria pago em 2024.\n\n");
						printf ("O texto tamb�m determina que a Uni�o fa�a um repasse extra de R$ 2,3 bilh�es ao Fundo de Participa��o dos Munic�pios (FPM) e outro de R$ 1,6 bilh�o para o Fundo de Participa��o dos Estados (FPE).\n\n");
						printf ("O trecho vetado obrigaria a Uni�o a compensar munic�pios caso Estados n�o fizessem os repasses devidos relativos � nova receita ou enviassem recursos dessa fonte para o Fundo de Manuten��o e Desenvolvimento da Educa��o B�sica (Fundeb) e servi�os de sa�de.\n\n");
						printf ("O projeto era uma das prioridades do Congresso. Deputados e senadores vinham sendo pressionados por governadores e prefeitos que reclamavam da falta de recursos para governar.\n\n");
						printf ("�Vamos assegurar que nenhum munic�pio perder� nada de arrecada��o em rela��o a 2022. Isso significa que vamos garantir aos munic�pios a mesma quantidade de dinheiro�, disse Lula, em v�deo publicado no X, antigo Twitter. �Aos Estados, vamos garantir a recomposi��o das perdas de arrecada��o dos meses de julho e agosto de 2023?, acrescentou.\n\n");
						printf ("A san��o, conforme classificou o presidente, �demonstra compromisso do governo federal em continuar promovendo crescimento da economia, equilibrar a distribui��o de recursos e aliviar as dificuldades fiscais dos munic�pios e Estados�.\n\n");
						printf ("O projeto foi aprovado no Senado no in�cio de outubro e n�o teve nenhuma altera��o em rela��o ao aprovado na C�mara dos Deputados.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Governo Lula exonera n�mero 3 da Abin e mais dois diretores, alvos da PF por espionagem ilegal\n\n");
						printf("O governo federal exonerou nesta ter�a-feira, 24, Paulo Mauricio Fortunato Pinto, do cargo de secret�rio de Planejamento e Gest�o da Ag�ncia Brasileira de Intelig�ncia (Abin). Al�m dele, mais dois diretores do �rg�o foram dispensados da fun��o. Na �ltima sexta-feira, 20, a Pol�cia Federal (PF) apreendeu US$ 171,8 mil em esp�cie na casa do ent�o secret�rio. \n\n");
						printf ("Na Opera��o �ltima Milha, PF encontrou 171,8 mil d�lares na casa do secret�rio demitido nesta ter�a, 24 Foto: Pol�cia Federal\n\n");
						printf ("Estados contrataram empresa que ofereceu para Abin programa de espionagem investigado pela PF \n\n");
						printf ("Na sexta, a Abin foi alvo da Opera��o �ltima Milha, da Pol�cia Federal, que prendeu dois servidores, Eduardo Arthur Izycki e Rodrigo Colli, suspeitos de fazerem uso de um software para espionar ilegalmente pol�ticos, advogados, jornalistas e ministros do Supremo Tribunal Federal (STF). Os dois foram demitidos no dia da opera��o. A Abin divulgou que concluiu um processo administrativo que confirmou a participa��o dos dois como representantes de uma empresa em uma licita��o do Ex�rcito, o que � vedado para servidores p�blicos.\n\n");
						printf ("Al�m disso, a corpora��o cumpriu 25 mandatos de busca e apreens�o. Fortunato foi um dos alvos desses mandados e foi afastado do cargo por ordem do ministro Alexandre de Moraes na sexta. Ele tem extensa carreira na ag�ncia. Foi coordenador operacional do Centro de Intelig�ncia da Abin em eventos como a Copa do Mundo no Brasil, em 2016; a Jornada Mundial da Juventude, em 2013, quando o Papa veio ao Brasil; e as Olimp�adas de 2016.\n\n");
						printf ("Fortunato tamb�m foi conselheiro do Conselho de Controle de Atividades Financeiras (Coaf). Fora do cargo de secret�rio, ele volta a ser oficial aposentado da Abin e deve ficar � disposi��o do �rg�o quando terminar o afastamento determinado pelo STF.\n\n");
						printf ("A PF apura o uso indevido por servidores do programa FirstMile, desenvolvido pela empresa israelense Cognyte (ex-Verint), para espionar autoridades por meio de geolocaliza��o de celulares. Na lista de monitorados, h� um hom�nimo de Alexandre de Moraes, o que refor�a a suspeita de que o magistrado foi uma das v�timas.\n\n");
						printf ("De acordo com as investiga��es, o software foi usado para 33 mil monitoramentos. Ele rastreia os sinais de 2G, 3G e 4G trocados entre aparelhos celulares e torres de monitoramento, mostrando a localiza��o de determinado celular. O FirstMile precisa apenas do n�mero do telefone para fazer esse rastreamento.\n\n");
						printf ("A Abin diz que finalizou, em mar�o, uma correi��o extraordin�ria para apurar o uso do software. Ele foi comprado em dezembro de 2018 e a ag�ncia diz que parou de us�-lo em maio de 2021. Agora, h� uma sindic�ncia para investigar o caso.\n\n");
						printf ("Sobre os diretores que foram dispensados, a Abin informou que a �identidade funcional � protegida por lei�. A ag�ncia afirma que �a exonera��o e as dispensas contam a partir de 20 de outubro de 2023?, retroagindo � data da opera��o. \n\n");
						printf ("O que se sabe sobre o caso da espionagem ilegal da Abin de Bolsonaro investigado pela PF\n\n");
						printf ("A sede da Abin tamb�m foi vasculhada pela PF na opera��o. Na �poca em que o programa teria sido usado, a ag�ncia era comandada por Alexandre Ramagem (PL-RJ), ex-delegado da Pol�cia Federal escolhido por Jair Bolsonaro (PL) para a fun��o. Hoje, ele � deputado federal e emprega, no seu gabinete, uma empresa comandada por ex-membros do gabinete do �dio do vereador Carlos Bolsonaro (PL-RJ), de quem � amigo pessoal.\n\n");
						printf ("As investiga��es colocam o ex-diretor na mira das autoridades. Na sexta-feira, ele atribuiu a realiza��o da opera��o �� austeridade� do governo Bolsonaro. Contudo, ele n�o negou as a��es de espionagem.\n\n");
						printf ("O secret�rio de Planejamento e Gest�o da ABIN, Paulo Maur�cio Fortunato Pinto, foi exonerado do cargo e dois diretores da Ag�ncia foram dispensados de suas fun��es em Portarias publicadas na edi��o desta ter�a-feira � 24 de outubro � do Di�rio Oficial da Uni�o (DOU). A exonera��o e as dispensas contam a partir de 20 de outubro de 2023.\n\n");
						printf ("A identidade funcional dos servidores � protegida por lei, com exce��o do ocupante de cargo de secret�rio de Planejamento e Gest�o. N�o se trata de demiss�o. Eles deixaram os cargos atuais que ocupam.\n\n");
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
				printf("_____________________________________________________________________________\n");
				printf("|Matéria 1. Maiores pagadoras do Brasil, Petrobras e Vale reduzem dividendos|\n");
				printf("|Matéria 2. Gr�cia: do default seletivo ao grau de investimento             |\n");
				printf("|----------------------------------------------------------------------------|\n");
				printf("|Digite a matéria que deseja ver:                                           |\n");
				printf("|____________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Maiores pagadoras do Brasil, Petrobras e Vale reduzem dividendos\n\n");
						printf("A distribui��o de lucros da estatal caiu do pico de 76% no terceiro trimestre de 2022 para 53% no final do primeiro semestre de 2023 Foto: Paulo Whitaker/Reuters \n\n");
						printf ("Petrobras e Vale, as duas maiores pagadoras de dividendos do Brasil, v�m reduzindo o ritmo de distribui��o de lucros aos acionistas, mas por motivos bem diferentes. Juntas, as duas companhias representaram 57% do total de proventos pagos aos investidores no Pa�s em 2022 e 41% em 2021. Este ano, at� outubro, a participa��o caiu para 38%, mostra estudo da plataforma Meu Dividendo.\n\n");
						printf ("Enquanto na Vale a redu��o se deveu � perda de f�lego da economia da China, maior compradora de min�rio de ferro do mundo, que afetou os resultados financeiros da mineradora, na Petrobras, mudan�as pol�ticas pesaram, ressalta Wendell Finotti, fundador e CEO da Meu Dividendo.\n\n");
						printf ("E na petroleira o valor distribu�do aos acionistas pode cair ainda mais, caso uma assembleia que deve ocorrer em novembro aprove a cria��o de uma reserva de remunera��o de capital. Na pr�tica, a medida pode limitar o quanto do caixa � distribu�do como dividendos aos acionistas.\n\n");
						printf ("Para Finotti, a nova proposta da petroleira preocupa mais pela quest�o de governan�a, por conta da medida que abre as portas para indica��es pol�ticas na gest�o da petroleira, do que pela redu��o dos pagamentos de dividendos em si, estrat�gia que j� vem acontecendo na companhia. A Petrobras distribuiu 76% do lucro no ano passado, considerando dados do terceiro trimestre. Este ano, o porcentual caiu para 53% at� o final da primeira metade do ano.\n\n");
						printf ("Em um ano que come�ou com a revela��o do esc�ndalo cont�bil na Americanas logo na primeira semana e vem sendo marcado por incertezas diversas no Brasil e no exterior, as empresas de capital aberto em geral reduziram a distribui��o de dividendos. Nos 10 primeiros meses do ano ca�ram 31%, para R$ 176 bilh�es, segundo o estudo da Meu Dividendo.\n\n");
						printf ("Inicialmente se imaginava que a distribui��o de dividendos fosse ser a maior da hist�ria em 2023, mas na pr�tica n�o � o que vem acontecendo. Ap�s um janeiro com pagamentos recordes, as empresas foram m�s a m�s diminuindo a distribui��o. �O mercado de dividendos est� em transforma��o este ano�, afirma Finotti. �Em momentos de incerteza, as empresas preferem manter recursos em caixa. E estamos passando por v�rias turbul�ncias, econ�micas, pol�ticas, duas guerras em andamento, infla��o.�, ressalta o executivo.\n\n");
						printf ("Uma das estrat�gias das companhias para ter mais dinheiro em caixa � aumentar o prazo entre o an�ncio da distribui��o do provento e o efetivo recebimento do recurso pelo acionista, que tem se alongado este ano. �As empresas come�am a segurar o pagamento do dividendo por um per�odo maior�, comenta Finotti. Em outubro, a m�dia para pagamento foi de 117 dias, o prazo mais longo dos �ltimos seis anos, mostra levantamento do Meu Dividendo. No mesmo m�s de 2022, eram 58 dias, e de 2021, 49.\n\n");
						printf ("Na m�dia, este ano, o prazo para pagamento do dividendo est� em 67 dias, acima dos 55 de 2022 e dos 63 de 2021, ano ainda marcado pelas paralisa��es da pandemia e, consequentemente, pela maior incerteza.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Gr�cia: do default seletivo ao grau de investimento\n\n");
						printf ("Em 20 de outubro deste ano, a Gr�cia foi promovida, pela ag�ncia de rating S&P, � nota BBB-, a classifica��o m�nima para se ter o chamado 'grau de investimento', pelo qual a d�vida do pa�s deixa de ser considerada um investimento especulativo.\n\n");
						printf ("� uma recupera��o e tanto para um pa�s que passou por uma crise devastadora no in�cio da d�cada passada, que levou muitos a pensarem que seria a primeira economia a abandonar a zona do euro. Em fevereiro e em dezembro de 2012, o rating da Gr�cia junto � S&P chegou a cair � categoria de 'default seletivo', quase a pior poss�vel, que � de default generalizado (D).\n\n");
						printf ("O rating atual da Gr�cia junto a outra grande ag�ncia internacional de classifica��o de risco, a Moody's, � de Ba1, a um degrau apenas do grau de investimento.\n\n");
						printf ("Segundo Mariam Dayoub, economista s�nior da gestora Julius Baer Family Office (JBFO), os mercados se tornaram mais favor�veis � Gr�cia recentemente - e se anteviu a possibilidade de grau de investimento - depois que, em junho deste ano, o partido de centrodireita Nova Democracia, que est� no poder, obteve uma convincente vit�ria em elei��es parlamentares. A continuidade do processo de ajuste da Gr�cia desde a sua imensa crise ganhou um horizonte mais largo.\n\n");
						printf ("E que recupera��o foi esta! O d�ficit fiscal nominal saiu de um pico negativo de 15,2% do PIB em 2009 para valores positivos pouco abaixo de 1% de 2017 a 2019. Em 2020, com a pandemia, houve d�ficit de 9,7% do PIB, mas j� em 2022 havia sido reduzido para -2,4%. A d�vida p�blica ainda � alta, de 172,6% do PIB em 2022, mas abaixo do pico de 186,4% de 2016 (no ano excepcional da pandemia atingiu 207% do PIB).\n\n");
						printf ("Dayoub nota que a crise da Gr�cia, na esteira da grande crise financeira global de 2008-09, teve uma propor��o, em termos de perda de produto, compar�vel � Grande Depress�o dos Estados Unidos no in�cio da d�cada de 30 do s�culo passado. De 2009 a 2013, o PIB grego caiu 33%. A partir de 2017, o crescimento do PIB se firmou em n�vel positivo, ainda que modesto, at� a queda de 9% em 2020 com a pandemia, acompanhando quase todo o resto do mundo. A economia grega cresceu 8,4% e 5,9%, respectivamente, em 2021 e 2022; em 2023, segundo a proje��o do FMI, deve crescer 2,4%.\n\n");
						printf ("J� a taxa de desemprego, que chegou a 28,4% em julho de 2013, recuou para 11,3% em abril de 2023.\n\n");
						printf ("Dayoub chama a aten��o para um indicador particularmente expressivo. A rentabilidade dos t�tulos do governo grego de dez anos hoje, de 4,3%, est� bem abaixo dos treasuries de dez anos dos Estados Unidos, com 4,95%. E isso n�o � apenas por pertencer � zona do euro. O t�tulo de dez anos italiano, por exemplo, est� rendendo 4,91%, quase igual ao dos Estados Unidos, apesar de as taxas b�sicas do euro (4% a 4,75%) estarem abaixo dos Fed Funds (5,25%-5,50%), a taxa b�sica norte-americana.\n\n");
						printf ("Para reestruturar a sua d�vida mantendo-se na zona do euro, a Gr�cia teve que passar por um processo de ajuste dur�ssimo, incluindo dr�sticas redu��es de despesa p�blica e uma pesada agenda de reforma econ�micas. Esta foi uma postura que prevaleceu em rela��o � crise de pa�ses mais fr�geis da zona do euro (incluindo Espanha, Portugal, Irlanda e It�lia), capitaneada pela Alemanha, um pa�s que sempre privilegiou a austeridade e o rigor macroecon�mico.\n\n");
						printf ("Dayoub nota, que, para al�m do caso da Gr�cia, essa postura mais conservadora na zona do euro se reflete na evolu��o da d�vida p�blica da regi�o em compara��o com os Estados Unidos. Enquanto, na zona do euro, a rela��o entre a d�vida p�blica e o PIB subiu 27% entre 2008 e 2022 (de 66% para 91% do PIB), nos Estados Unidos a alta foi de 47%, de 62,7% para 119% do PIB.\n\n");
						printf ("Fernando Dantas � colunista do Broadcast e escreve �s ter�as, quartas e sextas-feiras (fojdantas@gmail.com)\n\n");
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

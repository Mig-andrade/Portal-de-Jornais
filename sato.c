#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdint.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void exibirMateria (char materia[]) {
	printf("Mat√©ria escolhida: %s\n", materia);
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
	strcpy(str, "Nome de usu√°rio: ");
	fputs(str, arquivo);
	fputs(usuario.nome, arquivo);
	fputs("\n", arquivo);
	printf("Digite seu email: ");
	scanf("%s", usuario.email);
	strcpy(str2, "Email do usu√°rio: ");
	fputs(str2, arquivo);
	fputs(usuario.email, arquivo);
		system("cls");
		
		do{
		system("cls");
		printf("___________________________________________________\n");
		printf("|Bem vindo a nossa cole√ß√£o de jornais.             |\n");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Israel tem 200 mil deslocados internos pela guerra com o Hamas, aponta gabinete de Netanyahu|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Israel tem 200 mil deslocados internos pela guerra com o Hamas, aponta gabinete de Netanyahus\n\n");
						printf("\tDe acordo com um porta-voz do gabinete do premier, citado pelo jornal Times of Israel, cerca de metade dos 200 mil deslocados foram instruÌdos a evacuar 105 comunidades perto das fronteiras de Gaza e do LÌbano, no sul e no norte, diante das ameaÁas de seguranÁa provocadas pelo Hamas e pelo Hezbollah.");
						printf ("Ainda de acordo com o mesmo porta-voz, a outra metade deixou ·reas prÛximas a fronteira por vontade prÛpria.\n\n");
						printf ("A Autoridade Nacional de Gest„o de EmergÍncias (Nema), vinculada ao MinistÈrio da Defesa, aponta que cerca de 120 mil israelenses est„o recebendo atendimento do Ûrg„o, apÛs serem ret\n\n");
						printf ("? Desde a independÍncia, em 1948, n„o havia um deslocamento da populaÁ„o dentro de Israel por questıes de seguranÁa como estamos observando agora, com cidades inteiras desalojadas, como Kiryat Shmona, perto da fronteira com o LÌbano, com mais de 20 mil habitantes ? afirmou o historiador israelense Meir Margalit, de 71 anos, em entrevista ao jornal El PaÌs.\n\n");
						printf ("De acordo com o historiador, contudo, o n˙mero n„o È compar·vel ao Íxodo provocado pelos bombardeios israelenses contra o enclave palestino.\n\n");
						printf (" N„o Segundo a ONU, o n˙mero de civis que teve que se deslocar internamente na Faixa de Gaza, desde o dia 7 de outubro, chegou em 1 milh„o. Mais de 500 mil deles ele procurou ref˙gio em instalaÁıes da ONU para os Refugiados Palestinos \n\n");
						
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("___________________________________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1. LibertaÁ„o de refÈns: veja o que se sabe sobre o acordo entre Israel e o grupo terrorista Hamas.              |\n");
				printf("|Mat√©ria 2. Bar ameaÁado de despejo consegue decis„o inÈdita e pode virar patrimÙnio cultural de SP; entenda              |\n");
				printf("|--------------------------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a matÈria que deseja ver:                                                                                          |\n"); 
				printf("|__________________________________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("LibertaÁ„o de refÈns: veja o que se sabe sobre o acordo entre Israel e o grupo terrorista Hamas.\n\n");
						printf("O governo de Israel aprovou na terÁa-feira, 21, o acordo mediado pelo Catar para uma trÈgua tempor·ria em Gaza, apÛs 45 dias de guerra com o grupo terrorista Hamas, que domina o enclave. Esta pausa de quatro dias È a primeira no conflito desde 7 de outubro, quando comunidades israelenses foram invadidas e cerca de 240 pessoas foram sequestradas por terroristas do Hamas.\n");
						printf ("O acordo ser· o primeiro respiro aos palestinos de Gaza, onde mais de 11 mil pessoas, a maioria mulheres e crianÁas, foram mortas, de acordo com autoridades. TambÈm pode representar um vislumbre de esperanÁa para famÌlias daqueles que foram sequestrados semanas atr·s.\n");
						printf ("O trato, mediado pelo Catar, pelos Estados Unidos e pelo Egito, foi anunciado enquanto os combates se intensificavam nos bairros centrais da cidade de Gaza. Ele encerra semanas de negociaÁıes indiretas intermitentes e prepara o terreno para um perÌodo tenso que poder· determinar o curso da guerra, que j· est· quase na sÈtima semana. \n");
						printf ("Israel, Hamas e Catar anunciaram diferentes detalhes do acordo, mas essas informaÁıes n„o parecem contradizer umas as outras. Veja o que se sabe atÈ agora. ");
						printf ("Catar anunciou na madrugada desta quarta-feira, 22, que o Hamas ir· soltar 50 refÈns em troca do que o grupo terrorista disse que seriam 150 palestinos presos detidos por Israel. Essas pessoas libertadas, em ambos os lados, seriam mulheres e menores de idade. \n");
						printf ("Os refÈns seriam soltos em etapas durante os quatro dias de cessar-fogo. Uma vez que a primeira leva for solta, espera-se que Israel liberte o primeiro grupo de palestinos presos. ");
						printf ("Os que est„o ‡ espera de libertaÁ„o incluem muitos adolescentes detidos durante uma onda de violÍncia na Cisjord‚nia em 2022 ou 2023 e acusados de crimes como lanÁamento de pedras ou perturbaÁ„o da ordem p˙blica, de acordo com uma lista de prisioneiros elegÌveis publicada pelo MinistÈrio da JustiÁa de Israel nesta quarta-feira. Israel detÈm atualmente cerca de 7 mil palestinos acusados ou condenados por crimes de seguranÁa. \n");
						printf ("Israel disse que a trÈgua seria prorrogada por um dia a cada 10 refÈns adicionais liberados. O Catar tambÈm disse que Israel ainda iria permitir mais combustÌvel e ajuda humanit·ria em Gaza, mas n„o forneceu mais detalhes. ");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Bar ameaÁado de despejo consegue decis„o inÈdita e pode virar patrimÙnio cultural de SP; entenda\n\n");
						printf("Em meio a uma aÁ„o de despejo, a mobilizaÁ„o pela preservaÁ„o do bar e casa de espet·culos ” do BorogodÛ obteve uma vitÛria significativa nesta semana. O Conselho Municipal de PreservaÁ„o do PatrimÙnio HistÛrico, Cultural e Ambiental da Cidade de S„o Paulo (Conpresp) aprovou a abertura de estudo para avaliar a possibilidade de reconhecer o tradicional espaÁo de samba da Vila Madalena, no distrito Pinheiros, como ·rea de proteÁ„o cultural.\n\n");
						printf ("Com a decis„o, uma demoliÁ„o, reforma, ampliaÁ„o ou outra alteraÁ„o no imÛvel onde o bar est· localizado dever· ser analisada e deliberada pelo conselho. Essa obrigaÁ„o tambÈm inclui uma eventual pausa nas atividades artÌsticas do espaÁo. O bar È alvo de aÁ„o de despejo pelos propriet·rios do imÛvel, mas se recusa a deixar o endereÁo mesmo apÛs uma notificaÁ„o extrajudicial, em maio.\n \n");
						printf ("O reconhecimento provisÛrio permanecer· durante um estudo mais aprofundado sobre o eventual enquadramento definitivo como Zona Especial de ProteÁ„o Ambiental - ¡rea de ProteÁ„o Cultural (Zepec-APC), o que pode levar de meses atÈ alguns anos. A decis„o È inÈdita para um bar. Esse È o mesmo tipo de proteÁ„o tempor·ria determinada neste ano para o Santa Marina AtlÈtico Clube, na zona oeste, e o EspaÁo Ita˙ de Cinema da Rua Augusta, na regi„o central.\n \n");
						printf ("Hoje, h· uma Zepec-APC definitiva na cidade: o Cine Belas Artes. A decis„o È de 2016, um ano apÛs uma lei municipal regulamentar essa classificaÁ„o, prevista no Plano Diretor de 2014.\n\n");
						printf ("Esse tipo de reconhecimento n„o È uma desapropriaÁ„o, tanto que o imÛvel reconhecido pode seguir de propriedade privada. TambÈm n„o È um tombamento, porque n„o envolve aspectos materiais (como a arquitetura em si). Embora exija avaliaÁ„o prÈvia pelo conselho, n„o proÌbe necessariamente uma obra ou demoliÁ„o, desde que autorizada e que mantenha aquele tipo de atividade cultural.\n\n");
						printf ("Na pr·tica, a determinaÁ„o dificulta a possibilidade do imÛvel ser vendido para a construÁ„o de um prÈdio no endereÁo, na Rua Hor·cio Lane, 21, na esquina com a Rua Cardeal Arcoverde. SituaÁ„o semelhante tambÈm desencadeou uma mobilizaÁ„o do Bar Balc„o, nos Jardins, mas o espaÁo recentemente anunciou que uma incorporadora desistiu de um projeto de edifÌcio para o local.\n\n	");
						printf ("A abertura de estudo no Conpresp foi celebrada pelos frequentadores e propriet·rios do bar, que atua no local h· 22 anos e È um dos principais pontos de encontro do samba e choro na zona oeste. ìMais um passo. Precisamos de todos nessa luta pela permanÍncia! O ” faz a cidade mais bonita!î, publicaram nas redes sociais.\n\n");
						printf ("A campanha ìFica ”î obteve 2,9 mil signat·rios em abaixo-assinado virtual. AlÈm disso, a Comiss„o de PatrimÙnio Cultural do Conselho de Arquitetura e Urbanismo de S„o Paulo (CAU/SP) tambÈm manifestou apoio.\n\n");
						printf ("Em reportagem do Estad„o de 2021, sobre transformaÁıes no bairro, os sÛcios do ” do BorogodÛ j· comentavam sobre considerar o espaÁo como de ìresistÍnciaî em meio ‡ valorizaÁ„o da Vila Madalena. ìO ë”í È uma espelunca, feito de outras matÈrias. A gente tinha aluguel barato (no inÌcio). Na medida em que a Vila foi crescendo, sofre com o aumento de aluguelî, falaram ‡ Època.\n\n");
						printf ("O boom da verticalizaÁ„o em Pinheiros tem motivado crÌticas de parte dos moradores, que conseguiram o tombamento provisÛrio de mais de 600 construÁıes. A decis„o È tempor·ria e n„o foi bem recebida por todos os propriet·rios. O Estad„o desenvolveu um mapa interativo com os endereÁos.\n\n");
						printf ("No Conpresp, a decis„o destacou que o espaÁo atende a ìrequisitos mÌnimos para enquadramento como Zepec-APCî e que as atividadesìconfluem com outras aÁıes de reconhecimento, proteÁ„o e apoio da express„o musical popular paulistana ñ como o samba e o samba-rockî. O pedido de an·lise foi protocolado em car·ter de urgÍncia pelo Instituto Casa da Cidade, tambÈm da Vila Madalena.\n\n");
						printf ("O ” do BorogodÛ chegou a propor a compra ‡ vista da parte que ocupa do imÛvel, assim como a compra total (com o restante do valor parcelado em 100 prestaÁıes). N„o obteve, porÈm, retorno positivo dos propriet·rios.\n\n");
						printf ("Na aÁ„o de despejo, os donos do imÛvel afirmam ter feito tentativas de acordos entre as partes a respeito da venda do espaÁo. TambÈm destacam que os locat·rios tinham ciÍncia de que o contrato est· com prazo indeterminado desde julho de 2022. ìN„o obstante, apÛs o recebimento da notificaÁ„o a requerida quedou-se inerte, demonstrando recusa em desocupar o imÛvel dentro do prazo pretendido (25 de junho de 2023)î.\n\n");
						printf ("A proteÁ„o do bar tambÈm obteve posicionamento favor·vel da Comiss„o TÈcnica de An·lise (CTA) da Zona Especial de PreservaÁ„o Cultural ñ ¡rea de ProteÁ„o Cultural (ZEPEC-APC), da Prefeitura, em outubro. O entendimento foi remetido ao Conpresp e embasou a decis„o do conselho.\n\n");
						printf ("Na deliberaÁ„o, o comitÍ destaca que ìquando uma atividade cultural se exerce h· anos em um mesmo lugar, tornando-se parte do bairro, n„o È possÌvel mover a atividade cultural de maneira forÁada para outro local sem que haja significativa perda simbÛlicaî.\n\n");
						printf ("A comiss„o tambÈm lembrou da ìintensa disputa imobili·riaî que tem transformado a paisagem de Pinheiros nos ˙ltimos anos, citando espaÁos culturais fechados no distrito nos anos 2000, como o EspaÁo Cultural Rio Verde, o Canto Madalena, o EspaÁo ZÈ Presidente e o Puxadinho da PraÁa, dentre outros. ìConsiderando que a Zepec-APC tem o papel tambÈm de preservaÁ„o de memÛria dos bairros, È interessante sua aplicaÁ„o neste caso raro de espaÁo remanescenteî, diz.\n\n");
						printf ("ìPercebe-se, pelos relatos, que o lugar n„o È apenas um estabelecimento comercial que tem m˙sica como sua principal atraÁ„o ñ o que poderia enfraquecer a abertura do processo de enquadramento como Zepec-APC ñ, mas um lugar que congrega pessoas (...). Se um espaÁo de m˙sica se torna ponto de encontro entre m˙sicos, que podem ali criar juntos, testar composiÁıes, ensaiar de forma aberta ao p˙blico e conectar com ele, ver sua reaÁ„o, experimentar novas formas de fazer m˙sica, etc, esse espaÁo est· n„o apenas tendo a m˙sica como uma ëatraÁ„oí, mas est· participando ativamente na produÁ„o de m˙sica na cidade. Sendo assim, È inegavelmente um espaÁo de cultura. (...)î, salientou.\n\n");
						printf ("A Zepec-APC È prevista no Plano Diretor desde 2014, o qual define que a ìproteÁ„o È necess·ria ‡ manutenÁ„o da identidade e memÛria do MunicÌpio e de seus habitantes, para a dinamizaÁ„o da vida cultural, social, urbana, turÌstica e econÙmica da cidadeî.\n\n");
						printf ("Esse tipo de proteÁ„o foi regulamentada por lei municipal de 2015. PrevÍ que o enquadramento contemple ìlocais destinados ‡ formaÁ„o, produÁ„o e exibiÁ„o p˙blica de conte˙dos culturais e artÌsticosî e ìespaÁos com significado afetivo, simbÛlico e religioso para a comunidade, por meio de atividades ali exercidasî.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Itamaraty confirma que brasileiro de 59 anos est· desaparecido em Israel|\n");
				printf("|Mat√©ria 2. Jogos Pan-Americanos: Acostumados ‡ ëcarreira soloí, skatistas vivem nova realidade no mundo olÌmpico |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Itamaraty confirma que brasileiro de 59 anos est· desaparecido em Israel\n\n");
						printf("\tA Interpol comunicou ao Itamaraty, no domingo, o desaparecimento do brasileiro Michel Nisenbaum, de 59 anos. A informaÁ„o foi confirmada ao GLOBO pelo Ûrg„o. Ainda n„o h· detalhes sobre a data do ˙ltimo contato, tampouco o local em que ele estava em Israel quando o grupo terrorista Hamas iniciou o ataque, no ˙ltimo dia 7.\n\n");
						printf ("De acordo com o Itamaraty, Nisenbaum tem dupla cidadania e È o ˙nico brasileiro que o governo trata como desaparecido no momento. AtÈ agora, as mortes de trÍs brasileiros foram confirmadas: Ranani Glazer, Bruna Valeanu e Karla Stelzer, todos no ataque do Hamas. TrÍs israelenses com ascendÍncia brasileira tambÈm foram mortos: Gabriel Yishay Barel, Celeste Fishbein e um terceiro sem identificaÁ„o.\n\n");
						printf ("Nesta segunda-feira, o oitavo voo de repatriaÁ„o de brasileiros situados em Israel pousou no Rio de Janeiro com 209 passageiros e nove animais de estimaÁ„o. Com isso, a OperaÁ„o Voltando em Paz j· resgatou, desde o dia 10 de outubro, 1.410 brasileiros e 53 pets que estavam no paÌs israelense, alÈm de trÍs cidad„s bolivianas.\n\n");
						printf ("AlÈm deles, um grupo com pouco menos de 30 brasileiros ainda aguarda evacuaÁ„o no sul da Faixa de Gaza, perto da fronteira com o Egito.\n\n");
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
						exibirMateria("Jogos Pan-Americanos: Acostumados ‡ ëcarreira soloí, skatistas vivem nova realidade no mundo olÌmpico\n\n");
						printf("O skate, que estreou como modalidade olÌmpica em TÛquio-2020, ainda se adapta ‡ realidade dos esportes abraÁados pelo ComitÍ OlÌmpico Internacional (COI). Diferentemente dos torneios mundo afora, em que os atletas competem de forma individual, nos olÌmpicos eles representam um paÌs, fazem parte de uma delegaÁ„o, usam uniforme e precisam se adaptar ‡s regras para o conjunto. E os Jogos Pan-Americanos de Santiago, que n„o contaram pontos para Paris, foram o ˙ltimo evento nesse formato ìtimeî antes dos Jogos de 2024 na capital francesa. \n\n");
						printf ("ó No Pan, os atletas se vestem com uniforme do Brasil, n„o com a roupa que gostam de usar nas competiÁıes do circuito. … quando eles sentem que representam de fato um paÌs. Pensando em Paris, isso È importante, coloc·-los de novo no clima de uma competiÁ„o diferente. Para o skate, ainda È uma novidade ó diz Eduardo Musa, presidente da ConfederaÁ„o Brasileira da modalidade (CBSK). ó J· existe uma mudanÁa de TÛquio para c·, mas ainda È preciso mais competiÁıes. O skate ainda n„o se sente uma modalidade olÌmpica.\n\n");
						printf ("Para Musa, atÈ o uso do uniforme do Time Brasil, obrigatÛrio para todos os membros da delegaÁ„o, faz diferenÁa. Ele conta que, desde TÛquio, quando isso acontece, ìparece que os atletas viram uma chaveî.\n\n");
						printf ("ó O Pan foi importante para reforÁar o clima dos Jogos, o clima de ser Brasil. E tambÈm por eles terem de se adaptar aos hor·rios da organizaÁ„o, a andar de Ùnibus, dividir quarto com outro atleta. Esse clima È muito diferente para os skatistas ó opina. ó Eles representam marcas, fazem agendas... Tudo gira em torno do atleta individualmente. O Pan faz com que ele entenda: ìN„o sou eu, È o Brasilî.\n\n");
						printf ("Em TÛquio, o skate conquistou trÍs medalhas de prata (Kelvin Hoefler e Rayssa Leal no street e Pedro Barros no park) e foi o esporte com mais pÛdios para o Brasil, ao lado do boxe e da nataÁ„o.\n\n");
						printf ("Desde ent„o, a modalidade soma medalhas em todos os eventos da cena olÌmpica disputados. Nos Pan de Santiago, encerrado ontem para o skate, n„o foi diferente, com cinco pÛdios, mais que qualquer outro paÌs.\n\n");
						printf ("No street feminino, disputado no s·bado, Rayssa Leal, prata em TÛquio, conquistou o ouro. Ela sobrou na pista. P‚mela Rosa, que n„o foi ‡s finais no Jap„o por les„o, ficou com a prata. No masculino, o Brasil obteve ouro com Lucas Rabelo.\n\n");
						printf ("Na modalidade park, domingo, Raicca Ventura garantiu a medalha de prata na ˙ltima volta. No masculino, Augusto Akio subiu ao pÛdio na mesma posiÁ„o.\n\n");
						printf ("O skate vive seu segundo ciclo olÌmpico, mas faz sua estreia em Pan-Americanos nesta ediÁ„o, depois de ficar fora em Lima-2019.\n\n");
						printf ("ó Penso nisso desde que cheguei, que o Pan È grandioso, e este È o primeiro da HistÛria. Estar num torneio assim me colocou dentro da Vila dos Atletas, algo diferente, com todo mundo, trocando pins, conhecendo gente de outros esportes ó comemorou Raicca, que estava nervosa na disputa.\n\n");
						printf ("No caso de Rayssa, Santiago-2023 foi a primeira competiÁ„o no modelo olÌmpico desde TÛquio-2020. Ela tem dez patrocinadores pessoais, e, eventualmente, pode ìser timeî de alguma marca em torneios especÌficos. Como Brasil, sÛ mesmo em competiÁıes como o Pan:\n\n");
						printf ("ó A grande diferenÁa de um evento olÌmpico È que me divirto mais, porque toda a seleÁ„o brasileira est· aqui. Estou me acostumando a esse estilo de competiÁ„o, apesar de ter ficado seis dias sem minha m„e na Vila ó conta Rayssa, de 15 anos, que costuma viajar e ficar ao lado da m„e e coach durante os torneios. No Chile, ela dividiu quarto com P‚mela. ó Fizemos tudo juntas, menos ir ao banheiro (risos).\n\n");
						printf ("Para Rayssa, a medalha no Pan trouxe mais confianÁa rumo ‡ OlimpÌada de Paris, mesmo que ela prefira n„o pensar ìt„o longe assimî:\n\n");
						printf ("ó … sim um treinamento para Paris, o mesmo formato, a mesma vibe. Foi muito bom para pegar confianÁa.\n\n");
						printf ("A classificaÁ„o olÌmpica se dar· via ranking mundial. Desde o ciclo de TÛquio, a CBSK tem seleÁıes permanentes. A entidade proporciona aos atletas treinamento e condiÁıes de disputa de torneios como parte do Time Brasil e com foco na pontuaÁ„o olÌmpica. Em janeiro, os 44 primeiros de cada modalidade e naipe avanÁam ‡ segunda fase de classificaÁ„o. O Brasil deve levar trÍs atletas por grupo a Paris-2024.\n\n");
						printf ("Recuperado de grave contus„o no joelho e na briga pela vaga olÌmpica, Lucas Rabelo comemorou o ouro no street em Santiago. Ele j· havia sido campe„o pan-americano j˙nior em Cali, em 2021, e por isso integrou o Time Brasil no Chile. Mas agora esteve pela primeira vez em um torneio do tipo na categoria adulta.\n\n");
						printf ("Lucas conta que ìfoi um choqueî olhar para o lado e ver atletas de modalidades diferentes. Teve a sensaÁ„o de pertencimento e vontade de ìfazer acontecerî:\n\n");
						printf ("ó A partir do momento em que o skate entrou nos Jogos, virou um sonho para mim. A gente representa de onde veio, e levo isso como motivaÁ„o. Sou o Lucas, natural de Fortaleza, do bairro Pirambu, e estou aqui hoje.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("_________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1. Morre Bobi, o cachorro mais velho do mundo, aos 31 anos                            |\n");
				printf("|Mat√©ria 2. Festival Sabores de Juazeiro: Confira programaÁ„o do evento que celebra o Nordeste |\n");
				printf("|-----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                              |\n");
				printf("|_______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Morre Bobi, o cachorro mais velho do mundo, aos 31 anos\n\n");
						printf("Morreu no ˙ltimo s·bado, 21 de outubro, Bobi, cachorro considerado como o mais velho do mundo pelo Guinness World Records, o Livro dos Recordes. Ele havia celebrado 31 anos em maio com uma festa para mais de 100 pessoas na pequena vila de Portugal onde vivia.\n\n");
						printf ("Bobi È um rafeiro alentejano, raÁa tradicional portuguesa cuja expectativa de vida È entre 12 e 14 anos. A notÌcia da morte foi compartilhada pela veterin·ria Karen Becker no Facebook e divulgado pelo Guinness nesta segunda, 23.\n\n");
						printf ("Cachorro mais velho do mundo completa 31 anos, segundo o ëGuinness World Recordsí\n\n");
						printf ("Cachorro mais velho do mundo completa 31 anos, segundo o ëGuinness World Recordsí\n\n");
						printf ("ìNa noite passada, esse doce menino ganhou asas. Apesar de ter vivido mais que todos os c„es da histÛria, seus 11.478 dias na Terra nunca seriam suficientes para aqueles que o amavamî, escreveu Karen.\n\n");
						printf ("ìQuando perguntamos a Leonel [Costa, tutor de Bobi] qual era a receita para a vida excepcionalmente longa de Bobi, sua resposta foi r·pida: ëBoa nutriÁ„o, contato constante com a natureza, liberdade para descobrir seu ambiente, cuidados veterin·rios consistentes e amorí. Bobi sabe que È profundamente amadoíî, completou\n\n");
						printf ("O c„o foi reconhecido como mais velho do mundo em fevereiro de 2023. Ele nasceu em 1992 e teve a idade verificada pelo SIAC, um banco de dados de animais de estimaÁ„o autorizado pelo governo portuguÍs e administrado pelo SNMV (Sindicato Nacional dos MÈdicos Veterin·rios).\n\n");
						printf ("Quando Bobi foi anunciado como recordista, o tutor dele revelou que o cachorro sobreviveu apÛs ter sido enterrado junto com outros filhotes. O pai de Leonel decidiu sacrific·-los por n„o ter muito dinheiro e espaÁo em casa para sustentar os c„es- uma pr·tica que, segundo ele, era comum na Època. Bobi foi o ˙nico que conseguiu se salvar.\n\n");
						printf ("Leonel disse que acreditava que o c„o conseguiu viver por tanto tempo por estar em um ìambiente calmo e tranquiloî, vivendo ìlonge das cidadesî. Nos seus ˙ltimos anos de vida, Bobi enfrentou dificuldades de andar e problemas de vis„o, mas continuava sendo um animal soci·vel, segundo o tutor.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Festival Sabores de Juazeiro: Confira programaÁ„o do evento que celebra o Nordeste\n\n");
						printf("Os festivais gastronÙmicos que ocorrer„o em outubro e novembro no Nordeste s„o uma ode aos sabores, cores, temperos e aromas da cozinha baiana tradicional. Uma jornada pelo universo culin·rio marcante e diversificado, que destaca a qualidade e valoriza os produtos locais.\n\n");
						printf ("Por isso, segundo o Portal In, a 3™ ediÁ„o do Festival Sabores de Juazeiro, de 23 de outubro a 12 de novembro, visa incentivar o consumo de produtos locais e explorar o potencial da fruticultura e do Rio S„o Francisco. Promovido pelo Sebrae e Artfully, em colaboraÁ„o com a Prefeitura Municipal de Juazeiro, o evento, sob o tema ìDe Juazeiro para o Mundoî, reunir· 59 empresas. Os menus apresentados reforÁar„o os laÁos gastronÙmicos, talentos e identidade local, refletidos na culin·ria juazeirense.\n\n");
						printf ("Os participantes competir„o em cinco categorias - Prato Principal, Petisco, Lanche, Sobremesa e Drink - em ambientes internos (nos estabelecimentos participantes) e externos (na Mostra Cultural Pop-up ìNossa Raiz, Tocando Horizontesî). A ediÁ„o de 2023 traz inovaÁıes, como oficinas preparatÛrias ministradas por especialistas em gastronomia. Destacam-se tambÈm eventos culturais que incluem m˙sica ao vivo, apresentaÁıes audiovisuais, elementos culturais e folclÛricos, destacando figuras histÛricas de Juazeiro e da regi„o.\n\n");
						printf ("A programaÁ„o do festival incluir· uma Cozinha Show com chef convidado, uma performance musical homenageando a Bossa Nova e uma exposiÁ„o fotogr·fica e audiovisual apresentando os pratos, ingredientes inspiradores e mÈtodos de preparaÁ„o.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o              |\n");
			printf("|3. Folha de S√£o Paulo   |\n");
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
				printf("|Mat√©ria 1. Van Gogh em realidade virtual no Brasil pela primeira vez                                             |\n");
				printf("|Mat√©ria 2. Jogos decisivos na Data Fifa escancaram que, mesmo melhorado, calend·rio segue problem·tico no Brasil |\n");
				printf("|------------------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                                 |\n");
				printf("|__________________________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Van Gogh em realidade virtual no Brasil pela primeira vez\n\n");
						printf("\tTrÍs quadros de Van Gogh estar„o ‡ mostra no Brasil em realidade virtual pela primeira vez. S„o as obras 'O Quarto em Arles', 'TerraÁo do CafÈ ‡ Noite' e 'Noite estrelada'. A ideia È que adultos e crianÁas possam explorar os detalhes do trabalho do artista holandÍs.");
						printf ("As pinturas estar„o expostas na ediÁ„o 2023 do Festival de Cultura Digital, Hacktudo, que comeÁa no prÛximo dia 26 na Cidade das Artes, no Rio. A iniciativa È idealizada pelo curador e diretor Miguel Colker.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Jogos decisivos na Data Fifa escancaram que, mesmo melhorado, calend·rio segue problem·tico no Brasil\n\n");
						printf("Nesta temporada, a CBF tentou buscar uma soluÁ„o para livrar os clubes de compromissos durante a Data Fifa. No entanto, o calend·rio ainda apresenta apertos, datas coincidentes com a reta final da Libertadores e da Sul-Americana ó assim como espaÁo grande para os Estaduais ó, e pouca margem para manobras, como acontece agora. \n\n");
						printf ("A reta final do Brasileir„o virou o momento que menos apresenta flexibilidade, e justamente onde esta ìbolha estourouî. Mais de um terÁo da competiÁ„o È disputada nos dois meses finais, sendo que o campeonato dura oito.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("_____________________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.Lula sanciona compensaÁ„o a Estados por perdas com ICMS e veta trecho que cria obrigaÁ„o ‡ Uni„o|\n");
				printf("|Mat√©ria 2. Governo Lula exonera n˙mero 3 da Abin e mais dois diretores, alvos da PF por espionagem ilegal |                        |\n");
				printf("|-----------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                          |\n");
				printf("|__________________________________________________________________________________________________________s_|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Lula sanciona compensaÁ„o a Estados por perdas com ICMS e veta trecho que cria obrigaÁ„o ‡ Uni„o\n\n");
						printf("BRASÕLIA - O presidente Luiz In·cio Lula da Silva sancionou, nesta terÁa-feira, 24, o Projeto de Lei Complementar (PLP) 136, que trata do acordo feito pelo governo federal com os Estados para compensar perdas com a arrecadaÁ„o do ICMS no ano passado. Ele barrou trecho que criaria nova obrigaÁ„o para a Uni„o. A sanÁ„o foi publicada em ediÁ„o extra do Di·rio Oficial da Uni„o (DOU). \n\n");
						printf ("O dispositivo prevÍ uma compensaÁ„o de R$ 27 bilhıes da Uni„o para os Estados e o Distrito Federal por conta da mudanÁa do ICMS sobre combustÌveis e reduz gastos com o piso da Sa˙de este ano.\n\n");
						printf ("O projeto prevÍ uma antecipaÁ„o de R$ 10 bilhıes dos recursos a Estados e municÌpios decorrentes da compensaÁ„o das perdas com a arrecadaÁ„o do ICMS no ano passado, seja por repasses diretos do Tesouro ou abatimento de dÌvidas. O valor seria pago em 2024.\n\n");
						printf ("O texto tambÈm determina que a Uni„o faÁa um repasse extra de R$ 2,3 bilhıes ao Fundo de ParticipaÁ„o dos MunicÌpios (FPM) e outro de R$ 1,6 bilh„o para o Fundo de ParticipaÁ„o dos Estados (FPE).\n\n");
						printf ("O trecho vetado obrigaria a Uni„o a compensar municÌpios caso Estados n„o fizessem os repasses devidos relativos ‡ nova receita ou enviassem recursos dessa fonte para o Fundo de ManutenÁ„o e Desenvolvimento da EducaÁ„o B·sica (Fundeb) e serviÁos de sa˙de.\n\n");
						printf ("O projeto era uma das prioridades do Congresso. Deputados e senadores vinham sendo pressionados por governadores e prefeitos que reclamavam da falta de recursos para governar.\n\n");
						printf ("ìVamos assegurar que nenhum municÌpio perder· nada de arrecadaÁ„o em relaÁ„o a 2022. Isso significa que vamos garantir aos municÌpios a mesma quantidade de dinheiroî, disse Lula, em vÌdeo publicado no X, antigo Twitter. ìAos Estados, vamos garantir a recomposiÁ„o das perdas de arrecadaÁ„o dos meses de julho e agosto de 2023?, acrescentou.\n\n");
						printf ("A sanÁ„o, conforme classificou o presidente, ìdemonstra compromisso do governo federal em continuar promovendo crescimento da economia, equilibrar a distribuiÁ„o de recursos e aliviar as dificuldades fiscais dos municÌpios e Estadosî.\n\n");
						printf ("O projeto foi aprovado no Senado no inÌcio de outubro e n„o teve nenhuma alteraÁ„o em relaÁ„o ao aprovado na C‚mara dos Deputados.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Governo Lula exonera n˙mero 3 da Abin e mais dois diretores, alvos da PF por espionagem ilegal\n\n");
						printf("O governo federal exonerou nesta terÁa-feira, 24, Paulo Mauricio Fortunato Pinto, do cargo de secret·rio de Planejamento e Gest„o da AgÍncia Brasileira de InteligÍncia (Abin). AlÈm dele, mais dois diretores do Ûrg„o foram dispensados da funÁ„o. Na ˙ltima sexta-feira, 20, a PolÌcia Federal (PF) apreendeu US$ 171,8 mil em espÈcie na casa do ent„o secret·rio. \n\n");
						printf ("Na OperaÁ„o ⁄ltima Milha, PF encontrou 171,8 mil dÛlares na casa do secret·rio demitido nesta terÁa, 24 Foto: PolÌcia Federal\n\n");
						printf ("Estados contrataram empresa que ofereceu para Abin programa de espionagem investigado pela PF \n\n");
						printf ("Na sexta, a Abin foi alvo da OperaÁ„o ⁄ltima Milha, da PolÌcia Federal, que prendeu dois servidores, Eduardo Arthur Izycki e Rodrigo Colli, suspeitos de fazerem uso de um software para espionar ilegalmente polÌticos, advogados, jornalistas e ministros do Supremo Tribunal Federal (STF). Os dois foram demitidos no dia da operaÁ„o. A Abin divulgou que concluiu um processo administrativo que confirmou a participaÁ„o dos dois como representantes de uma empresa em uma licitaÁ„o do ExÈrcito, o que È vedado para servidores p˙blicos.\n\n");
						printf ("AlÈm disso, a corporaÁ„o cumpriu 25 mandatos de busca e apreens„o. Fortunato foi um dos alvos desses mandados e foi afastado do cargo por ordem do ministro Alexandre de Moraes na sexta. Ele tem extensa carreira na agÍncia. Foi coordenador operacional do Centro de InteligÍncia da Abin em eventos como a Copa do Mundo no Brasil, em 2016; a Jornada Mundial da Juventude, em 2013, quando o Papa veio ao Brasil; e as OlimpÌadas de 2016.\n\n");
						printf ("Fortunato tambÈm foi conselheiro do Conselho de Controle de Atividades Financeiras (Coaf). Fora do cargo de secret·rio, ele volta a ser oficial aposentado da Abin e deve ficar ‡ disposiÁ„o do Ûrg„o quando terminar o afastamento determinado pelo STF.\n\n");
						printf ("A PF apura o uso indevido por servidores do programa FirstMile, desenvolvido pela empresa israelense Cognyte (ex-Verint), para espionar autoridades por meio de geolocalizaÁ„o de celulares. Na lista de monitorados, h· um homÙnimo de Alexandre de Moraes, o que reforÁa a suspeita de que o magistrado foi uma das vÌtimas.\n\n");
						printf ("De acordo com as investigaÁıes, o software foi usado para 33 mil monitoramentos. Ele rastreia os sinais de 2G, 3G e 4G trocados entre aparelhos celulares e torres de monitoramento, mostrando a localizaÁ„o de determinado celular. O FirstMile precisa apenas do n˙mero do telefone para fazer esse rastreamento.\n\n");
						printf ("A Abin diz que finalizou, em marÁo, uma correiÁ„o extraordin·ria para apurar o uso do software. Ele foi comprado em dezembro de 2018 e a agÍncia diz que parou de us·-lo em maio de 2021. Agora, h· uma sindic‚ncia para investigar o caso.\n\n");
						printf ("Sobre os diretores que foram dispensados, a Abin informou que a ìidentidade funcional È protegida por leiî. A agÍncia afirma que ìa exoneraÁ„o e as dispensas contam a partir de 20 de outubro de 2023?, retroagindo ‡ data da operaÁ„o. \n\n");
						printf ("O que se sabe sobre o caso da espionagem ilegal da Abin de Bolsonaro investigado pela PF\n\n");
						printf ("A sede da Abin tambÈm foi vasculhada pela PF na operaÁ„o. Na Època em que o programa teria sido usado, a agÍncia era comandada por Alexandre Ramagem (PL-RJ), ex-delegado da PolÌcia Federal escolhido por Jair Bolsonaro (PL) para a funÁ„o. Hoje, ele È deputado federal e emprega, no seu gabinete, uma empresa comandada por ex-membros do gabinete do Ûdio do vereador Carlos Bolsonaro (PL-RJ), de quem È amigo pessoal.\n\n");
						printf ("As investigaÁıes colocam o ex-diretor na mira das autoridades. Na sexta-feira, ele atribuiu a realizaÁ„o da operaÁ„o ì‡ austeridadeî do governo Bolsonaro. Contudo, ele n„o negou as aÁıes de espionagem.\n\n");
						printf ("O secret·rio de Planejamento e Gest„o da ABIN, Paulo MaurÌcio Fortunato Pinto, foi exonerado do cargo e dois diretores da AgÍncia foram dispensados de suas funÁıes em Portarias publicadas na ediÁ„o desta terÁa-feira ñ 24 de outubro ñ do Di·rio Oficial da Uni„o (DOU). A exoneraÁ„o e as dispensas contam a partir de 20 de outubro de 2023.\n\n");
						printf ("A identidade funcional dos servidores È protegida por lei, com exceÁ„o do ocupante de cargo de secret·rio de Planejamento e Gest„o. N„o se trata de demiss„o. Eles deixaram os cargos atuais que ocupam.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("_____________________________________________________________________________\n");
				printf("|Mat√©ria 1. Maiores pagadoras do Brasil, Petrobras e Vale reduzem dividendos|\n");
				printf("|Mat√©ria 2. GrÈcia: do default seletivo ao grau de investimento             |\n");
				printf("|----------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                           |\n");
				printf("|____________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Maiores pagadoras do Brasil, Petrobras e Vale reduzem dividendos\n\n");
						printf("A distribuiÁ„o de lucros da estatal caiu do pico de 76% no terceiro trimestre de 2022 para 53% no final do primeiro semestre de 2023 Foto: Paulo Whitaker/Reuters \n\n");
						printf ("Petrobras e Vale, as duas maiores pagadoras de dividendos do Brasil, vÍm reduzindo o ritmo de distribuiÁ„o de lucros aos acionistas, mas por motivos bem diferentes. Juntas, as duas companhias representaram 57% do total de proventos pagos aos investidores no PaÌs em 2022 e 41% em 2021. Este ano, atÈ outubro, a participaÁ„o caiu para 38%, mostra estudo da plataforma Meu Dividendo.\n\n");
						printf ("Enquanto na Vale a reduÁ„o se deveu ‡ perda de fÙlego da economia da China, maior compradora de minÈrio de ferro do mundo, que afetou os resultados financeiros da mineradora, na Petrobras, mudanÁas polÌticas pesaram, ressalta Wendell Finotti, fundador e CEO da Meu Dividendo.\n\n");
						printf ("E na petroleira o valor distribuÌdo aos acionistas pode cair ainda mais, caso uma assembleia que deve ocorrer em novembro aprove a criaÁ„o de uma reserva de remuneraÁ„o de capital. Na pr·tica, a medida pode limitar o quanto do caixa È distribuÌdo como dividendos aos acionistas.\n\n");
						printf ("Para Finotti, a nova proposta da petroleira preocupa mais pela quest„o de governanÁa, por conta da medida que abre as portas para indicaÁıes polÌticas na gest„o da petroleira, do que pela reduÁ„o dos pagamentos de dividendos em si, estratÈgia que j· vem acontecendo na companhia. A Petrobras distribuiu 76% do lucro no ano passado, considerando dados do terceiro trimestre. Este ano, o porcentual caiu para 53% atÈ o final da primeira metade do ano.\n\n");
						printf ("Em um ano que comeÁou com a revelaÁ„o do esc‚ndalo cont·bil na Americanas logo na primeira semana e vem sendo marcado por incertezas diversas no Brasil e no exterior, as empresas de capital aberto em geral reduziram a distribuiÁ„o de dividendos. Nos 10 primeiros meses do ano caÌram 31%, para R$ 176 bilhıes, segundo o estudo da Meu Dividendo.\n\n");
						printf ("Inicialmente se imaginava que a distribuiÁ„o de dividendos fosse ser a maior da histÛria em 2023, mas na pr·tica n„o È o que vem acontecendo. ApÛs um janeiro com pagamentos recordes, as empresas foram mÍs a mÍs diminuindo a distribuiÁ„o. ìO mercado de dividendos est· em transformaÁ„o este anoî, afirma Finotti. ìEm momentos de incerteza, as empresas preferem manter recursos em caixa. E estamos passando por v·rias turbulÍncias, econÙmicas, polÌticas, duas guerras em andamento, inflaÁ„o.î, ressalta o executivo.\n\n");
						printf ("Uma das estratÈgias das companhias para ter mais dinheiro em caixa È aumentar o prazo entre o an˙ncio da distribuiÁ„o do provento e o efetivo recebimento do recurso pelo acionista, que tem se alongado este ano. ìAs empresas comeÁam a segurar o pagamento do dividendo por um perÌodo maiorî, comenta Finotti. Em outubro, a mÈdia para pagamento foi de 117 dias, o prazo mais longo dos ˙ltimos seis anos, mostra levantamento do Meu Dividendo. No mesmo mÍs de 2022, eram 58 dias, e de 2021, 49.\n\n");
						printf ("Na mÈdia, este ano, o prazo para pagamento do dividendo est· em 67 dias, acima dos 55 de 2022 e dos 63 de 2021, ano ainda marcado pelas paralisaÁıes da pandemia e, consequentemente, pela maior incerteza.\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("GrÈcia: do default seletivo ao grau de investimento\n\n");
						printf ("Em 20 de outubro deste ano, a GrÈcia foi promovida, pela agÍncia de rating S&P, ‡ nota BBB-, a classificaÁ„o mÌnima para se ter o chamado 'grau de investimento', pelo qual a dÌvida do paÌs deixa de ser considerada um investimento especulativo.\n\n");
						printf ("… uma recuperaÁ„o e tanto para um paÌs que passou por uma crise devastadora no inÌcio da dÈcada passada, que levou muitos a pensarem que seria a primeira economia a abandonar a zona do euro. Em fevereiro e em dezembro de 2012, o rating da GrÈcia junto ‡ S&P chegou a cair ‡ categoria de 'default seletivo', quase a pior possÌvel, que È de default generalizado (D).\n\n");
						printf ("O rating atual da GrÈcia junto a outra grande agÍncia internacional de classificaÁ„o de risco, a Moody's, È de Ba1, a um degrau apenas do grau de investimento.\n\n");
						printf ("Segundo Mariam Dayoub, economista sÍnior da gestora Julius Baer Family Office (JBFO), os mercados se tornaram mais favor·veis ‡ GrÈcia recentemente - e se anteviu a possibilidade de grau de investimento - depois que, em junho deste ano, o partido de centrodireita Nova Democracia, que est· no poder, obteve uma convincente vitÛria em eleiÁıes parlamentares. A continuidade do processo de ajuste da GrÈcia desde a sua imensa crise ganhou um horizonte mais largo.\n\n");
						printf ("E que recuperaÁ„o foi esta! O dÈficit fiscal nominal saiu de um pico negativo de 15,2% do PIB em 2009 para valores positivos pouco abaixo de 1% de 2017 a 2019. Em 2020, com a pandemia, houve dÈficit de 9,7% do PIB, mas j· em 2022 havia sido reduzido para -2,4%. A dÌvida p˙blica ainda È alta, de 172,6% do PIB em 2022, mas abaixo do pico de 186,4% de 2016 (no ano excepcional da pandemia atingiu 207% do PIB).\n\n");
						printf ("Dayoub nota que a crise da GrÈcia, na esteira da grande crise financeira global de 2008-09, teve uma proporÁ„o, em termos de perda de produto, compar·vel ‡ Grande Depress„o dos Estados Unidos no inÌcio da dÈcada de 30 do sÈculo passado. De 2009 a 2013, o PIB grego caiu 33%. A partir de 2017, o crescimento do PIB se firmou em nÌvel positivo, ainda que modesto, atÈ a queda de 9% em 2020 com a pandemia, acompanhando quase todo o resto do mundo. A economia grega cresceu 8,4% e 5,9%, respectivamente, em 2021 e 2022; em 2023, segundo a projeÁ„o do FMI, deve crescer 2,4%.\n\n");
						printf ("J· a taxa de desemprego, que chegou a 28,4% em julho de 2013, recuou para 11,3% em abril de 2023.\n\n");
						printf ("Dayoub chama a atenÁ„o para um indicador particularmente expressivo. A rentabilidade dos tÌtulos do governo grego de dez anos hoje, de 4,3%, est· bem abaixo dos treasuries de dez anos dos Estados Unidos, com 4,95%. E isso n„o È apenas por pertencer ‡ zona do euro. O tÌtulo de dez anos italiano, por exemplo, est· rendendo 4,91%, quase igual ao dos Estados Unidos, apesar de as taxas b·sicas do euro (4% a 4,75%) estarem abaixo dos Fed Funds (5,25%-5,50%), a taxa b·sica norte-americana.\n\n");
						printf ("Para reestruturar a sua dÌvida mantendo-se na zona do euro, a GrÈcia teve que passar por um processo de ajuste durÌssimo, incluindo dr·sticas reduÁıes de despesa p˙blica e uma pesada agenda de reforma econÙmicas. Esta foi uma postura que prevaleceu em relaÁ„o ‡ crise de paÌses mais fr·geis da zona do euro (incluindo Espanha, Portugal, Irlanda e It·lia), capitaneada pela Alemanha, um paÌs que sempre privilegiou a austeridade e o rigor macroeconÙmico.\n\n");
						printf ("Dayoub nota, que, para alÈm do caso da GrÈcia, essa postura mais conservadora na zona do euro se reflete na evoluÁ„o da dÌvida p˙blica da regi„o em comparaÁ„o com os Estados Unidos. Enquanto, na zona do euro, a relaÁ„o entre a dÌvida p˙blica e o PIB subiu 27% entre 2008 e 2022 (de 66% para 91% do PIB), nos Estados Unidos a alta foi de 47%, de 62,7% para 119% do PIB.\n\n");
						printf ("Fernando Dantas È colunista do Broadcast e escreve ‡s terÁas, quartas e sextas-feiras (fojdantas@gmail.com)\n\n");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. 'Aqui tem outra guerra: guerra de procurar comida e √°gua', relata brasileiro em Gaza|\n");
				printf("|Mat√©ria 2. Jovem com autismo que quase n√£o fala cria mentalmente sinfonia                      |\n");
				printf("|-----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                               |\n");
				printf("|_______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("'Aqui tem outra guerra: guerra de procurar comida e √°gua', relata brasileiro em Gaza\n");
						printf("\tOs brasileiros que est√£o na Faixa de Gaza voltaram a dar not√≠cias. Na sexta-feira (27), a comunica√ß√£o foi cortada em Gaza, ap√≥s bombardeios intensos. O sil√™ncio durou at√© este s√°bado (28). Depois de horas sem contato, a equipe do Fant√°stico falou com alguns deles para saber como est√° a situa√ß√£o hoje na fronteira com o Egito. A maior preocupa√ß√£o √© a falta de comida e √°gua. Hoje, trinta e quatro pessoas esperam a repatria√ß√£o ao Brasil. Pela manh√£, Hasan Rabee, um dos brasileiros em Gaza, falou novamente com a equipe do Fant√°stico. Ele, que est√° em Khan Yunis, s√≥ conseguiu fazer a liga√ß√£o gra√ßas a um chip de celular que tinha do Brasil.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Jovem com autismo que quase n√£o fala cria mentalmente sinfonia\n\n");
						printf("\tJacob, um jovem de 19 anos com autismo, sabe apontar para aquilo que ele precisa. Em geral, √© m√∫sica. Mas no repert√≥rio verbal, duas palavras: 'comer' e 'sim'. O pai do rapaz americano n√£o precisa de frases pra ler o filho. S√≥ que nem ele fazia ideia do segredo do filho: Jacob guardava uma sinfonia inteira na cabe√ßa.A revela√ß√£o veio depois de sete anos aprendendo a digitar. O clique aconteceu quando a escola fechou na pandemia. A fam√≠lia californiana ficou ainda mais perto. E de m√£os dadas, guiava o filho at√© o teclado, onde Jacob encontrou a sua voz.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("____________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.Tarc√≠sio diz que n√£o vai ampliar n√∫mero de c√¢meras corporais da pol√≠cia em S√£o Paulo     |\n");
				printf("|Mat√©ria 2. Bruna Marquezine diz que novela ‚ÄòDeus Salve o Rei‚Äô a deixou ‚Äòcompletamente traumatizada‚Äô|\n");
				printf("|---------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                   |\n");
				printf("|___________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Tarc√≠sio diz que n√£o vai ampliar n√∫mero de c√¢meras corporais da pol√≠cia em S√£o Paulo\n\n");
						printf("\tO governador de S√£o Paulo, Tarc√≠sio de Freitas (Republicanos), declarou nesta segunda-feira, 30, que n√£o pretende adquirir novas c√¢meras corporais para a pol√≠cia paulista neste ano nem no pr√≥ximo. Ele disse que a gest√£o estadual possui 'v√°rias demandas' e que pretende priorizar 'aquilo que realmente vai proporcionar ganho para o cidad√£o' ao comentar direcionamentos para o or√ßamento. rganiza√ß√µes haviam alertado na semana passada para o risco de ''desmonte' da pol√≠tica p√∫blica que acumula resultados positivos na redu√ß√£o da viol√™ncia letal cometidas por agentes do Estado. As mortes cometidas por policiais militares em servi√ßo cresceram 86% no terceiro trimestre deste ano em rela√ß√£o ao ano passado; a Opera√ß√£o Escudo, realizada no litoral, ajudou a puxar o dado para cima ao contabilizar 28 mortos em agosto.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Bruna Marquezine diz que novela ‚ÄòDeus Salve o Rei‚Äô a deixou ‚Äòcompletamente traumatizada‚Äô\n\n");
						printf("\tBruna Marquezine n√£o hesitou em compartilhar detalhes sobre sua experi√™ncia na novela Deus Salve o Rei e disse que saiu do projeto 'completamente traumatizada'. Durante sua participa√ß√£o no programa De Frente com a Blogueirinha desta segunda-feira, 30, a atriz trouxe √† tona sentimentos e desafios enfrentados ao interpretar sua primeira vil√£, Catarina. Bruna disse que, mesmo tendo iniciado o projeto 'muito entusiasmada', j√° que era sua primeira vil√£, a rea√ß√£o do p√∫blico foi inesperada. 'A personagem foi rejeitada de cara pelo p√∫blico', desabafou. Essa rejei√ß√£o inicial tomou um peso emocional sobre Marquezine. 'Eu n√£o gostava de fazer [a novela], estava infeliz, estava muito cansada', admitiu. E mesmo com a afirma√ß√£o de que algu√©m gostava de sua atua√ß√£o, ela brincou: 'Voc√™ e minha m√£e s√≥'.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("___________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.Secretaria de Seguran√ßa do Amazonas vai comprar 18 PlayStations 5                        |\n");
				printf("|Mat√©ria 2. O que se sabe sobre a queda de avi√£o que deixou 12 pessoas mortas em Rio Branco, no Acre|\n");
				printf("|---------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                   |\n");
				printf("|___________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Secretaria de Seguran√ßa do Amazonas vai comprar 18 PlayStations 5\n\n");
						printf("\tA Secretaria de Seguran√ßa P√∫blica do Amazonas vai realizar no pr√≥ximo dia 7 uma licita√ß√£o para adquirir mobili√°rio e equipamentos para um programa de qualidade de vida no trabalho que inclui 18 videogames PlayStation 5, 96 puffs, 18 poltronas massageadoras e 18 m√°quinas de caf√© com 12 sele√ß√µes de bebidas. Os itens est√£o descritos em um termo de refer√™ncia datado de 25 de setembro e autorizado pelo secret√°rio-executivo da pasta, o coronel da Pol√≠cia Militar An√©zio Brito de Paiva. Na parte em que cita o videogame, cujas especifica√ß√µes s√£o as do PS5, o termo estabelece que se inclua um plano de assinatura com disponibilidade de download de jogos pelo per√≠odo de cinco anos. Um console com dois controles sai por cerca de R$ 4.600.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("O que se sabe sobre a queda de avi√£o que deixou 12 pessoas mortas em Rio Branco, no Acre\n\n");
						printf("\tO Servi√ßo Regional de Investiga√ß√£o e Preven√ß√£o de Acidentes Aeron√°uticos, em Manaus, vai apurar as causas da queda de um avi√£o de pequeno porte que deixou 12 pessoas mortas em Rio Branco, no Acre. O acidente ocorreu neste domingo (29), pr√≥ximo ao aeroporto da cidade. De acordo com a Aeron√°utica, ser√£o utilizadas t√©cnicas espec√≠ficas na investiga√ß√£o, conduzidas por pessoal qualificado e credenciado que realiza a coleta e confirma√ß√£o de dados, a preserva√ß√£o de ind√≠cios, a verifica√ß√£o inicial de danos causados √† aeronave, ou pela aeronave, e o levantamento de outras informa√ß√µes necess√°rias ao processo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("______________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.Mercado v√™ infla√ß√£o, taxa de juros e rombo fiscal maiores ap√≥s fala de Lula                |\n");
				printf("|Mat√©ria 2. O plano do governo de interferir na gest√£o de empresas privadas. Disputa na Am√©rica do Sul|\n");
				printf("|-----------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                     |\n");
				printf("|_____________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Mercado v√™ infla√ß√£o, taxa de juros e rombo fiscal maiores ap√≥s fala de Lula\n\n");
						printf("\tO mercado financeiro come√ßou a mudar suas proje√ß√µes depois que o presidente Luiz In√°cio Lula da Silva (PT) descartou chances de d√©ficit zero nas contas p√∫blicas em 2024. Segundo o boletim Focus, publicado pelo Banco Central na manh√£ desta segunda-feira (30), bancos e consultorias passaram a esperar infla√ß√£o, taxa b√°sica de juros e d√©ficit prim√°rio maiores no ano que vem.A coleta de dados foi feita na sexta-feira (27), mesmo dia em que Lula afirmou que o governo 'dificilmente' conseguir√° zerar o d√©ficit. 'At√© porque n√£o queremos fazer corte de investimentos e de obras'', explicou o presidente.A meta de eliminar o rombo das contas p√∫blicas no ano que vem consta do novo arcabou√ßo fiscal, preparado pelo Minist√©rio da Fazenda, que foi sancionado pelo pr√≥prio Lula h√° apenas dois meses. O petista chamou o mercado de 'ganancioso demais' por cobrar o cumprimento desse objetivo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Governo de Israel confirma morte de DJ alem√£ sequestrada pelo Hamas\n\n");
						printf("\tO governo israelense confirmou nesta segunda-feira (30) a morte da jovem DJ germano-israelense Shani Louk, de 23 anos, cujo corpo foi exibido em uma caminhonete por terroristas do grupo Hamas, em um v√≠deo que correu o mundo.'Estamos arrasados por informar que o corpo da germano-israelense Shani Louk foi encontrado e identificado', afirmou o Minist√©rio das Rela√ß√µes Exteriores israelense na rede social X (antigo Twitter).Um porta-voz do governo acrescentou √† Ag√™ncia EFE que, na verdade, uma parte do corpo da jovem foi localizada, foi realizado teste de reconhecimento por DNA, o que confirma sua morte. Um parente de Shani disse que ao portal The Jerusalem Post que a fam√≠lia da v√≠tima recebeu um aviso oficial das For√ßas de Defesa de Israel (IDF), confirmando a identifica√ß√£o de um osso da base do cr√¢nio pertencente a ela.O comunicado do Minist√©rio das Rela√ß√µes Exteriores diz que a jovem foi raptada por milicianos do Hamas durante a invas√£o ao festival de m√∫sica eletr√¥nica que acontecia perto da Faixa de Gaza no dia 7 de outubro.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. A 'segunda etapa' da guerra entre Israel e Hamas                                   |\n");
				printf("|Mat√©ria 2. Dia de Finados √© o pen√∫ltimo feriad√£o nacional e 2024 ter√° poucos; veja quais      |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("A 'segunda etapa' da guerra entre Israel e Hamas\n\n");
						printf("\tA guerra entre Hamas e Israel entrou na quarta semana com a maior s√©rie de bombardeios israelenses contra a Faixa de Gaza, e com a expans√£o das opera√ß√µes terrestres dentro do territ√≥rio palestino. Com o conflito longe do fim, o primeiro ministro de Israel, Benjamin Netanyahu, alertou que os combates est√£o entrando em uma 'segunda fase', e que ser√£o 'longos de dif√≠ceis'. Mesmo diante de pedidos globais para um cessar-fogo, para tentar avan√ßar na liberta√ß√£o dos mais de 200 ref√©ns em poder do Hamas, para garantir a seguran√ßa dos civis e a entrega da ajuda humanit√°ria, Netanyahu, com o aval dos Estados Unidos, vem rejeitando a suspens√£o dos combates. Ontem, ele alegou que o pedido de um cessar-fogo '√© um pedido para que Israel se renda √† barb√°rie, ao terrorismo' e que 'isto n√£o vai acontecer'.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Dia de Finados √© o pen√∫ltimo feriad√£o nacional e 2024 ter√° poucos; veja quais\n\n");
						printf("\tCelebrado em 2 de novembro, o Dia de Finados √© o pr√≥ximo e √∫ltimo feriado prolongado de 2023. Por cair em uma quinta-feira, diferentes empresas e √≥rg√£os p√∫blicos adotam a sexta-feira como ponto facultativo e emendam a folga. Este ano, quem gosta de viajar teve um prato cheio, com sete feriad√µes. Assim como Finados, Independ√™ncia do Brasil (7 de setembro) e Nossa Senhora Aparecida (12 de outubro) tamb√©m ca√≠ram em quintas-feiras, com a possibilidade da 'famosa' emenda. Outros quatro foram na segunda ou na sexta-feira: Paix√£o de Cristo (7 de abril), Tiradentes (21 de abril), Dia Mundial do Trabalho (1¬∫ de maio). O Natal (25 de dezembro) tamb√©m ser√° em uma segunda-feira.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
			}
			if(jornal == 2){
				system ("cls");
				printf("_______________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.S√£o Paulo teve o m√™s de outubro mais chuvoso em 80 anos; veja previs√£o para os pr√≥ximos dias|\n");
				printf("|Mat√©ria 2. Lula elogia Vini Jr. por Pr√™mio S√≥crates no Bola de Ouro; leia mensagem                    |\n");
				printf("|------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                      |\n");
				printf("|______________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("S√£o Paulo teve o m√™s de outubro mais chuvoso em 80 anos; veja previs√£o para os pr√≥ximos dias\n\n");
						printf("\tO m√™s de outubro foi o mais chuvoso no munic√≠pio de S√£o Paulo desde que o Instituto Nacional de Meteorologia (Inmet) come√ßou a fazer a medi√ß√£o, em 1943. O m√™s teve 356,0 mil√≠metros (mm) de chuva, 180% acima da m√©dia hist√≥ria de 1991 a 2020, que √© de 127,2 mm. Antes, o recorde era de 237,9 mm, registrado em 1969, segundo o Inmet. A medi√ß√£o deste ano foi feita na esta√ß√£o meteorol√≥gica situada no Mirante de Santana, na zona norte. O maior volume de chuva em 24 horas ocorreu no dia 9, quando choveu 86,6 mm. A temperatura m√°xima em outubro na capital paulista foi de 33,7¬∞C, registrada no dia 24, e a m√≠nima foi de 14,4¬∞C, no dia 14. Essas temperaturas tamb√©m foram registradas no Mirante de Santana. N√£o chovia tanto em S√£o Paulo durante o m√™s de outubro desde 1943. ");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Lula elogia Vini Jr. por Pr√™mio S√≥crates no Bola de Ouro; leia mensagem\n\n");
						printf("\tO presidente Luiz In√°cio Lula da Silva (PT) elogiou o atacante brasileiro Vin√≠cius J√∫nior em suas redes sociais na noite desta ter√ßa-feira. O chefe do Executivo repercutiu o pr√™mio conquistado pelo jogador do Real Madrid no evento realizado pela revista France Football, que concedeu a oitava Bola de Ouro para o argentino Lionel Messi. Vini Jr. foi agraciado com o Pr√™mio S√≥crates, nomeado dessa forma em homenagem ao √≠dolo corintiano e da sele√ß√£o brasileira, conhecido por seu engajamento pol√≠tico. O trof√©u foi entregue ao atacante brasileiro como reconhecimento pelos servi√ßos prestados √† sociedade pelo Instituto Vini Jr., um projeto voltado √† educa√ß√£o de jovens por meio do esporte, fundado em 2020. 'Meus parab√©ns ao Vini Jr. pelo Pr√™mio S√≥crates no Bola de Ouro 2023. Pr√™mio que leva o nome do meu grande amigo S√≥crates e reconhece iniciativas sociais no esporte. Parab√©ns pelo seu trabalho, lutas sociais e o combate ao racismo. O Brasil abre o #NovembroNegro com esse importante registro de luta', escreveu Lula, destacando o m√™s da Consci√™ncia Negra para refletir sobre uma sociedade mais igualit√°ria, inclusiva e antirracista.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("____________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.Tribunais s√£o enviesados contra mulheres e negros e n√£o fazem justi√ßa, diz advogada da OAB|\n");
				printf("|Mat√©ria 2. Bolsonaro reage a nova condena√ß√£o no TSE citando multas contra ele e Braga Netto         |\n");
				printf("|----------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                    |\n");
				printf("|____________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Professor da Etec ascende e se torna um ser superior\n\n");
						printf("\tOs Tribunais de Justi√ßa s√£o enviesados e, por isso, n√£o fazem justi√ßa, afirma Dione Almeida, secret√°ria-geral adjunta da OAB-SP. Segundo ela, quem mais acessa o sistema de Justi√ßa s√£o negros, pobres e m√£es solo. Por isso, diz, √© preciso olhar para essa realidade para pensar o futuro do direito.A justi√ßa pensada at√© hoje, afirma Dione, '√© feita por pessoas que s√£o muito diferentes de n√≥s'. 'Por isso, n√£o resolve os nossos problemas. Porque n√£o parte da ideia de n√≥s aqui dentro'. Em julho, por ocasi√£o do Dia da Mulher Negra, Latino-Americana e Caribenha, Dione foi nomeada presidente interina da OAB-SP por dois dias. Com isso, tornou-se a primeira mulher negra a ocupar o cargo na seccional paulista, em 91 anos de exist√™ncia da entidade.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Bolsonaro reage a nova condena√ß√£o no TSE citando multas contra ele e Braga Netto\n\n");
						printf("\tO ex-presidente Jair Bolsonaro (PL) reagiu √† nova condena√ß√£o sofrida no TSE (Tribunal Superior Eleitoral) com a publica√ß√£o, em redes sociais, dos valores das multas aplicadas contra ele e contra seu candidato a vice, o ex-ministro Walter Braga Netto. 'Novas multas: Bolsonaro: R$ 425.000,00. Braga Netto: R$ 212.800,00', escreveu Bolsonaro. A mensagem foi acompanhada de uma not√≠cia de que o TSE o condenou novamente numa a√ß√£o eleitoral, desta vez por abuso de poder pol√≠tico nas celebra√ß√µes do 7 de Setembro do ano passado, e declarou Braga Netto ineleg√≠vel at√© 2030. Em rede social, o deputado federal Eduardo Bolsonaro (PL-SP), nesta quarta (1¬∫), chamou a condena√ß√£o na Justi√ßa Eleitoral de 'persegui√ß√£o implac√°vel'.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("______________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.Governo de S√£o Paulo lan√ßa concurso para contrata√ß√£o de 2,7 mil policiais militares |\n");
				printf("|Mat√©ria 2. Brasil deixa presid√™ncia do Conselho de Seguran√ßa da ONU; China assumir√° o posto   |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Governo de S√£o Paulo lan√ßa concurso para contrata√ß√£o de 2,7 mil policiais militares\n\n");
						printf("\tA Secretaria da Seguran√ßa P√∫blica do estado de S√£o Paulo anunciou, nesta ter√ßa-feira (31), concurso para a contrata√ß√£o de 2,7 mil policiais de segunda classe para a Pol√≠cia Militar. As inscri√ß√µes come√ßam √†s 10h no dia 6 de novembro e v√£o at√© 20 de dezembro. O sal√°rio inicial √© de R$ 4.852,21 - incluindo sal√°rio-base e Regime Especial de Trabalho Policial.Este √© o terceiro concurso p√∫blico da corpora√ß√£o aberto pela gest√£o do governador Tarc√≠sio de Freitas (Republicanos). Os outros dois processos seletivos foram abertos nos meses de maio e junho, com 2,7 mil vagas para soldados 2¬™ classe e 200 vagas para alunos-oficiais. Al√©m disso, no √∫ltimo dia 19 foram autorizadas mais 200 vagas de alunos-oficiais para um novo edital, que ainda n√£o tem data de publica√ß√£o.Aumentar o efetivo da Pol√≠cia Militar foi uma das promessas de campanha de Tarc√≠sio, que no in√≠cio da gest√£o concedeu um reajuste considerado recorde para a categoria.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Brasil deixa presid√™ncia do Conselho de Seguran√ßa da ONU; China assumir√° o posto\n\n");
						printf("\tO Brasil termina nesta ter√ßa (31) o mandato na presid√™ncia rotativa do Conselho de Seguran√ßa da Organiza√ß√£o das Na√ß√µes Unidas (ONU) sem resolver ou indicar um caminho para o fim do conflito entre Israel e o Hamas, que marcou a gest√£o do pa√≠s no √≥rg√£o praticamente desde o in√≠cio - a partir do final da primeira semana, no dia 7 de outubro.Embora tenha tido um desempenho de tentar o consenso entre todos os membros, a diplomacia brasileira sai do colegiado frustrada por n√£o conseguir resolver o primeiro grande desafio.O ministro Mauro Vieira, das Rela√ß√µes Internacionais, chefiou a delega√ß√£o brasileira no Conselho e disse, na sess√£o de emerg√™ncia desta segunda (30), que o √≥rg√£o est√° 'falhando vergonhosamente'' em acabar com a guerra na Faixa de Gaza. A cr√≠tica deixou clara a frustra√ß√£o do Brasil √† frente do colegiado por n√£o ter chegado a um acordo com todos os membros.O chanceler enfatizou que, desde o in√≠cio da guerra, o Conselho de Seguran√ßa realizou reuni√µes e ouviu discursos, mas n√£o conseguiu tomar a decis√£o de 'p√¥r fim ao sofrimento humano no territ√≥rio'. Ele ressaltou que o colegiado possui os meios para tomar medidas eficazes, mas, 'repetida e vergonhosamente', n√£o o fez.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Enchente nas Cataratas do Igua√ßu: Veja imagens e saiba o que provocou as cheias    |\n");
				printf("|Mat√©ria 2. Antissemitismo e islamofobia crescem em meio a guerra entre Israel e Hamas         |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Enchente nas Cataratas do Igua√ßu: Veja imagens e saiba o que provocou as cheias\n\n");
						printf("\tAs Cataratas do Igua√ßu est√£o em situa√ß√£o complicada desde pelo menos o √∫ltimo domingo (29), quando atingiram a at√© ent√£o maior vaz√£o hist√≥rica de √°gua na regi√£o. Segundo a Companhia Paranense de Energia (Copel), nesse dia, as cachoeiras deram passagem a 18,6 milh√µes de litros por segundo - fluxo que √© mais de 16 vezes superior ao usual, de 1,5 milh√£o. Nesta ter√ßa-feira (31), as enchentes continuam, e as passarelas de visita√ß√£o, agora fechadas, est√£o completamente inundadas pela √°gua.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Antissemitismo e islamofobia crescem em meio a guerra entre Israel e Hamas\n\n");
						printf("\tEstrelas de Davi pichadas em portas e fachadas de edif√≠cios em Paris, na Fran√ßa, uma invas√£o a um aeroporto em uma rep√∫blica russa e amea√ßas publicadas na Internet contra um centro comunit√°rio judaico no campus de uma universidade americana. Do outro lado, uma crian√ßa mu√ßulmana de seis anos assassinada a facadas nos Estados Unidos. No rescaldo das quase quatro semanas da guerra entre Israel e o Hamas - que estourou ap√≥s o ataque do grupo terrorista ao territ√≥rio israelense em 7 de outubro, deixando ao menos 1,4 mil mortos e levando Israel a realizar a maior ofensiva militar da Hist√≥ria na Faixa de Gaza -, manifesta√ß√µes antissemitas e islamof√≥bicas aumentaram ao redor do globo, sobretudo nos EUA e em pa√≠ses europeus, alertam autoridades e ONGs.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1. Aeroporto de Congonhas fica fechado por 2 horas devido a problema em trem de pouso de avi√£o |\n");
				printf("|Mat√©ria 2. Thiago Brennand √© condenado a 1 ano e 8 meses de pris√£o por agredir modelo em academia de SP|\n");
				printf("|-------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                       |\n");
				printf("|_______________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Aeroporto de Congonhas fica fechado por 2 horas devido a problema em trem de pouso de avi√£o\n\n");
						printf("\tO aeroporto de Congonhas, na zona sul de S√£o Paulo, ficou interditado por praticamente duas horas na noite desta quarta-feira, 1.¬∫, v√©spera do feriado prolongado de Finados, devido a um problema com o trem de pouso de uma aeronave de pequeno porte. Segundo a Aena, empresa concession√°ria do aeroporto, ningu√©m se feriu, mas 13 voos foram cancelados e 17 transferidos para outros aeroportos. O problema ocorreu √†s 19h50 e se estendeu at√© as 21h49.Em nota, a concession√°ria informou que 'uma aeronave de pequeno porte, modelo Piper Aircraft PA-42, procedente de Cuiab√° para o aeroporto de Congonhas, teve problemas com o trem de pouso durante a aterrissagem, √†s 19h50.'");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Thiago Brennand √© condenado a 1 ano e 8 meses de pris√£o por agredir modelo em academia de SP\n\n");
						printf("\tO empres√°rio Thiago Brennand, de 43 anos, foi condenado a um ano e oito meses de pris√£o por agredir a modelo Alliny Helena Gomes em uma academia de gin√°stica, em S√£o Paulo. A decis√£o, divulgada nesta quarta-feira, 1¬∫, foi dada pelo juiz Henrique Vergueiro Loureiro, da 6.¬™ Vara Criminal Central da capital. O magistrado estabeleceu ainda o pagamento de R$ 50 mil a t√≠tulo de indeniza√ß√£o para a v√≠tima. A defesa do empres√°rio avalia entrar com recurso. Nesse mesmo processo, Brennand foi absolvido da acusa√ß√£o de corrup√ß√£o de menor por estar acompanhado do filho no dia das agress√µes. A nova condena√ß√£o prev√™ o cumprimento da pena em regime semiaberto, mas Brennand j√° foi condenado a dez anos e seis meses de pris√£o em outro processo e continua preso.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("______________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.Seca extrema na amaz√¥nia destr√≥i turismo em comunidades ribeirinhas                 |\n");
				printf("|Mat√©ria 2. Brasil envelhece sem estabelecer par√¢metros para combater desigualdade             |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Seca extrema na amaz√¥nia destr√≥i turismo em comunidades ribeirinhas\n\n");
						printf("\tComunidades do rio Negro que, at√© pouco tempo atr√°s, ofereciam quartos com vista para uma imensid√£o de √°guas amaz√¥nicas miram agora, vazias de visitantes, o solo rachado pela seca hist√≥rica que atinge a amaz√¥nia. Com as reservas canceladas em pousadas e restaurantes comunit√°rios na regi√£o, quase R$ 200 mil deixaram de ser arrecadados em outubro. A Folha esteve, no √∫ltimo final de semana, em duas comunidades ribeirinhas do Amazonas em que o chamado turismo de base comunit√°ria √© uma das fontes de renda. Como tem ocorrido desde o in√≠cio da seca, n√£o havia turistas no Sarac√° e em Santa Helena do Ingl√™s. A consequ√™ncia para a economia local √© l√≥gica: potencial ac√∫mulo de d√≠vidas. Na comunidade Sarac√°, localizada dentro da RDS (Reserva de Desenvolvimento Sustent√°vel) Rio Negro, no munic√≠pio de Iranduba (AM), Pedrina Brito de Mendon√ßa, 40, aproveitou a aus√™ncia total de visitantes para reformar parte das hospedagens oferecidas.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Brasil envelhece sem estabelecer par√¢metros para combater desigualdade\n\n");
						printf("\tLi semana passada, aqui na Folha, a divulga√ß√£o dos dados do Censo Demogr√°fico 2022, levantado pelo IBGE (Instituto Brasileiro de Geografia e Estat√≠stica) informando que o Brasil j√° contabiliza 37.814 pessoas centen√°rias. Para uma na√ß√£o com 203,1 milh√µes de habitantes, este n√∫mero √© muito representativo. Al√©m do mais, dada a nossa grande desigualdade, pela forte concentra√ß√£o de renda na m√£o de poucos, em geral concentrados nas regi√µes Sul e Sudeste, e, sobretudo, pela situa√ß√£o da precariedade dos servi√ßos ofertados √† velhice, √© um feito a chegada de uma pessoa aos tr√™s d√≠gitos de exist√™ncia. O combate √† desigualdade deve ser o primeiro par√¢metro para se pensar em um Brasil de cidad√£os e cidad√£s centenariamente saud√°veis. Envelhecer no Brasil representa um desafio enorme ‚Äì ainda mais para pessoas negras, como √© o caso de dona Maria Cardoso. Ela trabalhou na ro√ßa, casou aos 18 anos, teve cinco filhos e ap√≥s ultrapassar a marca dos cem anos deu uma rasteira na velhice e virou 'influencer de vinho' de uma grande empresa do setor.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("__________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.STF notifica Eduardo Bolsonaro por fala que supostamente compara professor a traficante|\n");
				printf("|Mat√©ria 2. Membro do Hamas amea√ßa novos ataques ‚Äúat√© que Israel seja completamente aniquilado‚Äù   |\n");
				printf("|-------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                 |\n");
				printf("|_________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("STF notifica Eduardo Bolsonaro por fala que supostamente compara professor a traficante\n\n");
						printf("\tO ministro Nunes Marques, do Supremo Tribunal Federal (STF) notificou o deputado federal Eduardo Bolsonaro (PL-SP) para que d√™ explica√ß√µes sobre um discurso em que supostamente comparou professores a traficantes de drogas em julho deste ano, em um evento em S√£o Paulo.Na decis√£o do dia 23 de outubro que foi divulgada nesta ter√ßa (31), Nunes Marques acolheu uma queixa-crime da deputada federal Luciene Cavalcanti (PSOL-SP) em que acusa o parlamentar de cal√∫nia e difama√ß√£o pelas redes sociais.O magistrado deu um prazo de 15 dias para Eduardo Bolsonaro se pronunciar (veja na √≠ntegra). Nunes Marques tamb√©m acolheu a outras duas peti√ß√µes referentes ao mesmo tema apresentadas por sindicatos de professores e pela Confedera√ß√£o Nacional dos Trabalhadores em Estabelecimentos de Ensino (Contee). Durante o evento em S√£o Paulo, organizado pelo Movimento Pr√≥-Armas, Eduardo Bolsonaro disse que 'n√£o tem diferen√ßa de um professor doutrinador para um traficante de drogas que tenta sequestrar os nossos filhos para o mundo do crime'.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Membro do Hamas amea√ßa novos ataques ‚Äúat√© que Israel seja completamente aniquilado‚Äù \n\n");
						printf("\tGhazi Hamad, membro do gabinete pol√≠tico do grupo terrorista palestino Hamas, assumiu a responsabilidade dos terroristas pelo massacre de civis israelenses realizado durante os ataques do Hamas contra o Estado de Israel, ocorridos no √∫ltimo dia 7 de outubro. Em uma entrevista concedida √† emissora libanesa LCB, Hamad tamb√©m declarou que o ataque realizado em outubro, que resultou na morte de 1,4 mil israelenses e no sequestro de 239 ref√©ns levados para a Faixa de Gaza, foi apenas o 'come√ßo' de uma s√©rie de outros ataques que poder√£o ocorrer novamente. Respondendo de maneira fria as perguntas sobre o massacre de judeus, Hamad afirmou que Israel 'n√£o tem lugar'' na terra que ele disse pertencer aos terroristas do Hamas. Hamad ainda disse que a 'ocupa√ß√£o israelense' causou as a√ß√µes devastadoras do grupo terrorista palestino. 'N√≥s somos as v√≠timas da ocupa√ß√£o. Portanto, ningu√©m deve nos culpar pelas coisas que fazemos. Em 7 de outubro, 10 de outubro, 1.000.000 de outubro: tudo o que fazemos est√° justificado', disse.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1.Chefe de fac√ß√£o armada de Uganda √© capturado ap√≥s assassinar turistas em saf√°ri     |\n");
				printf("|Mat√©ria 2. S√£o Paulo tem 676 blocos inscritos para o Carnaval 2024                            |\n");
				printf("|----------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                              |\n");
				printf("|______________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Chefe de fac√ß√£o armada de Uganda √© capturado ap√≥s assassinar turistas em saf√°ri\n\n");
						printf("\tAutoridades de Uganda anunciaram, nesta quinta-feira, que capturaram o chefe de uma fac√ß√£o armada acusado de matar dois turistas estrangeiros em lua de mel e seu guia local em um parque nacional no m√™s passado. causar o caos, matar turistas, queimar escolas e hospitais foi eliminado -, afirmou Akiiki. - O √∫nico sobrevivente √© o comandante que capturamos -, disse ele, acrescentando que ser√° julgado. Akiiki disse que Njovu foi encontrado com alguns pertences dos turistas mortos e a carteira de identidade do guia ugandense.As v√≠timas do ataque de Outubro foram o brit√¢nico David Barlow, a sua esposa sul-africana Celia e o guia Eric Ayai.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("S√£o Paulo tem 676 blocos inscritos para o Carnaval 2024\n\n");
						printf("\tA cidade de S√£o Paulo soma 676 blocos inscritos para o Carnaval de rua do ano que vem, segundo divulgou a prefeitura de S√£o Paulo nesta quinta-feira. Destes, 448 j√° t√™m endere√ßo, hora e dia para acontecer. A capital paulista contar√° com oito dias de folia em 2024, com in√≠cio no primeiro final de semana de fevereiro. A fase de registro dos blocos terminou na √∫ltima ter√ßa-feira. A publica√ß√£o dos nomes confirmados √© feita no Di√°rio Oficial sempre que o bloco atende aos crit√©rios estabelecidos pelo poder municipal. Na pr√≥xima semana, cerca de 50 desfiles devem ser divulgados.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("______________________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1. Atriz que encontrou Matthew Perry um dia antes de sua morte diz que ele parecia ‚Äòfeliz e saud√°vel‚Äô|\n");
				printf("|Mat√©ria 2. C√¢mara dos EUA aprova ajuda a Israel, mas n√£o para Ucr√¢nia                                        |\n");
				printf("|-------------------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                             |\n");
				printf("|_____________________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Atriz que encontrou Matthew Perry um dia antes de sua morte diz que ele parecia ‚Äòfeliz e saud√°vel‚Äô\n\n");
						printf("\tEm entrevista publicada pela revista People na noite desta quinta, 2, a atriz e modelo Athenna Crosby, 25, afirmou que o ator Matthew Perry estava ‚Äúmuito bem‚Äù um dia antes de sua morte, quando ambos se encontraram para almo√ßar. ‚ÄúEle parecia feliz. Ele parecia saud√°vel. Ele s√≥ tinha coisas boas a dizer‚Äù, contou. Perry, que tinha 54 anos, foi encontrado morto por afogamento em sua casa, em Los Angeles, no dia 28. O encontro com Crosby aconteceu na v√©spera, no Bel Air Hotel. Segundo a atriz, eles se conheceram por amigos em comum e partiu dela a iniciativa de cham√°-lo para sair. ‚ÄúFoi muito generoso da parte dele topar esse encontro comigo‚Äù, disse Crosby. ‚ÄúEu estava come√ßando a conhec√™-lo melhor e ver se t√≠nhamos coisas em comum, projetos que poder√≠amos fazer juntos no futuro.‚Äù ‚ÄúEle me disse que ficar nessa ind√∫stria √© um processo √°rduo, mas que se eu realmente me conhecesse e quisesse ser bem-sucedida, ningu√©m poderia me parar‚Äù, conta a artista. ‚ÄúAcho que √© algo que ele sentia sobre sua pr√≥pria vida‚Äù, completou.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("C√¢mara dos EUA aprova ajuda a Israel, mas n√£o para Ucr√¢nia\n\n");
						printf("\tUma C√¢mara dividida aprovou nesta quinta-feira, 2, um projeto de lei redigido pelos republicanos que vincula US$ 14,3 bilh√µes em ajuda militar dos Estados Unidos a Israel para sua guerra contra o Hamas a cortes de gastos dom√©sticos, desafiando uma amea√ßa de veto do presidente Biden e a oposi√ß√£o bipartid√°ria no Senado. Os republicanos aprovaram a medida em uma vota√ß√£o majoritariamente partid√°ria de 226 a 196, uma ocorr√™ncia rara porque os pacotes de ajuda a Israel normalmente contam com amplo apoio bipartid√°rio. Mas a legisla√ß√£o, apresentada pelo rec√©m-eleito porta-voz republicano Mike Johnson, alienou os democratas porque cortaria uma iniciativa de aplica√ß√£o de impostos, uma parte da Lei de Redu√ß√£o da Infla√ß√£o que √© uma pe√ßa-chave da agenda de Biden. A medida est√° sendo encaminhada para um bloco bipartid√°rio de oposi√ß√£o no Senado, onde os legisladores s√£o a favor de agrupar a ajuda a Israel com dinheiro para ajudar a Ucr√¢nia a se defender da invas√£o da R√∫ssia, bem como para outras crises globais. Biden solicitou esse pacote, totalizando US$ 105 bilh√µes, e as autoridades da Casa Branca disseram na ter√ßa-feira que ele vetaria o projeto de lei da C√¢mara porque era limitado a Israel e continha ‚Äúcompensa√ß√µes de p√≠lulas de veneno partid√°rias‚Äù. O senador Chuck Schumer, democrata de Nova York e l√≠der da maioria, disse em um discurso antes da vota√ß√£o da C√¢mara na quinta-feira que o Senado n√£o aceitaria a proposta aprovada pela C√¢mara e, em vez disso, elaboraria seu pr√≥prio projeto de lei bipartid√°rio contendo ajuda para Israel e Ucr√¢nia e ajuda humanit√°ria para Gaza. A disputa resultante poderia se estender por semanas, atrasando a ajuda.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("_____________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1.UFC volta a S√£o Paulo com embate entre Malhadinho e Derrick Lewis; veja como assistir     |\n");
				printf("|Mat√©ria 2. Fim de semana em SP tem evento de cultura mexicana, shows e festival de m√∫sica eletr√¥nica|\n");
				printf("|----------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                    |\n");
				printf("|____________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("UFC volta a S√£o Paulo com embate entre Malhadinho e Derrick Lewis; veja como assistir\n\n");
						printf("\tDepois de quatro anos, o UFC volta a S√£o Paulo para um evento com 13 lutas neste s√°bado (4). Os f√£s que conseguiram ingressos (j√° esgotados) v√£o assistir a luta mais esperada do dia entre o brasileiro Jailton 'Malhadinho' Almeida e o americano Derrick Lewis. Os port√µes externos do evento abrem √†s 17h para que o p√∫blico consiga tirar fotos e pegar aut√≥grafos de √≠dolos da franquia. √Äs 19h, come√ßam as sete lutas do card preliminar, todas com brasileiros e brasileiras. Mais tarde, √†s 22h, os participantes das seis lutas principais entram no tatame. Quem n√£o conseguiu ingressos para acompanhar a competi√ß√£o no gin√°sio poder√° acompanhar os embates pelo streaming. O UFC Fight Pass, que tem assinaturas a partir de R$ 24,90, transmite o evento ao vivo a partir das 19 horas (hor√°rio de Bras√≠lia).");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Fim de semana em SP tem evento de cultura mexicana, shows e festival de m√∫sica eletr√¥nica\n\n");
						printf("\tO m√™s de novembro tem uma agenda cultura agitada em S√£o Paulo. Quem n√£o foi viajar neste feriad√£o do Dia de Finados pode aproveitar shows, festivais, bares e restaurantes na cidade.  D√≠a de los Muertos - O Memorial da Am√©rica Latina recebe eventos que t√™m a data mexicana, que homenageia aqueles que j√° partiram, como tema entre os dias 4 e 12 deste m√™s, com entrada gratuita. A programa√ß√£o conta com exposi√ß√£o de altares, feira gastron√¥mica, shows e festival de cinema. No primeiro final de semana, das 11h √†s 21h, acontece o festival de tacos. O card√°pio ter√° tamb√©m outras comidas t√≠picas, como burritos e quesadillas. A exposi√ß√£o 'Altares del D√≠a de los Muertos' ser√° inaugurada no s√°bado (4), na galeria Marta Traba, e fica em cartaz at√© domingo, 12 de novembro. A proposta √© promover reflex√µes sobre as diferen√ßas entre sentimentos e rituais ligados √† morte entre Brasil e M√©xico. Bolol√¥ Restaurant & Bar - O novo estabelecimento de MC Ryan, autor do hit 'Tubar√£o Te Amo', que na zona leste viralizou no TikTok.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("__________________________________________________________________________________________________\n");
				printf("|Mat√©ria 1. Paran√° tem 15 trechos de rodovias com bloqueio total no feriado                       |\n");
				printf("|Mat√©ria 2. S√£o Paulo abre mais empresas do que os 16 estados das regi√µes Norte e Nordeste somados|\n");
				printf("|-------------------------------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                                                 |\n");
				printf("|_________________________________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Paran√° tem 15 trechos de rodovias com bloqueio total no feriado\n\n");
						printf("\tAlagamentos, rachaduras no asfalto, deslizamentos e riscos de queda de encostas devido √†s chuvas dos √∫ltimos dias levaram o Departamento de Estradas de Rodagem (DER-PR) a manter 15 trechos de rodovias paranaenses totalmente interditados no feriado de Finados. Em outros seis pontos, a interdi√ß√£o √© parcial. Na PRC-476, em Uni√£o da Vit√≥ria, um trecho danificado foi parcialmente recuperado e liberado de forma provis√≥ria para o tr√°fego de ve√≠culos na v√©spera do feriado. Veja quais s√£o os pontos de interdi√ß√£o total de rodovias no estado, que, segundo o DER-PR, est√£o todos sinalizados.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("S√£o Paulo abre mais empresas do que os 16 estados das regi√µes Norte e Nordeste somados\n\n");
						printf("\tO estado de S√£o Paulo abriu aproximadamente 208 mil empresas de janeiro at√© agosto deste ano, segundo dados da Junta Comercial do Estado de S√£o Paulo (Jucesp), o que √© mais que as regi√µes Norte e Nordeste do Brasil, somadas, no mesmo per√≠odo. O Nordeste teve um pouco mais de 106 mil empreendimentos abertos. J√° o Norte do pa√≠s registrou 33 mil novas empresas. As regi√µes representam 16 estados que, juntos, abriram cerca de 139 mil empresas, de acordo com o Cadastro Nacional da Pessoa Jur√≠dica. Os n√∫meros n√£o levam em considera√ß√£o a Microempresa Individual (MEI). Embora o estado paulista tenha mais empresas abertas, o processo √© mais burocr√°tico se comparado com as reg√µes Norte e Nordeste. Segundo informa√ß√µes da Jucesp, que √© vinculada √† Secretaria de Desenvolvimento Econ√¥mico, o tempo m√©dio para se abrir uma empresa √© de 1 dia e 20 horas em S√£o Paulo. Nos estados nortistas e nordestinos, o tempo m√©dio √© de 18 horas para obter um novo CNPJ.   ");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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
			printf("|2. Estad√£o               |\n");
			printf("|3. Folha de S√£o Paulo    |\n");
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
				printf("|Mat√©ria 1. Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes|\n");
				printf("|Mat√©ria 2. Alec Baldwin dispara arma cenogr√°fica e mata diretora          |\n");
				printf("|--------------------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                                          |\n");
				printf("|__________________________________________________________________________|\n");
				scanf("%d", &materia);
				system ("cls");
					if(materia == 1){
						exibirMateria("Sem aventura na Economia, diz Bolsonaro ao lado de Paulo Guedes\n\n");
						printf("\tDepois de uma semana turbulenta na Economia e de um in√≠cio de sexta-feira com d√≥lar em alta e bolsa em queda, o presidente Jair Bolsonaro afirmou que tem confian√ßa absoluta no ministro Paulo Guedes. Em entrevista coletiva, ao lado do ministro, o presidente disse tamb√©m que n√£o far√° nenhuma aventura na economia. A visita aconteceu um dia depois de quatro secret√°rios de Guedes pedirem demiss√£o alegando motivos pessoais. Na mesma entrevista, o ministro negou a sa√≠da dele do cargo.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}
					if(materia == 2){
						exibirMateria("Alec Baldwin dispara arma cenogr√°fica e mata diretora\n\n");
						printf("O astro americano Alec Baldwin disparou uma arma cenogr√°fica e matou a diretora de fotografia do filme Rust nesta quinta-feira (21) no estado americano do Novo M√©xico. Halyna Hutchins tinha 42 anos e chegou a ser levada de helic√≥ptero ao hospital da Universidade do Novo M√©xico, mas n√£o resistiu aos ferimentos.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 2){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 3){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
						printf("\n\nDigite 1 para voltar e 0 para sair: \n");
						scanf("%d", &jornal);
					}

			}
			if(jornal == 4){
				system ("cls");
				printf("________________________________________________________________\n");
				printf("|Mat√©ria 1. Professor da Etec ascende e se torna um ser superior|\n");
				printf("|Mat√©ria 2. Cec√≠lia vende site de 80 mil                        |\n");
				printf("|---------------------------------------------------------------|\n");
				printf("|Digite a mat√©ria que deseja ver:                               |\n");
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
						printf("Informa√ß√µes de como a C√©cilia vendeu um site de 80 mil reais.");
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

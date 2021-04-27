//Nome completo:Luisa Tolentino Ribeiro Gomes 
//Matrícula:UC20102823 
//Curso:Engenharia de Software
 
//Em primeiro lugar,solicitar a quantidade de sessões que foram realizadas,aceitando somente duas sessões possiveis.Em segundo lugar,solicitar
//o nome do filme,não aceitando o espaço vazio.Em terceiro lugar,solicitar a quantidade de pessoas que assistiram o filme.não podendo aceitar valor inferir a dez pessoas.
//Em ultimo lugar,para cada pessoa que assistiu o filme,solicitar e validar o sexo ( M- masculino,F- feminino ),e sua idade (3- 100).
//Após a leitura dos dados,em uma janela limpa,imprima o nome do filme,a quantidade de pessoas do sexo feminino e masculino,e a classificação de sua idade 
//Criança (3 - 13 ) Adolenscente ( 14 - 17 ) Adulto (18 - 64 ) Idoso ( 65 - 100).
//Ao final da leitura de todos os dados,mostrar uma tela limpa com a quantidade de pessoas maiores de idade do sexo feminino e a quantidade de pessoas maiores de idade
//do sexo masculino que estavam presentes. 

// Em todos os printf's presentes foram usados conceitos retirados do livro 'codigo limpo',para imprimir as informações com mais clareza,no imperativo,deixando assim,
//com ordens mais simples,identificando a ideia central do pedido.Variáveis também foram baseadas nos conceitos do livro,escrevendo assim,de um jeito mais pratico e
//mais usado diariamente.Usado tambem o ato de DRY,em que se reduz a duplicação de afirmações oriundas,e mantendo apenas uma fonte de verdades possivel.Usa-se codigos 
//bons para testes,de fácil entendimento,oferece-se o maximo de aproveitamento das informações e dos dados armazenados.
 
#include<stdio.h>  // biblioteca para entrada e saida 
#include<locale.h>  // busca funções com locação especifica como datas,moedas,linguas  
#include<ctype.h>  // verifica os tipos de caracteres
#include<string.h>  // biblioteca para manipulação de strings do caracteres
#include"conio.h"  // deixa com corzinha S2 S2
    int main(){
    	textcolor(13);  // deixa o texto colorido
		setlocale(LC_ALL,"Portuguese"); // biblioteca para acentos da lingua portuguesa      
		int sessoes,publico,idade,f=0,m=0,crianca=0,adolescente=0,adulto=0,idoso=0,mAdulto=0,fAdulto=0,cont; // definição das variáveis ultilizadas em numeros inteiros
		char filme[30],sexo; // definição das variaveis ultilizadas escritas usando caracteres
		    
		printf("Informe o número de sessões realizadas:\n"); // impressão da pergunta solicitando os dados necessários na tela
		scanf("%d",&sessoes); // armazena a resposta na memória
		if (sessoes != 2) // estabelece condição de prosseguimento do codigo "se"
			printf("Numero de sessões inválido!\n"); // impressão de caso a resposta esteja inválida na tela
    	else{ // estabelece condição de prosseguimento do codigo "se não"
    		printf("Informe o título do filme:\n"); // impressão da pergunta solicitando os dados necessários na tela 
    		fflush(stdin);  // limpa o sbuffers de saida
			gets(filme); // armazena a resposta na memoria com os caracteres corretos
		}  
		if(filme[0] == '0') // estabelece condição de prosseguimento do codigo "se"
    		printf("Título do filme inválido!\n"); // impressão de caso a resposta esteja inválida na tela
    	else{ // estabelece condição de prosseguimento do codigo "se não"		
    		printf("Informe a quantidade de pessoas presentes:\n"); // impressão da pergunta solicitando os dados necessários na tela
        	fflush(stdin); // limpa o buffer de memória
			scanf("%d",&publico);  // armazena a resposta na memória
		}
		if(publico<10) // estabelece condição de prosseguimento do codigo "se"
        	printf("Quantidade de pessoas presentes insuficientes!\n"); // impressão de caso a resposta esteja inválida na tela
  		else{ // estabelece condição de prosseguimento do codigo "se não" 		
			while(cont<publico){ // determina uma repetição enquanto o condição for verdadeira
				do { // determina uma repetição enquanto a condição for falsa
					textcolor(3);   // deixa o texto coloriso
	    			printf("Informe o sexo (ultilizando M para masculino e F para feminino) de cada um dos participantes:\n"); // impressão da pergunta solicitando os dados necessários na tela
					fflush(stdin); // limpa o buffer de memória
					scanf("%c",&sexo);  // armazena a resposta na memória  
	    			if ((sexo != 'F') && (sexo != 'M')) { // estabelece condição de prosseguimento do codigo "se"
						printf("Informe um sexo válido!\n"); // impressão de caso a resposta esteja inválida na tela
					}         
				}while((sexo != 'F') && (sexo != 'M')) ; // determina uma repetição enquanto a condição for falsa 
				do{ // determina uma repetição enquanto a condição for falsa
					printf("Informe a idade do participante(entre 3 a 100 anos):\n"); // impressão da pergunta solicitando os dados necessários na tela
					scanf("%d",&idade); // armazena a resposta na memória
        			if(idade<3 || idade>100) // estabelece condição de prosseguimento do codigo "se"
        				printf("Idade inválida!\n");  // impressão de caso a resposta esteja inválida na tela
				}while (idade<3 || idade>100); // determina uma repetição enquanto a condição for falsa
	    	if(sexo == 'F') // estabelece condição de prosseguimento do codigo "se"
	    		f++; // faz a contagem da condição "se" estabelecida (quantia de mulheres) 
	    	if(sexo == 'M') // estabelece condição de prosseguimento do codigo "se" 
	    		m++; // faz a contagem da condição "se" estabelecida (quantia de homens)
	    	if(idade >= 3 && idade <= 13 ) // estabelece condição de prosseguimento do codigo "se"
	    		crianca++;  // faz a contagem da condição "se" estabelecida (quantia de crianças)
	    	if(idade >= 14 && idade <= 17)  // estabelece condição de prosseguimento do codigo "se"
    			adolescente++; // faz a contagem da condição "se" estabelecida (quantia de adolescentes)
    		if(idade >= 18 && idade <= 64)   // estabelece condição de prosseguimento do codigo "se"
    			adulto++; // faz a contagem da condição "se" estabelecida (quantia de adulto)
    		if(idade >= 65 && idade <= 100) // estabelece condição de prosseguimento do codigo "se"
    			idoso++;  // faz a contagem da condição "se" estabelecida (quantia de idoso)
        	if(sexo == 'F' && idade >= 18 ) // estabelece condição de prosseguimento do codigo "se"
        		fAdulto++;  // faz a contagem da condição "se" estabelecida (quantia de mulheres maiores de idade)
        	if(sexo == 'M' && idade >= 18) // estabelece condição de prosseguimento do codigo "se"
        		mAdulto++;   // faz a contagem da condição "se" estabelecida (quantia de homens maiores de idade)
	  		cont++; // contador do while (aumenta a quantidade de repetições até o valor imposto)
			}	
		system("cls");  // limpa a tela
		textcolor(0);  // deixa o texto colorido
		textbackground(7);  // deixa o fundo do texto colorido
    	printf("Titulo do filme:........%s\nQuantidade de pessoas presentes:.%d\nMulheres:.........................%d\nHomens:...........................%d\nCrianças:.........................%d\nAdolescentes:.....................%d\nAdultos:..........................%d\nIdosos:...........................%d\n",filme,publico,f,m,crianca,adolescente,adulto,idoso); // imprime as informações obtidas ao decorrer do código
		textbackground(0);  // deixa o fundo do texto colorido
		_setcursortype(0);  // deixa o cursor invisivel
		system("pause");    // pausa a tela por um determinado tempo
		textbackground(0);  // deixa o fundo do texto colorido
		system("cls");  // limpa a tela
		textbackground(7);  //deixa o fundo do texto colorido
		printf("Quantidade de mulheres maiores de idade presentes:...%d\nQuantidade de homens maiores de idade presentes:.....%d\n",fAdulto,mAdulto); // imprime as informações obtidas ao decorrer do código
		} 
		textbackground(0);  // deixa o fundo do texto colorido 
		_setcursortype(0);   // deixa o cursor invisivel
		
    return 0; // retorna 0 à função main
    } 

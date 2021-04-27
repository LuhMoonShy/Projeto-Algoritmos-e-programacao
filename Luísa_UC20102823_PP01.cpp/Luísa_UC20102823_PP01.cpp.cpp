//Nome completo:Luisa Tolentino Ribeiro Gomes 
//Matr�cula:UC20102823 
//Curso:Engenharia de Software
 
//Em primeiro lugar,solicitar a quantidade de sess�es que foram realizadas,aceitando somente duas sess�es possiveis.Em segundo lugar,solicitar
//o nome do filme,n�o aceitando o espa�o vazio.Em terceiro lugar,solicitar a quantidade de pessoas que assistiram o filme.n�o podendo aceitar valor inferir a dez pessoas.
//Em ultimo lugar,para cada pessoa que assistiu o filme,solicitar e validar o sexo ( M- masculino,F- feminino ),e sua idade (3- 100).
//Ap�s a leitura dos dados,em uma janela limpa,imprima o nome do filme,a quantidade de pessoas do sexo feminino e masculino,e a classifica��o de sua idade 
//Crian�a (3 - 13 ) Adolenscente ( 14 - 17 ) Adulto (18 - 64 ) Idoso ( 65 - 100).
//Ao final da leitura de todos os dados,mostrar uma tela limpa com a quantidade de pessoas maiores de idade do sexo feminino e a quantidade de pessoas maiores de idade
//do sexo masculino que estavam presentes. 

// Em todos os printf's presentes foram usados conceitos retirados do livro 'codigo limpo',para imprimir as informa��es com mais clareza,no imperativo,deixando assim,
//com ordens mais simples,identificando a ideia central do pedido.Vari�veis tamb�m foram baseadas nos conceitos do livro,escrevendo assim,de um jeito mais pratico e
//mais usado diariamente.Usado tambem o ato de DRY,em que se reduz a duplica��o de afirma��es oriundas,e mantendo apenas uma fonte de verdades possivel.Usa-se codigos 
//bons para testes,de f�cil entendimento,oferece-se o maximo de aproveitamento das informa��es e dos dados armazenados.
 
#include<stdio.h>  // biblioteca para entrada e saida 
#include<locale.h>  // busca fun��es com loca��o especifica como datas,moedas,linguas  
#include<ctype.h>  // verifica os tipos de caracteres
#include<string.h>  // biblioteca para manipula��o de strings do caracteres
#include"conio.h"  // deixa com corzinha S2 S2
    int main(){
    	textcolor(13);  // deixa o texto colorido
		setlocale(LC_ALL,"Portuguese"); // biblioteca para acentos da lingua portuguesa      
		int sessoes,publico,idade,f=0,m=0,crianca=0,adolescente=0,adulto=0,idoso=0,mAdulto=0,fAdulto=0,cont; // defini��o das vari�veis ultilizadas em numeros inteiros
		char filme[30],sexo; // defini��o das variaveis ultilizadas escritas usando caracteres
		    
		printf("Informe o n�mero de sess�es realizadas:\n"); // impress�o da pergunta solicitando os dados necess�rios na tela
		scanf("%d",&sessoes); // armazena a resposta na mem�ria
		if (sessoes != 2) // estabelece condi��o de prosseguimento do codigo "se"
			printf("Numero de sess�es inv�lido!\n"); // impress�o de caso a resposta esteja inv�lida na tela
    	else{ // estabelece condi��o de prosseguimento do codigo "se n�o"
    		printf("Informe o t�tulo do filme:\n"); // impress�o da pergunta solicitando os dados necess�rios na tela 
    		fflush(stdin);  // limpa o sbuffers de saida
			gets(filme); // armazena a resposta na memoria com os caracteres corretos
		}  
		if(filme[0] == '0') // estabelece condi��o de prosseguimento do codigo "se"
    		printf("T�tulo do filme inv�lido!\n"); // impress�o de caso a resposta esteja inv�lida na tela
    	else{ // estabelece condi��o de prosseguimento do codigo "se n�o"		
    		printf("Informe a quantidade de pessoas presentes:\n"); // impress�o da pergunta solicitando os dados necess�rios na tela
        	fflush(stdin); // limpa o buffer de mem�ria
			scanf("%d",&publico);  // armazena a resposta na mem�ria
		}
		if(publico<10) // estabelece condi��o de prosseguimento do codigo "se"
        	printf("Quantidade de pessoas presentes insuficientes!\n"); // impress�o de caso a resposta esteja inv�lida na tela
  		else{ // estabelece condi��o de prosseguimento do codigo "se n�o" 		
			while(cont<publico){ // determina uma repeti��o enquanto o condi��o for verdadeira
				do { // determina uma repeti��o enquanto a condi��o for falsa
					textcolor(3);   // deixa o texto coloriso
	    			printf("Informe o sexo (ultilizando M para masculino e F para feminino) de cada um dos participantes:\n"); // impress�o da pergunta solicitando os dados necess�rios na tela
					fflush(stdin); // limpa o buffer de mem�ria
					scanf("%c",&sexo);  // armazena a resposta na mem�ria  
	    			if ((sexo != 'F') && (sexo != 'M')) { // estabelece condi��o de prosseguimento do codigo "se"
						printf("Informe um sexo v�lido!\n"); // impress�o de caso a resposta esteja inv�lida na tela
					}         
				}while((sexo != 'F') && (sexo != 'M')) ; // determina uma repeti��o enquanto a condi��o for falsa 
				do{ // determina uma repeti��o enquanto a condi��o for falsa
					printf("Informe a idade do participante(entre 3 a 100 anos):\n"); // impress�o da pergunta solicitando os dados necess�rios na tela
					scanf("%d",&idade); // armazena a resposta na mem�ria
        			if(idade<3 || idade>100) // estabelece condi��o de prosseguimento do codigo "se"
        				printf("Idade inv�lida!\n");  // impress�o de caso a resposta esteja inv�lida na tela
				}while (idade<3 || idade>100); // determina uma repeti��o enquanto a condi��o for falsa
	    	if(sexo == 'F') // estabelece condi��o de prosseguimento do codigo "se"
	    		f++; // faz a contagem da condi��o "se" estabelecida (quantia de mulheres) 
	    	if(sexo == 'M') // estabelece condi��o de prosseguimento do codigo "se" 
	    		m++; // faz a contagem da condi��o "se" estabelecida (quantia de homens)
	    	if(idade >= 3 && idade <= 13 ) // estabelece condi��o de prosseguimento do codigo "se"
	    		crianca++;  // faz a contagem da condi��o "se" estabelecida (quantia de crian�as)
	    	if(idade >= 14 && idade <= 17)  // estabelece condi��o de prosseguimento do codigo "se"
    			adolescente++; // faz a contagem da condi��o "se" estabelecida (quantia de adolescentes)
    		if(idade >= 18 && idade <= 64)   // estabelece condi��o de prosseguimento do codigo "se"
    			adulto++; // faz a contagem da condi��o "se" estabelecida (quantia de adulto)
    		if(idade >= 65 && idade <= 100) // estabelece condi��o de prosseguimento do codigo "se"
    			idoso++;  // faz a contagem da condi��o "se" estabelecida (quantia de idoso)
        	if(sexo == 'F' && idade >= 18 ) // estabelece condi��o de prosseguimento do codigo "se"
        		fAdulto++;  // faz a contagem da condi��o "se" estabelecida (quantia de mulheres maiores de idade)
        	if(sexo == 'M' && idade >= 18) // estabelece condi��o de prosseguimento do codigo "se"
        		mAdulto++;   // faz a contagem da condi��o "se" estabelecida (quantia de homens maiores de idade)
	  		cont++; // contador do while (aumenta a quantidade de repeti��es at� o valor imposto)
			}	
		system("cls");  // limpa a tela
		textcolor(0);  // deixa o texto colorido
		textbackground(7);  // deixa o fundo do texto colorido
    	printf("Titulo do filme:........%s\nQuantidade de pessoas presentes:.%d\nMulheres:.........................%d\nHomens:...........................%d\nCrian�as:.........................%d\nAdolescentes:.....................%d\nAdultos:..........................%d\nIdosos:...........................%d\n",filme,publico,f,m,crianca,adolescente,adulto,idoso); // imprime as informa��es obtidas ao decorrer do c�digo
		textbackground(0);  // deixa o fundo do texto colorido
		_setcursortype(0);  // deixa o cursor invisivel
		system("pause");    // pausa a tela por um determinado tempo
		textbackground(0);  // deixa o fundo do texto colorido
		system("cls");  // limpa a tela
		textbackground(7);  //deixa o fundo do texto colorido
		printf("Quantidade de mulheres maiores de idade presentes:...%d\nQuantidade de homens maiores de idade presentes:.....%d\n",fAdulto,mAdulto); // imprime as informa��es obtidas ao decorrer do c�digo
		} 
		textbackground(0);  // deixa o fundo do texto colorido 
		_setcursortype(0);   // deixa o cursor invisivel
		
    return 0; // retorna 0 � fun��o main
    } 

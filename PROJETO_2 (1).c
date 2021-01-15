#include<stdio.h>
#include <locale.h>
#include <stdlib.h>
//VARIAVEIS
int i, j, x, opcoes, vidaperdida, visualizar;
int func_cobra, func_buraco, func_jacare, explodir;
char  nome[1], nomes_tripulantes[2][20];
int C, CSS, HTML, JAVA, JAVASCRIPT,PYTHON, TYPESCRIPT;
int vida=100;
int resultado;
int cobra=0, jacare=0, buraco=0;
char dnacorreto[] = "ABCDJUEDIJXLOPDWUHTYLLOPJNBG", dnaemprocesso[29];
char c[] = "ABCD", css[] = "JUED" , html[] = "IJXL" , java[] = "OPDW", javascript[] = "UHTY", python[] = "LLOP" , typescript[] = "JNBG" ;

//INICIO DO CODIGO

//FUNÇÃO PARA DECOLAGEM
void decolar(int permitir){
	printf("Aperte: 1 para Permitir decolagem: ");
	scanf("%d",&permitir);
	
	while(permitir!=1){
	if(permitir==1){
		printf("3,2,1 VAII!!\n");
	}else{
		printf("##APERTE O BOTÃO DE DECOLAGEM##\n");
		scanf("%d",&permitir);
		if(permitir==1){
		printf("3,2,1 VAII!!\n");
			}
		}
	}
}
 
 //FUNCAO EXPLODIR FOGUETE
 void explodir_foguete(int explodir){
 	printf("###KBOOOM###\n");
			printf("Você explodiu o foguete, lista dos que vieram a óbito:\n %s",nome);
			for(i=1;i<3;i++){
				printf("\n %s",nomes_tripulantes[i]);
			}	
			printf("\n");
 }
 
 //FUNÇÃO DE PONTOS
 void pontos( int visualizar){
 	printf("\nSeu progresso no jogo:\n\n");
 	
 		printf("Você perdeu "); vidaperdida=100-vida; printf("%d",vidaperdida); printf(" pontos de vida\n\n");
		printf("Você foi picado por cobras %d",cobra); printf(" vez(es)\n\n");
		printf("Você foi mordido por jacarés %d",jacare); printf(" vez(es)\n\n"); 
		printf("Você caiu em buracos %d",cobra); printf(" vez(es)"); 	
	 
 }

//FUNÇÃO COBRA
void funcao_cobra(int func_cobra){
	  	cobra++;
	  	printf("voce foi picado pela cobra... e perdeu 5 pontos de vida \n");
	  	vida = vida-5;	
		printf("Sua vida e de:\n");
        printf("%d",vida);	printf("\n"); 
}	

//FUNÇÃO JACARE
void funcao_jacare(int func_jacare){
	  	jacare++;
	  	printf("voce foi mordido pelo jacaré... e perdeu 7 pontos\n");
	  	vida = vida-7;
		printf("Sua vida e de:\n");
        printf("%d",vida);	printf("\n");		 
}

//FUNÇÃO BURACO
void funcao_buraco(int func_buraco){
	  	buraco++;
	  	printf("voce caiu no buraco... e perdeu 6 pontos\n");
	  	vida = vida-6;
	    printf("Sua vida e de:\n");
        printf("%d",vida);	printf("\n"); 		 
}
	

int main (){

setlocale(LC_ALL, "Portuguese");


printf("***Administração Nacional de Aeronáutica e Espaco do Brasil***\n");
printf("Olá, astronauta, bem vindo a central da ANAE, antes do foguete ANTARES BRASILEIRO decolar nos diga o nome dos 3 tripulantes:\n\n ");

printf("Primeiro vamos começar com o líder, que é você, qual o seu nome?\n");
scanf("%s",&nome);

printf("Agora digite o nomes dos outros 2 tripulantes:\n");

	for(i=1;i<3;i++){	
	printf("Digite o nome do %d", i); printf(" tripulante: ");
	scanf("%s",&nomes_tripulantes[i]);
}
		
	printf("Tudo pronto, vamos começar!\n\n %s",nome); printf(", precisamos que você escolha uma dessas opções para começar a missão,");
	printf("Aperte:\n1 para Permitir decolagem\n2 para explodir foguete\n3 para Não permitir decolagem.\n");
	scanf("%d",&opcoes);
	
	switch(opcoes){
		case 1:
			printf("3,2,1 VAII!!\n");
		break;
		
		case 2:
			explodir_foguete(explodir);		
		break;
		
		case 3:
			printf("SAIAM DO FOGUETE!!!");
			break;
		
		default:
			printf("Você apertou uma opção que não existe");							
	}
	
		//PLANETA C
	printf("Você chegou ao planeta C, digite a senha do planeta C para ter permissão para pousar:\n");
	scanf("%d",&C);
	
	while (C !=4321){
		printf("Digite a senha novamente:");
		scanf("%d",&C);
	}
	  if (C=4321){
	  	printf("***Permissão concedida***"" \n");
	  }
	  printf("Voce avistou um lago e la esta o DNA, so que no caminho voce encontrou uma cobra e ira desafia-la\n");
	  printf("Resolva a seguinte questao:\n");
	
	  do{
	 	printf("Qual e o resultado de 2+2?\n");
	    scanf("%d",&resultado);
	    if(resultado!=4){
	  	funcao_cobra(func_cobra);
	  		}else{
				  printf("voce acertou um soco na cobra!\n");
			  } 
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=4);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
	 printf("\nProxima pergunta\n");
	 
	 do{
	 	printf("Qual e o resultado de 4+4?\n");
	    scanf("%d",&resultado);
	    if(resultado!=8){
	  	funcao_cobra(func_cobra);
	  		}else{
			  	printf("\nvoce acertou um chute na cobra!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=8);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nUltima pergunta:\n");
 
        do{
	 	printf("Qual e o resultado de 8+8?\n");
	    scanf("%d",&resultado);
	    if(resultado!=16){
	  	funcao_cobra(func_cobra);
	  		}else{
			  	printf("\nvoce segurou na cabeça da cobra e a jogou muito longe!\n\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=16);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
	
        printf("\n\nParabens voce conseguiu passar da cobra \n");
	
		printf("Você chegou ao lago... mergulhou e pegou o DNA.\n");
			
		for(i=0;i<j+4;i++){
			dnaemprocesso[i]=c[i];
			}
			printf("Você voltou para sua nave, agora vamos para o planeta CSS\n");
			
			decolar(opcoes);
			
		//PLANETA CSS	
	printf("Você chegou ao planeta CSS, digite a senha do planeta CSS para ter permissão para pousar:\n");
	scanf("%d",&CSS);
	
	while (CSS != 6542){
		printf("Digite a senha novamente:");
		scanf("%d",&CSS);
	}
	  if (CSS=6542){
	  	printf("***Permissão concedida***"" \n");
	  }
	  printf("Voce avistou um lago e la esta o DNA, so que no caminho voce encontrou uma jacare e ira desafia-lo\n");
	  printf("Resolva a seguinte questao:\n");	
	
	  do{
	 	printf("Qual e o resultado de 10-8?\n");
	    scanf("%d",&resultado);
	    if(resultado!=2){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce esquivou da mordida do jacare!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=2);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
	 printf("\nProxima pergunta\n");
	 
	 do{
	 	printf("Qual e o resultado de 32-24?\n");
	    scanf("%d",&resultado);
	    if(resultado!=8){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce subiu em uma arvore!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=8);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nUltima pergunta:\n");
      
        do{
	 	printf("Qual e o resultado de 56-40?\n");
	    scanf("%d",&resultado);
	    if(resultado!=16){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce jogou uma pedra na cabeça do jacare e o jacare desmaiou!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=16);
	   
	    printf("\nSua vida e de:\n");
        printf("%d",vida);
        
        printf("\nParabens voce conseguiu passar do jacare =D\n");
		
		printf("Você chegou ao lago... mergulhou e pegou o DNA.\n");
			int x=0;
				j=4;
		for(i=4;i<j+4;i++){
				dnaemprocesso[i]=css[x];
				x++;
			}
			printf("Você voltou para sua nave, agora vamos para o planeta HTML\n");
			
			decolar(opcoes);
	

	//PLANETA HTML
		printf("Você chegou ao planeta HTML, digite a senha do planeta HTML para ter permissão para pousar:\n");
	scanf("%d",&HTML);
	
	while (HTML != 9876){
		printf("Digite a senha novamente:");
		scanf("%d",&HTML);
	}
	  if (HTML=9876){
	  printf("***Permissão concedida***"" \n");
	  }
	  printf("Voce avistou um lago e la esta o DNA, so que no caminho voce encontrou um buraco.\n");
	  printf("Para que voce não caia no buraco...\n");
	  printf("Resolva a seguinte questao:\n");
	  
	  do{
	 	printf("Qual e o resultado de 12+88?\n");
	    scanf("%d",&resultado);
	    if(resultado!=100){
	  	funcao_buraco(func_buraco);
	  		}else{
			  	printf("\no buraco nao era tao grande... então voce pulou o buraco!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes);
			    explodir_foguete(explodir);
			  	printf("==============================================================================================\n"); 
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=100);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
	 printf("\nProxima pergunta\n");
	 
	 do{
	 	printf("Qual e o resultado de 80/2?\n");
	    scanf("%d",&resultado);
	    if(resultado!=40){
	    funcao_buraco(func_buraco);
	  		}else{
			  	printf("\nvoce avistou uma passagem do lado do buraco... então voce apenas passou por ela!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes);
				explodir_foguete(explodir);
			  	printf("==============================================================================================\n"); 
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=40);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nUltima pergunta:\n");
        
        do{
	 	printf("Qual e o resultado de 25+25?\n");
	    scanf("%d",&resultado);
	    if(resultado!=50){
	    funcao_buraco(func_buraco);
	  		}else{
			  	printf("\nvoce também pulou esse buraco!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes);
				explodir_foguete(explodir);
			  	printf("==============================================================================================\n"); 
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=50);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
    
        printf("\nParabens voce conseguiu passar do buraco =D\n");
		
		printf("Você chegou ao lago... mergulhou e pegou o DNA.\n");
			x=0;
			j=8;
			for(i=8;i<j+4;i++){
				dnaemprocesso[i]=html[x];
				x++;
			}
			printf("Você voltou para sua nave, agora vamos para o planeta JAVA\n");
			
			decolar(opcoes);	
		
		//PLANETA JAVA	
		printf("Você chegou ao planeta JAVA, digite a senha do planeta JAVA para ter permissão para pousar:\n");
	scanf("%d",&JAVA);
	
	while (JAVA != 1234){
		printf("Digite a senha novamente:");
		scanf("%d",&JAVA);
	}
	  if (JAVA=1234){
	  	printf("***Permissão concedida***"" \n");;
	  }
	  printf("Voce avistou um lago e la esta o DNA, so que no caminho voce encontrou um jacare.\n");
	  printf("Resolva a seguinte questao:\n");	
	
	   do{
	 	printf("Qual e o resultado de 1000/10?\n");
	    scanf("%d",&resultado);
	    if(resultado!=100){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce esquivou da mordida do jacare!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=100);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
	 printf("\nProxima pergunta\n");
	 
	  do{
	 	printf("Qual e o resultado de 20*2?\n");
	    scanf("%d",&resultado);
	    if(resultado!=40){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce subiu em uma arvore!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes);
				explodir_foguete(explodir);
			  	printf("==============================================================================================\n"); 
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=40);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nUltima pergunta:\n");
     
        do{
	 	printf("Qual e o resultado de 100/2?\n");
	    scanf("%d",&resultado);
	    if(resultado!=50){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce jogou uma pedra na cabeça do jacare e o jacare desmaiou!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes);
				explodir_foguete(explodir);
			  	printf("==============================================================================================\n"); 
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=50);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nParabens voce conseguiu passar do jacare \n");
		
			
		printf("Você chegou ao lago... mergulhou e pegou o DNA.\n");
			x=0;
			j=12;
			for(i=12;i<j+4;i++){
				dnaemprocesso[i]=java[x];
				x++;
			}
			printf("Você voltou para sua nave, agora vamos para o planeta JAVASCRIPT\n");
			
			decolar(opcoes);			
				
			//PLANETA JAVASCRIPT	
	printf("Você chegou ao planeta JAVASCRIPT, digite a senha do planeta JAVASCRIPT para ter permissão para pousar:\n");
	scanf("%d",&JAVASCRIPT);
	
	while (JAVASCRIPT != 5678){
		printf("Digite a senha novamente:");
		scanf("%d",&JAVASCRIPT);
	}
	  if (JAVASCRIPT=5678){
	  	  	printf("***Permissão concedida***"" \n");
	  }
	  printf("Voce avistou um lago e la esta o DNA, so que no caminho voce encontrou uma cobra e ia desafia-lo.\n");
	  printf("Resolva a seguinte questao:\n");
	  	
	  do{
	 	printf("Qual e o resultado de 75+15?\n");
	    scanf("%d",&resultado);
	    if(resultado!=90){
	  	funcao_cobra(func_cobra);
	  		}else{
			  	printf("voce acertou um soco na cobra!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes);
				explodir_foguete(explodir);
			  	printf("==============================================================================================\n"); 
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=90);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
	 printf("\nProxima pergunta\n");
 
	 do{
	 	printf("Qual e o resultado de 35+45?\n");
	    scanf("%d",&resultado);
	    if(resultado!=80){
	  	funcao_cobra(func_cobra);
	  		}else{
			  	printf("\nvoce acertou um chute na cobra!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes);
				explodir_foguete(explodir);
			  	printf("==============================================================================================\n"); 
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=80);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nUltima pergunta:\n");
      
        do{
	 	printf("Qual e o resultado de 110-40?\n");
	    scanf("%d",&resultado);
	    explodir_foguete(explodir);
		printf("==============================================================================================\n");
	    if(resultado!=70){
	  	funcao_cobra(func_cobra);
	  		}else{
			  	printf("\nvoce segurou na cabeça da cobra e a jogou muito longe!\n\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=70);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
       
      	printf("\nParabens voce conseguiu passar da cobra \n");
	
		printf("Você chegou ao lago... mergulhou e pegou o DNA.\n");
			x=0;
			j=16;
			for(i=16;i<j+4;i++){
				dnaemprocesso[i]=javascript[x];
				x++;
			}
			printf("Você voltou para sua nave, agora vamos para o planeta PYTHON\n");
			
			decolar(opcoes);	
				
	//PLANETA PYTHON			
	printf("Você chegou ao planeta PYTHON, digite a senha do planeta PYTHON para ter permissão para pousar:\n");
	scanf("%d",&PYTHON);
	
	while (PYTHON != 2456){
		printf("Digite a senha novamente:");
		scanf("%d",&PYTHON);
	}
	  if (PYTHON=2456){
	   	printf("***Permissão concedida***"" \n");
	  }
	  printf("Voce avistou um lago e la esta o DNA, so que no caminho voce encontrou um buraco.\n");
	  printf("Para que voce não caia no buraco...\n");
	  printf("Resolva a seguinte questao:\n");
	
	  do{
	 	printf("Qual e o resultado de 6*6?\n");
	    scanf("%d",&resultado);
	    if(resultado!=36){
	    funcao_buraco(func_buraco);
	  		}else{
			  	printf("\no buraco nao era tao grande... então voce pulou o buraco!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=36);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
	 printf("\nProxima pergunta\n");

	 do{
	 	printf("Qual e o resultado de 9*9?\n");
	    scanf("%d",&resultado);
	    if(resultado!=81){
	    funcao_buraco(func_buraco);
	  		}else{
			  	printf("\nvoce avistou uma passagem do lado do buraco... então voce apenas passou por ela!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=81);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nUltima pergunta:\n");
       
       do{
	 	printf("Qual e o resultado de 3*3?\n");
	    scanf("%d",&resultado);
	    if(resultado!=9){
	    funcao_buraco(func_buraco);
	  		}else{
			  	printf("\nvoce também pulou esse buraco!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=9);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
    
        printf("\nParabens voce conseguiu passar do buraco =D\n");
			
		printf("Você chegou ao lago... mergulhou e pegou o DNA.\n");
			x=0;
			j=20;
			for(i=20;i<j+4;i++){
				dnaemprocesso[i]=python[x];
				x++;
			}
			printf("Você voltou para sua nave, agora vamos para o planeta TYPESCRIPT\n");
			
			decolar(opcoes);	
					
		//PLANETA TYPESCRIPT			
	printf("Você chegou ao planeta TYPESCRIPT, digite a senha do planeta TYPESCRIPT para ter permissão para pousar:\n");
	scanf("%d",&TYPESCRIPT);
	
	while (TYPESCRIPT != 8765){
		printf("Digite a senha novamente:");
		scanf("%d",&TYPESCRIPT);
	}
	  if (TYPESCRIPT=8765){
	  	  	printf("***Permissão concedida***"" \n");
	  }
	  printf("Voce avistou um lago e la esta o DNA, so que no caminho voce encontrou um jacare e ira desafia-lo.\n");
	  printf("Resolva a seguinte questao:\n");	 
	
	  do{
	 	printf("Qual e o resultado de 226/2?\n");
	    scanf("%d",&resultado);
	    if(resultado!=113){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce esquivou da mordida do jacare!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=113);
	  
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
	 printf("\nProxima pergunta\n");

	 do{
	 	printf("Qual e o resultado de 15*3?\n");
	    scanf("%d",&resultado);
	    if(resultado!=45){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce subiu em uma arvore!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=45);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nUltima pergunta:\n");
       
        do{
	 	printf("Qual e o resultado de 400*2?\n");
	    scanf("%d",&resultado);
	    if(resultado!=800){
	  	funcao_jacare(func_jacare);
	  		}else{
			  	printf("\nvoce jogou uma pedra na cabeça do jacare e o jacare desmaiou!\n");
			  }
			  if(vida<1){
			  	printf("==============================================================================================");
			  	printf("\nQue pena, voce chegou a 0 pontos de vida. Aperte qualquer tecla para explodir o foguete!");
			  	scanf("%d ",&opcoes); 
			  	explodir_foguete(explodir);
			  	printf("==============================================================================================\n");
			   pontos(visualizar);
			   exit(0);
			  }
	  }while(resultado !=800);
	   
	    printf("Sua vida e de:\n");
        printf("%d",vida);
        
        printf("\nParabens voce conseguiu passar do buraco =D\n");
		
		printf("Você chegou ao lago... mergulhou e pegou o DNA.\n");
			x=0;
			j=24;
			for(i=24;i<j+4;i++){
				dnaemprocesso[i]=typescript[x];
				x++;
			}
	
	printf("Você voltou para sua nave, e conferiu o DNA\n.\n.\n.\n");
	if(dnacorreto==dnaemprocesso){
		printf("Parabéns, você conseguir completar o DNA, volte para a Terra");
	}
	printf("Aperte 4 para voltar à Terra: ");
	scanf("%d",&opcoes);
	
	do{
	
	if(opcoes==4){
		printf("Você voltou a Terra com o DNA completo e salvou a Terra do COVID-19\n Parabéns %s",nome);
		printf(", todos saúdam seu nome.");
	}else{
		printf("Aperte a opção voltar para Terra: ");
	}
	}while(opcoes!=4);
	
	pontos(visualizar);
	
	return 0;

}

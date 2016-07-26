#include <stdio.h>
#include <conio.h>
#include <string.h>

char name1[15],name2[15],j=0,a[9][13],i=0,choice,str[10];
int  v[9],p1=0,p2=0,points1=0,points2=0,s=0;
void menu();
void HELP();
void About();
char player1();
char player2();
int main(void) 

{
	printf("Introdu numele primului jucator : "); scanf("%s",name1);
	printf("\r\n\nIntrodu numele la al doilea jucator : "); scanf("%s",name2);
	menu();
	textcolor(10);
	clrscr();
	
start:	clrscr();

	str[9]='\0';
 	for(i=0;i<9;i++)
 	 str[i]=0; s=0;

	strcpy(a[0],"    |   |   ");
	strcpy(a[1],"  1 | 2 | 3 ");
	strcpy(a[2]," ___|___|___");
	strcpy(a[3],"    |   |   ");
	strcpy(a[4],"  4 | 5 | 6 ");
	strcpy(a[5]," ___|___|___");
	strcpy(a[6],"    |   |   ");
	strcpy(a[7],"  7 | 8 | 9 ");
	strcpy(a[8],"    |   |   ");

	for(i=0;i<9;i++)
	v[i]=i+100;


	for(j=0;j<9;j++) 
		{ 
			
		clrscr(); 

		printf("\r\n\n");
		for(i=0;i<9;i++)
		puts(a[i]);

	if( (v[0]==v[3] && v[0]==v[6])  || (v[1]==v[4] && v[1]==v[7]) || (v[2]==v[5] && v[2]==v[8]) ) 
	{

		if(j%2!=0)
		{cprintf("   A cistigat %s \r\n" ,name1); p1=p1+1; getch(); goto fin;}
		else {cprintf("   A cistigat %s \r\n" ,name2); p2=p2+1; getch(); goto fin;}

	}

	else if( (v[0]==v[1] && v[0]==v[2]) || (v[3]==v[4] && v[3]==v[5]) || (v[6]==v[7] && v[6]==v[8]) ) 
	{
		
		if(j%2!=0)
		{cprintf("   A cistigat %s \r\n" ,name1); p1=p1+1; getch(); goto fin;}
		else {cprintf("   A cistigat %s \r\n" ,name2); p2=p2+1; getch(); goto fin;}

	}

	else if( (v[0]==v[4] && v[0]==v[8])	|| (v[2]==v[4] && v[2]==v[6]) )

	{
		
		if(j%2!=0)
		{cprintf("   A cistigat %s \r\n" ,name1); p1=p1+1; getch(); goto fin;}
		else {cprintf("   A cistigat %s \r\n" ,name2); p2=p2+1; getch(); goto fin;}

	}

    if( (j+1)%2!=0 ) player1(); else  player2(); 

    if(j==8) 
	{
	clrscr();
	printf("\r\n\n");
	for(i=0;i<9;i++)
	puts(a[i]);
	cprintf("\r\n\n EGALITATE !");
	getch();
	goto fin;
	}
	}
fin : 
		system("cls");
		printf("Scor: %d - %d",p1,p2);
		getch();
		goto start;	

}

char player1()

{
	printf("\r\n\n Acum merge "); cprintf("%s",name1); 
repeat1: printf("\r\n\n Introdu numarul de la tastatura pentru a alege casuta ");
	rechoice1: choice=getch();

 switch(choice)
 {
 case '1' :  if(strchr(str,'1')==0) {a[1][2]='X'; v[0]=1; str[s]='1'; s=s+1; break;} else goto repeat1;
 case '2' :  if(strchr(str,'2')==0) {a[1][6]='X'; v[1]=1; str[s]='2'; s=s+1; break;} else goto repeat1;
 case '3' :  if(strchr(str,'3')==0) {a[1][10]='X'; v[2]=1; str[s]='3';s=s+1; break;} else goto repeat1;
 case '4' :  if(strchr(str,'4')==0) {a[4][2]='X';  v[3]=1; str[s]='4';s=s+1; break;} else goto repeat1;
 case '5' :  if(strchr(str,'5')==0) {a[4][6]='X';  v[4]=1; str[s]='5';s=s+1; break;} else goto repeat1;
 case '6' :  if(strchr(str,'6')==0) {a[4][10]='X';  v[5]=1; str[s]='6';s=s+1; break;} else goto repeat1;
 case '7' :  if(strchr(str,'7')==0) {a[7][2]='X';  v[6]=1;  str[s]='7';s=s+1; break;} else goto repeat1;
 case '8' :  if(strchr(str,'8')==0) {a[7][6]='X';  v[7]=1;  str[s]='8';s=s+1; break;} else goto repeat1;
 case '9' :  if(strchr(str,'9')==0) {a[7][10]='X';  v[8]=1;  str[s]='9';s=s+1; break;} else goto repeat1;
 default : goto rechoice1;
 }
}

char player2()

{
	printf("\r\n\n Acum merge "); cprintf("%s",name2);;
repeat2:	printf("\r\n\n Introdu numarul de la tastatura pentru a alege casuta ");
	

rechoice2:   choice=getch();

 switch(choice)
 {
 case '1' :  if(strchr(str,'1')==0) {a[1][2]='O'; v[0]=0; str[s]='1'; s=s+1; break;} else goto repeat2;
 case '2' :  if(strchr(str,'2')==0) {a[1][6]='O'; v[1]=0; str[s]='2'; s=s+1; break;} else goto repeat2;
 case '3' :  if(strchr(str,'3')==0) {a[1][10]='O'; v[2]=0; str[s]='3';s=s+1; break;} else goto repeat2;
 case '4' :  if(strchr(str,'4')==0) {a[4][2]='O';  v[3]=0; str[s]='4';s=s+1; break;} else goto repeat2;
 case '5' :  if(strchr(str,'5')==0) {a[4][6]='O';  v[4]=0; str[s]='5';s=s+1; break;} else goto repeat2;
 case '6' :  if(strchr(str,'6')==0) {a[4][10]='O';  v[5]=0; str[s]='6';s=s+1; break;} else goto repeat2;
 case '7' :  if(strchr(str,'7')==0) {a[7][2]='O';  v[6]=0;  str[s]='7';s=s+1; break;} else goto repeat2;
 case '8' :  if(strchr(str,'8')==0) {a[7][6]='O';  v[7]=0;  str[s]='8';s=s+1; break;} else goto repeat2;
 case '9' :  if(strchr(str,'9')==0) {a[7][10]='O';  v[8]=0;  str[s]='9';s=s+1; break;} else goto repeat2;
 default : goto rechoice2;
 
}
}
void menu()
{
	system("cls");
	printf("\r\n\t\t\t\t\t");
	textcolor(12);
	cprintf("X");
	printf("-");
	textcolor(10);
	cprintf("O");

	printf("\r\n\n 1-HELP");
	printf("\r\n\n 2-Despre Program");
	printf("\r\n\n");
	cprintf(" ENTER-");
	printf("Start joc");


pas :	choice=getch();
	
	switch(choice)
	{
		case '1' : HELP(); break;
		case '2' : About(); break;
		case 13  : return; break;
		default : printf("Alegere incorecta!"); goto pas; break;

	}
}

void About()
{
	system("cls");
	printf("\r\n\t\t\t\t\t");
	cprintf("Despre program\r\n\n");
	printf("Creat in limbajul C\r\n");
	printf("Autor: Bitca Ernest (student UTM FCIM)\r\n");
	printf("Anul de editie : 2016\r\n");
	printf("Versiunea : 1.1\r\n");
	printf("\r\n\n Pentru a te intoarce la meniu , tasteaza un buton...");
	getch();

	menu();

}
void HELP()
{

	system("cls");
	printf("\r\n\t\t\t\t\t");
	cprintf("HELP\r\n\n");
	printf("Tastale lucratoare : 1-9\r\n");
	printf("Joaca reprezinta X-O clasic\r\nScopul este de a atinge 3 de X sau O pe diagonala sau linie sau coloana");
	printf("\r\nJucatorul care cistiga , acumuleaza un punct");
	printf("\r\nCistiga acel jucator care are mai multe puncte");
	printf("\r\nSUCCESE IN JOC !");
	printf("\r\n\n Pentru a te intoarce la meniu , tasteaza un buton...");
	getch();
	menu();

}



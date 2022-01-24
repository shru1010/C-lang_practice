#include<stdio.h>
#include<stdlib.h>
int checkForWin();
int displayBoard();
void markBoard(char mark);
char mark;
//initializing the array for game
char cord[9]={'1','2','3','4','5','6','7','8','9'};
int choice,player;
int main()
{
//	system("clear");
	int i;
	char mark;
	player=1;
	printf("LETS PLAYYYYYYYYYYYYYYYYYYYYY!!!!!!!!!!!!\n");
        printf("Player one is X and Player 2 is O");
        printf("READYYYYY!!\n");
        printf("1....\n");
        printf("2....\n");
        printf("3....\n");
        printf("Start game!!\n");

	do{
		displayBoard();
		player=(player%2)?1:2;
		printf("Enter number %d\n",player);
		scanf("%d",&choice);
		mark=(player==1)?'X':'O';
		markBoard(mark);
		i=checkForWin();
		player++;
	}while(i==-1);

    if (i == 1){
	displayBoard();
        printf("==>\aPlayer %d win ", --player);
	}
    else {
        displayBoard();
	printf("==>\aGame draw");
	}
    return 0;
}
int displayBoard(){
//layout for game
	system("clear");
	printf("\n");
	printf("%c|%c|%c\n",cord[0],cord[1],cord[2]);
	printf("_|_|_\n");
	printf("%c|%c|%c\n",cord[3],cord[4],cord[5]);
	printf("_|_|_\n");
	printf("%c|%c|%c\n",cord[6],cord[7],cord[8]);
	printf("\n");
}
//the play of the player
void markBoard(char mark)
{
	if(choice==1 && cord[0]=='1')
		cord[0]=mark;
	else if(choice==2 && cord[1]=='2')
                cord[1]=mark;
	else if(choice==3 && cord[2]=='3')
                cord[2]=mark;
        else if(choice==4 && cord[3]=='4')
                cord[3]=mark;
        else if(choice==5 && cord[4]=='5')
                cord[4]=mark;
        else if(choice==6 && cord[5]=='6')
                cord[5]=mark;
        else if(choice==7 && cord[6]=='7')
                cord[6]=mark;
        else if(choice==8 && cord[7]=='8')
                cord[7]=mark;
        else if(choice==9 && cord[8]=='9')
                cord[8]=mark;
	else
	{
		printf("Invalid");
		player--;
		getchar();
	}
}
//check if there is a win
int checkForWin()
{
	int returns=0;
	if(cord[0]==cord[1] && cord[1]==cord[2])//123
		returns=1;
	else if(cord[3]==cord[4] && cord[4]==cord[5])//456
		returns=1;
	else if(cord[6]==cord[7] && cord[7]==cord[8])//789
                returns=1;
	else if(cord[0]==cord[3] && cord[3]==cord[6])//147
                returns=1;
	else if(cord[1]==cord[4] && cord[4]==cord[7])//258
		returns=1;
	else if(cord[2]==cord[5] && cord[5]==cord[8])//369
                returns=1;
	else if(cord[0]==cord[4] && cord[4]==cord[8])//159
                returns=1;
	else if(cord[2]==cord[4] && cord[4]==cord[6])//357
                returns=1;
        else if(cord[0]!='1' && cord[1]!='2' && cord[2]!='3' && cord[3]!='4' && cord[4]!='5' && cord[5]!='6' && cord[6]!='7' && cord[7]!='8' && cord[8]!='9')
                returns=0;
	else
		returns=-1;
	
	return returns;
}



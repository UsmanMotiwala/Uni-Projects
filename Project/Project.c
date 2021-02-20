#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void GK();
void IQ();
void Maths();
void Phy();
void Chem();
void Eng();
void quizgame();
int point=0;
char choice=' ',answer=' ';


void main(){
int i=0,m=1;
    printf("_____________________________________");
    printf("\n\t\tHey");
    printf("\n\t\tWelcome");
    printf("\n\t\tTo The");
    printf("\n\t\tGame");
    printf("\n_____________________________________");
    printf("\n*************************************");
    printf("\n!!! Test Your KNOWLODEGE !!!");
    printf("\n*************************************");
     menu:
    printf("\n\t -> S to start the game");
    printf("\n\t -> Q to quit Game");
    printf("\n\t -> V to View Total Score");
    answer=toupper(getch());
    if (answer=='S')
    {
       quizgame();
    }
    else if (answer=='V')
    {
        goto score;
    }
    
    else
    {
        system("cls");
        printf("\n\t\t_______________");
        printf("\n\t\tThe End");
        printf("\n\t\t***************");
        printf("\n\n\t\tProject By\n\n\t\tUsman Saeed Motiwala\n\t\tAbdul Rahman\n\t\tZeeshan");
        printf("\n\t\t***************");
        exit(0);
    }


score:
printf("\n*/**/**/**/**/**/**/**/**/**/**/*");
printf("\n\n Your total score is %d",point);
printf("\n*/**/**/**/**/**/**/**/**/**/**/*");
goto menu;
}

void quizgame(){
  
system("cls");
printf("\t\t***!!!! INSTRUCTION ***!!!!");
printf("\nThis quiz consist of choice-based questions A,B,C and D\n Press A,B,C or D to answer. ");
printf("\nAfter every answer press any key to continue.");
printf("\nYou will answer the first 5 questions then you will have the choice to continue or end.");
printf("\nIn the end your points will be calculated and displayed.");
printf("\n\n*!*!*!*!* Good Luck And Enjoy :) *!*!*!*!*");
printf("\nEnter any key to continue......");
getch();

system("cls");
printf("\n\nSelect the subject from the following");
printf("\n\nFor Math enter M");
printf("\n\nFor English enter E");
printf("\n\nFor Physics enter P");
printf("\n\nFor Chemistry enter C");
printf("\n\nFor IQ enter I");
printf("\n\nFor general knowledge enter G");
printf("\nTo go back to Menu press B");
printf("\n");

while(choice!='M'||choice!='E'||choice!='P'||choice!='C'||choice!='I'||choice!='G')
{
choice=toupper(getch());

if (choice=='M')
{
    Maths();
}
else if (choice=='E')
{
	Eng();
}
else if (choice=='P')
{
	Phy();
}
else if (choice=='C')
{
	Chem();
}
else if (choice=='I')
{
	IQ();
}
else if (choice=='G')	
{
	GK();
}    
else if (choice=='B')
{
    main();
}

else
{
    printf("\ninvalid selection");
    printf("\nTo go to menu. press B.");
}

}


}

void Eng()
{
    static int m=1,i=1;
    
    m=i;
 for (i=m;i<=10;i++)
 { 
       switch(i)
       {
    case 1:
    printf("1.He was almost faint ____ hunger.");
	printf("\n\nA. In \t\tB.With \n\nC.From \t\tD.None");
	answer=toupper(getch());
	if (answer=='B')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\nWrong!!!! the correct answer is B");
        i++;
        getch();
    }
	case 2:
    printf("\n2.He feed ____ flattery.");
	printf("\n\nA. In \t\tB. On \n\nC. From\t\tD. None");
	answer=toupper(getch());
	if(answer=='B')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is B");
        i++;
        getch();
    }

    case 3:
    printf("\n3.To beg the question means:");
	printf("\n\nA.To refer to \t\tB.To take for granted \n\nC.To raise Objections\t\tD.None");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");
        i++;
        getch();
    }
    case 4:
    printf("\n4.I must start ____ down to reach the station in time.");
	printf("\n\nA. In \t\tB. With\n\nC. On\t\tD. At");
	answer=toupper(getch());
	if(answer=='D')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is D");
        i++;
        getch();
    }

        case 5:
    printf("\n5.He is cut ___ partnership.");
	printf("\n\nA.In \t\tB.With \n\nC.Out\t\tD.At");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");
        i++;
        getch();
    }

     printf("\nPress Y to continue\nPress B to change subject\nPress S to get score ");
    answer=toupper(getch());
    if (answer=='Y')
    {
        Eng();
    }
    else if (answer=='B')
    {
        quizgame();
    }

    else
    {
        printf("\nYour current score is %d",point);
    }
     
  
        case 6:
    printf("\n6.Don't let him ___ you.");
	printf("\n\nA. Deceive \t\t\tB. To Deceive \nC. Deceiving \t\tD. None");
	answer=toupper(getch());
	if(answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");
        i++;
        getch();
    }
        case 7:
    printf("\n7.I said it ____ his face");
	printf("\n\nA. On \t\tB. To \nC. Upon\t\tD. None");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");
        i++;
        getch();
    }

      case 8:
    printf("\n8.He was not allowed to sit ___ the examination.");
	printf("\n\nA.On\t\t\tB. To \nC. For \t\tD. None");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");
        i++;
        getch();
    }

     case 9:
    printf("\n9.One should be patient ____ bearing misfortune.");
	printf("\n\nA.On\t\tB.With \nC. In \t\tD. None");
	answer=toupper(getch());
	if(answer=='B')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is B");
        i++;
        getch();
    }

     case 10:
    printf("\n10.I have known him ____ a long time");
   
	printf("\n\nA.For\t\tB.With \nC. From \t\tD. Since");
	answer=toupper(getch());
	if(answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");
        i++;
        getch();
    }
  }
 }
 printf("\nYour current score is %d",point);
     printf("\nPress any key to continue......");
     getch();
     quizgame();
}    
  
void Maths(){
    static int m=1,i=1;
    m=i;
    for (i = m; i <=10; i++)
    {
        switch (i)
        {
            case 1:
    printf("\n1.1500 is 8% of which number?.");
	printf("\n\nA. 16000 \t\tB.17750 \n\nC.18750 \t\tD.18850");
    
	answer=toupper(getch());
	if (answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\nWrong!!!! the correct answer is C");
        i++;
        getch();
    }   
	case 2:
    printf("\n2.Nasir bought a book for Rs.80 and sold it for Rs.64.What percentage of loss did he got?.");
	printf("\n\nA. 15 percent \t\tB. 20 percent \n\nC. 18 percent\t\tD. 25percent");
	answer=toupper(getch());
	if(answer=='B')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is B");
        i++;
        getch();
    }

    case 3:
    printf("\n3. 2 + 2 / 2 = ? ");
	printf("\n\nA.2 \t\tB.4 \n\nC.3\t\tD.5");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");
        i++;
        getch();
    }
    case 4:
    printf("\n4.90% of 90 = ?.");
	printf("\n\nA. 12 \t\tB. 40\n\nC. 70\t\tD. 81");
	answer=toupper(getch());
	if(answer=='D')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is D");
        i++;
        getch();
    }

        case 5:
    printf("\n5.Conjugate of 6+3i.");
	printf("\n\nA.-6-3i \t\tB.-6+3i \n\nC.6-3i\t\tD.None");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");
        i++;
        getch();
    }

  printf("\nPress Y to continue\nPress B to change subject\nPress S to get score ");
    answer=toupper(getch());
    if (answer=='Y')
    {
        Maths();
    }
    else if (answer=='B')
    {
        quizgame();
    }

    else
    {
        printf("\nYour current score is %d",point);
    }
     
  

        case 6:
    printf("\n6.A man bought a flat for Rs 8,20,000. He borrowed 55% of this money from a bank. How much money did he borrowed from the bank?");
	printf("\n\nA. 4,51,000 \t\t\tB. 4,52,000 \nC. 4,53,000 \t\tD. 4,54,000");
	answer=toupper(getch());
	if(answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");
        i++;
        getch();
    }
        case 7:
    printf("\n7.A primary school had an enrollment of 1250 pupils in January 1990. In January 2000 the enrollment was 2400. What was the percentage increase in the enrollment?");
	printf("\n\nA. 120 percent \t\tB. 95 percent\nC. 90 percent\t\tD. 92 percent");
	answer=toupper(getch());
	if(answer=='D')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is D");
        i++;
        getch();
    }

      case 8:
    printf("\n8.The number, whose 7% is 42,is.");
	printf("\n\nA.300\t\t\tB. 400 \nC. 500 \t\tD. 600");
	answer=toupper(getch());
	if(answer=='D')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is D");
        i++;
        getch();
    }

     case 9:
    printf("\n9.Sadiq purchased a plot for Rs. 8,000. He sells the plot to Abid at a profit of 20%. Abid in turn sells that plot to Arif at a loss of 20%.The plot costs Arif?.");
	printf("\n\nA.12,000\t\tB.10,000 \nC. 8,670 \t\tD. 7,680");
	answer=toupper(getch());
	if(answer=='D')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is D");
        i++;
        getch();
    }

     case 10:
    printf("\n10.In the exam 45% students failed and 550 students were successful. The total number of students who appeared in the exam were?");
	printf("\n\nA.1000\t\tB.900 \nC. 1500 \t\tD. 800");
	answer=toupper(getch());
	if(answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");
        i++;
        getch();
    }


        }

    }
     printf("\nYour current score is %d",point);
     printf("\nPress any key to continue......");
     getch();
     quizgame();
    
}

void Phy(){
    static int m=1,i=1;
    m=i;
    for (i = m; i <=10; i++)
    {
        switch (i)
        {
          case 1:
        printf("\n1.Radiocarbon is produced in the atmosphere as a result of");
	    printf("\n\nA. collision between fast neutrons and nitrogen nuclei present in the atmosphere \t\tB.action of ultraviolet light from the sun on atmospheric oxygen \n\nC.action of solar radiations particularly cosmic rays on carbon dioxide present in the atmosphere \t\tD.lightning discharge in atmosphere");
    
	    answer=toupper(getch());
	    if (answer=='A')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is A");
        i++;
        getch();
         }   

        case 2:
        printf("\n2.It is easier to roll a stone up a sloping road than to lift it vertical upwards because");
	    printf("\n\nA. work done in rolling is more than in lifting \t\tB.work done in lifting the stone is equal to rolling it \n\nC.work done in both is same but the rate of doing work is less in rolling\t\tD.work done in rolling a stone is less than in lifting it");
    
	    answer=toupper(getch());
	    if (answer=='D')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is D");
        i++;
        getch();
         }  

         case 3:
        printf("\n3.The absorption of ink by blotting paper involves");
	    printf("\n\nA. viscosity of ink \t\tB.capillary action phenomenon \n\nC.diffusion of ink through the blotting\t\tD.siphon action");
    
	    answer=toupper(getch());
	    if (answer=='B')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is B");
        i++;
        getch();
         }   
        
         case 4:
        printf("\n4.Siphon will fail to work if");
	    printf("\n\nA. the densities of the liquid in the two vessels are equal \t\tB.the level of the liquid in the two vessels are at the same height \n\nC.both its limbs are of unequal length\t\tD.the temperature of the liquids in the two vessels are the same");
    
	    answer=toupper(getch());
	    if (answer=='B')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is B");
        i++;
        getch();
         }   

         case 5:
        printf("\n5.Large transformers, when used for some time, become very hot and are cooled by circulating oil. The heating of the transformer is due to");
	    printf("\n\nA. the heating effect of current alone \t\tB.hysteresis loss alone \n\nC.both the heating effect of current and hysteresis loss\t\tD.intense sunlight at noon");
    
	    answer=toupper(getch());
	    if (answer=='C')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is C");
        i++;
        getch();
         }  

          printf("\nPress Y to continue\nPress B to change subject\nPress S to get score ");
        answer=toupper(getch());
        if (answer=='Y')
        {
            Phy();
        }
        else if (answer=='B')
        {
            quizgame();
        }   

        else
        {
            printf("Your current score is %d",point);
        }

         case 6:
        printf("\n6.Nuclear sizes are expressed in a unit named");
	    printf("\n\nA. Fermi \t\tB.angstrom \n\nC.newton\t\tD.tesla");
    
	    answer=toupper(getch());
	    if (answer=='A')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is A");
        i++;
        getch();
         } 

        case 7:
        printf("\n7.Light year is a unit of");
	    printf("\n\nA. time\t\tB.distance \n\nC.Light\t\tD.Intensity of light");
    
	    answer=toupper(getch());
	    if (answer=='B')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is B");
        i++;
        getch();
         } 
          case 8:
        printf("\n8.Mirage is due to");
	    printf("\n\nA. unequal heating of different parts of the atmosphere\t\tB.magnetic disturbances in the atmosphere \n\nC.depletion of ozone layer in the atmosphere\t\tD.equal heating of different parts of the atmosphere");
    
	    answer=toupper(getch());
	    if (answer=='A')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is A");
        i++;
        getch();
         } 

         case 9:
        printf("\n9.Light from the Sun reaches us in nearly");
	    printf("\n\nA. 2 minutes\t\tB.4 minutes \n\nC.8 minutes\t\tD.16 minutes");
    
	    answer=toupper(getch());
	    if (answer=='C')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is C");
        i++;
        getch();
         } 

         case 10:
        printf("\n10.Stars appears to move from east to west because");
	    printf("\n\nA. all stars move from east to west\t\tB.the earth rotates from west to east \n\nC.the earth rotates from east to west\t\tD.the background of the stars moves from west to east");
    
	    answer=toupper(getch());
	    if (answer=='C')
        {
		    printf("\ncorrect");
		    point++;
             i++;
            getch();
        }
	    else
         {
		printf("\nWrong!!!! the correct answer is C");
        i++;
        getch();
         } 

        } 
    }
    
    printf("\nYour current score is %d",point);
     printf("\nPress any key to continue......");
     getch();
     quizgame();
}

void Chem(){
    static int m=1,i=1;
    m=i;
    for (i = m; i <=10; i++)
    {
        switch (i)
        {
         case 1:
        printf("\n1.The father of modern chemistry is");
        printf("\n\nA.Priestley\t\tB.Lavoisier\nC.Dalton\t\tD.Mendeleeff");
	    answer=toupper(getch());
        if(answer=='B')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is B");   
            i++;
            getch();
        }  
          case 2:
        printf("\n2.Which one is not metal");
        printf("\n\nA.sulpher\t\tB.Suger\nC.Nitrogen\t\tD.All");
	    answer=toupper(getch());
        if(answer=='D')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is D");   
            i++;
            getch();
        }  

        case 3:
        printf("\n3.Which one is the pure element");
        printf("\n\nA.Glass\t\tB.Cement\nC.Sodium\t\tD.None of these");
	    answer=toupper(getch());
        if(answer=='C')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is C");   
            i++;
            getch();
        }  

        case 4:
        printf("\n4.An element X forms an oxide XO3 What is the valency of X?");
        printf("\n\nA.1\t\tB.2\nC.3\t\tD.6");
	    answer=toupper(getch());
        if(answer=='D')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is D");   
            i++;
            getch();
        }  

          case 5:
        printf("\n5.Which of the following has highest frequency?");
        printf("\n\nA.Cosmic rays\t\tB.x rays\nC.Radio waves\t\tD.Micro waves");
	    answer=toupper(getch());
        if(answer=='A')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is A");   
            i++;
            getch();
        }  

        
    printf("\nPress Y to continue\nPress B to change subject\nPress S to get score ");
    answer=toupper(getch());
    if (answer=='Y')
    {
        Chem();
    }
    else if (answer=='B')
    {
        quizgame();
    }

    else
    {
        printf("Your current score is %d",point);
    }

    case 6:
        printf("\n6.In isotopes the number of neutrons are");
        printf("\n\nA.Same\t\tB.Different\nC.Both\t\tD.None");
	    answer=toupper(getch());
        if(answer=='B')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is B");   
            i++;
            getch();
        }  

           case 7:
        printf("\n7.Which one of the following is not radioactive?");
        printf("\n\nA.Astanine\t\tB.Francium\nC.Tritium\t\tD.Zirconium");
	    answer=toupper(getch());
        if(answer=='D')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is D");   
            i++;
            getch();
        }  

          case 8:
        printf("\n8.The heaviest naturally occurring elements is");
        printf("\n\nA.Thorium\t\tB.Uranium\nC.Mercury\t\tD.Polonium");
	    answer=toupper(getch());
        if(answer=='B')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is B");   
            i++;
            getch();
        }  

          case 9:
        printf("\n9.The maximum number of hydrogen bonds in a H2O molecule is");
        printf("\n\nA.1\t\tB.2\nC.3\t\tD.4");
	    answer=toupper(getch());
        if(answer=='D')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is D");   
            i++;
            getch();
        }  

        case 10:
        printf("\n10.pH value of acidic solution is");
        printf("\n\nA.>7\t\tB.<7\nC.7\t\tD.None");
	    answer=toupper(getch());
        if(answer=='A')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	    else
        {   
		    printf("\n\nWrong!!!! the correct answer is A");   
            i++;
            getch();
        }  



        }
    }
    
    printf("\nYour current score is %d",point);
     printf("\nPress any key to continue......");
     getch();
     quizgame();



}

void GK(){
    static int m=1,i=0;
m=i;
for (i = m; i <=10; i++)



{
    switch (i)
    {
    case 1:
        printf("\n1.Ctrl, Shift and Alt are called .......... keys.");
        printf("\n\nA.Modifier\t\tB.Function\nC.Alphanumeric\t\tD.Adjustment");
	    answer=toupper(getch());
        if(answer=='A')
        {
		    printf("\ncorrect");
		    point++;
            i++;
            getch();
        }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");   
        i++;
         getch();
    }  
        
    case 2:
        printf("\n2.MS-Word is an example of ");
        printf("\n\nA.operating System\t\tB.Processing Device\nC.Application Software\t\tD.Input Device");
	    answer=toupper(getch());
        if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");   
        i++;
         getch();
    }  
       case 3:
        printf("\n3.Fathometer is used to measure ");
        printf("\n\nA.Earthquake\t\tB.Rain Fall\nC.Ocean Depth\t\tD.Sound Intensity");
	    answer=toupper(getch());
        if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");   
        i++;
         getch();
    }   
     case 4:
        printf("\n4.The working principle of a washing machine is ");
        printf("\n\nA.Reverse Osmosis\t\tB.Diffusion\nC.Centrifugation\t\tD.Dialysis");
	    answer=toupper(getch());
    if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");   
        i++;
         getch();
    }   
    
     case 5:
        printf("\n5. Who said, \"Inflation is unjust but deflation is inexpedient. Of the two, deflation is worse\"? ");
        printf("\n\nA. J.M Keynes\t\tB. Amartya Sen\nC. J.G Gurlay\t\tD. J.N Bhagwati");
	    answer=toupper(getch());
        if(answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");   
        i++;
         getch();
    }   

     printf("\nPress Y to continue\nPress B to change subject\nPress S to get score ");
    answer=toupper(getch());
    if (answer=='Y')
    {
        GK();
    }
    else if (answer=='B')
    {
        quizgame();
    }

    else
    {
        printf("\nYour current score is %d",point);
    }
     
      case 6:
        printf("\n6.\"One People, One State, One leader\" was the policy of ");
        printf("\n\nA.Stalin\t\tB.Hitler\nC.Lenin\t\tD.Mussolin");
	    answer=toupper(getch());
        if(answer=='B')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is B");   
        i++;
         getch();
    }   

    case 7:
        printf("\n7.DRDL stands for ");
        printf("\n\nA. Defence Research and Development Laborator\t\tB.Department of Research and Development Laboratory\nC. Differential Research and Documentation Laboratory\t\tD.None of the above");
	    answer=toupper(getch());
        if(answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");   
        i++;
         getch();
    }   

      case 8:
        printf("\n8.Exposure to sunlight helps a person improve his health because ");
        printf("\n\nA.the infrared light kills bacteria in the body\t\tB.resistance power increases\nC.the pigment cells in the skin get stimulated and produce a healthy tan\t\tD. the ultraviolet rays convert skin oil into Vitamin D");
	    answer=toupper(getch());
        if(answer=='D')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is D");   
        i++;
         getch();
    }  
    
        case 9:
        printf("\n9.Bats can fly in the dark because ");
        printf("\n\nA.they have a better vision in the dark \t\tB.the light startles in them\nC.they produce high pitched sounds called ultrasonics \t\tD. none of the above");
	    answer=toupper(getch());
        if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");   
        i++;
         getch();
    }  

    case 10:
        printf("\n10.Which is a green planet in the solar system?");
        printf("\n\nA.Pluto \t\tB.Uranus\nC.Venus\t\tD.Mars");
	    answer=toupper(getch());
    if(answer=='B')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is B");   
        i++;
         getch();
    }  
    


    }

}
    printf("\n\nYour current score is %d",point);
     printf("\n\nPress any key to continue......");
     getch();
     quizgame();
}

void IQ(){

static int m=1,i=1;
m=i;
for (i = m; i <=10; i++)
{
switch(i)
{	
    case 1:
    printf("1.Which number should come next in the pattern?");
	printf("\n37,34,31,28");
	printf("\n\nA. 25 \t\tB.20 \n\nC.26 \t\tD.24");
	answer=toupper(getch());
	if (answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\nWrong!!!! the correct answer is A");
        i++;
        getch();
    }
	case 2:
    printf("\n2.Find the answer that best completes the analogy:");
    printf("\nBook is to Reading as Fork is to:");
	printf("\n\nA. Drawing \t\tB. Writing \n\nC. Stirring\t\tD. Eating");
	answer=toupper(getch());
	if(answer=='D')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is D");    
        i++;
         getch();
    }

    case 3:
    printf("\n3.Two people can make 2 bicycles in 2 hours. How many people are needed to make 12 bicycles in 6 hours?");
	printf("\n\nA.6 \t\tB.4 \n\nC.2\t\tD.1");
	answer=toupper(getch());
	if(answer=='B')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is B");   
        i++;
         getch();
    } 
    case 4:
    printf("\n4.A bat and a ball cost $1.10 in total. The bat costs $1 more than the ball. How much does the ball cost?");
	printf("\n\nA. $0.10 \t\tB. $0.15\n\nC. $0.05\t\tD. $0.20");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");   
        i++;
         getch();
    }  

        case 5:
    printf("\n5.Nia,  twelve years old, is three times as old as her sister. How old will Nia be when she is twice as old as her sister?");
	printf("\n\nA.15 \t\tB.18 \n\nC.16\t\tD.20");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");   
        i++;
         getch();
    }  

    printf("\nPress Y to continue\nPress B to change subject\nPress S to get score ");
    answer=toupper(getch());
    if (answer=='Y')
    {
        IQ();
    }
    else if (answer=='B')
    {
        quizgame();
    }

    else
    {
        printf("Your current score is %d",point);
    }
     

        case 6:
    printf("\n6.Find two words, one from each group, that are the closest in meaning");
    printf("\nGroup A talkative, job, ecstatic \t\tGroup B angry, wind, loquacious");
	printf("\n\nA. talkative and wind \t\t\tB. job and angry \nC. talkative and loquacious \t\tD. ecstatic and angry");
	answer=toupper(getch());
	if(answer=='C')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is C");   
        i++;
         getch();
    }   
        case 7:
    printf("\n7.Which of the following can be arranged into a 5-letter English word?");
	printf("\n\nA. H R G S T \t\tB. R I L S A \nC. T O O M A \t\tD. W Q R G S");
	answer=toupper(getch());
	if(answer=='B')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is B");   
        i++;
         getch();
    }   

      case 8:
    printf("\n8.If the first two statements are true, What about the third statement?");
    
        printf("1) A woman plays tennis at a club.\n2) All tennis players at the club are required to use purple rackets.\n3) The woman plays with a purple racket at the club.");
	printf("\n\nA.True\t\t\tB. False \nC. Not enough information \t\tD. Uncertain");
	answer=toupper(getch());
	if(answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");   
        i++;
         getch();
    }

     case 9:
    printf("\n9.How many seconds are there in a day?");
	printf("\n\nA.85,000\t\tB.85,400 \nC. 86,000 \t\tD. 86,400");
	answer=toupper(getch());
	if(answer=='D')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is D");   
        i++;
         getch();
    }  

     case 10:
    printf("\nIdentify the number of duplicates among these name pairs.");
    printf("\nNieman,K.M. Neiman,K.M.\nHoff, J.P.  Hoff, J.P.\nThomas,G.K.  Thomas,C.K.\nPino, L.R.  Pine, L.R.\nHammar,C.G.  Hamnar,C.G.\nWarner, T.S.  Wanner,T.S.");
	printf("\n\nA.1\t\tB.2 \nC. 4 \t\tD. 3");
	answer=toupper(getch());
	if(answer=='A')
    {
		printf("\ncorrect");
		point++;
        i++;
        getch();
    }
	else
    {
		printf("\n\nWrong!!!! the correct answer is A");   
        i++;
         getch();
    }  
  

} 
}

     printf("\nYour current score is %d",point);
     printf("\nPress any key to continue......");
     getch();
     quizgame();


}
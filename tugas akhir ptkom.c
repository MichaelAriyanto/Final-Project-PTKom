// =====================================
// Program DUMB QUIZ TEST 
// Kelompok 11 PTK B
// Michael Ariyanto / 1706043235
// Nicholas Gilbert Samudi / 1706043323
// =====================================

#include<stdio.h>
#include<windows.h> //ini buat command sleep

int nilai = 0;
int jawaban;
int ngulang; 
	
void example()
{
	printf("In this quiz input the choice number for your answer \n");
	
	printf("For example : \n");
	printf("What is 4 X 6? \n");
	printf("1. 12 \n");
	printf("2. 22 \n");
	printf("3. 24 \n");
	printf("4. 34 \n");
	
	printf("Since the answer is 24 you input 3 then press ENTER \n");
}

void number1()
{
	printf("NUMBER ONE \n");
	getchar(); // agar program tidak langsung lanjut dan dimulai kembali saat pemain menekan tombol enter
	
	printf("Bumi itu bulat berapa 8+6? \n");
	printf("1. 1 \n");
	printf("2. 3 \n");
	printf("3. 7 \n");
	printf("4. 14 \n");
	
	scanf("%d", &jawaban);
	
	if(jawaban == 1)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else if(jawaban == 2)
	{	
		printf("YOUR ANSWER IS CORRECT \n");
		nilai = nilai + 1;
	}
	else if(jawaban == 3)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else if(jawaban == 4)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else
	{	
		printf("INPUT ERROR !! PLEASE INPUT THE 1-4 TO ANSWER QUESTION \n");
		return number1(); // untuk memperjelas apabila ada kesalahan dalam input user
	}
	
	printf("THE CORRECT ANSWER IS");
	
	sleep(1); //berfungsi untuk memberi delay dalam keluarnya sebuah jawaban
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(2);
	printf(" 2. 3!!! \n");
	
	getchar(); 
}

void number2()
{
	printf("NUMBER TWO \n");
	getchar();
	
	printf("What is a room without a door ? \n");
	printf("1. Quiet room \n");
	printf("2. Doorless room \n");
	printf("3. Mush room \n");
	printf("4. Squish room \n");
	
	scanf("%d", &jawaban);
	
	if(jawaban == 1)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else if(jawaban == 2)
	{	
		printf("JAWABAN SALAH \n");	
	}
	else if(jawaban == 3)
	{	
		nilai = nilai + 1;
		printf("YOUR ANSWER IS CORRECT \n");		
	}
	else if(jawaban == 4)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else
	{	
		printf("INPUT ERROR !! PLEASE INPUT THE 1-4 TO ANSWER QUESTION \n");		
		return number2();
	}
	
	printf("THE CORRECT ANSWER IS");
	
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(2);
	
	printf(" 3. Mush room!!! \n");
	
	getchar();
}

void number3()
{
	printf("NUMBER THREE \n");
	getchar();
	
	printf("Tulang apa biru ? \n");
	printf("1. Tulang smurf \n");
	printf("2. Tulang sapi \n");
	printf("3. Tulang ayam \n");
	printf("4. Tulang itbiru \n");
	
	scanf("%d", &jawaban);
	
	if(jawaban == 1)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else if(jawaban == 2)
	{	
		printf("JAWABAN SALAH \n");
	}
	else if(jawaban == 3)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else if(jawaban == 4)
	{	
		nilai = nilai + 1;
		printf("YOUR ANSWER IS CORRECT \n");		
	}
	else
	{	
		printf("INPUT ERROR !! PLEASE INPUT THE 1-4 TO ANSWER QUESTION \n");		
		return number3();
	}
	
	printf("THE CORRECT ANSWER IS");
	
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(2);
	
	printf(" 4. Tulang itbiru!!! \n");
	
	getchar();
}

void number4()
{
	printf("NUMBER FOUR \n");
	getchar();
	
	printf("What do you say when robbing a politician? \n");
	printf("1. Give me money!!! \n");
	printf("2. Give me my money!!! \n");
	printf("3. Give me all your money!!! \n");
	printf("4. Give me your money!!! \n");
	
	scanf("%d", &jawaban);
	
	if(jawaban == 1)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else if(jawaban == 2)
	{
		nilai = nilai + 1;
		printf("YOUR ANSWER IS CORRECT \n");		
	}
	else if(jawaban == 3)
	{	
		printf("JAWABAN SALAH \n");
	}
	else if(jawaban == 4)
	{
		printf("JAWABAN SALAH \n");		
	}
	else
	{	
		printf("INPUT ERROR !! PLEASE INPUT THE 1-4 TO ANSWER QUESTION \n");
		return number4();
	}
	
	printf("THE CORRECT ANSWER IS");
	
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(2);
	
	printf(" 2. Give me my money!!! \n");
	
	getchar();
}

void number5()
{
	printf("NUMBER FIVE \n");
	getchar();
	
	printf("Bagaimana cara bikin es kepal milo \n");
	printf("1. es milo di kepal \n");
	printf("2. es kepal di milo \n");
	printf("3. es di kepal milo \n");
	printf("4. kepal di es milo \n");
	
	scanf("%d", &jawaban);
			
	if(jawaban == 1)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else if(jawaban == 2)
	{	
		nilai = nilai + 1;
		printf("YOUR ANSWER IS CORRECT \n");		
	}
	else if(jawaban == 3)
	{	
		printf("JAWABAN SALAH \n");
	}
	else if(jawaban == 4)
	{	
		printf("JAWABAN SALAH \n");		
	}
	else
	{
		printf("INPUT ERROR !! PLEASE INPUT THE 1-4 TO ANSWER QUESTION \n");		
		return number5();
	}
	
	printf("THE CORRECT ANSWER IS");
	
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(2);
	
	printf(" 2. es kepal di milo!!! \n");
	
	getchar();
}

void pengulangan()
{
	printf("Do you want to try again? \n");
	printf("1. Yes \n");
	printf("2. No \n");
	scanf("%d", &ngulang);
	
	if(ngulang == 1)
	{	
		return main();	
	}
	else if(ngulang == 2)
	{
		printf("We hope to see you again \n \n");
		getchar();
	
		printf("===================================================== \n");
		printf("================= T H A N K   Y O U ================= \n");
		printf("===================================================== \n");
	}
	else
	{
		printf("INPUT ERROR !!! PLEASE INPUT 1 / 2 \n");
		return pengulangan();
	}
}

int main()
{	
	printf("===================================================== \n");
	printf("============ D U M B   Q U I Z   T E S T ============ \n");
	printf("===================================================== \n \n");
	
	printf("WELCOME to the DUMB QUIZ TEST !!! \n \n");
	printf("PRESS ENTER TO CONTINUE \n");
	
	getchar();
	
	example();
	getchar();
	
	printf("===================================================== \n");
	printf("======= Okayyy are you ready for the quiz ??? ======= \n");
	printf("===================================================== \n");
	
	getchar();
	
	printf("LETS GO!!! \n");
	
	getchar();
	
	nilai = 0; // agar value nilai ke reset menjadi 0 jika program diulang

	number1();
	getchar();
	
	number2();
	getchar();
	
	number3();
	getchar();
	
	number4();
	getchar();
	
	number5();
	getchar();
	
	printf("===================================================== \n");
	printf("======== CONGRATULATIONS THE QUIZ IS OVER!!! ======== \n");
	printf("===================================================== \n");
	
	getchar();
	
	printf("You got %d answer(s) correct \n", nilai);
	getchar();
	
	pengulangan();//untuk control exit atau pengulangan program
		
		
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
int isLeapYear(int year);
int calcdaysandprice();
void entry();
void cse();
void ece();
void me();
void display();
void search();
void srusn();
void srphn();
void srdays();
void srdel();
struct node
{
	char usn[12];
	char b[50],a[50],ph[11],br[5];
	int d1,d2,m1,m2,y1,y2;
	int days1,la;
	struct node *link;
}*start;
struct node *temp,*p;
struct node *read()
{
	char us[12],phn[11];
	printf("Enter USN\n");
	scanf("%s",&us);
	printf("Enter Phone number\n");
	scanf("%s",&phn);
	temp=(struct node*)malloc(sizeof(struct node));
	strcpy(temp->usn,us);
	strcpy(temp->ph,phn);
	temp->link=NULL;
	p=temp;
	return p;
}
void menu()
{
printf("\n************************************************************************************************************************************************************************************************");
	printf("\n         * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *                  * * * * * * * * * * * * * * ** * * * * * * * * * * * * * * * * * * * * * * * * * *"); 	  	  printf("\n                   * * * * * * * * * * * * * * * * * * * * * * * * * * * * *    HELLO LIBRARIAN!!    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
        printf("\n                      * * * * * * * * * * * * * * * * * * * * * * * * * * * * *                  * * * * * * * * * ** * * * * * * * * * * * * * * * * * * * * * * *"); 	                   	   printf("\n                           ******************************************     \"CREATE YOUR LIBRARY RECORD\" ****************************************\n\n\n");
        printf("                   [[*********##             ---------                 |:|=========]]                      #   @ @@@@@@@@@    \n");
        printf("                   [[         ##             |       |                 |:|         ]]                    # * #   @ @ @@@@@ @    \n");
        printf("                   [[COMPUTER ##             |       |                 |:ELECTRONICS]                   # $$$ #   @ @ @ $ @ @    \n");
	printf("                   [[ SCIENCE ##     ---------       |                 |:|         ]]                    # * #   @ @ @@@ @\n");
        printf("                   [[         ##                     |                 |:|         ]]                      #   @ @@@@@@@ @ \n");
	printf("                   [[*********##                     |------->         |:|=========]]   @@@@@@@@@@@                  \n\n");
	int ch;
	char tidi;
	do
	{
	printf("                      MM    MM     EEEEEEEE     NN     NN     UU    UU\n");
	printf("                      MMM  MMM     EE           NN NN  NN     UU    UU\n");
	printf("                      MM MM MM     EEEEE        NN  NN NN     UU    UU\n");
	printf("                      MM    MM     EE           NN   NNNN     UU    UU\n");
	printf("                      MM    MM     EEEEEEEE     NN     NN	UUUU \n\n\n");
	printf("CHOOSE THE OPERATION YOU WANT TO PERFORM\n\n");
	printf("1.MAKE AN ENTRY\n");
	printf("2.LIST ALL ENTRIES\n");
	printf("3.SEARCH FOR AN ENTRY\n");
	printf("4.EXIT\n");
	printf("ENTER YOUR CHOICE:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:entry();break;
		case 2:display(); break;
		case 3:search(); break;
		case 4:exit(0);
	}
	printf("\n\nDO YOU WANT GO TO HOME PAGE AGAIN / EXIT?[Y/N]\n");
	scanf(" %c",&tidi);
	}while(tidi=='Y' || tidi=='y');
}
void entry()
{
	char tidi;
	do
	{
	char usn[11];int n;
	struct node *temp;
	temp=read();
	printf("\nEnter the branch from which it is picked\n");
	printf("1.COMPUTER SCIENCE\n");
	printf("2.ELECTRONICS AND COMMUNICATION\n");
	printf("3.MECHANICAL\n");
	printf("MAKE YOUR CHOICE:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:cse();break;
		case 2:ece();break;
		case 3:me();break;
	}
	printf("\nDO YOU WANT TO MAKE ANOTHER ENTRY[Y/N]\n");
	scanf(" %c",&tidi);
	}while(tidi=='Y' || tidi=='y');
}
void cse()
{
	printf("                    CCCCCC   OOOOO    MM    MM  PPPPPP        &&&&&          NN     NN   EEEEEEEE   TTTTTTTTT    \n");
	printf("                   CC       OO   OO   MMM  MMM  PP   PP      &&   &&         NN NN  NN   EE            TT   \n");
	printf("                   CC       OO   OO   MM MM MM  PPPPPP        &&&&&  &&      NN  NN NN   EEEEE         TT       \n");
	printf("                   CC       OO   OO   MM    MM  PP          &&     &&&       NN   NNNN   EE            TT     \n");
	printf("                    CCCCCC   OOOOO    MM    MM  PP          &&    &&&&       NN     NN   EEEEEEEE      TT      \n");
	printf("                                                             &&&&&&  &&                      \n\n");
	int i,n;
	char books[22][50] = {"Discrete Mathematics and Its Applications" , "Higher Engineering mathematics" , "Advanced Engineering Mathematics" , "The C Programming language" , "Classic Data Structures" , "Computer Architecture – A Quantitative Approach" , "Computer Organization and Embedded systems" , "An Introduction to Formal Languages and Automata" , "NPTEL lectures", "Compilers: Principles, Techniques and Tools" , "Compiler Design in C" , "Introduction to Algorithms" , "Data Structures & Algorithms" , "Digital Design" , "Digital Electronics" , "Operating System Concepts" , "Modern Operating System" , "Operating Systems" , "Database System Concepts" , "Normalization and indexing" , "Data Communications and Networking" , "Computer Networks"};
	char auth[22][50]={"Kenneth Rosen","B.S. Grewal","Erwin Kreyszig","Dennis Richie","Debasis Samanta","Hennessy and Patterson","Carl Hamacher","Peter Linz","Kamala Krithivasan","Aho & Ullman","Allen I Holub","Cormen","R.S. Salaria","Morris Mano","S. Salivahanan & S. Arivazhagan","Galvin","Andrew Tanenbaum","Stallings","Henry. F. Korth","Shamkant B. Navathe","Kurose & Ross and Behrouz A. Forouzan","Peterson & Davie"};
	printf("\n\n\n\n");
	for(i = 0; i < 22; i++)
	        printf("%d. %s by %s \n",i+1, books[i], auth[i]);
	printf("\n\nEnter the number of the book borrowed: ");
	scanf("%d",&n);
	temp->la=calcdaysandprice();
	strcpy(temp->b,books[n-1]);
	strcpy(temp->a,auth[n-1]);
	strcpy(temp->br,"CSE");
	if(start==NULL) start=temp;
	else{
		p=start;
		while(p->link!=NULL)
			p=p->link;
	 	p->link=temp;
	}
	printf("Entry Successful");
}
void ece()
{
	printf("                   	EEEEEEEE          &&&&&            CCCCCC   \n");
	printf("                  	EE	         &&   &&          CC    \n");
	printf("                   	EEEEE	          &&&&&  &&       CC        \n");
	printf("                  	EE	        &&     &&&        CC       \n");
	printf("                  	EEEEEEEE        &&    &&&&         CCCCCC        \n");
	printf("  				         &&&&&&  &&                      \n\n");
	int i,n;
	char books[27][75] = {"Higher Engineering Mathematics","Advance Engineering Mathematics","Signals & Systems","Discrete Time Signal Processing","Dital Signal Processing","Control System Engg.","Automatic Control Systems","Modern Control System","Design of feedback control system","Network Analysis","Networks & System","Engineering Circuit analysis","Electronics devices and circuits","Integrated Electronics : Analog & Digital circuits and system","Micro Electronics Circuit","Digital Electronics","Digital circuits","Microprocessor","Electromagnetics Waves and Radiating System","Engg Electromagnetics","Antenna And Wave Propagation","Microwave devices & circuits","Communication Systems","Principals of communication systems","An introduction to Analog and Digital Communications","Modern & digital communication system","Electronic Communication System"};
	char auth[27][50]={"Dr. BS Grewal","Erwin Kreyszig","Oppenheim & Schafer","Oppenheim & Schafer","Proakis","Nagrath & Gopal","Benjamin C Kuo","Katsuhiko Ogata","Hostetter, Savant & Stefani","Van Valkenburg","D Roy & Choudhary","Hayt & Kammerly","Millman & Halkias","Millman & Halkias","Sedra & Smith","Morris Mano","Taub & Schilling","Ramesh Gaonkar","E.C. Jordan and K.G. Balsain","William Hayt","KD Prasad","Lio","Simon Hykin","Taub & Schilling","Simon Hykin","BP Lathi","Kennedy"};
	printf("\n\n\n\n");
	for(i = 0; i < 27; i++)
	        printf("%d. %s by %s \n",i+1, books[i], auth[i]);
	printf("\n\nEnter the number of the book borrowed: ");
	scanf("%d",&n);
	temp->la=calcdaysandprice();
	strcpy(temp->b,books[n-1]);
	strcpy(temp->a,auth[n-1]);
	strcpy(temp->br,"ECE");
	if(start==NULL) start=temp;
	else{
		p=start;
		while(p->link!=NULL)
			p=p->link;
	 	p->link=temp;
	}
	printf("Entry Successful\n\n");
}
void me()
{
	printf("                      MM    MM     EEEEEEEE  \n");
	printf("                      MMM  MMM     EE         \n");
	printf("                      MM MM MM     EEEEE      \n");
	printf("                      MM    MM     EE          \n");
	printf("                      MM    MM     EEEEEEEE  \n\n");
	int i,n;
	char books[32][75] = {"Fundamentals of Classed Thermodynamics","Heat Transfer","Heat and Mass Transfer","Energy Conversion","Environmental Pollution Central Engineering","Surveying and Levelling","Heat Conversion","Manufacturing Science","Thermodynamics","Theory of Mechanics","Theory of Mechanism and Mechanics","Mechanic of Solids","Manufacturing Science","Manufacturing Technology","Production Manangement","Principles of Manufacturing Material & Process","Engineering Thermodynamics","IC Engine","Gas Turbine and Propulsive Systems","Fluid Mechanics","Compressible Flow","Heat and Mass Transfer","Refrigeration and Air Conditioning","Fluid Machinery","Theory of Machines","Mechanical Vibration","Machine Design","Material Science","Production Engineering","Industrial Engineering","Operations Research","Strength of Materials"};
	char auth[32][50]={"Van Wylen","Gupta Prakash","R. Yadav","Sukhalmoy","C S Rao","T P Kanetkar","Arora & Kundwar","R K Jain","R Yadav","S S Rattan","Jagdish Lal","Popru","Ghosh and Malik","P N Rao","R K Jain","Campbeu","PK Nag","ML Mathur and RP Sharma","PR Khajuria & SP Dubey","Modi & Seth RK Bansal","SM Yahya","JP Hollman and RC Sachdeva","CP Arora and Domkundwar","Jagdish Lal and RK Bansal","Malik & Ghosh","Grover","VB Bhandari","WD Callister","Kalpakjian Schmid","O P Khanna","Kanti Swarup","Gere & Timoshenko"};
	printf("\n\n\n\n");
	for(i = 0; i < 32; i++)
	        printf("%d. %s by %s \n",i+1, books[i], auth[i]);
	printf("\n\nEnter the number of the book borrowed: ");
	scanf("%d",&n);
	temp->la=calcdaysandprice();
	strcpy(temp->b,books[n-1]);
	strcpy(temp->a,auth[n-1]);
	strcpy(temp->br,"ME");
	if(start==NULL) start=temp;
	else{
		p=start;
		while(p->link!=NULL)
			p=p->link;
	 	p->link=temp;
	}
	printf("Entry Successful\n\n");
}
void display()
{
	struct node *disp;
	disp=start;
	int i=0;
	printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n","Sl.No","USN","Phone","Name of Book","Branch","Total Days","Late fee(INR)");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	if(disp==NULL)
		printf("\n\t\t\t\tThere are no entries!");
	else
	{
		while(disp!=NULL)
		{
			printf("%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d",++i,disp->usn,disp->ph,disp->b,disp->br,disp->d1,disp->m1,disp->y1,disp->d2,disp->m2,disp->y2,disp->days1,disp->la);
			printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			disp=disp->link;
		}
	}
}
int isLeapYear(int year)
{
        int flag = 0;
        if (year % 100 == 0) {
                if (year % 400 == 0) {
                        flag = 1;
                } else {
                        flag = 0;
                }
        } else if (year % 4 == 0) {
                flag = 1;
        }
        return flag;
}
int calcdaysandprice()
{
        int year, month, date, i, days;
        int cyear, cmonth, cdate, tmpMon, tmpYear;
        char str[100];
	temp->days1=0;
        printf("\nENTER THE DATE THE BOOK WAS BORROWED(DD/MM/YYYY):");
        scanf("%d/%d/%d", &date, &month, &year);
        printf("\nENTER THE DATE THE BOOK WAS RETURNED(DD/MM/YYYY):");
        scanf("%d/%d/%d", &cdate, &cmonth, &cyear);
        tmpMon = month;
        tmpYear = year;
	temp->d1=date;
	temp->m1=month;
	temp->y1=year;
	temp->d2=cdate;
	temp->m2=cmonth;
	temp->y2=cyear;
        if (cyear == year && cmonth == month) {
                temp->days1 = cdate - date + 1;
                return 0;
        }
        if (month == 2) {
                temp->days1 = daysInMonth[month - 1] - date + 1 + isLeapYear(year);
        } else {
                temp->days1 = daysInMonth[month - 1] - date + 1;
        }
        if (month == 12) {
                month = 0;
                year++;
        }
        while (year <= cyear) {
                for (i = month; i < 12; i++) {
                        if ((year == cyear) && (i == cmonth - 1)) {
                                temp->days1 = temp->days1 + cdate;
                                break;
                        }
                        if (i == 1) {
                                temp->days1 = temp->days1 + daysInMonth[i] + isLeapYear(year);
                        } else {
                                temp->days1 = temp->days1 + daysInMonth[i];
                        }
                }
                month = 0;
                year++;
        }
        int late=0;
	days=temp->days1;
	if(days>15)
	{
		days=days-16;
		late=days*2;
	}
	return late;
}
void search()
{
	char tidi;
	do
	{
	printf("               @@@@@@@\n");
	printf("             @@      @@\n");
	printf("           @@        @@          $$$$$$$$$   $$$$$$$$      $$$       $$$$$$$   $$$$$$$$   $$    $$\n");
	printf("           @@       @@           $$          $$           $$ $$      $$   $$   $$         $$    $$\n");
	printf("            @@@@@@@              $$$$$$$$$   $$$$$$      $$$$$$$     $$$$$$$   $$         $$$$$$$$\n");
	printf("             @ @                        $$   $$         $$     $$    $$ $$     $$         $$    $$\n");
	printf("            @ @                  $$$$$$$$$   $$$$$$$$  $$       $$   $$   $$   $$$$$$$$   $$    $$\n");
	printf("           @ @\n");
	printf("          @@@                                                                 \n\n");
	int ch;
	printf("\nWhat do you like to search by ?");
	printf("\n1.Customer USN");
	printf("\n2.Customer phone number");
	printf("\n3.No. of days for which the book was Borrowed");
	printf("\n4.Coustomers with delayed returns");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:srusn();break;
		case 2:srphn();break;
		case 3:srdays();break;
		case 4:srdel();break;
	}
	printf("\nDO YOU WANT TO MAKE ANOTHER SEARCH[Y/N]:");
	scanf(" %c",&tidi);
	}while(tidi=='Y' || tidi=='y');
}
void srusn()
{
	printf("\n\n\nEnter the USN you want to search by:");
	char sus[12];
	int lol=1,i=0;
	scanf("%s",&sus);
	struct node *srch;
	srch=start;
		printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n","Sl.No","USN","Phone","Name of Book","Branch","Total Days","Late fee(INR)");
		printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	if(start==NULL)
		printf("There are no Entries");
	else
		srch=start;
	while(srch!=NULL)
	{
		if(strcmp(srch->usn,sus)==0)
		{
			printf("%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d",++i,srch->usn,srch->ph,srch->b,srch->br,srch->d1,srch->m1,srch->y1,srch->d2,srch->m2,srch->y2,srch->days1,srch->la);
			printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		lol++;
		}
		srch=srch->link;
	}
	if(lol==1)
		printf("\n There are no entries matching entered data\n\n");
}
void srphn()
{
	printf("\n\n\nEnter the phone number you want to search by:");
	char sph[11];
	int lol=1,i=0;
	scanf("%s",&sph);
	struct node *srch;
	srch=start;
		printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n","Sl.No","USN","Phone","Name of Book","Branch","Total Days","Late fee(INR)");
		printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	if(start==NULL)
		printf("There no Entries");
	else
		srch=start;
	while(srch!=NULL)
	{
		if(strcmp(srch->ph,sph)==0)
		{
			printf("%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d",++i,srch->usn,srch->ph,srch->b,srch->br,srch->d1,srch->m1,srch->y1,srch->d2,srch->m2,srch->y2,srch->days1,srch->la);
			printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		lol++;
		}
		srch=srch->link;
	}
	if(lol==1)
		printf("\n There are no entries matching entered data\n\n");
}
void srdays()
{
	printf("\n\n\nEnter the number of days for which the book was borrowed:");
	int dis;
	int lol=1,i=0;
	scanf("%d",&dis);
	struct node *srch;
	srch=start;
		printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n","Sl.No","USN","Phone","Name of Book","Branch","Total Days","Late fee(INR)");
		printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	if(start==NULL)
		printf("There are no Entries!");
	else
		srch=start;
	while(srch!=NULL)
	{
		if(srch->days1==dis)
		{
			printf("%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d",++i,srch->usn,srch->ph,srch->b,srch->br,srch->d1,srch->m1,srch->y1,srch->d2,srch->m2,srch->y2,srch->days1,srch->la);
			printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		lol++;
		}
		srch=srch->link;
	}
	if(lol==1)
		printf("\n There are no entries matching entered data\n\n");
}
void srdel()
{
	int lol=1,i=0;
	struct node *srch;
	srch=start;
		printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n","Sl.No","USN","Phone","Name of Book","Branch","Total Days","Late fee(INR)");
		printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	if(start==NULL)
		printf("There are no Entries");
	else
		srch=start;
	while(srch!=NULL)
	{
		if(srch->days1>15)
		{
			printf("%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d",++i,srch->usn,srch->ph,srch->b,srch->br,srch->d1,srch->m1,srch->y1,srch->d2,srch->m2,srch->y2,srch->days1,srch->la);
			printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		lol++;
		}
		srch=srch->link;
	}
	if(lol==1)
		printf("\n There are no entries matching entered data\n\n");
}
void main()
{
    char username[15];
    char password[12];
    printf("\n\t\t\t\t                                            WELCOME TO THE:\n\n\n");
    printf("  \t\t\t\t        BBBB\t\t\t\t\t  BBBB\n");
    printf("  \t\t\t\t        B    B\t\t\t\t\t  B    B\n");
    printf("  \t\t\t\t        BBBBB\t\tFFFFFF\t\t\t  BBBBB\t\t\t\t     SSS\n");
    printf("\t\t\t\t        BBB\t\tF\tOOO\tRRRR\t  BBB\t     OOO     OOO   K  K     S\n");
    printf("\t\t\t\t        BBBBBB\t\tFFFF  O     O\tR   R\t  B    B    O   O   O   O  KKK\t     SSS\n");
    printf("\t\t\t\t        B      B\tF     O     O\tRRRR\t  B     B   O   O   O   O  K  K\t        S\n");
    printf("\t\t\t\t        B       B\tF\tOOO\tR   R\t  B       B  OOO     OOO   K    K    SSS  \n");
    printf("\t\t\t\t        B      B\t\t\t\t  B      B\n");
    printf("\t\t\t\t        BBBBBB\t\t\t\t\t  BBBBBB\n");
    printf("\n\t\t\t\t                                              LIBRARY!\n\n");
    printf("                                                                  Sign In To Create Your Library Record:-\n");
    printf("\t\t\t\t\t\t\t\tEnter your username:");
    scanf("%s",&username);
    printf("\t\t\t\t\t\t\t\tEnter your password:");
    scanf("%s",&password);
    if(strcmp(username,"library1")==0)
    {
        if(strcmp(password,"****")==0)
	{
		printf("\n\t\t\t\t\t\tWelcome.Login Success!");
		menu();
        }
	else
	{
		printf("\nWrong password");
	}
    }
    else
    {
    printf("\nUser doesn't exist");
    }
}

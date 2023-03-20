#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int stock_info(int pop, int d, int san, int nac);
int seating();
int seating()           //seating module 
{
   char arr[15][9] = {};
   int i,j,k,n,row,column;char cv;
   char c ='A';
   char a = '1'; 
for(i=1;i<9;i++)
     arr[0][i] = a+i ;
     
for(i=1;i<15;i++)
     arr[i][0] = c+i;
     
printf("\t* shows not reserved seats. R shows reserved seats\n");
   for(i=1;i<15;i++)
 { for(j=1;j<9;j++)
  arr[i][j] = '*';
 }
   printf("\n\n");
 for (i=0;i<15;i++)
   {  for(j=0;j<9;j++)
      {
      printf(" \t%c ",arr[i][j]);
       }
      printf("\n\n");
   }
   printf("How many seats you want to book for movie : ");
scanf("%d",&n);
   for(k=0;k<n;k++)
 { 
     while (1)
     { label:
	    printf("\n\nEnter column number range(2 to 9) for seat%d : ",k+1);
        scanf("%d",&column);
		if(column>9||column<2)
		{  printf("Invalid column number"); 
		   goto label;
		 } 
		 else 
		 break;
		 
     }
          printf("Enter row for seat%d : ",k+1);
     scanf(" %c",&cv);
     while(cv>'O'|| cv <'B')
       {
          printf("Invalid row please enter again\n");
          printf("Enter row for seat%d : ",k+1);
          scanf(" %c",&cv);
  
        } 
        row = cv - 'A';
     if(arr[row][column-1] == 'R')
     { printf("\tThe seat is already reserved\n\n");
       goto label;
	 }
     arr[row][column-1] = 'R';
     

}
printf("\n\nYour seat is reserved. R indicate your seat\n\n");
for (i=0;i<15;i++)
   { for(j=0;j<9;j++)
      {
         printf(" \t%c ",arr[i][j]);
      }
     printf("\n\n");
   
   } 
printf("Total bill of seats reserved is : %d\n",n*500);
return  n;
}
int cafeteria(void)                             /* Function to calculate cafeteria orders */
{
   static int q_popcorns = 45;                          /*stock identifiers*/
    static int q_drinks = 75;
    static int q_pizza = 15;
    static int q_sandwich = 30;
    static int q_nacho = 50;
     
	float discount =0;
	int  no_of_items, item1, item2, item3 , item4;
	int quantity, quantity2,quantity3,quantity4;
	int price, price2, price3, price4, command;
	 int total_price=0;
	int *p;
     int s=0 ;
	p=&total_price;
	
	printf("\t\t\t\t\tGolden CAFETERIA\t\t\t\t\t");
	printf("\nHey! here's our today's Menu.");
	printf("\n\nS.NO   ITEMS");
	label:
	printf("\n1--->Popcorn (200 PKR)");
	printf("\n2--->Cold Drink (60 PKR)");
	printf("\n3--->Sandwich (100 PKR)");
	printf("\n4--->Nacho Chips (120 PKR)");
	printf("\nHow many items would you like to order? ");
	scanf("%d",&no_of_items);
	switch(no_of_items)
	{
		case 1:
		printf("\nPlease Enter the serial Number of the item you would like to order: " );
		scanf("%d",&item1);
		        switch(item1)
		        {
		        	case 1:
		        	printf("\nplease enter the quantity of popcorns: \n");
		        	scanf("%d",&quantity);
		        	*p = 200*quantity;
		        	q_popcorns = q_popcorns - quantity;
		        	break;
		        	
		        	case 2:
		        	printf("\nplease enter the quantity of Cold Drink: \n");
		        	scanf("%d",&quantity);
		        	*p = 60*quantity;
		        	q_drinks = q_drinks - quantity;
		        	break;
		        	
		        	case 3:
		        	printf("\nplease enter the quantity of Sandwich: \n");
		        	scanf("%d",&quantity);
		        	*p = 100*quantity;
		        	q_sandwich = q_sandwich - quantity;
		        	break;
		        	
		        	case 4:
		        	printf("\nplease enter the quantity of Nacho Chips: \n");
		        	scanf("%d",&quantity);
		        	*p =  120*quantity;
		        	q_nacho = q_nacho - quantity;
		        	break;
		        	
				}
		break;
				
		case 2:
			printf("\nPlease enter the serial number of first item: ");
			scanf("%d",&item1);
			printf("\nPlease enter the serial number of second item: ");
			scanf("%d",&item2);
			switch(item1)
		        {
		        	case 1:
		        	printf("\nplease enter the quantity of popcorns: \n");
		        	scanf("%d",&quantity);
		        	price= 200*quantity;
		        	printf("Amount of %d Popcorns: Rs. %d",quantity,price);
		        	q_popcorns = q_popcorns - quantity;
		        	break;
		        	
		        	case 2:
		        	printf("\nplease enter the quantity of Cold Drink: \n");
		        	scanf("%d",&quantity);
		        	price= 60*quantity;
		        	printf("Amount of %d Cold drinks: Rs. %d",quantity,price);
		        	q_drinks = q_drinks - quantity;
		        	break;
		        	
		        	case 3:
		        	printf("\nplease enter the quantity of Sandwich: \n");
		        	scanf("%d",&quantity);
		        	price= 100*quantity;
		        	printf("Amount of %d Sandwiches: Rs. %d",quantity,price);
		        	q_sandwich = q_sandwich - quantity;
		        	break;
		        	
		        	case 4:
		        	printf("\nplease enter the quantity of Nacho Chips: \n");
		        	scanf("%d",&quantity);
		        	price= 120*quantity;
		        	printf("Amount of %d Sandwiches: Rs. %d",quantity,price);
		        	q_nacho = q_nacho - quantity;
		        	break;
				 }
			switch(item2)
		        {
		        	case 1:
		        	printf("\nplease enter the quantity of popcorns: \n");
		        	scanf("%d",&quantity2);
		        	price2= 200*quantity2;
		        	printf("Amount of %d Popcorns: Rs. %d",quantity2,price2);
		        	q_popcorns = q_popcorns - quantity2;
		        	break;
		        	
		        	case 2:
		        	printf("\nplease enter the quantity of Cold Drink: \n");
		        	scanf("%d",&quantity2);
		        	price2= 60*quantity2;
		        	printf("Amount of %d Cold drinks: Rs. %d",quantity2,price2);
		        	q_drinks = q_drinks - quantity2;
		        	break;
		        	
		        	case 3:
		        	printf("\nplease enter the quantity of Sandwich: \n");
		        	scanf("%d",&quantity2);
		        	price2= 100*quantity2;
		        	printf("Amount of %d Sandwiches: Rs. %d",quantity2,price2);
		        	q_sandwich = q_sandwich - quantity2;
		        	break;
		        	
		        	case 4:
		        	printf("\nplease enter the quantity of Nacho Chips: \n");
		        	scanf("%d",&quantity2);
		        	price2= 120*quantity2;
		        	printf("Amount of %d Nacho chips: Rs. %d",quantity2,price2);
		        	q_nacho = q_nacho - quantity2;
		        	break;
				 }
				 				 
	    	*p =  total_price+price+price2;
		break;
		
		case 3:
			printf("\nPlease enter the serial number of first item: ");
			scanf("%d",&item1);
			printf("\nPlease enter the serial number of second item: ");
			scanf("%d",&item2);
			printf("\nPlease enter the serial number of third item: ");
			scanf("%d",&item3);
					switch(item1)
		        {
		        	case 1:
		        	printf("\nplease enter the quantity of popcorns: \n");
		        	scanf("%d",&quantity);
		        	price= 200*quantity;
		        	printf("Amount of %d Popcorns: Rs. %d",quantity,price);
		        	q_popcorns = q_popcorns - quantity;
		        	break;
		        	
		        	case 2:
		        	printf("\nplease enter the quantity of Cold Drink: \n");
		        	scanf("%d",&quantity);
		        	price= 60*quantity;
		        	printf("Amount of %d Cold drinks: Rs. %d",quantity,price);
		        	q_drinks = q_drinks - quantity;
		        	break;
		        	
		        	case 3:
		        	printf("\nplease enter the quantity of Sandwich: \n");
		        	scanf("%d",&quantity);
		        	price= 100*quantity;
		        	printf("Amount of %d Sandwiches: Rs. %d",quantity,price);
		        	q_sandwich = q_sandwich - quantity;
		        	break;
		        	
		        	case 4:
		        	printf("\nplease enter the quantity of Nacho Chips: \n");
		        	scanf("%d",&quantity);
		        	price= 120*quantity;
		        	printf("Amount of %d Sandwiches: Rs. %d",quantity,price);
		        	q_nacho = q_nacho - quantity;
		        	break;
				 }
			switch(item2)
		        {
		        	case 1:
		        	printf("\nplease enter the quantity of popcorns: \n");
		        	scanf("%d",&quantity2);
		        	price2= 200*quantity2;
		        	printf("Amount of %d Popcorns: Rs. %d",quantity2,price2);
		        	q_popcorns = q_popcorns - quantity2;
		        	break;
		        	
		        	case 2:
		        	printf("\nplease enter the quantity of Cold Drink: \n");
		        	scanf("%d",&quantity2);
		        	price2= 60*quantity2;
		        	printf("Amount of %d Cold drinks: Rs. %d",quantity2,price2);
		        	q_drinks = q_drinks - quantity2;
		        	break;
		        	
		        	case 3:
		        	printf("\nplease enter the quantity of Sandwich: \n");
		        	scanf("%d",&quantity2);
		        	price2= 100*quantity2;
		        	printf("Amount of %d Sandwiches: Rs. %d",quantity2,price2);
		        	q_sandwich = q_sandwich - quantity2;
		        	break;
		        	
		        	case 4:
		        	printf("\nplease enter the quantity of Nacho Chips: ");
		        	scanf("%d",&quantity2);
		        	price2= 120*quantity2;
		        	printf("Amount of %d Nacho chips: Rs. %d",quantity2,price2);
		        	q_nacho = q_nacho - quantity2;
		        	break;
			    }
			    
			switch(item3)
		        {
		        	case 1:
		        	printf("\nplease enter the quantity of popcorns: ");
		        	scanf("%d",&quantity3);
		        	price3= 200*quantity3;
		        	printf("Amount of %d popcorns: Rs. %d",quantity3,price3);
		        	q_popcorns = q_popcorns - quantity3;
		        	break;
		        	
		        	case 2:
		        	printf("\nplease enter the quantity of Cold Drink: ");
		        	scanf("%d",&quantity3);
		        	price3= 60*quantity3;
		        	printf("Amount of %d Cold Drink: Rs. %d",quantity3,price3);
		        	q_drinks = q_drinks - quantity3;
		        	break;
		        	
		        	case 3:
		        	printf("\nplease enter the quantity of Sandwich: ");
		        	scanf("%d",&quantity3);
		        	price3= 100*quantity3;
		        	printf("Amount of %d Sandwich: Rs. %d",quantity3,price3);
		        	q_sandwich = q_sandwich - quantity3;
		        	break;
		        	
		        	case 4:
		        	printf("\nplease enter the quantity of Nacho Chips: ");
		        	scanf("%d",&quantity3);
		        	price3= 120*quantity3;
		        	printf("Amount of %d Nacho chips: Rs. %d",quantity3,price3);
		        	q_nacho = q_nacho - quantity3;
		        	break;
				 }				 		
			*p = total_price+price+price2+price3;
		break;
		
        case 4:
        	printf("\nPlease Enter the quantity of Popcorns: ");
        	scanf("%d",&quantity);
        	price=quantity*200;
        	printf("\nPlease Enter the quantity of Coldrinks: ");
        	scanf("%d",&quantity2);
        	price2=quantity2*200; 
        	printf("\nPlease Enter the quantity of Sandwiches: ");
        	scanf("%d",&quantity3);
        	price3=quantity3*100;
        	printf("\nPlease Enter the quantity of Nacho Chips: ");
        	scanf("%d",&quantity4);
        	price4=quantity4*100;
        	q_popcorns = q_popcorns - quantity;
        	q_drinks = q_drinks - quantity2;
        	q_sandwich = q_sandwich - quantity3;
        	q_nacho = q_nacho - quantity4;

		total_price= total_price+price+price2+price3+price4;
		printf("\namount for %d popcorns: %d",quantity,price);
		printf("\namount for %d coldrinks: %d",quantity2,price2);
		printf("\namount for %d sanwiches: %d",quantity3,price3);
		printf("\namount for %d coldrinks: %d",quantity2,price2);
		break;
		
		default:
		printf("\nPlease Enter A valid Code");		 
	}
    printf("\n\nWould you like to order anything else?");
    printf("\n1--->Yes");
    printf("\n0--->No ");
    printf("\nYour command: ");
    scanf("%d",&command);
    if (command==1)
    {
   	    s=s+total_price;
        goto label;
    }
    else if (command==0)
    {
    s=s+total_price;
    printf("\nTotal Amount: %d\n", s);
    if(s>500 && s<=1000){
 	    printf("CONGRATULATION!! You have earned 10%% discount");
 	    discount=s*0.1;
 	    printf("\nDiscount: %f.1", discount);
        s=s-discount;
    }
    else if(s>1000 && s<=2500){
 	    printf("CONGRATULATION!! You have earned 15%% discount");
 	    discount=s*0.15;
 	    printf("\nDiscount: %.21", discount);
        s=s-discount;
    }
    else if(s>2500){
 	    printf("\nCONGRATULATION!! You have earned 20%% discount");
 	    discount=s*0.20;
 	    printf("\nDiscount: %f.1", discount);
        s=s-discount;
	}
    }
    printf("\n-----------------------------------------------------------\n");
    printf("\nYour Final Billing Amount for food: %d", s);
    printf("\nThank you for ordering, have a great day!");
    printf("\n\n\t\tFor Staff of cafetria only\t\t");
    stock_info(q_popcorns, q_drinks, q_sandwich, q_nacho);  //function calling in another function
      return s;
}

int stock_info(int pop, int d, int san, int nac){    //stock module
    printf("\nUPDATE ON REMAINING STOCK!");
    printf("In Stock:\n");
    
    printf("Popcorns: %d\n", pop);
    printf("Drinks: %d\n", d);
    printf("Sandwiches: %d\n", san);
    printf("Nacho Chips: %d\n", nac);
    
    if(pop<10){
       printf("Popcorns on shortage!\n");
    }
    if(d<12){
       printf("Drinks on shortage!\n");
    }
    if(san<8){
       printf("Sandwiches on shortage!\n");
    }
    if(nac<10){
       printf("Nacho Chips on shortage!\n");
    }
    return 0;      
}
   
   struct customer              //structure
   {
    		char name[10];
    		int id;
   	
   };
   
    void record(int x)          //calling of all modules
    { printf("\t\t\tWelcome To Golden Theatre!\n\n");
	struct customer c;
	struct customer *ptr;         
	ptr = &c;                    //structure and pointer
	printf("Customer name: ");
	scanf("%s",&ptr->name);
	ptr->id = rand();
	int i, c1, c2;
	char movies1[10][100] = {{"Morbius"},{"The Eternals"},{"Uncharted"},{"Spiderman 3"},{"Cyberpunk 2077"},{"Black Widow"},{"Venom 2"},{"Matrix"},{"Terminator"},{"The Wolf of Wall street"}}; /* Example movies */
	char movies2[10][100] = {{"Parwaz Hai Junoon"},{"Na Maloom Afrad"},{"Donkey King"},{"Bin Roye"},{"Teefa in Trouble"},{"Bol"},{"Wrong Number"},{"Superstar"},{"Sherdil"},{"Moor"}};
	
	printf("\t\t---There are the options for movie---\n\n");
	printf("Please chose the industry for the movie you would like to watch:\n1) Hollywood\n2) Lollywood\n\nChoice: ");
	scanf("%d", &c1);
	while(c1<1 || c1>2){
		printf("Invalid Choice!\nChoose again: ");
		scanf("%d", &c1);
	}
	printf("Please select the movie from the list below:\n");
	for(i=0; i<10; i++){
		printf("%d ",i+1);
		if(c1==1){
			puts(movies1[i]);
		}
        else if(c1==2){
        	puts(movies2[i]);
		}  	
	}
	printf("\nChoice: ");
	scanf("%d", &c2);
	if(c1==1){
		while(c2<1 || c2>10){
			printf("Invalid Choice!\nChoose again: ");
		    scanf("%d", &c2);
		}
	}
    else if(c1==2){
        while(c2<1 || c2>10){
			printf("Invalid Choice!\nChoose again: ");
		    scanf("%d", &c2);
		}
	}
	printf("\n");
	int num=0;
	num = seating();
	int seatprice;
	seatprice = num*500;
int caf;
caf = cafeteria();
FILE *fptr;                   //filing
if(x==0)
fptr = fopen("Golden theatre","w");
else
fptr = fopen("Golden theatre","a");
fprintf(fptr,"Customer Name: %s\n",c.name);
fprintf(fptr,"Customer Id: %d\n",c.id);
fprintf(fptr,"Seats reserved by customer: %d\n",num);
fprintf(fptr,"Total bill seat+food: %d\n\n\n",seatprice+caf);
fclose(fptr);
printf("\nAll data of customer successfully stored in file");
    	
	}

int main()
{  int o = 0;
    label:
    record(o);
	printf("\n\nIs there any more customer:\n");
    printf("YES Press-->1\n");
    printf("NO Press-->0\n");
	scanf("%d",&o);
	if(o==1)
{    printf("\n-----For next customer----\n\n");
		goto label;
}
else  
{ printf("\n\nIS THIS THE MANAGER:");
  printf("\nYES Press-->1");
  printf("\nNO Press-->0\n");
  int manager;
  scanf("%d",&manager);
  if(manager==1)
  {  char username[10];
     char password[10];
     char check1[10]= {"admin"};
     int test1,test2;
	 printf("Username: ");         //username and password are both admin
     scanf("%s",username);
     printf("Password: ");
     scanf("%s",password);
     test1= strcmp(check1,username);
     test2 = strcmp(check1,password);
     if(test1==0 && test2==0)
     { printf("---Showing the content of file---\n\n");
       FILE *fptr;
       fptr = fopen("Golden theatre","r");
       char c;
	    while(!feof(fptr))
       { c = fgetc(fptr);
	     printf("%c",c);
	     
  
	     
	   }
	   fclose(fptr);
	 }
	 else
	 { printf("\n\nACCESS DENIED\n");
	   printf("Cannot show content of file\n");
	   printf("WRONG CREDENTIALS");
	   exit(1);
	 }
	 
  }
  else
  exit(1);

}

}

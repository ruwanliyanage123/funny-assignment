#include <stdio.h>
#include <string.h>


void star_pattern(void);//first question
int pattern1(void);//interanl in one
int pattern2(void);//interanl in one
int pattern3(void);//interanl in one
void squre(void);//second q
float area(float radius);//internal in third
float area_differ(float radius1, float radius2);//internal in third
void find_area(void);//third q
void left_or_right(void);//fourth question
void minimum(void);//fifth question
void cube(void);// sixth question
void profit(void);//seventh question
void average(void);//eight que
void prime(void);//ningth
void complex(void);
int adding(int input);
int divide(int input);
int substract(int input);


void main(){
int question_number;
char vote[10];

printf("                                WELCOME TO RUWAN LIYANAGE PROGAMME TUTORIAL 01 \n");
printf("                                   ruwanliyanagegalle1994@gmail.com\n");
printf("                                            0772308519\n");
printf("                                ============ALL RIGHT RESERVED================\n");
    
    
        while(0<1){
printf("             DEAR SIR/MADAM,THERE HAVE 10 QUESTIONS YOU CAN SELECT THE EACH QUESTIO BY ITS NUMBER\n"); 
printf("                           SO ENTER THR QUESTION NUMBER FOR CHECK MY ANSWERS\n");
printf("***Enter the your choice:");
            scanf("%d",&question_number);
            if(question_number==1){star_pattern();}
            if(question_number==2){squre();}
            if(question_number==3){find_area();}
            if(question_number==4){left_or_right();}
            if(question_number==5){minimum();}
            if(question_number==6){cube();}
            if(question_number==7){profit();}
            if(question_number==8){average();}
            if(question_number==9){prime();}
            if(question_number==10){complex();}
            //if(question_number==){;}
            printf("if you want to exit press y\n");
            scanf("%s",vote);
            if(strcmp(vote, "y")==0){break;}
        }
printf("                                           DEAR SIR/MADAM THANK YOU SO MUCH\n\n\n");
}


//the first question
void star_pattern(void){
    
    int option;
    printf("        *what is your option is 1,2, or 3:\n");
    scanf("%d",&option);
    if(option==1){pattern1();}
    if(option==2){pattern2();}
    if(option==3){pattern3();}
    else{printf("  ***ERROR: YOUR OPTION IS INVALID:");}}
int pattern1(void){
    int number;
    printf("        *what is your favourite number:\n");
    scanf("%d",&number);
    for(int i = 1; i<= number; i++){
        for(int j= 1; j<=i; j++){
            printf("%d",i);    
        }
        printf("\n");
    }}
int pattern2(void){
    printf("        *what is your favourite number:");
    int number;
    scanf("%d",&number);
    for(int h= 1; h<=number; h++){
        
           int counter=1;
           while(counter<=number-h){
                printf(" ");
                counter++;
            }

            int mount =1;
            int left_counter = h;
            int right_counter = 2*h-1; 
            while(mount<=2*h-1){

                if(mount<=h){
                  printf("%d",left_counter); 
                  left_counter += 1; 
                    }
                    
                    
                if(mount>h){
                    right_counter -= 1; 
                    printf("%d",right_counter);
                    }

                mount++;
           }
        
        printf("\n");
        
    }}
int pattern3(void){
    printf("        **what is your favourite number:");
    int number,counter=1;
    scanf("%d",&number);
    while((1<=counter)&&(number>=counter)){
        for(int t=1; t <= number; t++){
                for(int j= 1; j<=t; j++){
                     printf("*");
                }
            printf("\n");
            counter++;
            }  
    }
    while((1<=counter)&&(number<=counter)){
        for(int u = number-1; u>=1; u--){
                for(int k=1; k<=u; k++){
                    printf("*");
                }
            printf("\n");
            counter--;
            }  
    }}

//the second question
void squre(void){
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    
    for(int i=1; i<=number; i++){
        for(int j=1; j<= number; j++){
            if((i==1)||(i==number)){
                printf("*");
            }
            else{
                if((j==1)||(j==number)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }}
    
//third question
void find_area(void){
    float radius1;
    float radius2;
    printf("enter the first radius");
    scanf("%f",&radius1);
    printf("enter the second radius");
    scanf("%f",&radius2);
    printf("the first circle area is   :=>%f\n",area(radius1));
    printf("the second circle area is  :=>%f\n",area(radius2));
    printf("the diference of the areas :=>%f\n",area_differ(radius1,radius2));}
float area(float radius){return(3.14159*3.14159*radius);}
float area_differ(float radius1, float radius2){
    if(radius1<radius2){
        return(area(radius2)-area(radius1));
    }
    else{
       return(area(radius1)-area(radius2)); 
    }}


//fourth question
void left_or_right(void){
    int number;
    printf("enter the number you want know\n");
    scanf("%d",&number);
    if(number%2==0){
        printf("THE ENTERED PAGE IS A LEFT HAND SIDE PAGE\n");
    }
    else{
        printf("THE ENTERD PAGE IS A RIGHT HAND SIDE PAGE\n");
    }}
//fifith
void minimum(void){
    int number;
    int min=0;
    int input;
    printf("enter the count of numbers you want you want too find the minimum:");
    scanf("%d",&number);
    
    for(int i=0; i<number; i++){
        printf("enter the number:\n");
        scanf("%d",&input);
        if(input<min){
            min = input;
        }
    printf("%d\n",min);
    }
    printf("THE MINIMUM NUMBER OF THE POOL IS:=>%d\n",min);}
// sixth
void cube(void){
    int number;
    int sum_of_the_cubes = 0;
    printf("enter the number you want\n");
    scanf("%d",&number);

    for(int i=5; i<=number; i++){
        sum_of_the_cubes += i*i*i;
    }
    printf("THE SUM OF THE NUMBERS:=> %d\n",sum_of_the_cubes );}
//seven
void profit(){
    int attendees;
    int cost;
    int profit;
    int income;

    printf("enter the number of employees\n");
    scanf("%d",&attendees);
    income = attendees*150;
    cost = 2000 + attendees*30;
    profit = income- cost;
    printf("THE PROFIT FOR THE %d ATTENDEES:=>%d\n",attendees,profit);}

//eighth
void average(void){
    int input;
    int count_of_the_number=0;
    float sum_of_numbers=0;
    float average;
    while(1>0){
        count_of_the_number +=1;
        printf("enter your %d vlaue",count_of_the_number);
        scanf("%d",&input);
        if(input<0){
            printf("ERROR\n");
        }
        
        sum_of_numbers +=input;
        if( (count_of_the_number>1)&&(input==0) ){
            break;
        }
    }
    average = sum_of_numbers/count_of_the_number;
    if((count_of_the_number>1) && sum_of_numbers==0){
        printf("NO AVERAGE \n");
    }
    else{
        printf("THE AVERAGE IS:%f\n",average);
    }}

//ninth
void prime(void){
    int input;
    int odd;
    printf("enter the you want number\n");
    scanf("%d",&input);
    int divide_count = 0;
    
    
    if(input==2){
        printf("yes two is a prime number\n");
    }
    if(input%2 != 0){
        odd = input;  
    }
    if(input!= 2 && input%2 == 0){
        printf("no the even number not cnsider as prirme numbers\n");
    }
    
    for(int i=3; i<odd; i++){

        if(odd%i==0){
            divide_count += 1;
            printf("your number is dividing by%d therefore it is not a prime number\n",i);
        }
     if(divide_count == 0){
        printf("yes it is a prime numbe\n");
    }   
    }}




//tenth question
void complex(void){
    int input;
    int command;
    printf("enter the number what  yout want to\n");
    scanf("%d",&input);
    printf("====================\n");
    printf("number 1:for adding\nnumber 2 for multiply by 2\nnumber 3 for substract 4\nnumber 4 for quit\n");
    printf("====================\n");
    
    while(1<2){
        printf("enter the command");
        scanf("%d",&command);
        if(command==1){adding(input);}
        if(command==2){divide(input);}
        if(command==3){substract(input);}
        if(command==4){break;}   
    }
    
}

int adding(int input){
    int value;
    printf("enter the second value");
    scanf("%d",&value);
    printf("the sum of %d and %d is:=> %d\n",input, value, input+value);
}

int divide(int input){
    printf("multyply by 4:=>%d\n",input*2);
}
int substract(int input){
    printf("substract  4:%d\n",input-4);
}


#include <stdio.h>
#include<math.h>


float calculatora(float x){
  int i=1; float sum=0, number;
  printf("Please enter numbers one by one: \n");
  for (i=1;i<=x;i++){
    scanf("%f",&number);
    sum = sum+number;
  }
  printf("Sum of the numbers = %.2f \n",sum);
 return 0;
}

float calculators( float x){
  int i=1; float diff=0, number;
  printf("Please enter numbers one by one: \n");
  for (i=1;i<=x;i++){
    scanf("%f",&number);
    diff = diff-number;
  }
  printf("Difference of the numbers = %.2f \n",diff);
 return 0;
}
float calculatorm( float x){
  int i=1; float prod=1, number;
  printf("Please enter numbers one by one: \n");
  for (i=1;i<=x;i++){
    scanf("%f",&number);
    prod = prod*number;
  }
  printf("Product of the numbers = %.2f \n",prod);
 return 0;
}

float calculatord( float x, float y){
  return x/y;
}

float exponent(float x,float y){
float e,s=1;
for(e=1;e<=y;e++){
    s*=x;
    }
printf("\nThe value of (%.1f) to the power (%.1f) : %0.1f \n",x,y,s);
return(s);
}

int sum1(int w,int x){
  int sumr;
  sumr=w+x;
  return sumr;
  
}

int sum2(int y,int z){
  int sumc;
  sumc=y+z;
  return sumc;
}

int fact(int x){
  int i=1, p=1;
  for (i=1;i<=x;i++){
    p=p*i;
  }
  printf("Factorial value of %d = %d", x,p);
  return 0;
}


int main(void) {
  float a,b; int decor,x, c,d,e,f,g,h,i,j,z=1;
  printf("       MULTIPURPOSE CALCULATOR and UNIT CONVERTOR\n      ---------------------------------------------\n");
  printf("   Mini project by:\n");
  printf("*ANANYA\t *SAHIL\t *APOORVA\t*AMVI\n");
  x=1;
  do{
  printf("\nFor unit conversion press '100'\nFor multipurpose calculator press '101'\n");
  scanf("%d",&decor);
  if(decor==100){
    int j;
printf("\n What operation do you want to perform");
printf("\n 1)TEMPERATURE CONVERSION");
printf("\n 2)WEIGHT MEASUREMENT");
printf("\n 3)LENGTH MEASUREMENT ");
printf("\n enter your choice : ");
scanf("%d",&j);
if(j==1)
{

    float fh,cl;
    int choice;

    printf("\n1=Convert temperature from Fahrenheit to Celsius");
    printf("\n2=Convert temperature from Celsius to Fahrenheit");
    printf("\nEnter your choice (1, 2)=");
    scanf("%d",&choice);

    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit:");
        scanf("%f",&fh);
        cl= (fh-32)/1.8;
        printf("Temperature in Celsius: %f",cl);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %f",fh);
    }
    else{
        printf("\nInvalid Choice");
    }
}
else if(j==2)
{
  int NUM;
  float WEIGHT,GRAMS;
  printf("select measuring mass\n");
  printf("1.MILLIGRAM\n");
  printf("2.CENTIGRAM\n");
  printf("3.DECIGRAM\n");
  printf("4.KILOGRAM\n");
  printf("5.MEGAGRAM\n");
  printf("6.OUNCE\n");
  printf("7.POUND\n");
  printf("enter your choice:");
  scanf("%d",&NUM);
  
  printf("ENTER WEIGHT HERE :");
  scanf("%f",&WEIGHT);
  switch(NUM)
  {
    case 1 :   
        printf("\n SELETED MILLIGRAMS TO GRAMS\n");
         GRAMS=WEIGHT/1000;
        printf("\n %f MILLIGRAMS IS %0.2f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 2 :   
         printf("\n SELETED CENTIGRAMS TO GRAMS\n");
        GRAMS=WEIGHT/100;
        printf("\n %f CENTIGRAMS IS %.2f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 3 :    
    printf("\n SELETED DECIGRAMS TO GRAMS\n");
    GRAMS=WEIGHT/10;
        printf("\n %f DECIGRAMS IS %.2f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 4 :    
        printf("\n SELETED KILOGRAMS TO GRAMS\n");
         GRAMS=WEIGHT*1000;
        printf("\n %f KILOGRAMS IS %.2f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 5 :  
        printf("\n SELETED MEGAGRAMS(TONS) TO GRAMS\n");
        GRAMS=WEIGHT*1000000;
        printf("\n %f TONS IS %.2f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 6 : 
        printf("\n SELETED OUNCES TO GRAMS\n"); 
        GRAMS=WEIGHT*2835/100;
        printf("\n %f OUNCES IS %0.2f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 7 :    
        printf("\n SELETED POUNDS TO GRAMS\n");
        GRAMS=WEIGHT*45359/100;
        printf("\n %f POUNDS IS %0.2f GRAMS\n",WEIGHT,GRAMS);
        break;
    default :   printf("YOU HAVE ENTERED WRONG CHOICE !");
        break;
  }

}
else if(j==3)
{
    float length, converted, measure;
    char inUnits;
    int choice;

        printf("Enter the value of length to be converted: ");
        scanf("%f",&measure);

        printf("Enter the unit of value entered (I, C, or M): ");
        scanf("\n%c", &inUnits);


        switch(inUnits){
            case 'I':
                converted = measure * 2.54;
                printf("The length you entered in inches is equal to %f centimeters", converted);
                break;

            case 'M':
                converted = measure*3.3;
                printf("The length you entered in meters is equal to %f feet", converted);
                break;
            case 'C':

                printf("\n 1)cm to meter 2)cm to km");
                scanf("%d",&choice);
                if(choice==1)
                {converted=(measure/100);
                printf("The length you entered in centimeters is equal to %f meter", converted);}
                else if(choice==2)
                {converted=(measure/1000);
                printf("The length you entered in centimeters is equal to %f kilometer", converted);}
                break;
              default:
                    printf("Incorrect unit entered.  Please enter a valid unit.");
                    break;}


}
    
  }
else if(decor==101){

  printf("\n\nEnter \n 1 for addition : \n 2 for substraction : \n 3 for multiplication : \n 4 for division : \n\nFor trigonometric functions(rad)\n 5 for sin() : \n 6 for cos() : \n 7 for tan() : \n 8 for sinh() : \n 9 for cosh() : \n 10 for tanh() :\n\nFor Logarithmic functions \n 11 for Log : \n 12 for Log10 : \n 13 for Exponential : \n\nFor power of number raised to another number \n 14 for power  : \n\nFor finding sum of two complex numbers \n 15 Complex number sum : \n\nFor finding the factorial value of a number \n 16 Factorial value : \n\n\nEnter your choice ->  ");
  scanf("%d", &c);
  
  switch (c) {
    case 1 :
    printf("\n\nEnter the total number you want to add : ");
    scanf("%f", &a);
    calculatora(a);

    break;

    case 2 :
    printf("\n\nEnter the total number you want to substraction : ");
    scanf("%f", &a);
    calculators(a);
    break;

    case 3 :
    printf("\n\nEnter the total number you want to multiply : ");
    scanf("%f", &a);
    calculatorm(a);
    break;

    case 4 :
    printf("\n\nEnter two numbers : ");
    scanf("%f%f", &a,&b);
    printf("Division : %.2f", calculatord(a,b));
    break;

    case 5 :
    printf("\n\nEnter the angle : ");
    scanf("%f",&a);
    printf("The value of sin(%.1f) : %f \n", a, sin(a));
    break;

    case 6 :
    printf("\n\nEnter the angle : ");
    scanf("%f",&a);
    printf("The value of cos(%.1f) : %f \n", a, cos(a));
    break;

    case 7 :
    printf("\n\nEnter the angle : ");
    scanf("%f",&a);
    printf("The value of tan(%.1f) : %f \n", a, tan(a));
    break;

    case 8 :
    printf("\n\nEnter the angle: ");
    scanf("%f",&a);
    printf("The value of sinh(%.1f) : %f \n", a, sinh(a));
    break;

    case 9 :
    printf("\n\nEnter the angle : ");
    scanf("%f",&a);
    printf("The value of cosh(%.1f) : %f \n", a, cosh(a));
    break;

    case 10 :
    printf("\n\nEnter the angle: ");
    scanf("%f",&a);
    printf("The value of tanh(%.1f) : %f \n", a, tanh(a));
    break;

    case 11 :
    printf("\n\nEnter the number : ");
    scanf("%f",&a);
    printf("The value of log(%.1f) : %f \n", a, log(a));
    break;

    case 12 :
    printf("\n\nEnter the number : ");
    scanf("%f",&a);
    printf("The value of log10(%.1f) : %f \n", a, log10(a));
    break;

    case 13 :
    printf("\n\nEnter the power : ");
    scanf("%f",&a);
    printf("The value of exp(%.1f) : %f \n",a, exp(a));
    break;

    case 14 :
    printf("\n\nenter the no. : ");
    scanf("%f",&a);
    printf("enter the power : ");
    scanf("%f",&b);
    exponent(a,b);
    break;

    case 15 :
    printf("\n\nEnter the real part :\n");
    scanf("%d%d", &d,&e);
    printf("\nEnter the complex part : \n");
    scanf("%d%d", &f,&g);
    h = sum1(d,e);
    i = sum2(f,g);
    printf("Complex after addition is (%d) + (%d)i", h,i);
    break;

    case 16 :
    printf("\n\nEnter the number : ");
    scanf("%d", &j);
    fact(j);
    break;

    
    default :
    printf("Wrong input"); 
  }
  
}
else{printf("invalid input");}
printf("\npress 0 to exit and 1 to continue\n");
scanf("%d",&x);
}while(x==1);

printf("Thank you!!");

return 0;}

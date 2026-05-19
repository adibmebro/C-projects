#include <stdio.h>
int main(){
    int a,c,e;
    float b,d;
    
    printf("welcome to \nRUET CSE-25\n");
    printf("\nEnter your amount(TAKA): ");
    scanf("%d",&a);

    b=a/123.000;
    c=a/123;
    d=b-c;
    e=d*100;
   
    printf("\nYour convertion is successful.\nYou will get %.2f$\nIn words= %d Dollars and %d Cents.\n",b,c,e);
    printf("\nYou'll get %d of 100$\n",c/100);
    c=c%100;
    printf("You'll get %d of 50$\n",c/50);
    c=c%50;
    printf("You'll get %d of 20$\n",c/20);
    c=c%20;
    printf("You'll get %d of 10$\n",c/10);
    c=c%10;
    printf("You'll get %d of 5$\n",c/5);
    c=c%5;
    printf("You'll get %d of 2$\n",c/2);
    c=c%2;
    printf("You'll get %d of 1$",c);
    printf("\n&\n");
    
    printf("You'll get %d of 50 cents\n",e/50);
    e=e%50;
    printf("You'll get %d of 25  cents\n",e/25);
    e=e%25;
    printf("You'll get %d of 10 cents\n",e/10);
    e=e%10;
    printf("You'll get %d of 5 cents\n",e/5);
    e=e%5;
    printf("You'll get %d of 2 cents\n",e/2);
    e=e%2;
      printf("You'll get %d of 1 cents\n",e);
    

        
        
    

    return 0;
}
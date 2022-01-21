
    /*
    int num1;
    scanf("%d",&num1);
    printf("Value of num1 is %d ",num1);

    int x = 5;
    int y = 10;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d",x,y);

    int num,sum,temp;
    sum = 0;
    num = 123;
    while(num!=0){
        temp = num%10;
        sum = sum*10+temp;
        num = num/10;
    }
    printf("%d",sum);

    int i,j,rows;
    rows = 3;
    for (i=0;i<=rows;i++){
        for(j=0;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    int i,sum,rem;
    sum = 1;
    scanf("%d",&i);
    while(i>0){
        sum = sum*i;
        i--;
    }
    printf("Factorial of the given number is %d \n",sum);

    int i,j,space,rows;
    rows=5;
    for(i=1;i<rows+1;i++){
        for(space=rows-1;space>=i;space--){
            printf(" ");
        }
        j = 1;
        while (j<=i)
        {
            printf(" *");
            j++;
        }
        printf("\n");
    }
    int rows,i,j,num;
    num = 1;
    rows = 4;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf(" %d",num);
            num++;
        }
    printf("\n");
    }

    int i,n,n1=0,n2=1,nextTerm;
    n = 10;
    for(i=0;i<=n;i++){
        printf(" %d",n1);
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }

    puts("Enter some values");
    int a = getchar();
    int b = getchar();
    putchar(a);
    putchar(b);

                        Array

    int array[5];
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }    
    for(int i=0;i<5;i++)
        printf("%d",array[i]);
    }

    int *p,c;
    c = 5;
    p = &c;
    printf("Value of *p: %d\n",*p);
    printf("Value of c : %d\n",c);
    printf("Value of p is : %d\n",p);

    */

  
#include<stdio.h>
#include<stdio.h>
void printN(int n){
    printf("\n");
    for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(j==0||j==n-1||i==j) //==> 
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
void printO(int n){
   for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(j==0||i==0||i==n-1||j==n-1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    } 
}
void printP(int n){
     for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(j==0||i==0||i==n/2||(j==n-1&&i<=n/2))
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
void printQ(int n){
     for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(j==0||j==n-1||i==0||i==n-1||(j==i && i>=n/2 && j>=n/2))
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
void printR(int n) {
    printf("\n");
    
    for(int i=1;i<=n;i++)
    {
        if(i==1||i==n/2+1||j==1||(j==n && i<=n/2+1) || (j==i && i>=n/2+1 && j>=n/2+1))
        {
            printf("*");
        }else{
            printf(" ");
        }
        printf("\n");
    }

   
}
void printS(int n){
    printf("\n");
    for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(i==0||i==n-1||i==n/2||(j==0&&i<=n/2)||(j==n-1&&i>=n/2))
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}
void printT(int n){
     for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(i==0||j==n/2)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    } 
}
void printU(int n){
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        if(j==1||j==n||i==n)
        {
            printf("*");
        }else{
            printf(" ");
        }
        printf("\n");


    }

}
void printV(int n){
    for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(i==j||j==n-1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
void printW(int n){
    for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(j==0||j==n-1||(i==j&&i>=n/2)||(i+j==n+1&&i>=n/2))
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
void printX(int n){
for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(i+j==n-1||i==j)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
void printY(int n){
for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(i+j==n-1||i==j&&i<n/2)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
void printZ(int n){
for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(i==0||i==n-1||i+j==n-1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
void printA(int n){
    printf("\n");
    for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(j==0||i==0||j==n-1||i==(n/2))
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}

void printI(int n){
    printf("\n");
     for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(i==1||i==n||j==(n/2)+1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}
void printH(int n){
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1||j==n||i==(n/2)+1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}
void printD(int n) {
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1||j==n||i==1||i==n)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}


#include<stdio.h>

// START  a..


void printA(int n){
    
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1 || i==1 || j==n || i==(n/2)+1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}
// B...
void printB(int n){
    
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1 || i==1 || i==n ||j==n || i==(n/2)+1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}


// C


void printC(int n){
    
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1 || i==1 || i==n)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}

//D..

void printD(int n) {
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==3||j==n||i==1||i==n)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}

//E..

void printE(int n) {
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1 || i==1 || i==n || i==(n/2)+1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}


//F..

void printF(int n) {
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1 || i==1 || i==(n/2)+1)
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}


//G..


void printG(int n) {
    printf("\n");
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1 || i==1 )
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}


//H..
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


//I..
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

// j...

void printJ(int n){
    printf("\n");
     for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==n || i==n  || (j==1 && i>=2*n/3+1))
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}

//K...

 void printK(int n){
    printf("\n");
     for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1 || i+j==n+1 || j<=(n/2)+1  )
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}
// L...


void printL(int n){
    printf("\n");
     for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

           if(j==1 || i==n )
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }

}
void printM(int n){
    printf("\n");
     for(int i=0;i<=n-1;i++)
    {

        for(int j=0;j<=n-1;j++)
        {

           if(j==0||j==n-1||(i==j&&i<=n/2)||(i+j==n-1&&i<=n/2))
        {
         printf("*");
        }else{
                printf(" ");
              }
        
    
        }
    printf("\n");
    }
}



 

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
        for(int j=1;j<=n;j++)
        {
        if(i==1||i==n/2+1||j==1||(j==n && i<=n/2+1) || (j==i && i>=n/2+1))
        {
            printf("*");
        }else{
            printf(" ");
        }
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


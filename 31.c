// Implement a function to concatenate two arrays without modifying the original arrays.


#include<stdio.h>
int con(int a[],int na,int b[],int nb,int c[]){
    int k=0;
    for(int i=0;i<na;i++){
        c[k++]=a[i];
    }
    for(int i=0;i<nb;i++){
        c[k++]=b[i];
    }
}
int main(){
    int a[]={1,2,3},na=3,b[]={4,5,6},nb=3,c[6];

    con(a,na,b,nb,c);
    for(int i=0;i<6;i++)
    printf("%d",c[i]);





}



/*
//remove duplicate elements 

#include<stdio.h>
int dup(int a[],int n){
    int k=0;
    for(int i=0;i<n;i++){

        int key=0;
        for(int j=0;j<k;j++){
            if(a[i]==a[j]){
                key=1;
                break;
            }
        }

        if(!key){
            a[k]=a[i];
            k++;
        }
    }
return k;

    
}
int main(){
    int a[]={1,1,2,3,2,4},n=6,i,j;


    n=dup(a,n);


    for(i=0;i<n;i++)
    printf("%d",a[i]);
}



i<=10;j<=13;k=4;m=10;



// first and last elements of an array.


#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5},i,j,n=5,t;
    t=a[0];
    a[0]=a[n-1];
    a[n-1]=t;


    for(i=0;i<n;i++)
    printf("%d",a[i]);
}






if((i==1&&j))



#include<stdio.h>
int main(){
    int i,j,k,m,p;
    for(i=1;i<=10;i++){

    
    if(i<=4)
        {
            k=5-i;
        m=9+i;
        }
        else {
            k=i-3;
            m=17-i;//17-5 17-6
        }
        
        for(j=1;j<=13;j++){
            if((i==1)&&(j>4&&j<10)||j==k||j==m)
            printf("*");
            else printf(" ");
        }printf("\n");
        
        
        
    }
}
*/



// #include<stdio.h>
// int main(){
//     int i,j,k,n=1;
//     for(i=1;i<=16;i++){
//         if(i<=8){
//             k=i;
//             n=n+i-1;


//         }else {
//             k=16-i;

//             n=n-k;
//         }for(j=1;j<=16;j++){
//             if(j<=k)
//             printf("%2d",n++);
//             else if(j>16-k)
//             printf("%2d",--n);
//             else
//             printf("  ");
//         }printf("\n");
//     }
// }











// #include<stdio.h>
// int main(){
//     int i,j,n;

//     for(i=1;i<=6;i++){
//         n=i;
//         for(j=1;j<=11;j++){
//             if(j<=6-i||j>11-(6-i))
//             printf(" ");
//             else if(j<=6)
//             printf("%d",--n);
//             else 
//             printf("%d",++n);
//         }printf("\n");
//     }
// }








// #include<stdio.h>
// int main(){
//     int i,j,k,p=1,m=1;
     

//     for(i=1;i<=11;i++){
//         // if (i%3==0)
//         // k=m; else k=p;
//         k=i%3==0?m:p;
//         for(j=1;j<=k;j++){
//             if(i%3==0){
//                 if(j%2==0)
//                 printf("$*$");
//                 else printf("*$*");

//             }else printf("*");
//         }printf("\n");
//         if(i%3==0){
//             m++; p++;
//         }
//     }printf("*$*$*$*$*$");
// }
// #include<stdio.h>
// int main(){
//     int i,j,k,m=1,p=1;
//     for(i=1;i<=11;i++){
//         if(i%3==0)
//         k=m;
//         else
//         k=p;

//         for(j=1;j<=k;j++){
//             if(i%3==0){
//                 if(j%2==0)
//                 printf("$*$");
//                 else
//                 printf("*$*");

//             }else printf("*");
//         }printf("\n");
//         if(i%3==0){
//             m++;p++;
//         }
//     }printf("*$*$*$*$*$");
// }



// #include<stdio.h>
// int main(){
//     int ui,j,k,p=m=1;
// }
    
/*
#include<stdio.h>
int main(){
    int i,j,k,m=1,p=1;

    for(i=1;i<=11;i++){
        if(i%3==0)
        k=m;
        else
        k=p;


        for(j=1;j<=k;j++){
            if(i%3==0){
                if(j%2==0)
                printf("$*$");
                else
                printf("*$*");

            }else
            printf("*");
        }printf("\n");
        if(i%3==0){
            m++;p++;
        }
    }printf("*$*$*$*$*$");
}


#include<stdio.h>
int main(){
    int i,j,k,m=1,p=13;

    for(i=1;i<=13;i++){
          if(i==12)
        k=7;
        else if(i%2==0)
        k=m;
        else k=p;

        for(j=1;j<=k;j++){
           printf("*");}

         if(i%2==0){
               
                m++;
            }else {
                p=p-2;

            }
            printf("\n");
        }
        
    }



#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=6;i++){
        if(i<=3)
        k=4-i;
        else k=i-3;
        for(j=1;j<=3;j++){

            if(j<=k)
            printf("*#$");
            else
            printf(" ");
        }printf("\n");
    }
}
#include<stdio.h>
int main(){
    int i,j,k,m=1,p=1;

    for(i=1;i<=11;i++){
        if(i%3==0)
        k=m;
        else k=p;

        for(j=1;j<=k;j++){
            if(i%3==0){
                if(j%2==0)
                printf("$*$");
                else
                printf("*$*");
            }else printf("*");
        }printf("\n");
        if(i%3==0){
            m++;p++;

        }
    } printf("*$*$*$*$*$ ");
}











//Write a program to check if an array is symmetric (the same forward and backward).
#include<stdio.h>
int main(){
    int a[]={1,2,3,2,1};
    int n=5;
    int  l=0,r=n-1;
    int f=1;
    
    
    while(l<r){
        if(a[l]!=a[r]){
            f=0;
            break;
        }l++;
    r--;
    
}if(f)
printf("symetric");
else
printf("not symetric");
}
Implement a program to swap the first and last elements of an array. 
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5},n=5,t;
    t=a[0];
    a[0]=a[n-1];
    a[n-1]=t;

     for (int i=0;i<n;i++){
        printf("%d ",a[i]);
     }
        
     
     

    }
    #include<stdio.h>
    int main(){
    int i,j,k,n=1;
    for(i=1;i<=16;i++){
        if(i<=8){
            k=i;n=n+i-1;
        }else {
            k=16-i;
            n=n-k
        }
    }
}
#include<stdio.h>
int main(){
    int i,j,k,m=1,p=1;
    for(i=1;i<=11;i++){
        if(i%3==0)
        k=m;
        
        else  k=p;
        
        for(j=1;j<=k;j++){
            if(i%3==0){
                if(j%2==0){
                    printf("$*$");
                    
                }else 
                printf("*$*");
                
            }else printf("*");
            
            
        }printf("\n");
        if(i%3==0){
            m++;
            p++;
        }
    }
    printf("*$*$*$*$*$ ");
}

*/
/*

#include<stdio.h>
int main(){
    int i,j,k,n=1;
    for(i=1;i<=16;i++){
        if(i<=8){
            k=i;
            n=n+i-1;
            
        }else
        {
            k=16-i;
            n=n-k;
            
        }for(j=1;j<=16;j++){
            if(j<=k){
                printf("%2d",n++);
            }
            else if(j>16-k)
            printf("%2d",--n);
            else printf("  ");
        }printf("\n");
    }
}
#include<stdio.h>
int main(){
    int i,j,k,m=1;
    for(i=1;i<=11;i++){
        if(i%3==0)
        k=m;
        else if(i<3)
        k=1;
        else if(i<6)
        k=2;
        else if(i<9)
        k=3;
        else if(i<12)
        k=4;

        for(j=1;j<=k;j++){
            if(i%3==0){
                if(j%2==0)
                printf("$*$");
                else
                printf("*$*");
            }else
            printf("*");
        }
        
        if(i%3==0)
        m++;
        printf("\n");
}printf("*$*$*$*$*$");
}
*/
printf("*$*$*$*$*$");
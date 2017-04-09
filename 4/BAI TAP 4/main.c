#include <stdio.h>
#include <math.h>

int nguyento(int n)
{
    
    int i ;
    if (n<2) return 0;
    for(i=2;i<=sqrt(n);i++)
    
            if (n%i==0) return 0 ;
    
    return 1;
    
    
}

int main()
{
    int ary[50];
    int i,n;
    printf("Nhap tong so phan tu cua mang :");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
     {
        printf("Nhap phan thu %d :",i);
        scanf("%d",&ary[i]);
     }
    
   
    printf("Cac so nguyen to la :");
    
  
    {
    for (i=1;i<=n;i++)
        
         if (nguyento(ary[i])==1)
           printf("%d\t",ary[i]);
            
    }

}










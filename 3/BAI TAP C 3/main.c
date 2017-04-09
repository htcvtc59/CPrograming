
#include<stdio.h>
#include <math.h>

int nguyento(int n)
{
    if (n<2) return 0;
    
    for (int i=2;i<=sqrt(n);i++ )
        if (n%i==0) return 0;
    
         return n;
}



int main()
{
    int n;
    printf("Nhap mot so nguyen : ");
    scanf("%d",&n);
    if (nguyento(n))
        printf("%d la so nguyen to\n",n);
    else
        printf("%d khong la so nguyen to\n",n);
    
   
    
}

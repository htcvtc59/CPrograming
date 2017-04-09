#include <stdio.h>

int csgtmin(int x[],int n)
{
    int i;
    int index=1;
        for(i=1;i<=n;i++)
        if(x[i]<x[index])
            index=i;
        return(index);
}


int main()
{
    int ary[50];
    int j,b,t;
    printf("Nhap so phan tu cua mang so nguyen : ");
    scanf("%d",&b);
    
    for(j=1; j<=b;j++)
    {
        printf("Nhap cac phan tu thu %d la : ",j);
        scanf("%d",&ary[j]);
        
    }
    
    t=csgtmin(ary,b);
    printf("Chi so cua phan tu nho nhat la : %d \n",t);

}

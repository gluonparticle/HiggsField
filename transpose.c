include<stdio.h>
void main()
{
int a[20 ][20],b[20][20], m,n, i,j;
printf(“enter the rows and column of matrix\n”);
scanf(“%d%d”,&m,&n);
printf(“Enter the elements of Matrix\n”);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf(“%d”,&a[i][j]);
}
}
printf(“Enter the elements of Matrix are\n”);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf(“%d\t”,a[i][j]);
}
printf(“\n”);
}
printf(“Matrix Transpose\n”);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)

Availaible at VTU HUB (Android App)

Mangalore Institute of Technology and Engineering,

Moodabidri. 22POP13
22POP13

Department of Computer Science & Engineering 19

{
b[j][i]=a[i][j];
}
}
printf(“The Transpose of the matrix is \n”);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf(“%d\t”,b[i][j]);
}
printf(“\n”);
}
}

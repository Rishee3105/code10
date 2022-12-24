/*This program is prepared by 22CE030.*/
#include<stdio.h>
union Library
{
    int acc_no;
    char B_Title[20];
    char A_Name[20];
    float prize;
    int flag;
}b1;
void main()
{
    fflush(stdin);
    scanf("%d",&b1.acc_no);
    printf("Accession Number:%d\n",b1.acc_no);
    fflush(stdin);
    scanf("%[^\n]s\n",b1.B_Title);
    printf("Book title:%s\n",b1.B_Title);
    fflush(stdin);
    scanf("%[^\n]s\n",b1.A_Name);
    printf("Author Name:%s\n",b1.A_Name);
    fflush(stdin);
    scanf("%f",&b1.prize);
    printf("Prize:%f\n",b1.prize);
    fflush(stdin);
    scanf("%d",&b1.flag);
    if(b1.flag==1)
    {
        printf("\nBook is issued.");
    }
    else
    {
        printf("\nBook is not issued.");
    }
    printf("\nThis program is prepared by 22CE030.");
}
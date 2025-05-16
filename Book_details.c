#include <stdio.h>
struct book{
    char name[20];
    int edition;
    char genre[20];
    char author[20];
};
int main()
{ 
    int i;
    struct books b[20];
    for(i=0;i<5;i++)
{
printf("enter a book details%d\n",i+1);
printf ("enter a book name:");
scanf("%s" &b[i].name);
printf ("enter a author:");
scanf("%s",&b[i].author);
printf("enter a edition:");
scanf("%s",&b[i].edition);
printf ("enter a gener");
scanf("%s"&b.gener);
}
printf ("book details \n");
printf ("%-20 s%-15 s%-10s%-15s%\n","book name","author","edition","gener");
printf ("\n");
for(i=0;i<5;i++)
{
 printf ("%-20 s%-15 s%-10s%-15s%\n","book name","author","edition","gener");
  }
}


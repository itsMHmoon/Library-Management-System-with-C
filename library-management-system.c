#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library{
   char bookname[50];
   char author[50];
   int noofpages;
   int price;
   int tag;
};

int main(){
   struct library lib[100];
   char bookname[30];
   int i,j, keepcount;
   i=j=keepcount = 0;
   while(j!=6){
      printf("\n1. Add book information\n");
      printf("2. Display book information\n");
      printf("3. Total books in the library\n");
      printf("4. Exit");
      printf ("\n\nEnter one of the above: ");
      scanf("%d",&j);
      switch (j){
         /* Add book */
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].noofpages);
            printf ("Enter price = ");
            scanf ("%d",&lib[i].price);
            printf ("Enter track number = ");
            scanf ("%d",&lib[i].tag);
            keepcount++;
            i++;
            break;
         case 2:
            printf("you have entered the following information\n");
            for(i=0; i<keepcount; i++){
               printf ("\t book name = %s\n",lib[i].bookname);
               printf ("\t author name = %s\n",lib[i].author);
               printf ("\t pages = %d\n",lib[i].noofpages);
               printf ("\t price = %d taka\n",lib[i].price);
               printf ("\t track number = %d\n",lib[i].tag);
            }
            break;
         case 3:
            printf("\n There is no book in the library : %d", keepcount);
            break;
         case 4:
            exit (0);
      }
   }
   return 0;
}

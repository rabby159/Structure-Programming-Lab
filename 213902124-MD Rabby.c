/**
 BOOKSHOP MANAGEMENT SYSTEM

*/

//Md. Rabby,213902124


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
  char bookName[30];
  char author[30];
  int pages;
  float price;
};

int main()
{
  struct library l[100];
  char arNm[30], bookNm[30];
  int i, j, keepcount;
  i = j = keepcount = 0;

  while (j != 6)
  {
    printf("\n\n1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the title of specified book\n");
    printf("5. List the count of books in the library\n");
    printf("6. Exit");

    printf("\n\nEnter one of the above : ");
    scanf("%d", &j);

    switch (j)
    {
    /* Add book */
    case 1:

      printf("Enter book name = ");
      scanf("%s", l[i].bookName);

      printf("Enter author name = ");
      scanf("%s", l[i].author);

      printf("Enter pages = ");
      scanf("%d", &l[i].pages);

      printf("Enter price = ");
      scanf("%f", &l[i].price);
      keepcount++;

      break;
    case 2:
      printf("you have entered the following information\n");
      for (i = 0; i < keepcount; i++)
      {
        printf("\nbook name = %s", l[i].bookName);

        printf("\nauthor name = %s", l[i].author);

        printf("\npages = %d", l[i].pages);

        printf("\nprice = %f", l[i].price);
      }
      break;

    case 3:
      printf("Enter author name : ");
      scanf("%s", arNm);
      for (i = 0; i < keepcount; i++)
      {
        if (strcmp(arNm, l[i].author) == 0)
          printf("%s %s %d %f", l[i].bookName, l[i].author, l[i].pages, l[i].price);
      }
      break;

    case 4:
      printf("Enter book name : ");
      scanf("%s", bookNm);
      for (i = 0; i < keepcount; i++)
      {
        if (strcmp(bookNm, l[i].bookName) == 0)
          printf("%s \t %s \t %d \t %f", l[i].bookName, l[i].author, l[i].pages, l[i].price);
      }
      break;

    case 5:
      printf("\n No of books in library : %d", keepcount);
      break;
    case 6:
      exit(0);
    }
  }
  return 0;
}

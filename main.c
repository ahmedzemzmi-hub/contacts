#include <stdio.h>

int main(void) {
  int options = 0;
  char contact_name[30];
  char contact_number[30];
  char contact_email[50];
  char changes;
  printf("=======Welcome To The Contacter=======\n");

  while (true) {
    printf("enter an option number:\n0. Exit the program\n1. About program\n2. Add a new contact\n3. show all contacts\n4. delet contact\n>>>> ");
    scanf("%d", &options);

    if (options == 1) {
      printf("this is a contacts manager program\nyou can add, remove and delete contacts\nthis app helps you keep your contacts organized\n");
    }

    else if (options == 2) {
      printf("enter contact name, number and email:\nname: ");
      scanf("%s", contact_name);
      printf("\nnumber: ");
      scanf("%s", contact_number);
      printf("\nemail: ");
      scanf("%s", contact_email);
      printf("\ncontact added!\nsee new changes (y/n): \n");
      scanf(" %c", &changes);
    changes_invalid_input:
      if (changes == 'y') {
        printf("new contact: %s\ncontact number: %s\ncontact email %s\n", contact_name, contact_number, contact_email);
      }
      else if (changes == 'n') {
        continue;
      }
      else if (changes != 'y' && changes != 'n') {
        printf("invalid input, please try again");
        goto changes_invalid_input;
      }
    }

    else if (options == 3) {
      printf("not working yet\n");
    }
    else if (options == 0) {
      printf("quit\n");
      return 0;
    }
    else {
      printf("invalid input, please try again");
      continue;
    }
 
  }
  return 0;
}

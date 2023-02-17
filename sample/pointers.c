#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  char* tab = "oh";
  char* tab2 = "ah";

  void* ptrTab = tab;
  void* ptrTab2 = tab2;

  void** ptr = &ptrTab;
  ptr = &ptrTab2;

  printf("s: %s\n", (char*)*ptr);

  // char* tab[] = {
  //   "toto",
  //   "tutu",
  //   "titi",
  //   "tata"
  // };

  // printf("d: %d\n", sizeof(tab)); // 32 = 8 * 4
  // printf("d: %d\n", sizeof(tab[0])); // 8 = 5 + 3??

  // char** tab2 = tab;

  // printf("tab01: %c\n", tab[0][1]);
  // printf("tab11: %c\n", tab[1][1]);
  // printf("tab01: %c\n", tab2[0][1]);
  // printf("tab11: %c\n", tab2[1][1]);

  // printf("*tab0: %c\n", *(tab2+0));
  // printf("*tab1: %c\n", *(tab2+1));
  // printf("*tab2: %c\n", *(tab2+2));
  // printf("*tab3: %c\n", *(tab2+3));
  // printf("*tab4: %c\n", *(tab2+4));
  // printf("*tab5: %c\n", *(tab2+5));
  // printf("*tab6: %c\n", *(tab2+6));
  // printf("*tab7: %c\n", *(tab2+7));
  // printf("*tab01: %c\n", *(tab2 + (0 * 5) + 1));
  // printf("*tab11: %c\n", *(tab2 + (1 * 5) + 1));

  // printf("ptr2: %c\n", ((char*)ptr2)[1]);
  // printf("ptr2: %c\n", *((char*)(ptr2 + 1* sizeof(char))));


  // printf("%c", (char*)(buf + i * sizeof(char)));
  // printf("%c", ((char*)buf)[i];
  return 0;
}

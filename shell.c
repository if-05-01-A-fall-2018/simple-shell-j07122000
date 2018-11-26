#include "stdio.h"

int main(int argc, char const *argv[]) {

   char *args[]={"echo","hi",NULL};

   execvp(args[0],args);

   printf("Ending-----\n");

}
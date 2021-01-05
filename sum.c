#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int Arr[10];
    int total;


  if (argc != 2){
    printf("Incorrect AMT of Arguments");
  }

  else{
    FILE *file = fopen(argv[1], "r");
    if (file == 0){
      printf("could not open file");
    }

    for (int i = 0; i < 10; i++){
      fscanf(file, "%d", &Arr[i]);
    }
    for (int i = 0; i < 10; i++){
      total += Arr[i];
    }
    printf("%d\n", total);

    fclose(file);
  
    }
}

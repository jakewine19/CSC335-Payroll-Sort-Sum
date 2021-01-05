#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Value 1000



int main(int argc, char *argv[]){

    int A[Value];

    int i,j,count = 0;

    FILE *txtFile = fopen(argv[1], "r");

    if(argc < 2 || argc > 3){
        printf("Enter in 2 Arguments | IE: filename textFileName");
        return 0;
    }

    else if(txtFile == NULL){
        printf("File can't be opened");
        return 0;
    }
        else{
            while(count < Value && fscanf(txtFile, "%d", &A[count]) == 1){
                count++;
            } 
            fclose(txtFile);

                for(i = 0; i < count; i++){
                    for(j = i + 1; j < count; j++){

                        if(A[i] > A[j]){
                            int temp = A[i];
                            A[i] = A[j];
                            A[j] = temp;
                        }
                    }
                }

            for( i = 0; i < count; i++){
                if(i < count-1){
                    printf("%d ", A[i]);
                }
                else{
                    printf("%d", A[i]);
                }
            }

        }

        printf("\n");

}
     
     
     



#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 3

// Function to add two vectors
void add_vectors(int *vec1, int *vec2, int *result, int size) {
    // we take the 2 input vectors and the result as pointers to avoid copying 
    // data unnecssarily. The size of the vectors needs to be passed as well 
    // since pointers do not ocontain information of the size.
    for (int i = 0; i < size; i++) {
        result[i] = vec1[i] + vec2[i];
    }
}

int main() {
    int vector1[VECTOR_SIZE] = {1, 2, 3};
    int vector2[VECTOR_SIZE] = {4, 5, 6};
    int result[VECTOR_SIZE];

    // Call the function to add vectors
    add_vectors(vector1, vector2, result, VECTOR_SIZE);

    // Print the result
    printf("Result vector: ");
    for (int i = 0; i < VECTOR_SIZE; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

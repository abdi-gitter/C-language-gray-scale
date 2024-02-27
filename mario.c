#include <stdio.h>

int get_size(void); // Corrected declaration
void print_grid(int size); // Corrected declaration

int main(void) {
    // Get the size of grid
    int n = get_size();
    // Print grid of bricks
    print_grid(n);

    return 0;
}

int get_size(void) {
    int n;
    do {
        printf("Size: "); // Use printf to display the prompt
        scanf("%d", &n);  // Use scanf to read the integer input
    } while (n < 1);     // Repeat if the input is less than 1
    return n;
}

void print_grid(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("#");
        }
        printf("\n");
    }
}

/*#include<stdio.h>
int get_size(void)
void print_grid(int size)

int main(void)

{   //Get the size of grid
    int n = get_size();
    //print grid of bricks
    print_grid(n);

}

int get_size(void)

{   int n;
    do
    {
        n = get_size("Size: ");
        // printf("Enter the size: ");
        // scanf("%d", &n);
        // printf("The entered size is: %d\n", n);
    }
    while(n < 1);
    return n;
}

void print_grid(int size)
{   int n;
    for(int i = 0; i < size; i++)
    {
        for(int j  = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}*/
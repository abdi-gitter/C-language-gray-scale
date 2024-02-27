#include <stdio.h>
#include <stdlib.h>

// Define image width and height (you can change these values)
#define WIDTH 5
#define HEIGHT 5

// Function to apply grayscale filtering
void applyGrayscaleFilter(unsigned char inputImage[WIDTH][HEIGHT], unsigned char outputImage[WIDTH][HEIGHT]) {
    int i, j;
    for (i = 1; i < WIDTH - 1; i++) {
        for (j = 1; j < HEIGHT - 1; j++) {
            // Apply a basic 3x3 averaging filter
            int sum = 0;
            sum += inputImage[i - 1][j - 1];
            sum += inputImage[i - 1][j];
            sum += inputImage[i - 1][j + 1];
            sum += inputImage[i][j - 1];
            sum += inputImage[i][j];
            sum += inputImage[i][j + 1];
            sum += inputImage[i + 1][j - 1];
            sum += inputImage[i + 1][j];
            sum += inputImage[i + 1][j + 1];
            
            // Calculate the average value and assign it to the output pixel
            outputImage[i][j] = (unsigned char)(sum / 9);
        }
    }
}

int main() {
    unsigned char inputImage[WIDTH][HEIGHT] = {
        {50, 70, 80, 90, 100},
        {60, 80, 90, 100, 110},
        {70, 90, 100, 110, 120},
        {80, 100, 110, 120, 130},
        {90, 110, 120, 130, 140}
    };
    
    unsigned char outputImage[WIDTH][HEIGHT];
    
    applyGrayscaleFilter(inputImage, outputImage);
    
    printf("Input Image:\n");
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            printf("%3d ", inputImage[i][j]);
        }
        printf("\n");
    }
    
    printf("\nOutput Image (Grayscale Filter Applied):\n");
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            printf("%3d ", outputImage[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

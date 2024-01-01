#if defined(D_NEXYS_A7)
   #include "bsp_printf.h"
   #include "bsp_mem_map.h"
   #include "bsp_version.h"
#else
   PRE_COMPILED_MSG("no platform was defined")
#endif

#include "psp_api.h"


typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
} RGB;


#define N 128
#define M 128
extern unsigned char VanGogh_128x128[];
RGB ColourImage[N][M];
RGB filtered[N][M]; 


void initColourImage(RGB image[N][M]) {
    int i,j;

    for (i=0;i<N;i++)
        for (j=0; j<M; j++) {
            image[i][j].R = VanGogh_128x128[(i*M + j)*3];
            image[i][j].G = VanGogh_128x128[(i*M + j)*3 + 1];
            image[i][j].B = VanGogh_128x128[(i*M + j)*3 + 2];
            

            // Initialize this image to 0
            filtered[i][j].R = 0;
            filtered[i][j].G = 0;
            filtered[i][j].B = 0;
        }
}


void filterImage(RGB image[N][M], RGB filt[N][M]) {
    for (int i = 1; i < N-1; i++) {
        for (int j = 1; j < M-1; j++) {
            filt[i][j].R = (image[i-1][j-1].R + image[i][j-1].R + image[i+1][j-1].R +
                            image[i-1][j].R   + image[i][j].R   + image[i+1][j].R   +
                            image[i-1][j+1].R + image[i][j+1].R + image[i+1][j+1].R) / 9.0;

            filt[i][j].G = (image[i-1][j-1].G + image[i][j-1].G + image[i+1][j-1].G +
                            image[i-1][j].G   + image[i][j].G   + image[i+1][j].G   +
                            image[i-1][j+1].G + image[i][j+1].G + image[i+1][j+1].G) / 9.0;

            filt[i][j].B = (image[i-1][j-1].B + image[i][j-1].B + image[i+1][j-1].B +
                            image[i-1][j].B   + image[i][j].B   + image[i+1][j].B   +
                            image[i-1][j+1].B + image[i][j+1].B + image[i+1][j+1].B) / 9.0;
        }
    }
}

int main(void) {
    // Create an NxM matrix using the input image
    initColourImage(ColourImage);

    filterImage(ColourImage, filtered);

    // Initialize Uart
    uartInit();

    // Print message on the serial output
    printfNexys("Filtered Color Image\n");

    while(1);

    return 0;
}



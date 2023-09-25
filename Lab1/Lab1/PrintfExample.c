#if defined (D_NEXYS_A7)
    #include <bsp_printf.h>
    #include <bsp_mem_map.h>
    #include <bsp_version.h>
#else
    PRE_COMPILED_MSG("no platform was defined")
#endif

#include <psp_api.h>

int main(void) {
    int i;
    int j = 0;

    uartInit();

    while (1) {
        printfNexys("Hello world from Nexys: %d\n", j);

        for (i = 0; i < 10000000; i++);                      // Delay
        j++;
    }

}
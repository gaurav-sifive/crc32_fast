#include "crc32_fast.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    uint32_t buf_size;
    printf("Enter the buffer size (in bytes): ");
    scanf("%u", &buf_size);
    unsigned char *c = (unsigned char *)malloc(buf_size * sizeof(char));
    for (uint32_t i = 0; i < buf_size; i++)
        scanf("%hhX", &c[i]);

    uint32_t res = crc32_fast(c, buf_size);
    printf("Calculated CRC32 is: 0x%X\n", res);
    return 0;
}

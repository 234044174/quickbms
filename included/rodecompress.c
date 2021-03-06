/*
Revelation Online obfuscated decompression
original code by Ekey
http://zenhax.com/viewtopic.php?p=5412#p5412
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef WIN32
    #include <windows.h>
#endif



static /*const*/ unsigned char Revelation_Online_Decompress_dump[] = {
    0x83,0xec,0x44,0x36,0x8b,0x4c,0x24,0x50,0x36,0x8b,0x54,0x24,0x4c,0x53,0x56,0x36,
    0x8b,0x74,0x24,0x50,0x8b,0xda,0x3e,0x8d,0x04,0x0e,0x36,0x89,0x44,0x24,0x08,0x36,
    0x8b,0x44,0x24,0x5c,0x03,0xd0,0x57,0x8b,0xfe,0x36,0x89,0x54,0x24,0x5c,0x36,0xc7,
    0x44,0x24,0x10,0x04,0x00,0x00,0x00,0x36,0xc7,0x44,0x24,0x14,0x01,0x00,0x00,0x00,
    0x36,0xc7,0x44,0x24,0x18,0x02,0x00,0x00,0x00,0x36,0xc7,0x44,0x24,0x1c,0x01,0x00,
    0x00,0x00,0x36,0xc7,0x44,0x24,0x20,0x04,0x00,0x00,0x00,0x36,0xc7,0x44,0x24,0x24,
    0x04,0x00,0x00,0x00,0x36,0xc7,0x44,0x24,0x28,0x04,0x00,0x00,0x00,0x36,0xc7,0x44,
    0x24,0x2c,0x04,0x00,0x00,0x00,0x36,0xc7,0x44,0x24,0x30,0x00,0x00,0x00,0x00,0x36,
    0xc7,0x44,0x24,0x34,0x00,0x00,0x00,0x00,0x36,0xc7,0x44,0x24,0x38,0x00,0x00,0x00,
    0x00,0x36,0xc7,0x44,0x24,0x3c,0xff,0xff,0xff,0xff,0x36,0xc7,0x44,0x24,0x40,0x00,
    0x00,0x00,0x00,0x36,0xc7,0x44,0x24,0x44,0x01,0x00,0x00,0x00,0x36,0xc7,0x44,0x24,
    0x48,0x02,0x00,0x00,0x00,0x36,0xc7,0x44,0x24,0x4c,0x03,0x00,0x00,0x00,0x85,0xc0,
    0x75,0x1b,0x83,0xf9,0x01,0x75,0x0c,0x3e,0x38,0x06,0x75,0x07,0x5f,0x5e,0x5b,0x83,
    0xc4,0x44,0xc3,0x5f,0x5e,0x83,0xc8,0xff,0x5b,0x83,0xc4,0x44,0xc3,0x55,0x3e,0x0f,
    0xb6,0x2f,0x83,0xf5,0x20,0x8b,0xf5,0x83,0xe6,0x0f,0x47,0x83,0xfe,0x0f,0x75,0x34,
    0x36,0x8b,0x4c,0x24,0x10,0x83,0xc1,0xf1,0x8b,0xff,0x3e,0x0f,0xb6,0x07,0x47,0x03,
    0xf0,0x3b,0xf9,0x73,0x07,0x3d,0xff,0x00,0x00,0x00,0x74,0xee,0x3e,0x8d,0x04,0x1e,
    0x3b,0xc3,0x0f,0x82,0xa7,0x01,0x00,0x00,0x3e,0x8d,0x04,0x3e,0x3b,0xc7,0x0f,0x82,
    0x9b,0x01,0x00,0x00,0x3e,0x8d,0x04,0x1e,0x3e,0x8d,0x4a,0xf4,0x3b,0xc1,0x0f,0x87,
    0x52,0x01,0x00,0x00,0x36,0x8b,0x4c,0x24,0x10,0x3e,0x8d,0x14,0x3e,0x83,0xc1,0xf8,
    0x3b,0xd1,0x0f,0x87,0x39,0x01,0x00,0x00,0x3e,0x8a,0x0f,0x80,0xf1,0xd7,0x3e,0x88,
    0x0b,0x43,0x47,0x3b,0xd8,0x72,0xf1,0x8b,0xc8,0x2b,0xcb,0x03,0xf9,0x0f,0xb7,0xce,
    0x3e,0x0f,0xb7,0x17,0x33,0xd1,0x81,0xf2,0x29,0x11,0x00,0x00,0x8b,0xf0,0x2b,0xf2,
    0x83,0xc7,0x02,0x36,0x3b,0x74,0x24,0x5c,0x0f,0x82,0x41,0x01,0x00,0x00,0xc1,0xed,
    0x04,0x83,0xfd,0x0f,0x75,0x2b,0x36,0x8b,0x54,0x24,0x10,0x83,0xc2,0xfb,0x3b,0xfa,
    0x0f,0x87,0x29,0x01,0x00,0x00,0x3e,0x0f,0xb6,0x0f,0x47,0x03,0xe9,0x81,0xf9,0xff,
    0x00,0x00,0x00,0x74,0xe9,0x3e,0x8d,0x0c,0x28,0x3b,0xc8,0x0f,0x82,0x0e,0x01,0x00,
    0x00,0x8b,0xd0,0x36,0x8d,0x5d,0x04,0x2b,0xd6,0x03,0xd8,0x83,0xfa,0x04,0x7d,0x38,
    0x3e,0x0f,0xb6,0x0e,0x3e,0x88,0x08,0x3e,0x0f,0xb6,0x4e,0x01,0x3e,0x88,0x48,0x01,
    0x3e,0x0f,0xb6,0x4e,0x02,0x3e,0x88,0x48,0x02,0x3e,0x0f,0xb6,0x4e,0x03,0x36,0x03,
    0x74,0x94,0x14,0x3e,0x88,0x48,0x03,0x83,0xc0,0x08,0x3e,0x8b,0x0e,0x36,0x2b,0x74,
    0x94,0x34,0x3e,0x89,0x48,0xfc,0xeb,0x14,0x3e,0x8b,0x0e,0x3e,0x89,0x08,0x3e,0x8b,
    0x4e,0x04,0x3e,0x89,0x48,0x04,0x83,0xc0,0x08,0x83,0xc6,0x08,0x36,0x8b,0x54,0x24,
    0x60,0x3e,0x8d,0x4a,0xf4,0x3b,0xd9,0x76,0x4a,0x3e,0x8d,0x4a,0xfb,0x3b,0xd9,0x0f,
    0x87,0x9a,0x00,0x00,0x00,0x83,0xc2,0xf8,0x3b,0xc2,0x73,0x18,0x3e,0x8b,0x0e,0x3e,
    0x89,0x08,0x3e,0x8b,0x4e,0x04,0x3e,0x89,0x48,0x04,0x83,0xc0,0x08,0x83,0xc6,0x08,
    0x3b,0xc2,0x72,0xe8,0x3b,0xc3,0x73,0x11,0x2b,0xf0,0x3e,0x8d,0x1b,0x3e,0x8a,0x0c,
    0x06,0x3e,0x88,0x08,0x40,0x3b,0xc3,0x72,0xf4,0x36,0x8b,0x54,0x24,0x60,0xe9,0x7b,
    0xfe,0xff,0xff,0x3e,0x8b,0x0e,0x3e,0x89,0x08,0x3e,0x8b,0x4e,0x04,0x3e,0x89,0x48,
    0x04,0x83,0xc0,0x08,0x3e,0x8d,0x76,0x08,0x3b,0xc3,0x72,0xe7,0xe9,0x5d,0xfe,0xff,
    0xff,0x36,0x8b,0x54,0x24,0x60,0x3e,0x8d,0x0c,0x3e,0x36,0x3b,0x4c,0x24,0x10,0x75,
    0x2e,0x3b,0xc2,0x77,0x2a,0x56,0x57,0x53,0xe8,0xa3,0x01,0x00,0x00,0x83,0xc4,0x0c,
    0x85,0xf6,0x74,0x0c,0x36,0x8d,0x24,0x24,0x3e,0x80,0x33,0x14,0x43,0x4e,0x75,0xf8,
    0x36,0x2b,0x5c,0x24,0x5c,0x5d,0x5f,0x5e,0x8b,0xc3,0x5b,0x83,0xc4,0x44,0xc3,0x36,
    0x8b,0x44,0x24,0x58,0x5d,0x2b,0xc7,0x5f,0x5e,0x48,0x5b,0x83,0xc4,0x44,0xc3,/*INT3*/ 0xcc };



int (__cdecl *Revelation_Online_Decompress)(unsigned char *pScrBuffer, unsigned char *pDstBuffer, int dwScrSize, int dwDstSize) = NULL;



// anti DEP limitation, allocation is necessary
void *Revelation_Online_Decompress_alloc(void *dump, int dumpsz) {
    int     pagesz;
    void    *ret;

    pagesz = (dumpsz + 4095) & (~4095); // useful for pages? mah

#ifdef WIN32
    ret = VirtualAlloc(
        NULL,
        pagesz,
        MEM_COMMIT | MEM_RESERVE,
        PAGE_EXECUTE_READWRITE);    // write for memcpy
#else
    ret = malloc(pagesz);
    mprotect(
        ret,
        pagesz,
        PROT_EXEC | PROT_WRITE);    // write for memcpy
#endif
    memcpy(ret, dump, dumpsz);
    return(ret);
}



void Revelation_Online_Decompress_init(void) {
    if(!Revelation_Online_Decompress) {

        Revelation_Online_Decompress = Revelation_Online_Decompress_alloc(Revelation_Online_Decompress_dump, sizeof(Revelation_Online_Decompress_dump));

    }
}


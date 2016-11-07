#include <stdio.h>

namespace Stub32Data {

    const unsigned char data[] = {
0xb8, 0x11, 0x11, 0x11, 
0x11, 0xbb, 0x22, 0x22, 
0x22, 0x22, 0xe8, 0x05, 
0x00, 0x00, 0x00, 0xe9, 
0x64, 0x56, 0x34, 0x12, 
0x83, 0xc0, 0x0f, 0x8b, 
0x3c, 0x24, 0x29, 0xc7, 
0x01, 0xfb, 0xe8, 0x4a, 
0x00, 0x00, 0x00, 0x85, 
0xc0, 0x75, 0x01, 0xc3, 
0x89, 0xc1, 0x51, 0xbe, 
0x22, 0x22, 0x22, 0x22, 
0x01, 0xfe, 0xff, 0x16, 
0x85, 0xc0, 0x75, 0x0b, 
0xe8, 0x3c, 0x00, 0x00, 
0x00, 0x85, 0xc0, 0x75, 
0xf7, 0xeb, 0xdb, 0x89, 
0xc1, 0xe8, 0x23, 0x00, 
0x00, 0x00, 0x85, 0xc0, 
0x74, 0xd0, 0x50, 0x51, 
0xbe, 0x22, 0x22, 0x22, 
0x22, 0x01, 0xfe, 0xff, 
0x16, 0x89, 0xc6, 0xe8, 
0x0d, 0x00, 0x00, 0x00, 
0x85, 0xc0, 0x75, 0x01, 
0xc3, 0x85, 0xf6, 0x74, 
0x02, 0x89, 0x30, 0xeb, 
0xd6, 0xe8, 0x07, 0x00, 
0x00, 0x00, 0x85, 0xc0, 
0x74, 0x02, 0x01, 0xf8, 
0xc3, 0x8b, 0x03, 0x83, 
0xc3, 0x04, 0xc3
    };

DWORD pointers[] = {
0x00, //LABEL_newEP
0x05, //LABEL_dataRVA
0x0f, //LABEL_oldEP 
0x2b, //LABEL_loadLibrary 
0x50  //LABEL_GetProcAddress
    };

    const size_t size = sizeof(data);

};//Stub32Data
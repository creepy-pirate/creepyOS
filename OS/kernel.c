//We here are not using void or int in the kmain function as it is already defined in the asm function (extern one)
kmain()
{
     char* vidmem=(char*)0xb8000;
        vidmem[0] = 'c';
        vidmem[1] = 0x04;
        vidmem[2] = 'r';
        vidmem[3] = 0x04;
        vidmem[4] = 'e';
        vidmem[5] = 0x04;
        vidmem[6] = 'e';
        vidmem[7] = 0x04;
         vidmem[8] = 'p';
        vidmem[9] = 0x04;
         vidmem[10] = 'y';
        vidmem[11] = 0x04;
         vidmem[12] = 'O';
        vidmem[13] = 0x04;
         vidmem[14] = 'S';
        vidmem[15] = 0x04;

}
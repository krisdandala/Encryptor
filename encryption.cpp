#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    //should try to do this with a hash table
    
    unsigned int table[10+26+26];//alphabet and numbers
    //numbers
    table[0] = 251;
    table[1] = 193;
    table[2] = 170;
    table[3] = 163;
    table[4] = 162;
    table[5] = 176;
    table[6] = 164;
    table[7] = 166;
    table[8] = 165;
    table[9] = 187;
    
    //lowercase alphabet
    table[10] = 140; //a
    table[11] = 186; //b
    table[12] = 141; //c
    table[13] = 182; //d
    table[14] = 101; //e
    table[15] = 196; //f
    table[16] = 169; //g
    table[17] = 250; //h
    table[18] = 105; //i
    table[19] = 198; //j
    table[20] = 251; //k
    table[21] = 108; //l
    table[22] = 181; //m
    table[23] = 110; //n
    table[24] = 191; //o
    table[25] = 185; //p
    table[26] = 113; //q
    table[27] = 168; //r
    table[28] = 167; //s
    table[29] = 160; //t
    table[30] = 117; //u
    table[31] = 195; //v
    table[32] = 183; //w
    table[33] = 197; //x
    table[34] = 180; //y
    table[35] = 189; //z
    
    //uppercase alphabet
    table[36] = 129; //A
    table[37] = 245; //B
    table[38] = 130; //C
    table[39] = 235; //D
    table[40] = 171; //E
    table[41] = 236; //F
    table[42] = 253; //G
    table[43] = 238; //H
    table[44] = 246; //I
    table[45] = 239; //J
    table[46] = 240; //K
    table[47] = 241; //L
    table[48] = 229; //M
    table[49] = 247; //N
    table[50] = 175; //O
    table[51] = 184; //P
    table[52] = 206; //Q
    table[53] = 228; //R
    table[54] = 234; //S
    table[55] = 255; //T
    table[56] = 172; //U
    table[57] = 215; //V
    table[58] = 227; //W
    table[59] = 254; //X
    table[60] = 89; //Y
    table[61] = 252; //Z
    
    
    unsigned int t;
    FILE *ptr;
    ptr = fopen("t.cpp", "r");
    FILE *temp = fopen("temp.txt", "w");
    if(ptr!= NULL)
    {
        while(t != EOF)
        {
            t = fgetc(ptr);
            //numbers
            if(t >= 48 && t <= 57)
            {
                fputc(table[t - 48], temp);
            }
            //lowercase alphabet
            if(t >= 97 && t <= 122)
            {
                fputc(table[t - 87], temp);
            }
            //uppercase alphabet
            if(t >= 65 && t <= 90)
            {
                fputc(table[t - 29], temp);
            }
            
        }
       
    }
    
    fclose(ptr);
    fclose(temp);
    return 0;
}

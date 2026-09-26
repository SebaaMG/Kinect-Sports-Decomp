typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;


void fn_825FB830(double param_1,float *param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  
  param_4 = param_4 * 0xb0;
  pfVar2 = (float *)&lbl_83296890;
  pfVar3 = (float *)(&lbl_83296BE0 + param_4);
  if (*(int *)(&lbl_83296C80 + param_4) == 0) {
    pfVar3 = (float *)&lbl_832968D0;
  }
  else {
    pfVar2 = (float *)(&lbl_83296C20 + param_4);
  }
  *param_2 = pfVar2[1] * pfVar3[4] +
             *pfVar3 * *pfVar2 + pfVar3[0xc] * pfVar2[3] + pfVar3[8] * pfVar2[2];
  param_2[1] = pfVar3[4] * pfVar2[5] +
               pfVar3[0xc] * pfVar2[7] + pfVar3[8] * pfVar2[6] + *pfVar3 * pfVar2[4];
  param_2[2] = pfVar2[8] * *pfVar3 +
               pfVar2[9] * pfVar3[4] + pfVar3[0xc] * pfVar2[0xb] + pfVar3[8] * pfVar2[10];
  param_2[3] = pfVar3[0xc] * pfVar2[0xf] +
               pfVar2[0xd] * pfVar3[4] + pfVar3[8] * pfVar2[0xe] + *pfVar3 * pfVar2[0xc];
  param_2[4] = *pfVar2 * pfVar3[1] +
               pfVar3[0xd] * pfVar2[3] + pfVar3[9] * pfVar2[2] + pfVar3[5] * pfVar2[1];
  param_2[5] = pfVar2[4] * pfVar3[1] +
               pfVar2[6] * pfVar3[9] + pfVar3[5] * pfVar2[5] + pfVar2[7] * pfVar3[0xd];
  param_2[6] = pfVar2[8] * pfVar3[1] +
               pfVar3[5] * pfVar2[9] + pfVar2[0xb] * pfVar3[0xd] + pfVar2[10] * pfVar3[9];
  param_2[7] = pfVar3[1] * pfVar2[0xc] +
               pfVar3[9] * pfVar2[0xe] + pfVar2[0xf] * pfVar3[0xd] + pfVar3[5] * pfVar2[0xd];
  param_2[8] = pfVar2[2];
  param_2[9] = pfVar2[6];
  param_2[10] = pfVar2[10];
  param_2[0xb] = pfVar2[0xe];
  param_2[0xc] = *pfVar2 * pfVar3[3] +
                 pfVar3[0xf] * pfVar2[3] + pfVar3[0xb] * pfVar2[2] + pfVar3[7] * pfVar2[1];
  param_2[0xd] = pfVar2[4] * pfVar3[3] +
                 pfVar2[6] * pfVar3[0xb] + pfVar3[7] * pfVar2[5] + pfVar2[7] * pfVar3[0xf];
  param_2[0xe] = pfVar2[8] * pfVar3[3] +
                 pfVar3[7] * pfVar2[9] + pfVar2[0xb] * pfVar3[0xf] + pfVar2[10] * pfVar3[0xb];
  param_2[0xf] = pfVar3[3] * pfVar2[0xc] +
                 pfVar3[0xb] * pfVar2[0xe] + pfVar2[0xf] * pfVar3[0xf] + pfVar3[7] * pfVar2[0xd];
  param_2[0x10] = *pfVar3;
  param_2[0x11] = pfVar3[4];
  param_2[0x12] = pfVar3[8];
  param_2[0x13] = pfVar3[0xc];
  param_2[0x14] = pfVar3[1];
  param_2[0x15] = pfVar3[5];
  param_2[0x16] = pfVar3[9];
  param_2[0x17] = pfVar3[0xd];
  param_2[0x18] = pfVar3[10];
  fVar1 = lbl_82191FB0;
  param_2[0x19] = pfVar3[0xe];
  param_2[0x1a] = (float)param_1;
  param_2[0x1b] = fVar1;
  param_2[0x1c] = pfVar3[0xb];
  param_2[0x1d] = pfVar3[0xf];
  return;
}


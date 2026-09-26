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


void fn_824DCA30(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *in_r8;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *in_r11;
  
  while ((in_r8 != in_r11 && ((float)param_1[6] <= (float)param_1[7] - *in_r8))) {
    pfVar1 = (float *)param_1[1];
    pfVar6 = in_r8 + 2;
    param_1[4] = (int)((float)param_1[4] - in_r8[1]);
    if (in_r8 + 2 != pfVar1) {
      pfVar4 = in_r8 + -2;
      do {
        pfVar4[2] = *pfVar6;
        pfVar2 = pfVar6 + 1;
        pfVar6 = pfVar6 + 2;
        pfVar4[3] = *pfVar2;
        pfVar4 = pfVar4 + 2;
      } while (pfVar6 != pfVar1);
    }
    iVar5 = param_1[1] + -8;
    for (iVar3 = iVar5; iVar3 != param_1[1]; iVar3 = iVar3 + 8) {
    }
    param_1[1] = iVar5;
    in_r11 = (float *)param_1[1];
  }
  param_1[5] = (int)((float)param_1[4] / (float)(uint)(param_1[1] - *param_1 >> 3));
  return;
}


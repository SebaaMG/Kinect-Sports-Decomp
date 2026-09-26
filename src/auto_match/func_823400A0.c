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


void fn_823400A0(int param_1,undefined8 param_2,undefined8 param_3,float *param_4,int param_5,
                  undefined8 param_6,int param_7)

{
  float fVar1;
  uint uVar2;
  int in_r11;
  int iVar3;
  float *pfVar4;
  byte in_cr6;
  
  while (iVar3 = in_r11, (bool)(in_cr6 >> 3 & 1)) {
    fVar1 = *(float *)(iVar3 * 8 + param_1);
    if (fVar1 <= *param_4) break;
    pfVar4 = (float *)(param_7 * 8 + param_1);
    uVar2 = iVar3 - 1;
    *pfVar4 = fVar1;
    pfVar4[1] = *(float *)(iVar3 * 8 + param_1 + 4);
    in_r11 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    param_7 = iVar3;
    in_cr6 = (param_5 < iVar3) << 3;
  }
  pfVar4 = (float *)(param_7 * 8 + param_1);
  *pfVar4 = *param_4;
  pfVar4[1] = param_4[1];
  return;
}


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
extern unsigned int lbl_8324E3B0;


void fn_82ED76D0(undefined8 param_1,byte *param_2,short *param_3,int param_4,int param_5)

{
  short *psVar1;
  longlong lVar2;
  
  lVar2 = 2;
  do {
    *param_2 = *(byte *)((uint)*param_2 + (int)*param_3 + lbl_8324E3B0);
    param_2[1] = *(byte *)((int)param_3[1] + (uint)param_2[1] + lbl_8324E3B0);
    param_2[2] = *(byte *)((int)param_3[2] + (uint)param_2[2] + lbl_8324E3B0);
    param_2[3] = *(byte *)((int)param_3[3] + (uint)param_2[3] + lbl_8324E3B0);
    param_2 = param_2 + param_4;
    param_3 = param_3 + param_5;
    *param_2 = *(byte *)((uint)*param_2 + (int)*param_3 + lbl_8324E3B0);
    param_2[1] = *(byte *)((int)param_3[1] + (uint)param_2[1] + lbl_8324E3B0);
    param_2[2] = *(byte *)((int)param_3[2] + (uint)param_2[2] + lbl_8324E3B0);
    param_2[3] = *(byte *)((int)param_3[3] + (uint)param_2[3] + lbl_8324E3B0);
    param_2 = param_2 + param_4;
    param_3 = param_3 + param_5;
    *param_2 = *(byte *)((uint)*param_2 + (int)*param_3 + lbl_8324E3B0);
    param_2[1] = *(byte *)((int)param_3[1] + (uint)param_2[1] + lbl_8324E3B0);
    param_2[2] = *(byte *)((int)param_3[2] + (uint)param_2[2] + lbl_8324E3B0);
    param_2[3] = *(byte *)((int)param_3[3] + (uint)param_2[3] + lbl_8324E3B0);
    param_2 = param_2 + param_4;
    psVar1 = param_3 + param_5;
    *param_2 = *(byte *)((uint)*param_2 + (int)*psVar1 + lbl_8324E3B0);
    param_2[1] = *(byte *)((int)psVar1[1] + (uint)param_2[1] + lbl_8324E3B0);
    param_2[2] = *(byte *)((int)psVar1[2] + (uint)param_2[2] + lbl_8324E3B0);
    param_3 = psVar1 + param_5;
    param_2[3] = *(byte *)((int)psVar1[3] + (uint)param_2[3] + lbl_8324E3B0);
    param_2 = param_2 + param_4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


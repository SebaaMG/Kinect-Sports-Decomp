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
extern int fn_829B2110();
extern unsigned int lbl_8202706C;


undefined8 fn_829B2420(int param_1,uint *param_2)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar3 = fn_829B2110(param_1,param_2 + 2);
  fVar2 = lbl_8202706C;
  if (-1 < (int)uVar3) {
    pfVar4 = (float *)(param_1 + -4);
    uVar5 = ((ulonglong)*param_2 & 0xffff) << 0x10 | (ulonglong)(*param_2 >> 0x10);
    lVar6 = 8;
    do {
      uVar1 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      pfVar4 = pfVar4 + 4;
      *pfVar4 = (float)uVar1 * fVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    pfVar4 = (float *)(param_1 + 0x7c);
    uVar5 = ((ulonglong)param_2[1] & 0xffff) << 0x10 | (ulonglong)(param_2[1] >> 0x10);
    lVar6 = 8;
    do {
      uVar1 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      pfVar4 = pfVar4 + 4;
      *pfVar4 = (float)uVar1 * fVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar3 = 0;
  }
  return uVar3;
}


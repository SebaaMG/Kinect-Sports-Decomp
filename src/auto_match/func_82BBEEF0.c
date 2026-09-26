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
extern unsigned int lbl_8202706C;


undefined8 fn_82BBEEF0(int param_1,uint *param_2)

{
  ulonglong uVar1;
  float fVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  fVar2 = lbl_8202706C;
  pfVar3 = (float *)(param_1 + -4);
  uVar4 = ((ulonglong)*param_2 & 0xffff) << 0x10 | (ulonglong)(*param_2 >> 0x10);
  lVar5 = 8;
  do {
    uVar1 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4;
    pfVar3 = pfVar3 + 4;
    *pfVar3 = (float)uVar1 * fVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pfVar3 = (float *)(param_1 + 0x7c);
  uVar4 = ((ulonglong)param_2[1] & 0xffff) << 0x10 | (ulonglong)(param_2[1] >> 0x10);
  lVar5 = 8;
  do {
    uVar1 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4;
    pfVar3 = pfVar3 + 4;
    *pfVar3 = (float)uVar1 * fVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}


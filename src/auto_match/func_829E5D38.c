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
extern int fn_829E5BC0();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_821AAD20;


undefined8 fn_829E5D38(undefined8 param_1,uint *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  float *pfVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(int *)param_1 == 0) {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    pfVar4 = (float *)(*(int *)(*(int *)param_1 + 4) + -4);
    lVar5 = 5;
    fVar1 = lbl_821AAD20;
    do {
      pfVar4 = pfVar4 + 1;
      fVar1 = *pfVar4 + fVar1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    dVar6 = (double)(fVar1 * lbl_82002C2C);
    uVar3 = fn_829E5BC0(dVar6,param_1);
    *(float *)((int)param_1 + 0x44) = (float)dVar6;
    uVar2 = 0;
    *param_2 = (uint)LZCOUNT(uVar3 & 0xff) >> 5;
    *param_3 = 4;
  }
  return uVar2;
}


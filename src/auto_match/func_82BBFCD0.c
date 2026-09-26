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
extern unsigned int *auStack_110;
extern int fn_82BBE320();
extern int fn_82BBF2C0();
extern int fn_82BBFA20();
extern unsigned int lbl_83223534;
extern unsigned int register0x0000000c;


uint fn_82BBFCD0(longlong param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  undefined1 auStack_110 [8];
  float afStack_108 [38];
  undefined1 *puStack_70;
  
  if (lbl_83223534 != 0) {
    pfVar5 = (float *)(param_2 + 0xc);
    pfVar6 = afStack_108;
    lVar7 = 0x10;
    do {
      fVar1 = *pfVar5;
      fVar2 = pfVar5[-2];
      fVar3 = pfVar5[-1];
      pfVar6[-2] = *(float *)((param_2 - (int)afStack_108) + (int)pfVar6) * fVar1;
      pfVar6[-1] = fVar2 * fVar1;
      pfVar5 = pfVar5 + 4;
      *pfVar6 = fVar1 * fVar3;
      pfVar6[1] = fVar1;
      pfVar6 = pfVar6 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar4 = fn_82BBFA20(param_1,auStack_110);
    return (int)uVar4 >> 0x1f & uVar4;
  }
  puStack_70 = (undefined1 *)register0x0000000c;
  uVar4 = fn_82BBF2C0();
  if (-1 < (int)uVar4) {
    uVar4 = fn_82BBE320(param_1 + 8,param_2,0,param_3);
  }
  return uVar4;
}


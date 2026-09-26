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
extern unsigned int uStack_10;


void fn_827840E8(double param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  undefined8 uStack_10;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
  do {
    iVar9 = *(int *)((uVar3 >> 4 & 0xffffffc) + *(int *)(param_2 + 0x24)) + (uVar3 & 0x3f) * 0x18;
    uVar6 = (ulonglong)*(uint *)(iVar9 + 4);
    if (2 < uVar6) {
      uVar1 = *(uint *)(iVar9 + 8);
      uVar4 = *(undefined8 *)
               (*(int *)((uVar1 >> 6 & 0x3fffffc) + *(int *)(param_2 + 0x14)) + (uVar1 & 0xff) * 8);
      if (1 < (uVar6 - 1 & 0xffffffff)) {
        lVar7 = uVar6 - 2;
        uVar5 = (ulonglong)uVar1;
        uStack_10 = uVar4;
        do {
          uVar5 = uVar5 + 1;
          pfVar8 = (float *)(*(int *)(((uint)uVar5 >> 6 & 0x3fffffc) + *(int *)(param_2 + 0x14)) +
                            ((uint)uVar5 & 0xff) * 8);
          if ((double)(ABS(*pfVar8 - (((U64)(uStack_10) >> 0) & 0xFFFFFFFF)) + ABS(pfVar8[1] - (((U64)(uStack_10) >> 32) & 0xFFFFFFFF))) < param_1)
          {
            *(undefined8 *)pfVar8 = uVar4;
          }
          else {
            uVar4 = *(undefined8 *)pfVar8;
            uStack_10 = uVar4;
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar6 = (uVar6 - 1) + (ulonglong)uVar1;
      uVar1 = (uint)uVar6;
      uVar2 = uVar1 - 1;
      uVar4 = *(undefined8 *)
               (*(int *)((uVar1 >> 6 & 0x3fffffc) + *(int *)(param_2 + 0x14)) +
               ((uint)((uVar6 & 0xffffffff) << 3) & 0x7f8));
      pfVar8 = (float *)(*(int *)((uVar2 >> 6 & 0x3fffffc) + *(int *)(param_2 + 0x14)) +
                        (uVar2 & 0xff) * 8);
      uStack_10 = ((((U64)(uStack_10)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
      uStack_10 = ((((U64)(uStack_10)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      if ((double)(ABS(*pfVar8 - (((U64)(uStack_10) >> 0) & 0xFFFFFFFF)) + ABS(pfVar8[1] - (((U64)(uStack_10) >> 32) & 0xFFFFFFFF))) < param_1) {
        *(undefined8 *)pfVar8 = uVar4;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_2 + 0x18));
  return;
}


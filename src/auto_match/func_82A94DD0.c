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
extern unsigned int uStack_a0;


void fn_82A94DD0(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 *param_5,
                  uint *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar7;
  ulonglong uVar8;
  uint uVar10;
  uint uStack_a0;
  undefined4 uVar9;
  
  uVar7 = param_3[4];
  lVar1 = -LZCOUNT(param_4);
  uStack_a0 = 0;
  uVar8 = 0xffffffffffffffff;
  uVar9 = 0xffffffff;
  if (uVar7 < param_3[5]) {
    uVar6 = param_3[3];
    do {
      if (param_3[1] < uVar6) {
        uVar10 = param_3[1];
        do {
          uVar2 = (ulonglong)(uVar10 >> 3) + (ulonglong)(uVar7 >> 2) & 1;
          if ((ulonglong)*param_3 < (ulonglong)param_3[2]) {
            uVar3 = (ulonglong)*param_3;
            do {
              uVar6 = ((uint)uVar3 & 7) + (uVar10 & 6) * 4 << ((uint)(lVar1 + 0x1fU) & 0x3f);
              uVar4 = ((((uVar3 & 0xffffffff) >> 5) +
                        (longlong)
                        (int)((uVar10 >> 4) + (uVar7 >> 2) * (param_2 + 0x1fU >> 4 & 0xffffffe)) *
                        (longlong)(int)(param_1 + 0x1fU >> 5) & 0xffffffff) <<
                      (lVar1 + 0x27U & 0x7f)) + ((ulonglong)uVar6 & 0x7ffffff0) * 2 +
                      ((ulonglong)uVar6 & 0xf) +
                      (((ulonglong)uVar10 & 1) * 0x10 +
                       (ulonglong)((uVar7 & 3) << ((int)lVar1 + 0x25U & 0x3f)) & 0xffffffff);
              uVar5 = ((uVar4 * 2 & 0xfffffffffffffc00) + (uVar4 & 0x1c0)) * 4 +
                      (((uVar3 >> 3 & 0x1fffffff) + uVar2 * 2) * 0x40 & 0xc0) + (uVar4 & 0x3f) +
                      uVar2 * 0x800 >> (lVar1 + 0x1fU & 0x7f);
              uVar4 = uVar5 & 0xffffffff;
              if (uVar4 < (uVar8 & 0xffffffff)) {
                uVar8 = uVar4;
              }
              if (uStack_a0 < uVar4) {
                uStack_a0 = (uint)uVar5;
              }
              uVar3 = uVar3 + 1;
            } while ((uVar3 & 0xffffffff) < (ulonglong)param_3[2]);
          }
          uVar6 = param_3[3];
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar6);
      }
      uVar9 = (undefined4)uVar8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3[5]);
  }
  *param_5 = uVar9;
  *param_6 = uStack_a0;
  return;
}


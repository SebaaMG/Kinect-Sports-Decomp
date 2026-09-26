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
#define ZEXT48(x) ((U64)((U32)(x)))


void fn_8264E150(int param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ushort *puVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 4);
  do {
    puVar3 = (uint *)*param_2;
    for (param_2 = param_2 + 1; param_2 < puVar3; param_2 = param_2 + 2) {
      puVar4 = (uint *)param_2[1];
      uVar6 = (ulonglong)*param_2 & 0xfffffffc;
      lVar9 = uVar6 - 0x40000000;
      dataCacheBlockFlush(lVar9);
      if ((*param_2 & 1) == 0) {
        iVar7 = iVar2 + -1;
        puVar5 = (ushort *)lVar9;
        uVar8 = 0;
        puVar10 = (uint *)(iVar7 * 0x10 + param_1 + 0xc);
        do {
          uVar8 = uVar8 << 2;
          if ((((puVar10[-1] < (puVar5[1] + 1) * 8) && ((uint)*puVar5 << 3 < puVar10[1])) &&
              (*puVar10 < (puVar5[3] + 1) * 8)) && ((uint)puVar5[2] << 3 < puVar10[2])) {
            uVar8 = uVar8 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar10 = puVar10 + -4;
        } while (bVar1);
      }
      else {
        iVar7 = (int)uVar6;
        uVar8 = -(uint)(((((ulonglong)*(byte *)(iVar7 + -0x3fffffed) << 0x18 |
                           (ulonglong)*(byte *)(iVar7 + -0x3fffffee) << 0x10 |
                           (ulonglong)*(byte *)(iVar7 + -0x3fffffef) << 8 |
                          (ulonglong)*(byte *)(iVar7 + -0x3ffffff0)) -
                         ((ulonglong)*(byte *)(iVar7 + -0x3fffffcd) << 0x18 |
                          (ulonglong)*(byte *)(iVar7 + -0x3fffffce) << 0x10 |
                          (ulonglong)*(byte *)(iVar7 + -0x3fffffcf) << 8 |
                         (ulonglong)*(byte *)(iVar7 + -0x3fffffd0))) -
                        ((ulonglong)*(byte *)(iVar7 + -0x3fffffc9) << 0x18 |
                         (ulonglong)*(byte *)(iVar7 + -0x3fffffca) << 0x10 |
                         (ulonglong)*(byte *)(iVar7 + -0x3fffffcb) << 8 |
                        (ulonglong)*(byte *)(iVar7 + -0x3fffffcc))) +
                        ((ulonglong)*(byte *)(iVar7 + -0x3fffffe9) << 0x18 |
                         (ulonglong)*(byte *)(iVar7 + -0x3fffffea) << 0x10 |
                         (ulonglong)*(byte *)(iVar7 + -0x3fffffeb) << 8 |
                        (ulonglong)*(byte *)(iVar7 + -0x3fffffec)) != 0);
      }
      *puVar4 = uVar8;
      dataCacheBlockFlush(((ulonglong)((uint)puVar4 >> 0x14) + 0x200 & 0x1000) +
                          (ZEXT48(puVar4) & 0x1fffffff) + -0x40000000);
    }
    param_2 = (uint *)*param_2;
  } while (param_2 != (uint *)0xc0000000);
  return;
}


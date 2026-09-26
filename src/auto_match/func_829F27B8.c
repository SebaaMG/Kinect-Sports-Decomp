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
extern unsigned int iStack00000024;


ulonglong fn_829F27B8(int param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                       ushort param_5,undefined8 param_6,undefined8 param_7,uint *param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iStack00000024;
  
  uVar10 = 0;
  uVar4 = param_3 >> 0x20;
  lVar6 = uVar4 + 2;
  uVar12 = -(ulonglong)(uVar4 - 1 < 0xffffffff80000000) & uVar4 - 1;
  if (0x50 < (int)lVar6) {
    lVar6 = 0x50;
  }
  iStack00000024 = (int)param_3;
  uVar7 = (param_3 & 0xffffffff) - 1;
  uVar7 = -(ulonglong)(uVar7 < 0xffffffff80000000) & uVar7;
  iVar11 = 0x3c;
  if (iStack00000024 + 2 < 0x3d) {
    iVar11 = iStack00000024 + 2;
  }
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  if ((int)uVar7 < iVar11) {
    lVar13 = (longlong)(int)uVar7 * (longlong)(int)param_2;
    do {
      if ((int)uVar12 < (int)lVar6) {
        lVar5 = lVar6 - uVar12;
        uVar8 = uVar12;
        do {
          uVar1 = *(ushort *)((int)((lVar13 + uVar8 & 0xffffffff) << 1) + param_1) >> 3;
          if (uVar1 != 0) {
            uVar10 = uVar10 + 1;
            param_8[2] = param_8[2] + (uint)uVar1;
            *param_8 = *param_8 + (int)uVar8;
            param_8[1] = param_8[1] + (int)uVar7;
          }
          uVar8 = uVar8 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + param_2;
    } while ((int)uVar7 < iVar11);
    iVar11 = (int)uVar10;
    if (iVar11 != 0) {
      uVar2 = param_8[2];
      uVar9 = *param_8;
      uVar3 = param_8[1];
      param_8[2] = (int)uVar2 / iVar11;
      *param_8 = (int)uVar9 / iVar11;
      param_8[1] = (int)uVar3 / iVar11;
      uVar1 = *(ushort *)
               ((int)(((longlong)iStack00000024 * (longlong)(int)param_2 + uVar4 & 0xffffffff) << 1)
               + param_1);
      trapWord(5,uVar10 & ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) - 1)
               ,0xffff);
      trapWord(6,uVar10,0);
      trapWord(6,uVar10,0);
      trapWord(6,uVar10,0);
      trapWord(5,uVar10 & ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1)
               ,0xffff);
      trapWord(5,uVar10 & ~((((ulonglong)uVar9 & 0x7fffffff) << 1 | (ulonglong)(uVar9 >> 0x1f)) - 1)
               ,0xffff);
      if (((uVar1 & 7) == param_5) &&
         (uVar9 = (uint)(uVar1 >> 3) - (int)uVar2 / iVar11, uVar2 = (int)uVar9 >> 0x1f,
         (int)((uVar9 ^ uVar2) - uVar2) < 0x12d)) {
        return uVar10;
      }
    }
  }
  return 0;
}


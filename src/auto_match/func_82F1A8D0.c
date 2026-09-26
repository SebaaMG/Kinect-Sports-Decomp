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
extern int fn_82F1A7E0();


longlong fn_82F1A8D0(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5,longlong param_6,ulonglong param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ushort *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  
  if ((int)param_7 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2030);
    lVar3 = 0;
    param_6 = (param_2 + (param_2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_6;
    param_5 = (param_2 + (param_2 & 0x7fffffff) * 2 & 0x7fffff) * 0x200 + param_5;
    lVar7 = 0;
    uVar9 = 6;
    do {
      iVar11 = (int)param_7;
      if (iVar11 < 1) {
        return lVar3;
      }
      iVar10 = (int)uVar9;
      uVar5 = uVar9 & ~(((param_7 & 0x7fffffff) << 1 | (param_7 & 0xffffffff) >> 0x1f) - 1);
      trapWord(6,uVar9,0);
      trapWord(6,uVar9,0);
      trapWord(5,uVar9 & ~(((param_7 & 0x7fffffff) << 1 | (param_7 & 0xffffffff) >> 0x1f) - 1),
               0xffff);
      trapWord(5,uVar5,0xffff);
      iVar6 = (uint)(param_7 != (longlong)(iVar11 / iVar10) * (longlong)iVar10) + iVar11 / iVar10;
      iVar10 = 0;
      iVar11 = 0x3f;
      puVar4 = (uint *)(iVar1 + 0xfc);
      do {
        if (iVar6 == 0) break;
        puVar8 = (ushort *)param_6;
        uVar5 = (ulonglong)(short)*puVar8;
        if ((short)*puVar8 < 5) break;
        uVar2 = *puVar4;
        uVar5 = (ulonglong)uVar2;
        if (((*(short *)(uVar2 * 2 + (int)param_5) != 0) && (7 < (int)uVar2)) &&
           (uVar5 = (ulonglong)uVar2 & 7, (int)uVar5 != 0)) {
          *(undefined2 *)(uVar2 * 2 + (int)param_5) = 0;
          lVar3 = lVar3 + 1;
          uVar5 = (ulonglong)*puVar8 - 2;
          iVar6 = iVar6 + -1;
          *puVar8 = (ushort)uVar5;
          param_7 = param_7 - 1;
          iVar10 = 1;
        }
        iVar11 = iVar11 + -1;
        puVar4 = puVar4 + -1;
      } while (2 < iVar11);
      if (iVar10 != 0) {
        fn_82F1A7E0(param_1,lVar7,param_2,param_3,param_5,iVar10,uVar5);
      }
      uVar9 = uVar9 - 1;
      param_6 = param_6 + 2;
      param_5 = param_5 + 0x100;
      lVar7 = lVar7 + 1;
    } while (0 < (longlong)uVar9);
  }
  return lVar3;
}


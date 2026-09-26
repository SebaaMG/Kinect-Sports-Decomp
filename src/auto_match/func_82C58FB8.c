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
extern int fn_82C4E5E8();
extern int fn_82CA4F58();


void fn_82C58FB8(int param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar11;
  int iVar10;
  
  if (*(int *)(param_1 + 0xfc8) == 2) {
    *(undefined4 *)(param_1 + 0x11c) = 1;
    *(undefined4 *)(param_1 + 0xfc4) = 0xf;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x54);
    lVar9 = 0;
    iVar10 = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0xfc4) = 0;
    uVar2 = *(uint *)(plVar1 + 1);
    lVar6 = *plVar1;
    *plVar1 = lVar6 << 1;
    iVar4 = -(int)(lVar6 >> 0x3f);
    *(int *)(plVar1 + 1) = (int)((ulonglong)uVar2 - 1);
    if ((longlong)((ulonglong)uVar2 - 1) < 0) {
      fn_82C4E5E8();
    }
    *(int *)(param_1 + 0x11c) = iVar4;
    if (iVar4 == 0) {
      return;
    }
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    uVar11 = 2;
    lVar6 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar3 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) < 2) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar11 = uVar11 - uVar8;
        *(int *)(puVar3 + 1) = (int)(uVar7 - uVar8);
        lVar6 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar11 & 0x3f))
                + lVar6;
        *puVar3 = *puVar3 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar7 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
    }
    *(int *)(puVar3 + 1) = (int)(uVar7 - uVar11);
    uVar8 = (*puVar3 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar6;
    *puVar3 = *puVar3 << (uVar11 & 0x7f);
    if ((longlong)(uVar7 - uVar11) < 0) {
      fn_82C4E5E8(puVar3);
    }
    if ((uVar8 & 0xffffffff) == 0) {
      *(undefined4 *)(param_1 + 0xfc4) = 0xf;
    }
    else if ((uVar8 & 0xffffffff) == 1) {
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      uVar11 = 2;
      uVar7 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar8 = uVar7 + 0x10;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar8;
          *(int *)(puVar3 + 1) = (int)(uVar7 - uVar8);
          lVar9 = (ulonglong)
                  (uint)((int)(*puVar3 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar11 & 0x3f)) + lVar9;
          *puVar3 = *puVar3 << (uVar8 & 0x7f);
          if ((longlong)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar7 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      *(int *)(puVar3 + 1) = (int)(uVar7 - uVar11);
      uVar8 = (*puVar3 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
      *puVar3 = *puVar3 << (uVar11 & 0x7f);
      if ((longlong)(uVar7 - uVar11) < 0) {
        fn_82C4E5E8(puVar3);
      }
      if ((uVar8 & 0xffffffff) == 3) {
        *(undefined4 *)(param_1 + 0xfc4) = 9;
      }
      else {
        *(int *)(param_1 + 0xfc4) = 3 << ((uint)uVar8 & 0x3f);
      }
    }
    else if ((uVar8 & 0xffffffff) == 2) {
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      uVar7 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar11 = uVar7 + 0x10;
      if ((uVar11 & 0xffffffff) < 2) {
        do {
          iVar10 = (int)lVar9;
          if ((uVar11 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar11;
          *(int *)(puVar3 + 1) = (int)(uVar7 - uVar11);
          lVar9 = (ulonglong)
                  (uint)((int)(*puVar3 >> (0x40 - uVar11 & 0x7f)) << ((uint)uVar8 & 0x3f)) + lVar9;
          iVar10 = (int)lVar9;
          *puVar3 = *puVar3 << (uVar11 & 0x7f);
          if ((longlong)(uVar7 - uVar11) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar7 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar11 = uVar7 + 0x10;
        } while ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar11 = *puVar3;
      *(int *)(puVar3 + 1) = (int)(uVar7 - uVar8);
      *puVar3 = uVar11 << (uVar8 & 0x7f);
      if ((longlong)(uVar7 - uVar8) < 0) {
        fn_82C4E5E8(puVar3);
      }
      *(int *)(param_1 + 0xfc4) = 1 << ((int)(uVar11 >> (0x40 - uVar8 & 0x7f)) + iVar10 & 0x3fU);
    }
    else if ((uVar8 & 0xffffffff) == 3) {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar6 = *plVar1;
      uVar2 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar6 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      *(uint *)(param_1 + 0x1dc) = (uint)((ulonglong)lVar6 >> 0x3f);
    }
    if ((*(int *)(param_1 + 0x1dc) == 0) && (*(int *)(param_1 + 0xfc4) == 0)) {
      return;
    }
  }
  uVar5 = fn_82CA4F58(param_1,1);
  *(undefined4 *)(param_1 + 0xfcc) = uVar5;
  return;
}


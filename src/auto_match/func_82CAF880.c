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


void fn_82CAF880(int param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar9;
  ulonglong uVar8;
  
  if ((*(int *)(param_1 + 0xf8) < 8) ||
     ((((*(int *)(param_1 + 0x120) != 0 && (*(int *)(param_1 + 0x120) != 4)) ||
       (*(int *)(param_1 + 0x5118) != 0)) && (*(int *)(param_1 + 0x11c) != 0)))) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar8 = 3;
    iVar9 = 0;
    uVar6 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar4 = uVar6 + 0x10;
    iVar7 = 0;
    if ((uVar4 & 0xffffffff) < 3) {
      do {
        iVar9 = iVar7;
        if ((uVar4 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar4;
        *(int *)(puVar1 + 1) = (int)(uVar6 - uVar4);
        iVar9 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
        *puVar1 = *puVar1 << (uVar4 & 0x7f);
        if ((longlong)(uVar6 - uVar4) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar6 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar4 = uVar6 + 0x10;
        iVar7 = iVar9;
      } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *(int *)(puVar1 + 1) = (int)(uVar6 - uVar8);
    iVar9 = (int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) + iVar9;
    *puVar1 = *puVar1 << (uVar8 & 0x7f);
    if ((longlong)(uVar6 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0x7a0) = iVar9;
    if (iVar9 != 0) goto LAB_82cafad0;
    if (*(int *)(param_1 + 0x3cb0) < 6) {
      plVar3 = *(longlong **)(param_1 + 0x54);
      lVar5 = *plVar3;
      uVar2 = *(uint *)(plVar3 + 1);
      *plVar3 = lVar5 << 1;
      *(int *)(plVar3 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      iVar7 = 8 - (int)(lVar5 >> 0x3f);
    }
    else {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar8 = 2;
      iVar9 = 0;
      uVar6 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar6 + 0x10;
      iVar7 = 0;
      if ((uVar4 & 0xffffffff) < 2) {
        do {
          iVar9 = iVar7;
          if ((uVar4 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar4;
          *(int *)(puVar1 + 1) = (int)(uVar6 - uVar4);
          iVar9 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
          *puVar1 = *puVar1 << (uVar4 & 0x7f);
          if ((longlong)(uVar6 - uVar4) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar6 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar4 = uVar6 + 0x10;
          iVar7 = iVar9;
        } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar4 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar6 - uVar8);
      *puVar1 = uVar4 << (uVar8 & 0x7f);
      if ((longlong)(uVar6 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      iVar7 = (int)(uVar4 >> (0x40 - uVar8 & 0x7f)) + iVar9 + 8;
    }
  }
  else {
    iVar7 = 0;
    uVar6 = 0;
    do {
      if ((int)uVar6 != 0) goto LAB_82caf918;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar4 = *puVar1;
      uVar2 = *(uint *)(puVar1 + 1);
      uVar6 = uVar4 >> 0x3f;
      *puVar1 = uVar4 << 1;
      *(int *)(puVar1 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
    if ((longlong)uVar4 < 0) {
LAB_82caf918:
      iVar7 = iVar7 + 1;
    }
    else {
      iVar7 = 8;
    }
  }
  *(int *)(param_1 + 0x7a0) = iVar7;
LAB_82cafad0:
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar8 = 2;
  iVar9 = 0;
  uVar6 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar6 + 0x10;
  iVar7 = 0;
  if ((uVar4 & 0xffffffff) < 2) {
    do {
      iVar9 = iVar7;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar6 - uVar4);
      iVar9 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar6 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar6 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar6 + 0x10;
      iVar7 = iVar9;
    } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar6 - uVar8);
  *puVar1 = uVar4 << (uVar8 & 0x7f);
  if ((longlong)(uVar6 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0x7a4) = (int)(uVar4 >> (0x40 - uVar8 & 0x7f)) + iVar9 + 3;
  return;
}


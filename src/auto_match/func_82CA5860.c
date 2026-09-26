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
extern int fn_82C60938();
extern int fn_82C851E0();
extern int fn_82C87EA0();
extern int fn_82CBDF88();


undefined8 fn_82CA5860(int param_1,int param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar7 = 9;
  iVar8 = 0;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar5 = 0;
  if ((uVar4 & 0xffffffff) < 9) {
    do {
      iVar8 = iVar5;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar8 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar8;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar5 = iVar8;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  iVar8 = (int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) + iVar8;
  *puVar1 = *puVar1 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) ||
     (*(int *)(param_1 + 0x54c8) != 1)) {
    if (iVar8 != param_2) {
      return 1;
    }
  }
  else if (iVar8 != *(int *)(param_1 + 0x8c) + param_2) {
    return 1;
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar8 = 0;
  uVar7 = 1;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar5 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      iVar8 = iVar5;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar8 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar8;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar5 = iVar8;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  *puVar1 = uVar4 << (uVar7 & 0x7f);
  if ((longlong)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar8 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x5568) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar7 = 1;
    lVar6 = 0;
    uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar4 = uVar3 + 0x10;
    if ((uVar4 & 0xffffffff) == 0) {
      do {
        if ((uVar4 & 0xffffffff) == 0) break;
        uVar7 = uVar7 - uVar4;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
        lVar6 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) +
                lVar6;
        *puVar1 = *puVar1 << (uVar4 & 0x7f);
        if ((longlong)(uVar3 - uVar4) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
      } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
    }
    uVar4 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
    *puVar1 = uVar4 << (uVar7 & 0x7f);
    if ((longlong)(uVar3 - uVar7) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar4 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) != 0) {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar7 = 1;
      iVar8 = 0;
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar5 = 0;
      if ((uVar4 & 0xffffffff) == 0) {
        do {
          iVar8 = iVar5;
          if ((uVar4 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar4;
          *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
          iVar8 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar7 & 0x3f)) + iVar8;
          *puVar1 = *puVar1 << (uVar4 & 0x7f);
          if ((longlong)(uVar3 - uVar4) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar4 = uVar3 + 0x10;
          iVar5 = iVar8;
        } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar4 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
      *puVar1 = uVar4 << (uVar7 & 0x7f);
      if ((longlong)(uVar3 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      iVar5 = ((uint)LZCOUNT((int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar8) >> 5) + 1;
      goto LAB_82ca5bb4;
    }
  }
  iVar5 = 0;
LAB_82ca5bb4:
  if (iVar5 == *(int *)(param_1 + 0x567c)) {
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x50c8) = 0;
      *(undefined4 *)(param_1 + 0x50d0) = 0;
      uVar2 = fn_82C60938();
      if (*(int *)(param_1 + 0x120) == 5) {
        return 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x50c8) = 1;
      if (iVar5 == 2) {
        *(undefined4 *)(param_1 + 0x50d0) = 0;
        uVar2 = fn_82C851E0();
        if (*(int *)(param_1 + 0x120) == 5) {
          return 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x50cc) = 1;
        uVar2 = fn_82C87EA0(param_1,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = fn_82CBDF88(param_1);
      }
    }
    if (*(int *)(param_1 + 0x120) != 5) {
      return uVar2;
    }
  }
  return 1;
}


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
extern int fn_82C52CA0();
extern int fn_82C53AE8();


undefined8 fn_82CBBDC8(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar12;
  ulonglong uVar11;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  iVar2 = *(int *)(param_1 + 0xa0);
  fn_82C52CA0();
  uVar10 = 1;
  iVar12 = 0;
  puVar3 = *(ulonglong **)(param_1 + 0x54);
  uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
  uVar6 = uVar5 + 0x10;
  iVar7 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar7;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar6;
      *(int *)(puVar3 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar3 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f)) + iVar12;
      *puVar3 = *puVar3 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar3);
      }
      uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar6 = uVar5 + 0x10;
      iVar7 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  uVar6 = *puVar3;
  *(int *)(puVar3 + 1) = (int)(uVar5 - uVar10);
  *puVar3 = uVar6 << (uVar10 & 0x7f);
  if ((longlong)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar3);
  }
  if ((int)(uVar6 >> (0x40 - uVar10 & 0x7f)) + iVar12 == 0) {
    *(undefined4 *)(param_1 + 0x55a0) = 0;
    *(undefined4 *)(param_1 + 0x559c) = 0;
  }
  else {
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    uVar10 = 4;
    *(undefined4 *)(param_1 + 0x55a0) = 1;
    iVar12 = 0;
    *(undefined4 *)(param_1 + 0x559c) = 1;
    uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
    uVar6 = uVar5 + 0x10;
    iVar7 = 0;
    if ((uVar6 & 0xffffffff) < 4) {
      do {
        iVar12 = iVar7;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar6;
        *(int *)(puVar3 + 1) = (int)(uVar5 - uVar6);
        iVar12 = ((int)(*puVar3 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f)) + iVar12;
        *puVar3 = *puVar3 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar6 = uVar5 + 0x10;
        iVar7 = iVar12;
      } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *(int *)(puVar3 + 1) = (int)(uVar5 - uVar10);
    iVar12 = (int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) + iVar12;
    *puVar3 = *puVar3 << (uVar10 & 0x7f);
    if ((longlong)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(puVar3);
    }
    if (iVar12 < 9) {
      *(int *)(param_1 + 0x55a8) = iVar12;
      *(int *)(param_1 + 0x55a4) = iVar12;
    }
    else {
      iVar7 = iVar12 + -6;
      *(int *)(param_1 + 0x55a4) = iVar12 + -8;
      *(int *)(param_1 + 0x55a8) = iVar7;
      if (7 < iVar7) {
        iVar7 = 8;
      }
      *(int *)(param_1 + 0x55a8) = iVar7;
    }
  }
  puVar3 = *(ulonglong **)(param_1 + 0x54);
  uVar10 = 1;
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
  uVar6 = uVar5 + 0x10;
  iVar7 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar7;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar6;
      *(int *)(puVar3 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar3 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f)) + iVar12;
      *puVar3 = *puVar3 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar3);
      }
      uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar6 = uVar5 + 0x10;
      iVar7 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  uVar6 = *puVar3;
  *(int *)(puVar3 + 1) = (int)(uVar5 - uVar10);
  *puVar3 = uVar6 << (uVar10 & 0x7f);
  if ((longlong)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar3);
  }
  if ((int)(uVar6 >> (0x40 - uVar10 & 0x7f)) + iVar12 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x5628);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x562c);
  }
  else {
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    uVar10 = 2;
    lVar8 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
    uVar6 = uVar5 + 0x10;
    if ((uVar6 & 0xffffffff) < 2) {
      do {
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar6;
        *(int *)(puVar3 + 1) = (int)(uVar5 - uVar6);
        lVar8 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f))
                + lVar8;
        *puVar3 = *puVar3 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar6 = uVar5 + 0x10;
      } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *(int *)(puVar3 + 1) = (int)(uVar5 - uVar10);
    lVar8 = (*puVar3 >> (0x40 - uVar10 & 0x7f) & 0xffffffff) + lVar8;
    *puVar3 = *puVar3 << (uVar10 & 0x7f);
    if ((longlong)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(puVar3);
    }
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    uVar10 = 2;
    lVar9 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
    uVar6 = uVar5 + 0x10;
    if ((uVar6 & 0xffffffff) < 2) {
      do {
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar6;
        *(int *)(puVar3 + 1) = (int)(uVar5 - uVar6);
        lVar9 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f))
                + lVar9;
        *puVar3 = *puVar3 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar6 = uVar5 + 0x10;
      } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *(int *)(puVar3 + 1) = (int)(uVar5 - uVar10);
    lVar9 = (*puVar3 >> (0x40 - uVar10 & 0x7f) & 0xffffffff) + lVar9;
    *puVar3 = *puVar3 << (uVar10 & 0x7f);
    if ((longlong)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(puVar3);
    }
    if (((int)lVar8 == 0) && ((int)lVar9 == 0)) {
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      uVar10 = 0xc;
      lVar8 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar6 = uVar5 + 0x10;
      if ((uVar6 & 0xffffffff) < 0xc) {
        do {
          if ((uVar6 & 0xffffffff) == 0) break;
          uVar10 = uVar10 - uVar6;
          *(int *)(puVar3 + 1) = (int)(uVar5 - uVar6);
          lVar8 = (ulonglong)
                  (uint)((int)(*puVar3 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f)) + lVar8;
          *puVar3 = *puVar3 << (uVar6 & 0x7f);
          if ((longlong)(uVar5 - uVar6) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar6 = uVar5 + 0x10;
        } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
      }
      uVar6 = *puVar3;
      *(int *)(puVar3 + 1) = (int)(uVar5 - uVar10);
      *puVar3 = uVar6 << (uVar10 & 0x7f);
      if ((longlong)(uVar5 - uVar10) < 0) {
        fn_82C4E5E8(puVar3);
      }
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      uVar11 = 0xc;
      iVar7 = (int)(((uVar6 >> (0x40 - uVar10 & 0x7f) & 0xffffffff) + lVar8 + 1 & 0xffffffff) << 1);
      lVar8 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar6 = uVar5 + 0x10;
      if ((uVar6 & 0xffffffff) < 0xc) {
        do {
          if ((uVar6 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar6;
          *(int *)(puVar3 + 1) = (int)(uVar5 - uVar6);
          lVar8 = (ulonglong)
                  (uint)((int)(*puVar3 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar11 & 0x3f)) + lVar8;
          *puVar3 = *puVar3 << (uVar6 & 0x7f);
          if ((longlong)(uVar5 - uVar6) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar5 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar6 = uVar5 + 0x10;
        } while ((uVar6 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      uVar6 = *puVar3;
      *(int *)(puVar3 + 1) = (int)(uVar5 - uVar11);
      *puVar3 = uVar6 << (uVar11 & 0x7f);
      if ((longlong)(uVar5 - uVar11) < 0) {
        fn_82C4E5E8(puVar3);
      }
      iVar12 = (int)(((uVar6 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar8 + 1 & 0xffffffff) << 1)
      ;
      if ((*(int *)(param_1 + 0x5628) < iVar7) || (*(int *)(param_1 + 0x562c) < iVar12)) {
        return 1;
      }
      *(int *)(param_1 + 0x9c) = iVar7;
      *(int *)(param_1 + 0xa0) = iVar12;
    }
    else {
      *(undefined4 *)(param_1 + 0x9c) =
           *(undefined4 *)((int)((lVar8 + 0x15c9U & 0xffffffff) << 2) + param_1);
      *(undefined4 *)(param_1 + 0xa0) =
           *(undefined4 *)((int)((lVar9 + 0x15cdU & 0xffffffff) << 2) + param_1);
    }
  }
  if ((*(int *)(param_1 + 0x9c) == iVar1) && (*(int *)(param_1 + 0xa0) == iVar2)) {
    *(undefined4 *)(param_1 + 0x5580) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5580) = 1;
  }
  uVar4 = fn_82C53AE8(param_1,*(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0x5630) = 0;
  return uVar4;
}


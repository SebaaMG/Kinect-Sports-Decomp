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
extern int fn_82C4E470();
extern int fn_82C4E5E8();


undefined8 fn_82C658A8(int param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x54) + 8) & 7;
  uVar4 = 8;
  if (uVar3 != 0) {
    uVar4 = uVar3;
  }
  fn_82C4E470(*(int *)(param_1 + 0x54),uVar4);
  uVar10 = (ulonglong)*(uint *)(param_1 + 0xe20) + 0x10;
  plVar1 = *(longlong **)(param_1 + 0x54);
  uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
  uVar7 = uVar5 + 0x10;
  if (((uVar10 & 0xffffffff) < 0x21) && ((uVar10 & 0xffffffff) != 0)) {
    if ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff)) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((longlong)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((longlong)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
  }
  uVar5 = 0;
  lVar6 = (longlong)*(int *)(param_1 + 0x8c) * (longlong)*(int *)(param_1 + 0x88);
  for (lVar8 = lVar6 + -1; lVar8 != 0; lVar8 = (longlong)((int)lVar8 >> 1)) {
    uVar5 = uVar5 + 1;
  }
  iVar11 = 0;
  if (1 < (int)lVar6) {
    puVar2 = *(ulonglong **)(param_1 + 0x54);
    iVar11 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar10 = uVar7 + 0x10;
    if ((uVar5 & 0xffffffff) < 0x21) {
      if ((uVar5 & 0xffffffff) == 0) {
        iVar11 = 0;
      }
      else {
        iVar9 = 0;
        if ((uVar10 & 0xffffffff) < (uVar5 & 0xffffffff)) {
          do {
            iVar11 = iVar9;
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar5 = uVar5 - uVar10;
            *(int *)(puVar2 + 1) = (int)(uVar7 - uVar10);
            iVar11 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar5 & 0x3f)) + iVar11;
            *puVar2 = *puVar2 << (uVar10 & 0x7f);
            if ((longlong)(uVar7 - uVar10) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar10 = uVar7 + 0x10;
            iVar9 = iVar11;
          } while ((uVar10 & 0xffffffff) < (uVar5 & 0xffffffff));
        }
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar5);
        iVar11 = (int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) + iVar11;
        *puVar2 = *puVar2 << (uVar5 & 0x7f);
        if ((longlong)(uVar7 - uVar5) < 0) {
          fn_82C4E5E8(puVar2);
        }
      }
    }
    else {
      iVar11 = 0;
    }
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar10 = 5;
  *(int *)(param_1 + 0xe40) = iVar11;
  iVar9 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar7 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar7 & 0xffffffff) < 5) {
    do {
      iVar9 = iVar11;
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar7;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar7);
      iVar9 = ((int)(*puVar2 >> (0x40 - uVar7 & 0x7f)) << ((uint)uVar10 & 0x3f)) + iVar9;
      *puVar2 = *puVar2 << (uVar7 & 0x7f);
      if ((longlong)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar7 = uVar5 + 0x10;
      iVar11 = iVar9;
    } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  uVar7 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
  *puVar2 = uVar7 << (uVar10 & 0x7f);
  if ((longlong)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *param_2 = (int)(uVar7 >> (0x40 - uVar10 & 0x7f)) + iVar9;
  uVar10 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  lVar8 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar7 = uVar5 + 0x10;
  if ((uVar7 & 0xffffffff) == 0) {
    do {
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar7;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar7);
      lVar8 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar7 & 0x7f)) << ((uint)uVar10 & 0x3f)) +
              lVar8;
      *puVar2 = *puVar2 << (uVar7 & 0x7f);
      if ((longlong)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar7 = uVar5 + 0x10;
    } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  uVar7 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
  *puVar2 = uVar7 << (uVar10 & 0x7f);
  if ((longlong)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if (((uVar7 >> (0x40 - uVar10 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) != 0) {
    do {
      puVar2 = *(ulonglong **)(param_1 + 0x54);
      uVar10 = 1;
      lVar8 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar7 = uVar5 + 0x10;
      if ((uVar7 & 0xffffffff) == 0) {
        do {
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar10 = uVar10 - uVar7;
          *(int *)(puVar2 + 1) = (int)(uVar5 - uVar7);
          lVar8 = (ulonglong)
                  (uint)((int)(*puVar2 >> (0x40 - uVar7 & 0x7f)) << ((uint)uVar10 & 0x3f)) + lVar8;
          *puVar2 = *puVar2 << (uVar7 & 0x7f);
          if ((longlong)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar7 = uVar5 + 0x10;
        } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
      }
      uVar7 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
      *puVar2 = uVar7 << (uVar10 & 0x7f);
      if ((longlong)(uVar5 - uVar10) < 0) {
        fn_82C4E5E8(puVar2);
      }
    } while (((uVar7 >> (0x40 - uVar10 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) != 0);
    plVar1 = *(longlong **)(param_1 + 0x54);
    uVar10 = 1;
    uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar7 & 0xffffffff) == 0) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((longlong)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((longlong)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
    plVar1 = *(longlong **)(param_1 + 0x54);
    uVar10 = (ulonglong)*(uint *)(param_1 + 0xe68);
    uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar10 < 0x21) && (uVar10 != 0)) {
      if ((uVar7 & 0xffffffff) < uVar10) {
        do {
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar10 = uVar10 - uVar7;
          *plVar1 = *plVar1 << (uVar7 & 0x7f);
          *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
          if ((longlong)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(plVar1);
          }
          uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
          uVar7 = uVar5 + 0x10;
        } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
      }
      *plVar1 = *plVar1 << (uVar10 & 0x7f);
      *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
      if ((longlong)(uVar5 - uVar10) < 0) {
        fn_82C4E5E8(plVar1);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x54);
    uVar10 = 1;
    uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar7 & 0xffffffff) == 0) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((longlong)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((longlong)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
    plVar1 = *(longlong **)(param_1 + 0x54);
    uVar10 = 2;
    uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar7 & 0xffffffff) < 2) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((longlong)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((longlong)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
    plVar1 = *(longlong **)(param_1 + 0x54);
    uVar10 = 3;
    uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar7 & 0xffffffff) < 3) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((longlong)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((longlong)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
    if (*(int *)(param_1 + 0x120) == 1) {
      plVar1 = *(longlong **)(param_1 + 0x54);
      uVar10 = 3;
      uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
      uVar7 = uVar5 + 0x10;
      if ((uVar7 & 0xffffffff) < 3) {
        do {
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar10 = uVar10 - uVar7;
          *plVar1 = *plVar1 << (uVar7 & 0x7f);
          *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
          if ((longlong)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(plVar1);
          }
          uVar5 = (ulonglong)*(uint *)(plVar1 + 1);
          uVar7 = uVar5 + 0x10;
        } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
      }
      *plVar1 = *plVar1 << (uVar10 & 0x7f);
      *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
      if ((longlong)(uVar5 - uVar10) < 0) {
        fn_82C4E5E8(plVar1);
      }
    }
  }
  return 1;
}


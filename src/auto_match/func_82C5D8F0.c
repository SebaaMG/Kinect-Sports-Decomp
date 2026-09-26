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
extern int fn_82C589E8();


void fn_82C5D8F0(int param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar9 = 0;
  iVar6 = 0;
  uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    uVar8 = 1;
    iVar9 = 0;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        iVar6 = iVar9;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        iVar6 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar6;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((longlong)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar9 = iVar6;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    uVar5 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
    *puVar1 = uVar5 << (uVar8 & 0x7f);
    if ((longlong)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0x1c4) = (int)(uVar5 >> (0x40 - uVar8 & 0x7f)) + iVar6;
  }
  else {
    uVar8 = 2;
    iVar6 = 0;
    if ((uVar5 & 0xffffffff) < 2) {
      do {
        iVar9 = iVar6;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        iVar9 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((longlong)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar6 = iVar9;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
    iVar9 = (int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) + iVar9;
    *puVar1 = *puVar1 << (uVar8 & 0x7f);
    if ((longlong)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(undefined4 *)(param_1 + 0x1c4) = 1;
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x1c4) = 0;
    }
    else {
      if (iVar9 == 1) {
        *(undefined4 *)(param_1 + 4000) = 0;
      }
      else if (iVar9 == 2) {
        *(undefined4 *)(param_1 + 4000) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 4000) = 2;
      }
      fn_82C589E8(param_1);
    }
  }
  if (*(int *)(param_1 + 0x1bc) == 0) goto LAB_82c5df0c;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar5 = 1;
  lVar7 = 0;
  uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
  if (*(int *)(param_1 + 0xf8) < 0xb) {
    uVar8 = uVar4 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar5 = uVar5 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
        lVar7 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar5 & 0x3f)) +
                lVar7;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar4 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar4 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
    *puVar1 = uVar8 << (uVar5 & 0x7f);
    if ((longlong)(uVar4 - uVar5) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar8 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0) {
LAB_82c5df04:
      iVar6 = param_1 + 0x864;
    }
    else {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar8 = 1;
      lVar7 = 0;
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar7 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f))
                  + lVar7;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((longlong)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar5 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
      *puVar1 = uVar5 << (uVar8 & 0x7f);
      if ((longlong)(uVar4 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0) {
        iVar6 = param_1 + 0x87c;
      }
      else {
LAB_82c5dce0:
        iVar6 = param_1 + 0x870;
      }
    }
  }
  else {
    uVar8 = uVar4 + 0x10;
    if (*(int *)(param_1 + 0xf8) < 0x15) {
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar5 = uVar5 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
          lVar7 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar5 & 0x3f))
                  + lVar7;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar4 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar4 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      *puVar1 = uVar8 << (uVar5 & 0x7f);
      if ((longlong)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0)
      goto LAB_82c5dce0;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar8 = 1;
      lVar7 = 0;
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar7 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f))
                  + lVar7;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((longlong)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar5 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
      *puVar1 = uVar5 << (uVar8 & 0x7f);
      if ((longlong)(uVar4 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0)
      goto LAB_82c5df04;
      iVar6 = param_1 + 0x87c;
    }
    else {
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar5 = uVar5 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
          lVar7 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar5 & 0x3f))
                  + lVar7;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar4 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar4 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      *puVar1 = uVar8 << (uVar5 & 0x7f);
      if ((longlong)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0) {
        iVar6 = param_1 + 0x87c;
      }
      else {
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar8 = 1;
        lVar7 = 0;
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        if ((uVar5 & 0xffffffff) == 0) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar8 = uVar8 - uVar5;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
            lVar7 = (ulonglong)
                    (uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) + lVar7;
            *puVar1 = *puVar1 << (uVar5 & 0x7f);
            if ((longlong)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar5 = uVar4 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
        }
        uVar5 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
        *puVar1 = uVar5 << (uVar8 & 0x7f);
        if ((longlong)(uVar4 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        iVar6 = param_1 + 0x870;
        if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) != 0)
        goto LAB_82c5df04;
      }
    }
  }
  *(int *)(param_1 + 0x860) = iVar6;
LAB_82c5df0c:
  if (*(int *)(param_1 + 0xf68) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar8 = 1;
    iVar9 = 0;
    uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar5 = uVar4 + 0x10;
    iVar6 = 0;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        iVar9 = iVar6;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        iVar9 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar9;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((longlong)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar6 = iVar9;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    uVar5 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
    *puVar1 = uVar5 << (uVar8 & 0x7f);
    if ((longlong)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0x1c8) = (int)(uVar5 >> (0x40 - uVar8 & 0x7f)) + iVar9;
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x54);
    lVar7 = *plVar2;
    uVar3 = *(uint *)(plVar2 + 1);
    *plVar2 = lVar7 << 1;
    *(int *)(plVar2 + 1) = (int)((ulonglong)uVar3 - 1);
    if ((longlong)((ulonglong)uVar3 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar7 < 0) {
      plVar2 = *(longlong **)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x14c) = 0;
      uVar3 = *(uint *)(plVar2 + 1);
      lVar7 = *plVar2;
      *plVar2 = lVar7 << 1;
      *(int *)(plVar2 + 1) = (int)((ulonglong)uVar3 - 1);
      if ((longlong)((ulonglong)uVar3 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar2 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar2;
        uVar3 = *(uint *)(plVar2 + 1);
        *plVar2 = lVar7 << 1;
        *(int *)(plVar2 + 1) = (int)((ulonglong)uVar3 - 1);
        if ((longlong)((ulonglong)uVar3 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar7 < 0) {
          *(undefined4 *)(param_1 + 0x154) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x154) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x154) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
  }
  return;
}


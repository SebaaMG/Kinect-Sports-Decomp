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
extern int fn_82923B38();
extern int fn_82C4E5E8();
extern int fn_82C531B8();
extern int fn_82C567D0();
extern int fn_82C571A0();
extern int fn_82C58408();
extern int fn_82C58FB8();
extern int fn_82C5D8F0();
extern int fn_82C5F8E8();
extern int fn_82C5FAB0();
extern int fn_82C9D918();
extern int fn_82CA8498();
extern int fn_82CAAA10();
extern int fn_82CBC3B8();
extern unsigned int lbl_820FC098;
extern unsigned int lbl_820FC0B4;
extern unsigned int lbl_820FC0D0;
extern unsigned int lbl_820FC108;
extern unsigned int lbl_820FC13C;
extern unsigned int lbl_820FC284;


undefined8 fn_82C62ED0(int param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  ulonglong uVar15;
  
  iVar14 = 0;
  bVar5 = false;
  bVar4 = false;
  if (*(int *)(param_1 + 0x3cb0) == 0) {
    uVar6 = fn_82C571A0();
    return uVar6;
  }
  *(undefined4 *)(param_1 + 0xd6c) = 0;
  if (*(int *)(param_1 + 0x3cb0) == 6) {
    if (*(int *)(param_1 + 0xd9c) != 0) {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar2 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      *(uint *)(param_1 + 0xda0) = (uint)((ulonglong)lVar7 >> 0x3f);
    }
    plVar1 = *(longlong **)(param_1 + 0x54);
    uVar15 = 2;
    uVar8 = (ulonglong)*(uint *)(plVar1 + 1);
    uVar10 = uVar8 + 0x10;
    if ((uVar10 & 0xffffffff) < 2) {
      do {
        if ((uVar10 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar10;
        *plVar1 = *plVar1 << (uVar10 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar8 - uVar10);
        if ((longlong)(uVar8 - uVar10) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar8 = (ulonglong)*(uint *)(plVar1 + 1);
        uVar10 = uVar8 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar15 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar8 - uVar15);
    if ((longlong)(uVar8 - uVar15) < 0) {
      fn_82C4E5E8(plVar1);
    }
    if ((*(int *)(param_1 + 0x3cb0) == 6) && (*(int *)(param_1 + 0x3a08) != 0)) {
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      iVar9 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar10 = uVar8 + 0x10;
      iVar11 = 0;
      if ((uVar10 & 0xffffffff) == 0) {
        do {
          iVar9 = iVar11;
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar10;
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
          iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
          *puVar3 = *puVar3 << (uVar10 & 0x7f);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
          iVar11 = iVar9;
        } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar10 = *puVar3;
      *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
      *puVar3 = uVar10 << (uVar15 & 0x7f);
      if ((longlong)(uVar8 - uVar15) < 0) {
        fn_82C4E5E8(puVar3);
      }
      *(int *)(param_1 + 0x3a0c) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
    }
  }
  lVar7 = 0;
  iVar11 = 0;
  if (*(int *)(param_1 + 0x3cb0) != 6) {
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
    uVar15 = ((ulonglong)(*(int *)(param_1 + 0x3cb0) == 5) ^ 1) + 1;
    uVar10 = uVar8 + 0x10;
    if (uVar15 < 0x21) {
      if (uVar15 == 0) {
        iVar11 = 0;
      }
      else {
        if ((uVar10 & 0xffffffff) < uVar15) {
          do {
            iVar11 = (int)lVar7;
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar10;
            *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
            lVar7 = (ulonglong)
                    (uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                    lVar7;
            iVar11 = (int)lVar7;
            *puVar3 = *puVar3 << (uVar10 & 0x7f);
            if ((longlong)(uVar8 - uVar10) < 0) {
              fn_82C4E5E8(puVar3);
            }
            uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
            uVar10 = uVar8 + 0x10;
          } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
        iVar11 = (int)(*puVar3 >> (0x40 - uVar15 & 0x7f)) + iVar11;
        *puVar3 = *puVar3 << (uVar15 & 0x7f);
        if ((longlong)(uVar8 - uVar15) < 0) {
          fn_82C4E5E8(puVar3);
        }
      }
    }
    else {
      iVar11 = 0;
    }
    *(int *)(param_1 + 0x120) = iVar11;
    goto LAB_82c6390c;
  }
  puVar3 = *(ulonglong **)(param_1 + 0x54);
  uVar15 = 1;
  *(undefined4 *)(param_1 + 0x3b9c) = 0xffffffff;
  uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
  uVar10 = uVar8 + 0x10;
  if ((uVar10 & 0xffffffff) == 0) {
    do {
      if ((uVar10 & 0xffffffff) == 0) break;
      uVar15 = uVar15 - uVar10;
      *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
      lVar7 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
              lVar7;
      *puVar3 = *puVar3 << (uVar10 & 0x7f);
      if ((longlong)(uVar8 - uVar10) < 0) {
        fn_82C4E5E8(puVar3);
      }
      uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar10 = uVar8 + 0x10;
    } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
  }
  uVar10 = *puVar3;
  *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
  *puVar3 = uVar10 << (uVar15 & 0x7f);
  if ((longlong)(uVar8 - uVar15) < 0) {
    fn_82C4E5E8(puVar3);
  }
  if (((uVar10 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 1) {
    *(undefined4 *)(param_1 + 0x120) = 1;
    goto LAB_82c6390c;
  }
  if (*(int *)(param_1 + 0x39f4) == 0) {
    if (*(int *)(param_1 + 0x3b98) == 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    else {
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar7 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar10 = uVar8 + 0x10;
      if ((uVar10 & 0xffffffff) == 0) {
        do {
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar10;
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
          lVar7 = (ulonglong)
                  (uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar7;
          *puVar3 = *puVar3 << (uVar10 & 0x7f);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
        } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar10 = *puVar3;
      *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
      *puVar3 = uVar10 << (uVar15 & 0x7f);
      if ((longlong)(uVar8 - uVar15) < 0) {
        fn_82C4E5E8(puVar3);
      }
      if (((uVar10 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 1) {
        *(undefined4 *)(param_1 + 0x120) = 0;
      }
      else {
        puVar3 = *(ulonglong **)(param_1 + 0x54);
        uVar15 = 1;
        lVar7 = 0;
        uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar10 = uVar8 + 0x10;
        if ((uVar10 & 0xffffffff) == 0) {
          do {
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar10;
            *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
            lVar7 = (ulonglong)
                    (uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                    lVar7;
            *puVar3 = *puVar3 << (uVar10 & 0x7f);
            if ((longlong)(uVar8 - uVar10) < 0) {
              fn_82C4E5E8(puVar3);
            }
            uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
            uVar10 = uVar8 + 0x10;
          } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        uVar10 = *puVar3;
        *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
        *puVar3 = uVar10 << (uVar15 & 0x7f);
        if ((longlong)(uVar8 - uVar15) < 0) {
          fn_82C4E5E8(puVar3);
        }
        if (((uVar10 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 1) {
          *(undefined4 *)(param_1 + 0x120) = 0;
          fn_82923B38(*(undefined4 *)(param_1 + 0x3ba4));
        }
        else {
          bVar4 = true;
          *(undefined4 *)(param_1 + 0x120) = 1;
        }
      }
    }
    goto LAB_82c6390c;
  }
  puVar3 = *(ulonglong **)(param_1 + 0x54);
  uVar15 = 1;
  lVar7 = 0;
  uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
  uVar10 = uVar8 + 0x10;
  bVar4 = bVar5;
  if (*(int *)(param_1 + 0x3b98) == 0) {
    if ((uVar10 & 0xffffffff) == 0) {
      do {
        if ((uVar10 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar10;
        *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
        lVar7 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f))
                + lVar7;
        *puVar3 = *puVar3 << (uVar10 & 0x7f);
        if ((longlong)(uVar8 - uVar10) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar10 = uVar8 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar10 = *puVar3;
    *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
    *puVar3 = uVar10 << (uVar15 & 0x7f);
    if ((longlong)(uVar8 - uVar15) < 0) {
      fn_82C4E5E8(puVar3);
    }
    if (((uVar10 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 1) {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    else {
LAB_82c63470:
      *(undefined4 *)(param_1 + 0x120) = 2;
    }
  }
  else {
    if ((uVar10 & 0xffffffff) == 0) {
      do {
        if ((uVar10 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar10;
        *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
        lVar7 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f))
                + lVar7;
        *puVar3 = *puVar3 << (uVar10 & 0x7f);
        if ((longlong)(uVar8 - uVar10) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar10 = uVar8 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar10 = *puVar3;
    *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
    *puVar3 = uVar10 << (uVar15 & 0x7f);
    if ((longlong)(uVar8 - uVar15) < 0) {
      fn_82C4E5E8(puVar3);
    }
    if (((uVar10 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 1)
    goto LAB_82c63470;
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    lVar7 = 0;
    uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
    uVar10 = uVar8 + 0x10;
    if ((uVar10 & 0xffffffff) == 0) {
      do {
        if ((uVar10 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar10;
        *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
        lVar7 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f))
                + lVar7;
        *puVar3 = *puVar3 << (uVar10 & 0x7f);
        if ((longlong)(uVar8 - uVar10) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar10 = uVar8 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar10 = *puVar3;
    *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
    *puVar3 = uVar10 << (uVar15 & 0x7f);
    if ((longlong)(uVar8 - uVar15) < 0) {
      fn_82C4E5E8(puVar3);
    }
    if (((uVar10 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 1) {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    else {
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar7 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar10 = uVar8 + 0x10;
      if ((uVar10 & 0xffffffff) == 0) {
        do {
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar10;
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
          lVar7 = (ulonglong)
                  (uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar7;
          *puVar3 = *puVar3 << (uVar10 & 0x7f);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
        } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar10 = *puVar3;
      *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
      *puVar3 = uVar10 << (uVar15 & 0x7f);
      if ((longlong)(uVar8 - uVar15) < 0) {
        fn_82C4E5E8(puVar3);
      }
      if (((uVar10 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 1) {
        *(undefined4 *)(param_1 + 0x120) = 0;
        fn_82923B38(*(undefined4 *)(param_1 + 0x3ba4));
      }
      else {
        bVar4 = true;
        *(undefined4 *)(param_1 + 0x120) = 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x120) == 2) {
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 3;
    lVar7 = 0;
    uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
    uVar10 = uVar8 + 0x10;
    if ((uVar10 & 0xffffffff) < 3) {
      do {
        if ((uVar10 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar10;
        *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
        lVar7 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f))
                + lVar7;
        *puVar3 = *puVar3 << (uVar10 & 0x7f);
        if ((longlong)(uVar8 - uVar10) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar10 = uVar8 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
    uVar10 = (*puVar3 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7;
    *puVar3 = *puVar3 << (uVar15 & 0x7f);
    if ((longlong)(uVar8 - uVar15) < 0) {
      fn_82C4E5E8(puVar3);
    }
    if ((int)uVar10 == 7) {
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 4;
      lVar7 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar10 = uVar8 + 0x10;
      if ((uVar10 & 0xffffffff) < 4) {
        do {
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar10;
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
          lVar7 = (ulonglong)
                  (uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar7;
          *puVar3 = *puVar3 << (uVar10 & 0x7f);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
        } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
      uVar10 = (*puVar3 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7;
      *puVar3 = *puVar3 << (uVar15 & 0x7f);
      if ((longlong)(uVar8 - uVar15) < 0) {
        fn_82C4E5E8(puVar3);
      }
      iVar11 = (int)uVar10;
      if (iVar11 == 0xe) {
        return 1;
      }
      if (iVar11 == 0xf) {
        *(undefined4 *)(param_1 + 0xd6c) = 1;
      }
      else {
        iVar11 = (int)((uVar10 & 0xffffffff) << 2);
        *(undefined4 *)(param_1 + 0xd64) = *(undefined4 *)(&lbl_820FC0D0 + iVar11);
        iVar11 = *(int *)(&lbl_820FC108 + iVar11);
        *(int *)(param_1 + 0xd60) = iVar11;
        *(undefined4 *)(param_1 + 0x39f8) = *(undefined4 *)(&lbl_820FC284 + iVar11 * 4);
        if (*(int *)(param_1 + 0x39f4) == 0) {
          *(undefined4 *)(param_1 + 0x39f4) = 1;
        }
      }
    }
    else {
      iVar11 = (int)((uVar10 & 0xffffffff) << 2);
      *(undefined4 *)(param_1 + 0xd64) = *(undefined4 *)(&lbl_820FC098 + iVar11);
      iVar11 = *(int *)(&lbl_820FC0B4 + iVar11);
      *(int *)(param_1 + 0xd60) = iVar11;
      *(undefined4 *)(param_1 + 0x39f8) = *(undefined4 *)(&lbl_820FC284 + iVar11 * 4);
      if (*(int *)(param_1 + 0x39f4) == 0) {
        *(undefined4 *)(param_1 + 0x39f4) = 1;
      }
    }
  }
LAB_82c6390c:
  if (*(int *)(param_1 + 0xd6c) != 0) {
    *(undefined4 *)(param_1 + 0x120) = 4;
  }
  iVar11 = *(int *)(param_1 + 0x120);
  if (((((iVar11 == 0) || (iVar11 == 1)) || (iVar11 == 2)) || (iVar11 == 4)) &&
     (((*(int *)(param_1 + 0x3cb0) != 4 || (iVar11 == 0)) || (iVar11 == 1)))) {
    if ((4 < *(int *)(param_1 + 0x3cb0)) && ((iVar11 == 0 || (iVar11 == 4)))) {
      plVar1 = *(longlong **)(param_1 + 0x54);
      uVar15 = 7;
      uVar8 = (ulonglong)*(uint *)(plVar1 + 1);
      uVar10 = uVar8 + 0x10;
      if ((uVar10 & 0xffffffff) < 7) {
        do {
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar10;
          *plVar1 = *plVar1 << (uVar10 & 0x7f);
          *(int *)(plVar1 + 1) = (int)(uVar8 - uVar10);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(plVar1);
          }
          uVar8 = (ulonglong)*(uint *)(plVar1 + 1);
          uVar10 = uVar8 + 0x10;
        } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      *plVar1 = *plVar1 << (uVar15 & 0x7f);
      *(int *)(plVar1 + 1) = (int)(uVar8 - uVar15);
      if ((longlong)(uVar8 - uVar15) < 0) {
        fn_82C4E5E8(plVar1);
      }
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
        return 1;
      }
    }
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 5;
    iVar11 = 0;
    uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
    uVar10 = uVar8 + 0x10;
    iVar9 = 0;
    if ((uVar10 & 0xffffffff) < 5) {
      do {
        iVar11 = iVar9;
        if ((uVar10 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar10;
        *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
        iVar11 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar11;
        *puVar3 = *puVar3 << (uVar10 & 0x7f);
        if ((longlong)(uVar8 - uVar10) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
        uVar10 = uVar8 + 0x10;
        iVar9 = iVar11;
      } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
    iVar11 = (int)(*puVar3 >> (0x40 - uVar15 & 0x7f)) + iVar11;
    *puVar3 = *puVar3 << (uVar15 & 0x7f);
    if ((longlong)(uVar8 - uVar15) < 0) {
      fn_82C4E5E8(puVar3);
    }
    puVar3 = *(ulonglong **)(param_1 + 0x54);
    if (*(int *)((int)puVar3 + 0x14) == 0) {
      if (*(int *)(param_1 + 0x3cb0) < 6) {
        *(int *)(param_1 + 0x19d0) = param_1 + 0x14d0;
        *(int *)(param_1 + 0x39e0) = param_1 + 0x29e0;
      }
      else {
        *(int *)(param_1 + 0xfa8) = iVar11;
        if (iVar11 < 9) {
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar15 = 1;
          iVar9 = 0;
          uVar10 = uVar8 + 0x10;
          iVar11 = 0;
          if ((uVar10 & 0xffffffff) == 0) {
            do {
              iVar9 = iVar11;
              if ((uVar10 & 0xffffffff) == 0) break;
              uVar15 = uVar15 - uVar10;
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
              iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
              *puVar3 = *puVar3 << (uVar10 & 0x7f);
              if ((longlong)(uVar8 - uVar10) < 0) {
                fn_82C4E5E8(puVar3);
              }
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              iVar11 = iVar9;
            } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
          }
          uVar10 = *puVar3;
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
          *puVar3 = uVar10 << (uVar15 & 0x7f);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar3);
          }
          *(int *)(param_1 + 0xfc) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
        }
        else {
          *(undefined4 *)(param_1 + 0xfc) = 0;
        }
        if (*(int *)(param_1 + 0xd98) != 0) {
          puVar3 = *(ulonglong **)(param_1 + 0x54);
          uVar15 = 1;
          iVar9 = 0;
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
          iVar11 = 0;
          if ((uVar10 & 0xffffffff) == 0) {
            do {
              iVar9 = iVar11;
              if ((uVar10 & 0xffffffff) == 0) break;
              uVar15 = uVar15 - uVar10;
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
              iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
              *puVar3 = *puVar3 << (uVar10 & 0x7f);
              if ((longlong)(uVar8 - uVar10) < 0) {
                fn_82C4E5E8(puVar3);
              }
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              iVar11 = iVar9;
            } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
          }
          uVar10 = *puVar3;
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
          *puVar3 = uVar10 << (uVar15 & 0x7f);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar3);
          }
          *(int *)(param_1 + 0xd8c) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
        }
        iVar11 = *(int *)(param_1 + 0xfa8);
        if (*(int *)(param_1 + 0xd90) == 0) {
          if (iVar11 < 9) {
            *(undefined4 *)(param_1 + 0xd8c) = 1;
          }
          else {
            *(undefined4 *)(param_1 + 0xd8c) = 0;
            iVar11 = *(int *)(&lbl_820FC13C + iVar11 * 4);
          }
        }
        *(int *)(param_1 + 0xf8) = iVar11;
        *(undefined4 *)(param_1 + 0xbbc) = 0;
        if ((*(int *)(param_1 + 0xbc0) != 0) &&
           ((iVar9 = *(int *)(param_1 + 0x120), iVar9 != 2 || (*(int *)(param_1 + 0xd6c) != 0)))) {
          if (iVar11 < 9) {
            if ((*(int *)(param_1 + 0x5118) != 0) && ((iVar9 == 0 || (iVar9 == 4)))) {
              *(undefined4 *)(param_1 + 0xbbc) = 7;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0xbbc) = 1;
          }
        }
        if ((*(uint *)(param_1 + 0xbbc) & 1) == 0) {
          *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = 0x80;
          **(undefined2 **)(param_1 + 0x770) = 0x80;
          *(undefined2 *)(*(int *)(param_1 + 0x774) + 0x10) = 0x80;
          **(undefined2 **)(param_1 + 0x774) = 0x80;
        }
        else {
          *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = 0;
          **(undefined2 **)(param_1 + 0x770) = 0;
          *(undefined2 *)(*(int *)(param_1 + 0x774) + 0x10) = 0;
          **(undefined2 **)(param_1 + 0x774) = 0;
        }
        iVar9 = param_1 + 0xfd0;
        if (*(int *)(param_1 + 0xd8c) == 0) {
          iVar9 = param_1 + 0x14d0;
        }
        *(int *)(param_1 + 0x19d0) = iVar9;
        iVar9 = param_1 + 0x19e0;
        if (*(int *)(param_1 + 0xd8c) == 0) {
          iVar9 = param_1 + 0x29e0;
        }
        *(int *)(param_1 + 0x39e0) = iVar9;
      }
      *(int *)(param_1 + 0xf8) = iVar11;
      if ((0 < iVar11) && (iVar11 < 0x20)) {
        if ((*(int *)(param_1 + 0xfa8) < 9) && (*(int *)(param_1 + 0x3cb0) == 6)) {
          *(int *)(param_1 + 0xb7c) = param_1 + 0xb38;
          *(int *)(param_1 + 0xb88) = param_1 + 0xb0c;
        }
        if ((bVar4) && (*(int *)(param_1 + 0x3b98) != 0)) {
          puVar3 = *(ulonglong **)(param_1 + 0x54);
          uVar15 = 1;
          iVar9 = 0;
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
          iVar11 = 0;
          if ((uVar10 & 0xffffffff) == 0) {
            do {
              iVar9 = iVar11;
              if ((uVar10 & 0xffffffff) == 0) break;
              uVar15 = uVar15 - uVar10;
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
              iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
              *puVar3 = *puVar3 << (uVar10 & 0x7f);
              if ((longlong)(uVar8 - uVar10) < 0) {
                fn_82C4E5E8(puVar3);
              }
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              iVar11 = iVar9;
            } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
          }
          uVar10 = *puVar3;
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
          *puVar3 = uVar10 << (uVar15 & 0x7f);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar3);
          }
          *(int *)(param_1 + 0x3b9c) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
        }
        if (*(int *)(param_1 + 0x5440) != 0) {
          puVar3 = *(ulonglong **)(param_1 + 0x54);
          uVar15 = 1;
          iVar9 = 0;
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
          iVar11 = 0;
          if ((uVar10 & 0xffffffff) == 0) {
            do {
              iVar9 = iVar11;
              if ((uVar10 & 0xffffffff) == 0) break;
              uVar15 = uVar15 - uVar10;
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
              iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
              *puVar3 = *puVar3 << (uVar10 & 0x7f);
              if ((longlong)(uVar8 - uVar10) < 0) {
                fn_82C4E5E8(puVar3);
              }
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              iVar11 = iVar9;
            } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
          }
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
          iVar9 = (int)(*puVar3 >> (0x40 - uVar15 & 0x7f)) + iVar9;
          *puVar3 = *puVar3 << (uVar15 & 0x7f);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar3);
          }
          *(int *)(param_1 + 0x198) = iVar9;
          if (iVar9 != 0) {
            puVar3 = *(ulonglong **)(param_1 + 0x54);
            uVar15 = 1;
            iVar9 = 0;
            uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
            uVar10 = uVar8 + 0x10;
            iVar11 = 0;
            if ((uVar10 & 0xffffffff) == 0) {
              do {
                iVar9 = iVar11;
                if ((uVar10 & 0xffffffff) == 0) break;
                uVar15 = uVar15 - uVar10;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
                *puVar3 = *puVar3 << (uVar10 & 0x7f);
                if ((longlong)(uVar8 - uVar10) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar11 = iVar9;
              } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
            }
            uVar10 = *puVar3;
            *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
            *puVar3 = uVar10 << (uVar15 & 0x7f);
            if ((longlong)(uVar8 - uVar15) < 0) {
              fn_82C4E5E8(puVar3);
            }
            *(int *)(param_1 + 0x198) =
                 *(int *)(param_1 + 0x198) + (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
          }
          if (*(int *)(param_1 + 0x198) == 2) {
            puVar3 = *(ulonglong **)(param_1 + 0x54);
            uVar15 = 1;
            iVar9 = 0;
            uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
            uVar10 = uVar8 + 0x10;
            iVar11 = 0;
            if ((uVar10 & 0xffffffff) == 0) {
              do {
                iVar9 = iVar11;
                if ((uVar10 & 0xffffffff) == 0) break;
                uVar15 = uVar15 - uVar10;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
                *puVar3 = *puVar3 << (uVar10 & 0x7f);
                if ((longlong)(uVar8 - uVar10) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar11 = iVar9;
              } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
            }
            uVar10 = *puVar3;
            *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
            *puVar3 = uVar10 << (uVar15 & 0x7f);
            if ((longlong)(uVar8 - uVar15) < 0) {
              fn_82C4E5E8(puVar3);
            }
            *(int *)(param_1 + 0x198) =
                 *(int *)(param_1 + 0x198) + (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
          }
          fn_82C531B8(param_1,*(undefined4 *)(param_1 + 0x198));
        }
        if ((((*(int *)(param_1 + 0x120) != 2) && (*(int *)(param_1 + 0x120) != 4)) &&
            (*(int *)(param_1 + 0x3cb0) == 6)) && (*(int *)(param_1 + 0x3a24) != 0)) {
          puVar3 = *(ulonglong **)(param_1 + 0x54);
          iVar11 = 0;
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
          if (*(int *)(param_1 + 0xf8c) == 0) {
            uVar15 = 2;
            iVar9 = 0;
            if ((uVar10 & 0xffffffff) < 2) {
              do {
                iVar11 = iVar9;
                if ((uVar10 & 0xffffffff) == 0) break;
                uVar15 = uVar15 - uVar10;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                iVar11 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                         iVar11;
                *puVar3 = *puVar3 << (uVar10 & 0x7f);
                if ((longlong)(uVar8 - uVar10) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar9 = iVar11;
              } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
            }
          }
          else {
            uVar15 = 1;
            iVar9 = 0;
            if ((uVar10 & 0xffffffff) == 0) {
              do {
                iVar11 = iVar9;
                if ((uVar10 & 0xffffffff) == 0) break;
                uVar15 = uVar15 - uVar10;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                iVar11 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                         iVar11;
                *puVar3 = *puVar3 << (uVar10 & 0x7f);
                if ((longlong)(uVar8 - uVar10) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar9 = iVar11;
              } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
            }
          }
          uVar10 = *puVar3;
          *puVar3 = uVar10 << (uVar15 & 0x7f);
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar3);
          }
          *(int *)(param_1 + 0x3a28) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar11;
        }
        if (*(int *)(param_1 + 0x3a28) != 0) {
          fn_82CA8498(param_1);
          fn_82CAAA10(param_1);
        }
        if (*(int *)(param_1 + 0xf8c) != 0) {
          puVar3 = *(ulonglong **)(param_1 + 0x54);
          uVar15 = 1;
          iVar9 = 0;
          uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
          uVar10 = uVar8 + 0x10;
          iVar11 = 0;
          if ((uVar10 & 0xffffffff) == 0) {
            do {
              iVar9 = iVar11;
              if ((uVar10 & 0xffffffff) == 0) break;
              uVar15 = uVar15 - uVar10;
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
              iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
              *puVar3 = *puVar3 << (uVar10 & 0x7f);
              if ((longlong)(uVar8 - uVar10) < 0) {
                fn_82C4E5E8(puVar3);
              }
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              iVar11 = iVar9;
            } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
          }
          uVar10 = *puVar3;
          *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
          *puVar3 = uVar10 << (uVar15 & 0x7f);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar3);
          }
          if ((int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9 == 0) {
            iVar11 = 0;
            if (0 < *(int *)(param_1 + 0x90)) {
              iVar9 = 0;
              do {
                iVar11 = iVar11 + 1;
                puVar12 = (uint *)(iVar9 + *(int *)(param_1 + 0x110));
                iVar9 = iVar9 + 0x18;
                *puVar12 = *puVar12 & 0xfffff8ff;
              } while (iVar11 < *(int *)(param_1 + 0x90));
            }
          }
          else {
            fn_82CBC3B8(param_1);
            uVar6 = fn_82C58408(param_1,1);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            if ((*(int *)(param_1 + 0x160) != 0) && (iVar11 = 0, 0 < *(int *)(param_1 + 0x90))) {
              iVar9 = 0;
              do {
                iVar11 = iVar11 + 1;
                puVar12 = (uint *)(iVar9 + *(int *)(param_1 + 0x110));
                iVar9 = iVar9 + 0x18;
                uVar2 = *puVar12;
                *puVar12 = uVar2 >> 0x16 & 0x200 | uVar2 & 0xfffff8ff;
              } while (iVar11 < *(int *)(param_1 + 0x90));
            }
          }
        }
        if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x120) == 4)) {
          if (*(int *)(param_1 + 0x3cb0) < 5) {
            puVar3 = *(ulonglong **)(param_1 + 0x54);
            uVar15 = 5;
            iVar9 = 0;
            uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
            uVar10 = uVar8 + 0x10;
            iVar11 = 0;
            if ((uVar10 & 0xffffffff) < 5) {
              do {
                iVar9 = iVar11;
                if ((uVar10 & 0xffffffff) == 0) break;
                uVar15 = uVar15 - uVar10;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
                *puVar3 = *puVar3 << (uVar10 & 0x7f);
                if ((longlong)(uVar8 - uVar10) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar11 = iVar9;
              } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
            }
            uVar10 = *puVar3;
            *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
            *puVar3 = uVar10 << (uVar15 & 0x7f);
            if ((longlong)(uVar8 - uVar15) < 0) {
              fn_82C4E5E8(puVar3);
            }
            *(int *)(param_1 + 0x3ca8) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
          }
          uVar6 = fn_82C5F8E8(param_1,*(undefined4 *)(param_1 + 0x3ca8));
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          iVar11 = *(int *)(param_1 + 0x3cb0);
          if (3 < iVar11) {
            uVar6 = fn_82C567D0(param_1);
            if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
              return uVar6;
            }
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            iVar11 = *(int *)(param_1 + 0x3cb0);
            if (iVar11 < 5) {
              uVar2 = *(uint *)(param_1 + 0xe84);
              *(uint *)(param_1 + 400) =
                   (int)((~(ulonglong)uVar2 & 0xffffffff) >> 0x1f) + (uint)((ulonglong)uVar2 < 0x33)
                   & 1;
              if ((0x80 < (int)uVar2) ||
                 (uVar13 = 1, 0x12bff < *(int *)(param_1 + 0xa0) * *(int *)(param_1 + 0x9c))) {
                uVar13 = 0;
              }
              *(undefined4 *)(param_1 + 0x194) = uVar13;
            }
            else {
              *(undefined4 *)(param_1 + 0x194) = 0;
            }
          }
          if ((*(int *)(param_1 + 0xfa4) == 0) && (2 < iVar11)) {
            if (*(int *)(param_1 + 400) != 0) {
              puVar3 = *(ulonglong **)(param_1 + 0x54);
              uVar15 = 1;
              iVar9 = 0;
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              iVar11 = 0;
              if ((uVar10 & 0xffffffff) == 0) {
                do {
                  iVar9 = iVar11;
                  if ((uVar10 & 0xffffffff) == 0) break;
                  uVar15 = uVar15 - uVar10;
                  *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                  iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                          iVar9;
                  *puVar3 = *puVar3 << (uVar10 & 0x7f);
                  if ((longlong)(uVar8 - uVar10) < 0) {
                    fn_82C4E5E8(puVar3);
                  }
                  uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                  uVar10 = uVar8 + 0x10;
                  iVar11 = iVar9;
                } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
              }
              uVar10 = *puVar3;
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
              *puVar3 = uVar10 << (uVar15 & 0x7f);
              if ((longlong)(uVar8 - uVar15) < 0) {
                fn_82C4E5E8(puVar3);
              }
              *(int *)(param_1 + 0x18c) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
            }
            if (*(int *)(param_1 + 0x18c) == 0) {
              puVar3 = *(ulonglong **)(param_1 + 0x54);
              uVar15 = 1;
              lVar7 = 0;
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              if ((uVar10 & 0xffffffff) == 0) {
                do {
                  if ((uVar10 & 0xffffffff) == 0) break;
                  uVar15 = uVar15 - uVar10;
                  *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                  lVar7 = (ulonglong)
                          (uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f))
                          + lVar7;
                  *puVar3 = *puVar3 << (uVar10 & 0x7f);
                  if ((longlong)(uVar8 - uVar10) < 0) {
                    fn_82C4E5E8(puVar3);
                  }
                  uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                  uVar10 = uVar8 + 0x10;
                } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
              }
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
              uVar10 = (*puVar3 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7;
              *puVar3 = *puVar3 << (uVar15 & 0x7f);
              if ((longlong)(uVar8 - uVar15) < 0) {
                fn_82C4E5E8(puVar3);
              }
              *(int *)(param_1 + 0xb94) = (int)uVar10;
              if ((uVar10 & 0xffffffff) != 0) {
                puVar3 = *(ulonglong **)(param_1 + 0x54);
                uVar15 = 1;
                iVar9 = 0;
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar11 = 0;
                if ((uVar10 & 0xffffffff) == 0) {
                  do {
                    iVar9 = iVar11;
                    if ((uVar10 & 0xffffffff) == 0) break;
                    uVar15 = uVar15 - uVar10;
                    *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                    iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                            iVar9;
                    *puVar3 = *puVar3 << (uVar10 & 0x7f);
                    if ((longlong)(uVar8 - uVar10) < 0) {
                      fn_82C4E5E8(puVar3);
                    }
                    uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                    uVar10 = uVar8 + 0x10;
                    iVar11 = iVar9;
                  } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
                }
                uVar10 = *puVar3;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
                *puVar3 = uVar10 << (uVar15 & 0x7f);
                if ((longlong)(uVar8 - uVar15) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                *(int *)(param_1 + 0xb94) =
                     (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9 + *(int *)(param_1 + 0xb94);
              }
              puVar3 = *(ulonglong **)(param_1 + 0x54);
              uVar15 = 1;
              lVar7 = 0;
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              if ((uVar10 & 0xffffffff) == 0) {
                do {
                  if ((uVar10 & 0xffffffff) == 0) break;
                  uVar15 = uVar15 - uVar10;
                  *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                  lVar7 = (ulonglong)
                          (uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f))
                          + lVar7;
                  *puVar3 = *puVar3 << (uVar10 & 0x7f);
                  if ((longlong)(uVar8 - uVar10) < 0) {
                    fn_82C4E5E8(puVar3);
                  }
                  uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                  uVar10 = uVar8 + 0x10;
                } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
              }
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
              uVar10 = (*puVar3 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7;
              *puVar3 = *puVar3 << (uVar15 & 0x7f);
              if ((longlong)(uVar8 - uVar15) < 0) {
                fn_82C4E5E8(puVar3);
              }
              *(int *)(param_1 + 0xba0) = (int)uVar10;
              if ((uVar10 & 0xffffffff) != 0) {
                puVar3 = *(ulonglong **)(param_1 + 0x54);
                uVar15 = 1;
                iVar9 = 0;
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar11 = 0;
                if ((uVar10 & 0xffffffff) == 0) {
                  do {
                    iVar9 = iVar11;
                    if ((uVar10 & 0xffffffff) == 0) break;
                    uVar15 = uVar15 - uVar10;
                    *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                    iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                            iVar9;
                    *puVar3 = *puVar3 << (uVar10 & 0x7f);
                    if ((longlong)(uVar8 - uVar10) < 0) {
                      fn_82C4E5E8(puVar3);
                    }
                    uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                    uVar10 = uVar8 + 0x10;
                    iVar11 = iVar9;
                  } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
                }
                uVar10 = *puVar3;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
                *puVar3 = uVar10 << (uVar15 & 0x7f);
                if ((longlong)(uVar8 - uVar15) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                *(int *)(param_1 + 0xba0) =
                     (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9 + *(int *)(param_1 + 0xba0);
              }
              *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_1 + 0xba0);
              *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_1 + 0xba0);
            }
            puVar3 = *(ulonglong **)(param_1 + 0x54);
            uVar15 = 1;
            uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
            uVar10 = uVar8 + 0x10;
            if ((uVar10 & 0xffffffff) == 0) {
              do {
                if ((uVar10 & 0xffffffff) == 0) break;
                uVar15 = uVar15 - uVar10;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                iVar14 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                         iVar14;
                *puVar3 = *puVar3 << (uVar10 & 0x7f);
                if ((longlong)(uVar8 - uVar10) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
              } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
            }
            uVar10 = *puVar3;
            *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
            *puVar3 = uVar10 << (uVar15 & 0x7f);
            if ((longlong)(uVar8 - uVar15) < 0) {
              fn_82C4E5E8(puVar3);
            }
            *(int *)(param_1 + 0x82c) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar14;
          }
          if (((*(int *)(param_1 + 0x5118) == 0) && (*(int *)(param_1 + 0xf8c) == 0)) ||
             (*(int *)(param_1 + 0xfc8) == 0)) {
            fn_82C9D918(param_1);
          }
          else {
            fn_82C58FB8(param_1,0);
          }
          *(undefined4 *)(param_1 + 0xf78) = 1;
        }
        else {
          if (*(int *)(param_1 + 0x3cb0) == 6) {
            uVar6 = fn_82C5FAB0();
            if ((int)uVar6 != 0) {
              return uVar6;
            }
          }
          else {
            fn_82C5D8F0(param_1);
          }
          if (2 < *(int *)(param_1 + 0x3cb0)) {
            if (*(int *)(param_1 + 400) != 0) {
              puVar3 = *(ulonglong **)(param_1 + 0x54);
              uVar15 = 1;
              iVar9 = 0;
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              iVar11 = 0;
              if ((uVar10 & 0xffffffff) == 0) {
                do {
                  iVar9 = iVar11;
                  if ((uVar10 & 0xffffffff) == 0) break;
                  uVar15 = uVar15 - uVar10;
                  *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                  iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                          iVar9;
                  *puVar3 = *puVar3 << (uVar10 & 0x7f);
                  if ((longlong)(uVar8 - uVar10) < 0) {
                    fn_82C4E5E8(puVar3);
                  }
                  uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                  uVar10 = uVar8 + 0x10;
                  iVar11 = iVar9;
                } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
              }
              uVar10 = *puVar3;
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
              *puVar3 = uVar10 << (uVar15 & 0x7f);
              if ((longlong)(uVar8 - uVar15) < 0) {
                fn_82C4E5E8(puVar3);
              }
              *(int *)(param_1 + 0x18c) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
            }
            if (*(int *)(param_1 + 0x18c) == 0) {
              puVar3 = *(ulonglong **)(param_1 + 0x54);
              uVar15 = 1;
              lVar7 = 0;
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              if ((uVar10 & 0xffffffff) == 0) {
                do {
                  if ((uVar10 & 0xffffffff) == 0) break;
                  uVar15 = uVar15 - uVar10;
                  *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                  lVar7 = (ulonglong)
                          (uint)((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f))
                          + lVar7;
                  *puVar3 = *puVar3 << (uVar10 & 0x7f);
                  if ((longlong)(uVar8 - uVar10) < 0) {
                    fn_82C4E5E8(puVar3);
                  }
                  uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                  uVar10 = uVar8 + 0x10;
                } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
              }
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
              uVar10 = (*puVar3 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar7;
              *puVar3 = *puVar3 << (uVar15 & 0x7f);
              if ((longlong)(uVar8 - uVar15) < 0) {
                fn_82C4E5E8(puVar3);
              }
              *(int *)(param_1 + 0xb94) = (int)uVar10;
              if ((uVar10 & 0xffffffff) != 0) {
                puVar3 = *(ulonglong **)(param_1 + 0x54);
                uVar15 = 1;
                iVar9 = 0;
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar11 = 0;
                if ((uVar10 & 0xffffffff) == 0) {
                  do {
                    iVar9 = iVar11;
                    if ((uVar10 & 0xffffffff) == 0) break;
                    uVar15 = uVar15 - uVar10;
                    *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                    iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                            iVar9;
                    *puVar3 = *puVar3 << (uVar10 & 0x7f);
                    if ((longlong)(uVar8 - uVar10) < 0) {
                      fn_82C4E5E8(puVar3);
                    }
                    uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                    uVar10 = uVar8 + 0x10;
                    iVar11 = iVar9;
                  } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
                }
                uVar10 = *puVar3;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
                *puVar3 = uVar10 << (uVar15 & 0x7f);
                if ((longlong)(uVar8 - uVar15) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                *(int *)(param_1 + 0xb94) =
                     (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9 + *(int *)(param_1 + 0xb94);
              }
            }
            uVar13 = *(undefined4 *)(param_1 + 0xb94);
            uVar15 = 1;
            puVar3 = *(ulonglong **)(param_1 + 0x54);
            iVar9 = 0;
            *(undefined4 *)(param_1 + 0xb98) = uVar13;
            *(undefined4 *)(param_1 + 0xba4) = uVar13;
            *(undefined4 *)(param_1 + 0xba0) = uVar13;
            *(undefined4 *)(param_1 + 0xb9c) = uVar13;
            *(undefined4 *)(param_1 + 0xba8) = uVar13;
            uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
            uVar10 = uVar8 + 0x10;
            iVar11 = 0;
            if ((uVar10 & 0xffffffff) == 0) {
              do {
                iVar9 = iVar11;
                if ((uVar10 & 0xffffffff) == 0) break;
                uVar15 = uVar15 - uVar10;
                *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                iVar9 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar9;
                *puVar3 = *puVar3 << (uVar10 & 0x7f);
                if ((longlong)(uVar8 - uVar10) < 0) {
                  fn_82C4E5E8(puVar3);
                }
                uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                uVar10 = uVar8 + 0x10;
                iVar11 = iVar9;
              } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
            }
            uVar10 = *puVar3;
            *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
            *puVar3 = uVar10 << (uVar15 & 0x7f);
            if ((longlong)(uVar8 - uVar15) < 0) {
              fn_82C4E5E8(puVar3);
            }
            *(int *)(param_1 + 0x82c) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar9;
            if (*(int *)(param_1 + 0x3cb0) < 6) {
              puVar3 = *(ulonglong **)(param_1 + 0x54);
              uVar15 = 1;
              uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
              uVar10 = uVar8 + 0x10;
              if ((uVar10 & 0xffffffff) == 0) {
                do {
                  if ((uVar10 & 0xffffffff) == 0) break;
                  uVar15 = uVar15 - uVar10;
                  *(int *)(puVar3 + 1) = (int)(uVar8 - uVar10);
                  iVar14 = ((int)(*puVar3 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                           iVar14;
                  *puVar3 = *puVar3 << (uVar10 & 0x7f);
                  if ((longlong)(uVar8 - uVar10) < 0) {
                    fn_82C4E5E8(puVar3);
                  }
                  uVar8 = (ulonglong)*(uint *)(puVar3 + 1);
                  uVar10 = uVar8 + 0x10;
                } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
              }
              uVar10 = *puVar3;
              *(int *)(puVar3 + 1) = (int)(uVar8 - uVar15);
              *puVar3 = uVar10 << (uVar15 & 0x7f);
              if ((longlong)(uVar8 - uVar15) < 0) {
                fn_82C4E5E8(puVar3);
              }
              *(int *)(param_1 + 0x7f8) = (int)(uVar10 >> (0x40 - uVar15 & 0x7f)) + iVar14;
            }
          }
          if (*(int *)(param_1 + 0x120) == 1) {
            *(uint *)(param_1 + 0xf78) = *(uint *)(param_1 + 0xf78) ^ 1;
          }
        }
        if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}


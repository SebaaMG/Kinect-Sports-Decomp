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
extern int fn_82C58408();
extern int fn_82C58FB8();
extern int fn_82C7F300();
extern unsigned int lbl_820FC278;


undefined8 fn_82C5FAB0(int param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint *puVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  
  *(undefined4 *)(param_1 + 0xfb4) = 0;
  *(undefined4 *)(param_1 + 0x50fc) = 0;
  bVar4 = false;
  *(undefined4 *)(param_1 + 0x50f8) = 0;
  if ((*(int *)(param_1 + 0x120) == 2) && (*(int *)(param_1 + 0x50cc) == 0)) {
    if (*(int *)(param_1 + 0xf8c) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      *(uint *)(param_1 + 0xfb0) = (-(uint)(lVar7 < 0) & 0xfffffffe) + 3;
    }
    else {
      *(undefined4 *)(param_1 + 0xfb0) = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xf8c) == 0) {
      while( true ) {
        plVar1 = *(longlong **)(param_1 + 0x54);
        iVar6 = *(int *)(param_1 + 0xf8);
        lVar7 = *plVar1;
        lVar12 = (ulonglong)*(uint *)(plVar1 + 1) - 1;
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)lVar12;
        if (iVar6 < 0xd) break;
        if (lVar12 < 0) {
          fn_82C4E5E8();
        }
        if (lVar7 < 0) goto LAB_82c5fd4c;
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar7 < 0) goto LAB_82c60080;
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar7 < 0) goto LAB_82c60088;
        if (((*(int *)(param_1 + 0x120) == 2) && (*(int *)(param_1 + 0x50cc) == 0)) || (bVar4))
        goto LAB_82c5fc84;
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (-1 < lVar7) goto LAB_82c5fc84;
LAB_82c5fb90:
        bVar4 = true;
        *(undefined4 *)(param_1 + 0xfb4) = 1;
      }
      if (lVar12 < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
LAB_82c60080:
        *(undefined4 *)(param_1 + 0xfb0) = 1;
        goto LAB_82c5fd54;
      }
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (-1 < lVar7) {
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar7 < 0) {
LAB_82c60088:
          *(undefined4 *)(param_1 + 0xfb0) = 2;
        }
        else {
          if (((*(int *)(param_1 + 0x120) != 2) || (*(int *)(param_1 + 0x50cc) != 0)) && (!bVar4)) {
            plVar1 = *(longlong **)(param_1 + 0x54);
            lVar7 = *plVar1;
            uVar9 = *(uint *)(plVar1 + 1);
            *plVar1 = lVar7 << 1;
            *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
            if ((longlong)((ulonglong)uVar9 - 1) < 0) {
              fn_82C4E5E8();
            }
            if (lVar7 < 0) goto LAB_82c5fb90;
          }
LAB_82c5fd4c:
          *(undefined4 *)(param_1 + 0xfb0) = 3;
        }
        goto LAB_82c5fd54;
      }
LAB_82c5fc84:
      *(undefined4 *)(param_1 + 0xfb0) = 0;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xfb0) = 1;
      uVar9 = *(uint *)(plVar1 + 1);
      lVar7 = *plVar1;
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        *(undefined4 *)(param_1 + 0xfb4) = 1;
      }
    }
LAB_82c5fd54:
    if ((*(int *)(param_1 + 0xf7c) == 0) && (*(int *)(param_1 + 0xfb4) != 0)) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0xfb4) != 0) {
    if (*(int *)(param_1 + 0x50cc) == 0) {
      puVar2 = *(ulonglong **)(param_1 + 0x54);
      uVar13 = 6;
      iVar15 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar10 = uVar8 + 0x10;
      iVar6 = 0;
      if ((uVar10 & 0xffffffff) < 6) {
        do {
          iVar15 = iVar6;
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar10;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
          iVar15 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar15;
          *puVar2 = *puVar2 << (uVar10 & 0x7f);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar10 = uVar8 + 0x10;
          iVar6 = iVar15;
        } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      uVar10 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
      *puVar2 = uVar10 << (uVar13 & 0x7f);
      if ((longlong)(uVar8 - uVar13) < 0) {
        fn_82C4E5E8(puVar2);
      }
      *(int *)(param_1 + 0xfbc) = (int)(uVar10 >> (0x40 - uVar13 & 0x7f)) + iVar15;
      uVar13 = 6;
      puVar2 = *(ulonglong **)(param_1 + 0x54);
      iVar15 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar10 = uVar8 + 0x10;
      iVar6 = 0;
      if ((uVar10 & 0xffffffff) < 6) {
        do {
          iVar15 = iVar6;
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar13 = uVar13 - uVar10;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
          iVar15 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar15;
          *puVar2 = *puVar2 << (uVar10 & 0x7f);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar10 = uVar8 + 0x10;
          iVar6 = iVar15;
        } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
      }
      uVar10 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
      *puVar2 = uVar10 << (uVar13 & 0x7f);
      if ((longlong)(uVar8 - uVar13) < 0) {
        fn_82C4E5E8(puVar2);
      }
      *(int *)(param_1 + 0xfc0) = (int)(uVar10 >> (0x40 - uVar13 & 0x7f)) + iVar15;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        *(undefined4 *)(param_1 + 0x50fc) = 1;
        uVar13 = 6;
        puVar2 = *(ulonglong **)(param_1 + 0x54);
        iVar15 = 0;
        *(undefined4 *)(param_1 + 0x50f8) = 1;
        uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar10 = uVar8 + 0x10;
        iVar6 = 0;
        if ((uVar10 & 0xffffffff) < 6) {
          do {
            iVar15 = iVar6;
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar10;
            *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
            iVar15 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar15;
            *puVar2 = *puVar2 << (uVar10 & 0x7f);
            if ((longlong)(uVar8 - uVar10) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar10 = uVar8 + 0x10;
            iVar6 = iVar15;
          } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar10 = *puVar2;
        *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
        *puVar2 = uVar10 << (uVar13 & 0x7f);
        if ((longlong)(uVar8 - uVar13) < 0) {
          fn_82C4E5E8(puVar2);
        }
        puVar2 = *(ulonglong **)(param_1 + 0x54);
        uVar14 = 6;
        *(int *)(param_1 + 0x5100) = (int)(uVar10 >> (0x40 - uVar13 & 0x7f)) + iVar15;
        iVar15 = 0;
        uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar10 = uVar8 + 0x10;
        iVar6 = 0;
        if ((uVar10 & 0xffffffff) < 6) {
          do {
            iVar15 = iVar6;
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar14 = uVar14 - uVar10;
            *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
            iVar15 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar14 & 0x3f)) + iVar15;
            *puVar2 = *puVar2 << (uVar10 & 0x7f);
            if ((longlong)(uVar8 - uVar10) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar10 = uVar8 + 0x10;
            iVar6 = iVar15;
          } while ((uVar10 & 0xffffffff) < (uVar14 & 0xffffffff));
        }
        uVar10 = *puVar2;
        *(int *)(puVar2 + 1) = (int)(uVar8 - uVar14);
        *puVar2 = uVar10 << (uVar14 & 0x7f);
        if ((longlong)(uVar8 - uVar14) < 0) {
          fn_82C4E5E8(puVar2);
        }
        puVar2 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 6;
        *(int *)(param_1 + 0x5104) = (int)(uVar10 >> (0x40 - uVar14 & 0x7f)) + iVar15;
        iVar15 = 0;
        uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar10 = uVar8 + 0x10;
        iVar6 = 0;
        if ((uVar10 & 0xffffffff) < 6) {
          do {
            iVar15 = iVar6;
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar10;
            *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
            iVar15 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar15;
            *puVar2 = *puVar2 << (uVar10 & 0x7f);
            if ((longlong)(uVar8 - uVar10) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar10 = uVar8 + 0x10;
            iVar6 = iVar15;
          } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar10 = *puVar2;
        *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
        *puVar2 = uVar10 << (uVar13 & 0x7f);
        if ((longlong)(uVar8 - uVar13) < 0) {
          fn_82C4E5E8(puVar2);
        }
        *(int *)(param_1 + 0x5108) = (int)(uVar10 >> (0x40 - uVar13 & 0x7f)) + iVar15;
        iVar15 = 0;
        puVar2 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 6;
        uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar10 = uVar8 + 0x10;
        iVar6 = 0;
        if ((uVar10 & 0xffffffff) < 6) {
          do {
            iVar15 = iVar6;
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar10;
            *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
            iVar15 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar15;
            *puVar2 = *puVar2 << (uVar10 & 0x7f);
            if ((longlong)(uVar8 - uVar10) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar10 = uVar8 + 0x10;
            iVar6 = iVar15;
          } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
        iVar15 = (int)(*puVar2 >> (0x40 - uVar13 & 0x7f)) + iVar15;
        *puVar2 = *puVar2 << (uVar13 & 0x7f);
        if ((longlong)(uVar8 - uVar13) < 0) {
          fn_82C4E5E8(puVar2);
          *(int *)(param_1 + 0x510c) = iVar15;
          goto LAB_82c604e4;
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        puVar2 = *(ulonglong **)(param_1 + 0x54);
        uVar8 = 6;
        iVar6 = 0;
        if (-1 < lVar7) {
          *(undefined4 *)(param_1 + 0x50f8) = 1;
          uVar10 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar13 = uVar10 + 0x10;
          iVar15 = 0;
          if ((uVar13 & 0xffffffff) < 6) {
            do {
              iVar6 = iVar15;
              if ((uVar13 & 0xffffffff) == 0) break;
              uVar8 = uVar8 - uVar13;
              *(int *)(puVar2 + 1) = (int)(uVar10 - uVar13);
              iVar6 = ((int)(*puVar2 >> (0x40 - uVar13 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar6;
              *puVar2 = *puVar2 << (uVar13 & 0x7f);
              if ((longlong)(uVar10 - uVar13) < 0) {
                fn_82C4E5E8(puVar2);
              }
              uVar10 = (ulonglong)*(uint *)(puVar2 + 1);
              uVar13 = uVar10 + 0x10;
              iVar15 = iVar6;
            } while ((uVar13 & 0xffffffff) < (uVar8 & 0xffffffff));
          }
          uVar13 = *puVar2;
          *(int *)(puVar2 + 1) = (int)(uVar10 - uVar8);
          *puVar2 = uVar13 << (uVar8 & 0x7f);
          if ((longlong)(uVar10 - uVar8) < 0) {
            fn_82C4E5E8(puVar2);
          }
          *(int *)(param_1 + 0x5100) = (int)(uVar13 >> (0x40 - uVar8 & 0x7f)) + iVar6;
          uVar13 = 6;
          puVar2 = *(ulonglong **)(param_1 + 0x54);
          iVar15 = 0;
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar10 = uVar8 + 0x10;
          iVar6 = 0;
          if ((uVar10 & 0xffffffff) < 6) {
            do {
              iVar15 = iVar6;
              if ((uVar10 & 0xffffffff) == 0) break;
              uVar13 = uVar13 - uVar10;
              *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
              iVar15 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar15;
              *puVar2 = *puVar2 << (uVar10 & 0x7f);
              if ((longlong)(uVar8 - uVar10) < 0) {
                fn_82C4E5E8(puVar2);
              }
              uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
              uVar10 = uVar8 + 0x10;
              iVar6 = iVar15;
            } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
          }
          uVar10 = *puVar2;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
          *puVar2 = uVar10 << (uVar13 & 0x7f);
          if ((longlong)(uVar8 - uVar13) < 0) {
            fn_82C4E5E8(puVar2);
          }
          *(int *)(param_1 + 0x5104) = (int)(uVar10 >> (0x40 - uVar13 & 0x7f)) + iVar15;
          goto LAB_82c604e4;
        }
        *(undefined4 *)(param_1 + 0x50fc) = 1;
        uVar10 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar13 = uVar10 + 0x10;
        iVar15 = 0;
        if ((uVar13 & 0xffffffff) < 6) {
          do {
            iVar6 = iVar15;
            if ((uVar13 & 0xffffffff) == 0) break;
            uVar8 = uVar8 - uVar13;
            *(int *)(puVar2 + 1) = (int)(uVar10 - uVar13);
            iVar6 = ((int)(*puVar2 >> (0x40 - uVar13 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar6;
            *puVar2 = *puVar2 << (uVar13 & 0x7f);
            if ((longlong)(uVar10 - uVar13) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar10 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar13 = uVar10 + 0x10;
            iVar15 = iVar6;
          } while ((uVar13 & 0xffffffff) < (uVar8 & 0xffffffff));
        }
        uVar13 = *puVar2;
        *(int *)(puVar2 + 1) = (int)(uVar10 - uVar8);
        *puVar2 = uVar13 << (uVar8 & 0x7f);
        if ((longlong)(uVar10 - uVar8) < 0) {
          fn_82C4E5E8(puVar2);
        }
        puVar2 = *(ulonglong **)(param_1 + 0x54);
        iVar15 = 0;
        *(int *)(param_1 + 0x5108) = (int)(uVar13 >> (0x40 - uVar8 & 0x7f)) + iVar6;
        uVar13 = 6;
        uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar10 = uVar8 + 0x10;
        iVar6 = 0;
        if ((uVar10 & 0xffffffff) < 6) {
          do {
            iVar15 = iVar6;
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar10;
            *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
            iVar15 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar15;
            *puVar2 = *puVar2 << (uVar10 & 0x7f);
            if ((longlong)(uVar8 - uVar10) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
            uVar10 = uVar8 + 0x10;
            iVar6 = iVar15;
          } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
        iVar15 = (int)(*puVar2 >> (0x40 - uVar13 & 0x7f)) + iVar15;
        *puVar2 = *puVar2 << (uVar13 & 0x7f);
        if ((longlong)(uVar8 - uVar13) < 0) {
          fn_82C4E5E8(puVar2);
        }
      }
      *(int *)(param_1 + 0x510c) = iVar15;
    }
  }
LAB_82c604e4:
  iVar6 = *(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0xfb0) == 0) {
    if (*(int *)(param_1 + 0x5710) == 0) {
      uVar5 = fn_82C58408(param_1,1);
      iVar15 = (int)uVar5;
    }
    else {
      uVar5 = fn_82C7F300();
      iVar15 = (int)uVar5;
    }
    if (iVar15 != 0) {
      return uVar5;
    }
    if ((*(int *)(param_1 + 0x160) != 0) && (iVar15 = 0, 0 < *(int *)(param_1 + 0x90))) {
      puVar11 = (uint *)(iVar6 + -0x18);
      do {
        puVar3 = puVar11 + 6;
        iVar15 = iVar15 + 1;
        puVar11 = puVar11 + 6;
        *puVar11 = *puVar3 >> 0x17 & 0x100 | *puVar3 & 0xfffff8ff;
      } while (iVar15 < *(int *)(param_1 + 0x90));
    }
  }
  else if ((*(int *)(param_1 + 0xf8c) == 0) && (iVar15 = 0, 0 < *(int *)(param_1 + 0x90))) {
    puVar11 = (uint *)(iVar6 + -0x18);
    do {
      puVar3 = puVar11 + 6;
      iVar15 = iVar15 + 1;
      puVar11 = puVar11 + 6;
      *puVar11 = *puVar3 & 0xfffff8ff;
    } while (iVar15 < *(int *)(param_1 + 0x90));
  }
  if ((*(int *)(param_1 + 0x3a04) != 0) && (*(int *)(param_1 + 0x120) == 2)) {
    uVar5 = fn_82C58408(param_1,3);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*(int *)(param_1 + 0x3a14) != 0) {
      iVar6 = 0;
      puVar11 = *(uint **)(param_1 + 0x110);
      if (0 < *(int *)(param_1 + 0x90)) {
        do {
          uVar9 = *puVar11;
          if ((uVar9 & 0x80000000) == 0) {
            uVar9 = uVar9 & 0xffffff1f;
          }
          else {
            uVar9 = uVar9 & 0xffffff1f | 0x20;
          }
          *puVar11 = uVar9;
          iVar6 = iVar6 + 1;
          puVar11 = puVar11 + 6;
        } while (iVar6 < *(int *)(param_1 + 0x90));
      }
    }
  }
  if (*(int *)(param_1 + 0x5710) == 0) {
    uVar5 = fn_82C58408(param_1,0);
    iVar6 = (int)uVar5;
  }
  else {
    uVar5 = fn_82C7F300();
    iVar6 = (int)uVar5;
  }
  if (iVar6 != 0) {
    return uVar5;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar13 = 2;
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  lVar7 = 0;
  uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar10 = uVar8 + 0x10;
  if ((uVar10 & 0xffffffff) < 2) {
    do {
      if ((uVar10 & 0xffffffff) == 0) break;
      uVar13 = uVar13 - uVar10;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
      lVar7 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
              lVar7;
      *puVar2 = *puVar2 << (uVar10 & 0x7f);
      if ((longlong)(uVar8 - uVar10) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar10 = uVar8 + 0x10;
    } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
  }
  uVar10 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
  *puVar2 = uVar10 << (uVar13 & 0x7f);
  if ((longlong)(uVar8 - uVar13) < 0) {
    fn_82C4E5E8(puVar2);
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar14 = 2;
  lVar12 = 0;
  *(undefined4 *)(param_1 + 0x94c) =
       *(undefined4 *)
        ((int)(((uVar10 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar7 + 600 & 0xffffffff) << 2) +
        param_1);
  uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar10 = uVar8 + 0x10;
  if ((uVar10 & 0xffffffff) < 2) {
    do {
      if ((uVar10 & 0xffffffff) == 0) break;
      uVar14 = uVar14 - uVar10;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
      lVar12 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar14 & 0x3f))
               + lVar12;
      *puVar2 = *puVar2 << (uVar10 & 0x7f);
      if ((longlong)(uVar8 - uVar10) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar10 = uVar8 + 0x10;
    } while ((uVar10 & 0xffffffff) < (uVar14 & 0xffffffff));
  }
  uVar10 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar8 - uVar14);
  *puVar2 = uVar10 << (uVar14 & 0x7f);
  if ((longlong)(uVar8 - uVar14) < 0) {
    fn_82C4E5E8(puVar2);
  }
  iVar6 = *(int *)((int)(((uVar10 >> (0x40 - uVar14 & 0x7f) & 0xffffffff) + lVar12 + 0x254 &
                         0xffffffff) << 2) + param_1);
  *(int *)(param_1 + 0x860) = iVar6;
  if (iVar6 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0xfc8) != 0) {
    fn_82C58FB8(param_1,1);
  }
  if (*(int *)(param_1 + 0x1b8) == 0) {
    *(undefined4 *)(param_1 + 0x14c) = 0;
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x54);
  lVar7 = *plVar1;
  uVar9 = *(uint *)(plVar1 + 1);
  *plVar1 = lVar7 << 1;
  *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
  if ((longlong)((ulonglong)uVar9 - 1) < 0) {
    fn_82C4E5E8();
  }
  if (-1 < lVar7) {
    *(undefined4 *)(param_1 + 0x14c) = 1;
    return 0;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar13 = 2;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  lVar7 = 0;
  uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar10 = uVar8 + 0x10;
  if ((uVar10 & 0xffffffff) < 2) {
    do {
      if ((uVar10 & 0xffffffff) == 0) break;
      uVar13 = uVar13 - uVar10;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
      lVar7 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
              lVar7;
      *puVar2 = *puVar2 << (uVar10 & 0x7f);
      if ((longlong)(uVar8 - uVar10) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar10 = uVar8 + 0x10;
    } while ((uVar10 & 0xffffffff) < (uVar13 & 0xffffffff));
  }
  uVar10 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
  *puVar2 = uVar10 << (uVar13 & 0x7f);
  if ((longlong)(uVar8 - uVar13) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(undefined4 *)(param_1 + 0x154) =
       *(undefined4 *)
        (&lbl_820FC278 +
        (int)(((uVar10 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) << 2));
  return 0;
}


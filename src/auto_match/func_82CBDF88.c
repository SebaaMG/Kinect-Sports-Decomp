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
extern int fn_82C531B8();
extern int fn_82C58408();
extern int fn_82C58FB8();
extern int fn_82C9D918();
extern unsigned int lbl_820FC13C;
extern unsigned int lbl_82110EA8;


/* WARNING: Type propagation algorithm not settling */

ulonglong fn_82CBDF88(int param_1)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar17;
  ulonglong uVar16;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar15 = 5;
  iVar17 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  puVar7 = (uint *)(*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x50d0) * 0x18 +
                   *(int *)(param_1 + 0x110));
  iVar6 = 0;
  if ((uVar8 & 0xffffffff) < 5) {
    do {
      iVar17 = iVar6;
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar15 = uVar15 - uVar8;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
      *puVar1 = *puVar1 << (uVar8 & 0x7f);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = iVar17;
    } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
  iVar17 = (int)(*puVar1 >> (0x40 - uVar15 & 0x7f)) + iVar17;
  *puVar1 = *puVar1 << (uVar15 & 0x7f);
  if ((longlong)(uVar5 - uVar15) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xfa8) = iVar17;
  if (iVar17 < 9) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    iVar17 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    iVar6 = 0;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        iVar17 = iVar6;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = iVar17;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0xfc) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0xd98) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    iVar17 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    iVar6 = 0;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        iVar17 = iVar6;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = iVar17;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0xd8c) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
  }
  iVar6 = *(int *)(param_1 + 0xfa8);
  iVar17 = iVar6;
  if (*(int *)(param_1 + 0xd90) == 0) {
    if (iVar6 < 9) {
      *(undefined4 *)(param_1 + 0xd8c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xd8c) = 0;
      iVar17 = *(int *)(&lbl_820FC13C + iVar6 * 4);
    }
  }
  *(int *)(param_1 + 0xf8) = iVar17;
  *(undefined4 *)(param_1 + 0xbbc) = 0;
  if ((*(int *)(param_1 + 0xbc0) != 0) && (iVar9 = *(int *)(param_1 + 0x120), iVar9 != 2)) {
    if (iVar17 < 9) {
      if ((iVar9 == 0) || (iVar9 == 4)) {
        *(undefined4 *)(param_1 + 0xbbc) = 7;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xbbc) = 1;
    }
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
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  *(int *)(param_1 + 0x39e0) = iVar9;
  *(int *)(param_1 + 0xf8) = iVar17;
  if (*(int *)((int)puVar1 + 0x14) != 0) {
    return 1;
  }
  iVar9 = *(int *)(param_1 + 0x120);
  if ((iVar9 == 1) || (iVar9 == 2)) {
    *(int *)(param_1 + 0xf8) = iVar17;
  }
  else {
    if ((iVar9 != 0) && (iVar9 != 4)) {
      return 1;
    }
    *(int *)(param_1 + 0xf8) = iVar17;
  }
  if (iVar17 < 1) {
    return 1;
  }
  if (0x1f < iVar17) {
    return 1;
  }
  if (iVar6 < 9) {
    iVar17 = param_1 + 0xb38;
    iVar6 = param_1 + 0xb0c;
  }
  else {
    iVar17 = param_1 + 0xa5c;
    iVar6 = param_1 + 0xa88;
  }
  *(int *)(param_1 + 0xb7c) = iVar17;
  *(int *)(param_1 + 0xb88) = iVar6;
  if (*(int *)(param_1 + 0x5444) != 0) {
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar15 = 2;
    iVar17 = 0;
    uVar8 = uVar5 + 0x10;
    iVar6 = 0;
    if ((uVar8 & 0xffffffff) < 2) {
      do {
        iVar17 = iVar6;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = iVar17;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0x5448) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
  }
  iVar6 = *(int *)(param_1 + 0x120);
  if ((iVar6 != 0) && (iVar6 != 4)) {
    bVar4 = false;
    lVar13 = 0;
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x54c4) = 1;
    }
    else {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      iVar17 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar17 = iVar6;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
          iVar6 = iVar17;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(int *)(param_1 + 0x54c4) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
    }
    if (*(int *)(param_1 + 0x54c4) == 0) {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      iVar17 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar17 = iVar6;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
          iVar6 = iVar17;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar11 = (uint)LZCOUNT((int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17) >> 5;
      *(uint *)(param_1 + 0x54b8) = uVar11;
      if (uVar11 != 0) {
        *(undefined4 *)(param_1 + 0x54bc) = 0;
        *(undefined4 *)(param_1 + 0x54c0) = 1;
        goto LAB_82cbe5ac;
      }
      *(undefined4 *)(param_1 + 0x54c0) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54c0) = 1;
    }
    *(undefined4 *)(param_1 + 0x54bc) = 1;
LAB_82cbe5ac:
    *(int *)(param_1 + 0x970) = param_1 + 0x52a0;
    *(int *)(param_1 + 0x974) = param_1 + 0x52ac;
    *(int *)(param_1 + 0x978) = param_1 + 0x52b8;
    *(int *)(param_1 + 0x97c) = param_1 + 0x52c4;
    if (*(int *)(param_1 + 0x54c4) == 0) {
      iVar10 = param_1 + 0x52d0;
      iVar9 = param_1 + 0x52dc;
      iVar17 = param_1 + 0x52e8;
      iVar6 = param_1 + 0x52f4;
    }
    else {
      iVar10 = param_1 + 0x5270;
      iVar9 = param_1 + 0x527c;
      iVar17 = param_1 + 0x5288;
      iVar6 = param_1 + 0x5294;
    }
    *(int *)(param_1 + 0x960) = iVar10;
    *(int *)(param_1 + 0x96c) = iVar6;
    *(int *)(param_1 + 0x968) = iVar17;
    *(int *)(param_1 + 0x964) = iVar9;
    if (*(int *)(param_1 + 0x5440) != 0) {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar13 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar13 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar13
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      lVar13 = (*puVar1 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13;
      *puVar1 = *puVar1 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if ((int)lVar13 != 0) {
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar15 = 1;
        lVar14 = 0;
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar8;
            *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
            lVar14 = (ulonglong)
                     (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                     lVar14;
            *puVar1 = *puVar1 << (uVar8 & 0x7f);
            if ((longlong)(uVar5 - uVar8) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar8 = uVar5 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        uVar8 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
        *puVar1 = uVar8 << (uVar15 & 0x7f);
        if ((longlong)(uVar5 - uVar15) < 0) {
          fn_82C4E5E8(puVar1);
        }
        lVar13 = (uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar14 + lVar13;
      }
      if ((int)lVar13 == 2) {
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar15 = 1;
        lVar13 = 0;
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar8;
            *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
            lVar13 = (ulonglong)
                     (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                     lVar13;
            *puVar1 = *puVar1 << (uVar8 & 0x7f);
            if ((longlong)(uVar5 - uVar8) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar8 = uVar5 + 0x10;
          } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        uVar8 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
        *puVar1 = uVar8 << (uVar15 & 0x7f);
        if ((longlong)(uVar5 - uVar15) < 0) {
          fn_82C4E5E8(puVar1);
        }
        lVar13 = (uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 + 2;
      }
    }
    fn_82C531B8(param_1,lVar13);
    if (*(int *)(param_1 + 0x120) == 1) {
      if (*(int *)(param_1 + 0x50d0) == 0) {
        *(undefined4 *)(param_1 + 0x56dc) = *(undefined4 *)(param_1 + 0x198);
      }
      else {
        *(undefined4 *)(param_1 + 0x56e0) = *(undefined4 *)(param_1 + 0x198);
      }
    }
    if (*(int *)(param_1 + 0x54c4) == 0) {
      *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) << 1;
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) * 2 + 1;
    }
    if (*(int *)(param_1 + 0x549c) != 0) {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      iVar17 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = 0;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          iVar17 = iVar6;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
          iVar6 = iVar17;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      iVar17 = (int)(*puVar1 >> (0x40 - uVar15 & 0x7f)) + iVar17;
      *puVar1 = *puVar1 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(int *)(param_1 + 0x54a0) = iVar17;
      if (iVar17 != 0) {
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar15 = 1;
        iVar17 = 0;
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar17 = iVar6;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar8;
            *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
            iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
            *puVar1 = *puVar1 << (uVar8 & 0x7f);
            if ((longlong)(uVar5 - uVar8) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar8 = uVar5 + 0x10;
            iVar6 = iVar17;
          } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        uVar8 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
        *puVar1 = uVar8 << (uVar15 & 0x7f);
        if ((longlong)(uVar5 - uVar15) < 0) {
          fn_82C4E5E8(puVar1);
        }
        *(int *)(param_1 + 0x54a0) =
             (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17 + *(int *)(param_1 + 0x54a0);
      }
      if (*(int *)(param_1 + 0x54a0) == 2) {
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar15 = 1;
        iVar17 = 0;
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = 0;
        if ((uVar8 & 0xffffffff) == 0) {
          do {
            iVar17 = iVar6;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar8;
            *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
            iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
            *puVar1 = *puVar1 << (uVar8 & 0x7f);
            if ((longlong)(uVar5 - uVar8) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar8 = uVar5 + 0x10;
            iVar6 = iVar17;
          } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        uVar8 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
        *puVar1 = uVar8 << (uVar15 & 0x7f);
        if ((longlong)(uVar5 - uVar15) < 0) {
          fn_82C4E5E8(puVar1);
        }
        *(int *)(param_1 + 0x54a0) =
             (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17 + *(int *)(param_1 + 0x54a0);
      }
      *(uint *)(param_1 + 0x54a4) = *(uint *)(param_1 + 0x54a0) & 1;
      *(uint *)(param_1 + 0x54a8) = (int)*(uint *)(param_1 + 0x54a0) >> 1 & 1;
    }
    *(undefined4 *)(param_1 + 0xfb4) = 0;
    *(undefined4 *)(param_1 + 0x50fc) = 0;
    *(undefined4 *)(param_1 + 0x50f8) = 0;
LAB_82cbeaf4:
    while( true ) {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar13 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if (0xc < *(int *)(param_1 + 0xf8)) break;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar13 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar13
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) != 0)
      goto LAB_82cbf0d0;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar13 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar13 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar13
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) != 0)
      goto LAB_82cbf0d8;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar13 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar13 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar13
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) != 0)
      goto LAB_82cbf0e0;
      if ((*(int *)(param_1 + 0x120) == 2) || (bVar4)) goto LAB_82cbf0e8;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar13 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar13 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar13
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) == 0)
      goto LAB_82cbf0e8;
      bVar4 = true;
      *(undefined4 *)(param_1 + 0xfb4) = 1;
    }
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) != 0)
    goto LAB_82cbf0e8;
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    lVar13 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) != 0) {
LAB_82cbf0d0:
      *(undefined4 *)(param_1 + 0xfb0) = 1;
      goto LAB_82cbf0ec;
    }
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    lVar13 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) != 0) {
LAB_82cbf0e0:
      *(undefined4 *)(param_1 + 0xfb0) = 2;
      goto LAB_82cbf0ec;
    }
    if ((*(int *)(param_1 + 0x120) != 2) && (!bVar4)) {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar13 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar13 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar13
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) != 0) {
        bVar4 = true;
        *(undefined4 *)(param_1 + 0xfb4) = 1;
        goto LAB_82cbeaf4;
      }
    }
LAB_82cbf0d8:
    *(undefined4 *)(param_1 + 0xfb0) = 0;
    goto LAB_82cbf0ec;
  }
  uVar5 = fn_82C58408(param_1,4);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if ((*(int *)(param_1 + 0x50e4) != 0) && (iVar6 = 0, 0 < *(int *)(param_1 + 0x90))) {
    puVar12 = puVar7 + -6;
    do {
      puVar3 = puVar12 + 6;
      iVar6 = iVar6 + 1;
      puVar12 = puVar12 + 6;
      *puVar12 = *puVar3 >> 0x1c & 8 | *puVar3 & 0xffffffe7;
    } while (iVar6 < *(int *)(param_1 + 0x90));
  }
  if ((*(uint *)(param_1 + 0xbbc) & 2) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    lVar13 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) == 0) {
      *(undefined4 *)(param_1 + 0xbbc) = 0;
    }
    else {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 1;
      lVar13 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar13 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar13
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) == 0) {
        *(undefined4 *)(param_1 + 0xbbc) = 1;
      }
      else {
        uVar5 = fn_82C58408(param_1,5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if ((*(int *)(param_1 + 0x548c) != 0) && (iVar6 = 0, 0 < *(int *)(param_1 + 0x90))) {
          puVar7 = puVar7 + -6;
          do {
            puVar12 = puVar7 + 6;
            iVar6 = iVar6 + 1;
            puVar7 = puVar7 + 6;
            *puVar7 = *puVar12 >> 0x14 & 0x800 | *puVar12 & 0xfffff7ff;
          } while (iVar6 < *(int *)(param_1 + 0x90));
        }
      }
    }
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar15 = 1;
  lVar13 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  if ((uVar8 & 0xffffffff) == 0) {
    do {
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar15 = uVar15 - uVar8;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
               lVar13;
      *puVar1 = *puVar1 << (uVar8 & 0x7f);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
    } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
  uVar8 = (*puVar1 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13;
  *puVar1 = *puVar1 << (uVar15 & 0x7f);
  if ((longlong)(uVar5 - uVar15) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xb94) = (int)uVar8;
  if ((uVar8 & 0xffffffff) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    iVar17 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    iVar6 = 0;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        iVar17 = iVar6;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = iVar17;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0xb94) =
         (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17 + *(int *)(param_1 + 0xb94);
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar15 = 1;
  lVar13 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  if ((uVar8 & 0xffffffff) == 0) {
    do {
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar15 = uVar15 - uVar8;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
               lVar13;
      *puVar1 = *puVar1 << (uVar8 & 0x7f);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
    } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
  uVar8 = (*puVar1 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13;
  *puVar1 = *puVar1 << (uVar15 & 0x7f);
  if ((longlong)(uVar5 - uVar15) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xba0) = (int)uVar8;
  if ((uVar8 & 0xffffffff) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    iVar17 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    iVar6 = 0;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        iVar17 = iVar6;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = iVar17;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0xba0) =
         (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17 + *(int *)(param_1 + 0xba0);
  }
  uVar15 = 1;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar17 = 0;
  *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_1 + 0xba0);
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_1 + 0xba0);
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  iVar6 = 0;
  if ((uVar8 & 0xffffffff) == 0) {
    do {
      iVar17 = iVar6;
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar15 = uVar15 - uVar8;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
      *puVar1 = *puVar1 << (uVar8 & 0x7f);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = iVar17;
    } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
  }
  uVar8 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
  *puVar1 = uVar8 << (uVar15 & 0x7f);
  if ((longlong)(uVar5 - uVar15) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0x82c) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
  if (*(int *)(param_1 + 0xfc8) == 0) {
    fn_82C9D918(param_1);
  }
  else {
    fn_82C58FB8(param_1,0);
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    if (*(int *)(param_1 + 0x50d0) == 0) {
      *(undefined4 *)(param_1 + 0x56dc) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x56e0) = 0;
    }
  }
  goto LAB_82cc068c;
LAB_82cbf0e8:
  *(undefined4 *)(param_1 + 0xfb0) = 3;
LAB_82cbf0ec:
  if (*(int *)(param_1 + 0xfb4) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    lVar13 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    lVar14 = 0;
    iVar6 = 0;
    if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) == 0) {
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar15 = 1;
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar14 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar14
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar5 = 6;
      iVar6 = 0;
      if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar14 & 0xffffffff) != 0) {
        *(undefined4 *)(param_1 + 0x50fc) = 1;
        uVar8 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar15 = uVar8 + 0x10;
        iVar17 = 0;
        if ((uVar15 & 0xffffffff) < 6) {
          do {
            iVar6 = iVar17;
            if ((uVar15 & 0xffffffff) == 0) break;
            uVar5 = uVar5 - uVar15;
            *(int *)(puVar1 + 1) = (int)(uVar8 - uVar15);
            iVar6 = ((int)(*puVar1 >> (0x40 - uVar15 & 0x7f)) << ((uint)uVar5 & 0x3f)) + iVar6;
            *puVar1 = *puVar1 << (uVar15 & 0x7f);
            if ((longlong)(uVar8 - uVar15) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar8 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar15 = uVar8 + 0x10;
            iVar17 = iVar6;
          } while ((uVar15 & 0xffffffff) < (uVar5 & 0xffffffff));
        }
        uVar15 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar8 - uVar5);
        *puVar1 = uVar15 << (uVar5 & 0x7f);
        if ((longlong)(uVar8 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        iVar17 = 0;
        *(int *)(param_1 + 0x5108) = (int)(uVar15 >> (0x40 - uVar5 & 0x7f)) + iVar6;
        uVar15 = 6;
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = 0;
        if ((uVar8 & 0xffffffff) < 6) {
          do {
            iVar17 = iVar6;
            if ((uVar8 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar8;
            *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
            iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
            *puVar1 = *puVar1 << (uVar8 & 0x7f);
            if ((longlong)(uVar5 - uVar8) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar8 = uVar5 + 0x10;
            iVar6 = iVar17;
          } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
        iVar17 = (int)(*puVar1 >> (0x40 - uVar15 & 0x7f)) + iVar17;
        *puVar1 = *puVar1 << (uVar15 & 0x7f);
        if ((longlong)(uVar5 - uVar15) < 0) {
          fn_82C4E5E8(puVar1);
        }
        goto LAB_82cbf684;
      }
      *(undefined4 *)(param_1 + 0x50f8) = 1;
      uVar8 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar15 = uVar8 + 0x10;
      iVar17 = 0;
      if ((uVar15 & 0xffffffff) < 6) {
        do {
          iVar6 = iVar17;
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar5 = uVar5 - uVar15;
          *(int *)(puVar1 + 1) = (int)(uVar8 - uVar15);
          iVar6 = ((int)(*puVar1 >> (0x40 - uVar15 & 0x7f)) << ((uint)uVar5 & 0x3f)) + iVar6;
          *puVar1 = *puVar1 << (uVar15 & 0x7f);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar8 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar15 = uVar8 + 0x10;
          iVar17 = iVar6;
        } while ((uVar15 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar15 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar8 - uVar5);
      *puVar1 = uVar15 << (uVar5 & 0x7f);
      if ((longlong)(uVar8 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(int *)(param_1 + 0x5100) = (int)(uVar15 >> (0x40 - uVar5 & 0x7f)) + iVar6;
      uVar15 = 6;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      iVar17 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = 0;
      if ((uVar8 & 0xffffffff) < 6) {
        do {
          iVar17 = iVar6;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
          iVar6 = iVar17;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(int *)(param_1 + 0x5104) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
    }
    else {
      *(undefined4 *)(param_1 + 0x50f8) = 1;
      uVar15 = 6;
      *(undefined4 *)(param_1 + 0x50fc) = 1;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) < 6) {
        do {
          iVar6 = (int)lVar14;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar14 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar14
          ;
          iVar6 = (int)lVar14;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(int *)(param_1 + 0x5100) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar6;
      uVar15 = 6;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      iVar17 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = 0;
      if ((uVar8 & 0xffffffff) < 6) {
        do {
          iVar17 = iVar6;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
          iVar6 = iVar17;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(int *)(param_1 + 0x5104) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
      uVar15 = 6;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      iVar17 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = 0;
      if ((uVar8 & 0xffffffff) < 6) {
        do {
          iVar17 = iVar6;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
          iVar6 = iVar17;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(int *)(param_1 + 0x5108) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
      iVar17 = 0;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar15 = 6;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = 0;
      if ((uVar8 & 0xffffffff) < 6) {
        do {
          iVar17 = iVar6;
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
          iVar6 = iVar17;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      iVar17 = (int)(*puVar1 >> (0x40 - uVar15 & 0x7f)) + iVar17;
      *puVar1 = *puVar1 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
        *(int *)(param_1 + 0x510c) = iVar17;
      }
      else {
LAB_82cbf684:
        *(int *)(param_1 + 0x510c) = iVar17;
      }
    }
  }
  if ((*(int *)(param_1 + 0x3a04) != 0) && (*(int *)(param_1 + 0x120) == 2)) {
    uVar5 = fn_82C58408(param_1,3);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((*(int *)(param_1 + 0x3a14) != 0) && (iVar6 = 0, 0 < *(int *)(param_1 + 0x90))) {
      do {
        uVar11 = *puVar7;
        if ((uVar11 & 0x80000000) == 0) {
          uVar11 = uVar11 & 0xffffff1f;
        }
        else {
          uVar11 = uVar11 & 0xffffff1f | 0x80;
        }
        *puVar7 = uVar11;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 6;
      } while (iVar6 < *(int *)(param_1 + 0x90));
    }
  }
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  uVar15 = 3;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  lVar13 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  if (*(int *)(param_1 + 0xfb0) == 0) {
    if ((uVar8 & 0xffffffff) < 3) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    uVar5 = (uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 + 0x146a;
  }
  else {
    if ((uVar8 & 0xffffffff) < 3) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    uVar5 = (uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 + 0x1472;
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  lVar13 = 0;
  *(undefined4 *)(param_1 + 0x51a4) = *(undefined4 *)((int)((uVar5 & 0xffffffff) << 2) + param_1);
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  if (*(int *)(param_1 + 0x54c4) == 0) {
    uVar15 = 2;
    if ((uVar8 & 0xffffffff) < 2) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
  }
  else {
    uVar15 = 3;
    if ((uVar8 & 0xffffffff) < 3) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
  }
  uVar8 = *puVar1;
  *puVar1 = uVar8 << (uVar15 & 0x7f);
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
  if ((longlong)(uVar5 - uVar15) < 0) {
    fn_82C4E5E8(puVar1);
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar16 = 3;
  lVar14 = 0;
  *(undefined4 *)(param_1 + 0x94c) =
       *(undefined4 *)
        ((int)(((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 + 600 & 0xffffffff) << 2) +
        param_1);
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  if ((uVar8 & 0xffffffff) < 3) {
    do {
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar16 = uVar16 - uVar8;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      lVar14 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
               lVar14;
      *puVar1 = *puVar1 << (uVar8 & 0x7f);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
    } while ((uVar8 & 0xffffffff) < (uVar16 & 0xffffffff));
  }
  uVar8 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar16);
  *puVar1 = uVar8 << (uVar16 & 0x7f);
  if ((longlong)(uVar5 - uVar16) < 0) {
    fn_82C4E5E8(puVar1);
  }
  uVar2 = *(undefined4 *)
           ((int)(((uVar8 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar14 + 0x1536 & 0xffffffff) <<
                 2) + param_1);
  *(undefined4 *)(param_1 + 0x54d4) = uVar2;
  *(undefined4 *)(param_1 + 0x54d0) = uVar2;
  if (*(int *)(param_1 + 0xfb0) == 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 2;
    lVar13 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    if ((uVar8 & 0xffffffff) < 2) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(undefined4 *)(param_1 + 0x51e8) =
         *(undefined4 *)
          ((int)(((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 + 0x147b & 0xffffffff) <<
                2) + param_1);
  }
  if (*(int *)(param_1 + 0xfc8) == 0) {
    fn_82C9D918(param_1);
  }
  else {
    fn_82C58FB8(param_1,1);
  }
  if (*(int *)(param_1 + 0x1b8) == 0) {
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  else {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    lVar13 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f))
                 + lVar13;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) == 1) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
      uVar15 = 2;
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      lVar13 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar15 = uVar15 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
          lVar13 = (ulonglong)
                   (uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + lVar13
          ;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((longlong)(uVar5 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar8 = uVar5 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
      *puVar1 = uVar8 << (uVar15 & 0x7f);
      if ((longlong)(uVar5 - uVar15) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(undefined4 *)(param_1 + 0x154) =
           *(undefined4 *)
            (&lbl_82110EA8 +
            (int)(((uVar8 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13 & 0xffffffff) << 2));
    }
    else {
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar15 = 1;
  lVar13 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  if ((uVar8 & 0xffffffff) == 0) {
    do {
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar15 = uVar15 - uVar8;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      lVar13 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
               lVar13;
      *puVar1 = *puVar1 << (uVar8 & 0x7f);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
    } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
  uVar8 = (*puVar1 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar13;
  *puVar1 = *puVar1 << (uVar15 & 0x7f);
  if ((longlong)(uVar5 - uVar15) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xb94) = (int)uVar8;
  if ((uVar8 & 0xffffffff) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar15 = 1;
    iVar17 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar8 = uVar5 + 0x10;
    iVar6 = 0;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        iVar17 = iVar6;
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar15 = uVar15 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
        iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((longlong)(uVar5 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar8 = uVar5 + 0x10;
        iVar6 = iVar17;
      } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
    *puVar1 = uVar8 << (uVar15 & 0x7f);
    if ((longlong)(uVar5 - uVar15) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0xb94) =
         *(int *)(param_1 + 0xb94) + (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xb94);
  uVar15 = 1;
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar17 = 0;
  *(undefined4 *)(param_1 + 0xb98) = uVar2;
  *(undefined4 *)(param_1 + 0xba0) = uVar2;
  *(undefined4 *)(param_1 + 0xba4) = uVar2;
  *(undefined4 *)(param_1 + 0xba8) = uVar2;
  *(undefined4 *)(param_1 + 0xb9c) = uVar2;
  uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar8 = uVar5 + 0x10;
  iVar6 = 0;
  if ((uVar8 & 0xffffffff) == 0) {
    do {
      iVar17 = iVar6;
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar15 = uVar15 - uVar8;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      iVar17 = ((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar15 & 0x3f)) + iVar17;
      *puVar1 = *puVar1 << (uVar8 & 0x7f);
      if ((longlong)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar8 = uVar5 + 0x10;
      iVar6 = iVar17;
    } while ((uVar8 & 0xffffffff) < (uVar15 & 0xffffffff));
  }
  uVar8 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar15);
  *puVar1 = uVar8 << (uVar15 & 0x7f);
  if ((longlong)(uVar5 - uVar15) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0x82c) = (int)(uVar8 >> (0x40 - uVar15 & 0x7f)) + iVar17;
LAB_82cc068c:
  if ((*(uint *)(param_1 + 0xbbc) & 1) == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = 0x80;
    **(undefined2 **)(param_1 + 0x770) = 0x80;
    *(undefined2 *)(*(int *)(param_1 + 0x774) + 0x10) = 0x80;
    **(undefined2 **)(param_1 + 0x774) = 0x80;
    iVar6 = *(int *)(*(int *)(param_1 + 0x54) + 0x14);
  }
  else {
    *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = 0;
    **(undefined2 **)(param_1 + 0x770) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x774) + 0x10) = 0;
    **(undefined2 **)(param_1 + 0x774) = 0;
    iVar6 = *(int *)(*(int *)(param_1 + 0x54) + 0x14);
  }
  return (ulonglong)(iVar6 != 0);
}


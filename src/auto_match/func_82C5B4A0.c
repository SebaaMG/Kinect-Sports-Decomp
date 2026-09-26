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
extern int fn_82C45138();
extern int fn_82C4D2F0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C4FCF8();
extern int fn_82C50F98();
extern int fn_82C51858();
extern int fn_82C531B8();
extern int fn_82C53370();
extern int fn_82C53488();
extern int fn_82C53608();
extern int fn_82C53AE8();
extern int fn_82C592E0();
extern int fn_82C59720();
extern int fn_82C69448();
extern int fn_82CB34C0();
extern unsigned int lbl_820FC288;


undefined8
fn_82C5B4A0(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  bool bVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar11;
  int iVar12;
  ulonglong uVar10;
  int iVar13;
  
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  iVar12 = 0;
  iVar11 = 0;
  uVar6 = uVar5 + 0x10;
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    uVar9 = 8;
    iVar12 = 0;
    if ((uVar6 & 0xffffffff) < 8) {
      do {
        iVar11 = iVar12;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
        iVar11 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar11;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar6 = uVar5 + 0x10;
        iVar12 = iVar11;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    uVar6 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
    *puVar2 = uVar6 << (uVar9 & 0x7f);
    if ((longlong)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(puVar2);
    }
    if ((int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar11 != 0) {
      return 1;
    }
    puVar2 = *(ulonglong **)(param_1 + 0x54);
    uVar9 = 8;
    iVar11 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar6 = uVar5 + 0x10;
    iVar12 = 0;
    if ((uVar6 & 0xffffffff) < 8) {
      do {
        iVar11 = iVar12;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
        iVar11 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar11;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar6 = uVar5 + 0x10;
        iVar12 = iVar11;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
    iVar11 = (int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) + iVar11;
    *puVar2 = *puVar2 << (uVar9 & 0x7f);
    if ((longlong)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(puVar2);
    }
    do {
      if (iVar11 != 0) {
        return 1;
      }
      puVar2 = *(ulonglong **)(param_1 + 0x54);
      uVar9 = 8;
      iVar12 = 0;
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = 0;
      if ((uVar6 & 0xffffffff) < 8) {
        do {
          iVar12 = iVar11;
          if ((uVar6 & 0xffffffff) == 0) break;
          uVar9 = uVar9 - uVar6;
          *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
          iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
          *puVar2 = *puVar2 << (uVar6 & 0x7f);
          if ((longlong)(uVar5 - uVar6) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar6 = uVar5 + 0x10;
          iVar11 = iVar12;
        } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
      iVar12 = (int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) + iVar12;
      *puVar2 = *puVar2 << (uVar9 & 0x7f);
      if ((longlong)(uVar5 - uVar9) < 0) {
        fn_82C4E5E8(puVar2);
      }
      if (iVar12 != 0) {
        if (iVar12 != 1) {
          return 1;
        }
        puVar2 = *(ulonglong **)(param_1 + 0x54);
        if (*(int *)((int)puVar2 + 0x14) != 0) {
          return 1;
        }
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar9 = 8;
        iVar12 = 0;
        uVar6 = uVar5 + 0x10;
        iVar11 = 0;
        if ((uVar6 & 0xffffffff) < 8) goto LAB_82c5b73c;
        goto LAB_82c5b794;
      }
      iVar11 = *(int *)(*(int *)(param_1 + 0x54) + 0x14);
    } while( true );
  }
  uVar9 = 2;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) < 2) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  iVar12 = (int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  *puVar2 = *puVar2 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if (iVar12 == 0) {
    *(undefined4 *)(param_1 + 0xf7c) = 0;
  }
  else if (iVar12 == 1) {
    *(undefined4 *)(param_1 + 0xf7c) = 1;
  }
  else if (iVar12 == 2) {
    *(undefined4 *)(param_1 + 0xf7c) = 2;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar9 = 1;
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar10 = 1;
  *(int *)(param_1 + 0xf8c) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
  iVar12 = (int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) + iVar12;
  *puVar2 = *puVar2 << (uVar10 & 0x7f);
  if ((longlong)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0x3c04) = iVar12;
  if (*(int *)(param_1 + 0xf8c) != *(int *)(param_1 + 0xf98)) {
    return 1;
  }
  if (iVar12 != *(int *)(param_1 + 0xf9c)) {
    return 1;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar9 = 3;
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) < 3) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar10 = 5;
  *(int *)(param_1 + 0xe80) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  lVar8 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  if ((uVar6 & 0xffffffff) < 5) {
    do {
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      lVar8 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f)) +
              lVar8;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
    } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
  *puVar2 = uVar6 << (uVar10 & 0x7f);
  if ((longlong)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar2);
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar9 = 1;
  *(undefined4 *)(param_1 + 0xf74) = 1;
  *(int *)(param_1 + 0xe84) =
       (int)(((uVar6 >> (0x40 - uVar10 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) << 6) + 0x20;
  iVar12 = 0;
  *(int *)(param_1 + 0xe80) = *(int *)(param_1 + 0xe80) * 4 + 2;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar10 = 1;
  *(int *)(param_1 + 0xf6c) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar10 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
  *puVar2 = uVar6 << (uVar10 & 0x7f);
  if ((longlong)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0xf64) = (int)(uVar6 >> (0x40 - uVar10 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0x3a24) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0x700) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0x704) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0x5440) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 2;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) < 2) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0xfc8) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0x1b8) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 400) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0xbc0) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0xf94) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0x3a08) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 3;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) < 3) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0x39f4) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  iVar12 = (int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  *puVar2 = *puVar2 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  *(int *)(param_1 + 0xd94) = iVar12;
  uVar9 = 1;
  iVar11 = 0;
  iVar13 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  if (iVar12 == 0) {
    iVar11 = 0;
    if ((uVar6 & 0xffffffff) == 0) {
      do {
        iVar13 = iVar11;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
        iVar13 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar13;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar6 = uVar5 + 0x10;
        iVar11 = iVar13;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
    iVar13 = (int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) + iVar13;
    *puVar2 = *puVar2 << (uVar9 & 0x7f);
    if ((longlong)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(puVar2);
    }
    *(int *)(param_1 + 0xd98) = iVar13;
    *(int *)(param_1 + 0x56d4) = iVar13;
  }
  else {
    iVar12 = 0;
    if ((uVar6 & 0xffffffff) == 0) {
      do {
        iVar11 = iVar12;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
        iVar11 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar11;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar6 = uVar5 + 0x10;
        iVar12 = iVar11;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
    iVar11 = (int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) + iVar11;
    *puVar2 = *puVar2 << (uVar9 & 0x7f);
    if ((longlong)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(puVar2);
    }
    *(int *)(param_1 + 0xd8c) = iVar11;
    *(int *)(param_1 + 0x56d4) = iVar11 + 2;
  }
  if ((*(int *)(param_1 + 0xd94) != 0) || (uVar7 = 0, *(int *)(param_1 + 0xd98) != 0)) {
    uVar7 = 1;
  }
  *(undefined4 *)(param_1 + 0xd90) = uVar7;
  uVar9 = 1;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(param_1 + 0xd9c) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
  if (*(int *)(param_1 + 0x3c04) == 0) {
    if (*(int *)(param_1 + 0xf7c) == 0) {
      if (*(int *)(param_1 + 0xf64) != 0) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0x700) != 1) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0x704) != 1) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0xf94) != 0) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0x5440) != 0) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0xf6c) != 0) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0xf8c) != 0) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0x3a24) != 0) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0xfc8) != 0) {
        return 0xfffffffffffffffa;
      }
      if (*(int *)(param_1 + 0x39f4) != 0) {
        return 0xfffffffffffffffa;
      }
      bVar1 = *(int *)(param_1 + 0x3a08) == 0;
    }
    else {
      if (*(int *)(param_1 + 0xf7c) != 1) goto LAB_82c5cc98;
      if (*(int *)(param_1 + 0xf64) != 0) {
        return 0xfffffffffffffffa;
      }
      bVar1 = *(int *)(param_1 + 0x700) == 1;
    }
    if (!bVar1) {
      return 0xfffffffffffffffa;
    }
  }
LAB_82c5cc98:
  *(undefined4 *)(param_1 + 0x39f8) =
       *(undefined4 *)(&lbl_820FC288 + *(int *)(param_1 + 0x39f4) * 4);
  if (*(int *)(param_1 + 0xf8c) != 0) {
    *(undefined4 *)(param_1 + 0xfa4) = 0;
    *(undefined4 *)(param_1 + 0xf64) = 0;
  }
  fn_82C531B8(param_1,0);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0xf68) = 0;
  if (*(int *)(param_1 + 0x700) != 0) {
    fn_82C53370(param_1,1);
    fn_82C53488(param_1);
    fn_82C53608(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x34) = *(undefined4 *)(param_1 + 0xc90);
    *(code **)(param_1 + 0xc78) = fn_82CB34C0;
  }
  if (*(int *)(param_1 + 0x3c04) != 0) {
    if ((((((*(int *)(param_1 + 0xf64) == 0) && (*(int *)(param_1 + 400) == 0)) &&
          (*(int *)(param_1 + 0xf8c) == 0)) &&
         ((*(int *)(param_1 + 0xf6c) == 0 && (*(int *)(param_1 + 0x5440) == 0)))) &&
        ((*(int *)(param_1 + 0x3a24) == 0 &&
         ((*(int *)(param_1 + 0x704) == 0 && (*(int *)(param_1 + 0xfc8) == 0)))))) &&
       ((*(int *)(param_1 + 0x1b8) == 0 &&
        ((((*(int *)(param_1 + 0xf94) == 0 && (*(int *)(param_1 + 0x3a08) == 0)) &&
          (*(int *)(param_1 + 0xd94) == 0)) &&
         ((*(int *)(param_1 + 0xd8c) == 0 && (*(int *)(param_1 + 0xd98) == 0)))))))) {
      uVar4 = fn_82C592E0(param_1);
      return uVar4;
    }
    return 1;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar9 = 1;
  *(undefined4 *)(param_1 + 0xd48) = 1;
  lVar8 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      lVar8 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) +
              lVar8;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if ((((uVar6 >> (0x40 - uVar9 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) == 1) &&
     (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0)) {
    *(undefined4 *)(param_1 + 0xd50) = 1;
    *(undefined4 *)(param_1 + 0xd4c) = 0;
    *(undefined4 *)(param_1 + 0xd48) = 0;
  }
  if ((param_2 & 0xffffffff) == 5) {
    puVar2 = *(ulonglong **)(param_1 + 0x54);
    uVar9 = 1;
    iVar12 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar6 = uVar5 + 0x10;
    iVar11 = 0;
    if ((uVar6 & 0xffffffff) == 0) {
      do {
        iVar12 = iVar11;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
        iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar6 = uVar5 + 0x10;
        iVar11 = iVar12;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    uVar6 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
    *puVar2 = uVar6 << (uVar9 & 0x7f);
    if ((longlong)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(puVar2);
    }
    *(int *)(param_1 + 0x5444) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12;
    uVar9 = 1;
    plVar3 = *(longlong **)(param_1 + 0x54);
    uVar5 = (ulonglong)*(uint *)(plVar3 + 1);
    uVar6 = uVar5 + 0x10;
    if ((uVar6 & 0xffffffff) == 0) {
      do {
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *plVar3 = *plVar3 << (uVar6 & 0x7f);
        *(int *)(plVar3 + 1) = (int)(uVar5 - uVar6);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(plVar3);
        }
        uVar5 = (ulonglong)*(uint *)(plVar3 + 1);
        uVar6 = uVar5 + 0x10;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *plVar3 = *plVar3 << (uVar9 & 0x7f);
    *(int *)(plVar3 + 1) = (int)(uVar5 - uVar9);
    if ((longlong)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(plVar3);
    }
  }
  return 0;
  while( true ) {
    uVar9 = uVar9 - uVar6;
    *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
    iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
    *puVar2 = *puVar2 << (uVar6 & 0x7f);
    if ((longlong)(uVar5 - uVar6) < 0) {
      fn_82C4E5E8(puVar2);
    }
    uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar6 = uVar5 + 0x10;
    iVar11 = iVar12;
    if ((uVar9 & 0xffffffff) <= (uVar6 & 0xffffffff)) break;
LAB_82c5b73c:
    iVar12 = iVar11;
    if ((uVar6 & 0xffffffff) == 0) break;
  }
LAB_82c5b794:
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if ((int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12 != 0xf) {
    return 1;
  }
  uVar4 = fn_82C59720(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (((*(int *)(param_1 + 0x5578) < *(int *)(param_1 + 0x5628) * *(int *)(param_1 + 0x562c)) ||
      (*(int *)(param_1 + 0x5588) < *(int *)(param_1 + 0x5628))) ||
     (*(int *)(param_1 + 0x558c) < *(int *)(param_1 + 0x562c))) {
    iVar11 = fn_82C45138(param_1);
    if (iVar11 == 0) {
      return 0xfffffffffffffff8;
    }
    *(undefined4 *)(param_1 + 0xe94) = 1;
    *(int *)(param_1 + 0x5578) = *(int *)(param_1 + 0x5628) * *(int *)(param_1 + 0x562c);
    *(int *)(param_1 + 0x5588) = *(int *)(param_1 + 0x5628);
    *(int *)(param_1 + 0x558c) = *(int *)(param_1 + 0x562c);
    fn_82C69448(param_1 + 0xebc,0);
    fn_82C4FCF8(param_1);
    uVar4 = fn_82C50F98(param_1,*(undefined4 *)(param_1 + 0x5628),
                          *(undefined4 *)(param_1 + 0x562c));
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = fn_82C53AE8(param_1,*(undefined4 *)(param_1 + 0x5628),
                          *(undefined4 *)(param_1 + 0x562c));
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    fn_82C51858(param_1);
  }
  plVar3 = *(longlong **)(param_1 + 0x54);
  if (*(int *)((int)plVar3 + 0x1c) != 0) {
    uVar5 = (ulonglong)*(uint *)(plVar3 + 1);
    uVar9 = 1;
    uVar6 = uVar5 + 0x10;
    if ((uVar6 & 0xffffffff) == 0) {
      do {
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *plVar3 = *plVar3 << (uVar6 & 0x7f);
        *(int *)(plVar3 + 1) = (int)(uVar5 - uVar6);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(plVar3);
        }
        uVar5 = (ulonglong)*(uint *)(plVar3 + 1);
        uVar6 = uVar5 + 0x10;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *plVar3 = *plVar3 << (uVar9 & 0x7f);
    *(int *)(plVar3 + 1) = (int)(uVar5 - uVar9);
    if ((longlong)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(plVar3);
    }
  }
  fn_82C4E470(plVar3,*(uint *)(plVar3 + 1) & 7);
  uVar9 = 8;
  iVar12 = 0;
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) < 8) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if ((int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12 != 0) {
    return 1;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar9 = 8;
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) < 8) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if ((int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12 != 0) {
    return 1;
  }
  do {
    puVar2 = *(ulonglong **)(param_1 + 0x54);
    uVar9 = 8;
    iVar12 = 0;
    uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar6 = uVar5 + 0x10;
    iVar11 = 0;
    if ((uVar6 & 0xffffffff) < 8) {
      do {
        iVar12 = iVar11;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
        iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
        *puVar2 = *puVar2 << (uVar6 & 0x7f);
        if ((longlong)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar6 = uVar5 + 0x10;
        iVar11 = iVar12;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
    iVar12 = (int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) + iVar12;
    *puVar2 = *puVar2 << (uVar9 & 0x7f);
    if ((longlong)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(puVar2);
    }
  } while (iVar12 == 0);
  if (iVar12 != 1) {
    return 1;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  uVar9 = 8;
  iVar12 = 0;
  uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar6 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar6 & 0xffffffff) < 8) {
    do {
      iVar12 = iVar11;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar6);
      iVar12 = ((int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) << ((uint)uVar9 & 0x3f)) + iVar12;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar6 = uVar5 + 0x10;
      iVar11 = iVar12;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  uVar6 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar9);
  *puVar2 = uVar6 << (uVar9 & 0x7f);
  if ((longlong)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if ((int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar12 != 0xe) {
    return 1;
  }
  uVar4 = fn_82C4D2F0(param_1);
  return uVar4;
}


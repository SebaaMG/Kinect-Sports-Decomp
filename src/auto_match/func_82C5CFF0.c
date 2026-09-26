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


undefined8 fn_82C5CFF0(int param_1,int param_2,int *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar11;
  longlong lVar10;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar13 = 1;
  uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
  lVar8 = 0;
  uVar4 = uVar3 + 0x10;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar13 = uVar13 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      lVar8 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar13 & 0x3f)) +
              lVar8;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((longlong)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
    } while ((uVar4 & 0xffffffff) < (uVar13 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar13);
  *puVar1 = uVar4 << (uVar13 & 0x7f);
  if ((longlong)(uVar3 - uVar13) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((uVar4 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) == 0) {
    *param_3 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x5568) == 0) || (*(int *)(param_1 + 0x56ec) != 0)) {
      if (*(int *)(param_1 + 0x5420) == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = (ulonglong)*(uint *)(param_1 + 0x556c) + 1;
      }
    }
    else if (*(int *)(param_1 + 0x5420) == 0) {
      lVar8 = 2;
    }
    else {
      lVar8 = (ulonglong)*(uint *)(param_1 + 0x5428) + 2;
    }
    iVar6 = (int)lVar8;
    if (0 < iVar6) {
      piVar7 = (int *)(param_2 + -0xc);
      do {
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar13 = 0x10;
        lVar9 = 0;
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
        if ((uVar4 & 0xffffffff) < 0x10) {
          do {
            if ((uVar4 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar4;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
            lVar9 = (ulonglong)
                    (uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar13 & 0x3f)) + lVar9
            ;
            *puVar1 = *puVar1 << (uVar4 & 0x7f);
            if ((longlong)(uVar3 - uVar4) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar4 = uVar3 + 0x10;
          } while ((uVar4 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar4 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar13);
        *puVar1 = uVar4 << (uVar13 & 0x7f);
        if ((longlong)(uVar3 - uVar13) < 0) {
          fn_82C4E5E8(puVar1);
        }
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar14 = 2;
        iVar11 = 0;
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar3 + 0x10;
        iVar2 = 0;
        if ((uVar5 & 0xffffffff) < 2) {
          do {
            iVar11 = iVar2;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar14 = uVar14 - uVar5;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar5);
            iVar11 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar14 & 0x3f)) + iVar11;
            *puVar1 = *puVar1 << (uVar5 & 0x7f);
            if ((longlong)(uVar3 - uVar5) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar5 = uVar3 + 0x10;
            iVar2 = iVar11;
          } while ((uVar5 & 0xffffffff) < (uVar14 & 0xffffffff));
        }
        uVar5 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar14);
        *puVar1 = uVar5 << (uVar14 & 0x7f);
        if ((longlong)(uVar3 - uVar14) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar15 = 0x10;
        lVar10 = 0;
        piVar7[5] = (uint)(((uVar4 >> (0x40 - uVar13 & 0x7f) & 0xffffffff) + lVar9 & 0xffffffff) <<
                          2) | (int)(uVar5 >> (0x40 - uVar14 & 0x7f)) + iVar11;
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
        if ((uVar4 & 0xffffffff) < 0x10) {
          do {
            if ((uVar4 & 0xffffffff) == 0) break;
            uVar15 = uVar15 - uVar4;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
            lVar10 = (ulonglong)
                     (uint)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar15 & 0x3f)) +
                     lVar10;
            *puVar1 = *puVar1 << (uVar4 & 0x7f);
            if ((longlong)(uVar3 - uVar4) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar4 = uVar3 + 0x10;
          } while ((uVar4 & 0xffffffff) < (uVar15 & 0xffffffff));
        }
        uVar4 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar15);
        *puVar1 = uVar4 << (uVar15 & 0x7f);
        if ((longlong)(uVar3 - uVar15) < 0) {
          fn_82C4E5E8(puVar1);
        }
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar5 = 2;
        iVar11 = 0;
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar13 = uVar3 + 0x10;
        iVar2 = 0;
        if ((uVar13 & 0xffffffff) < 2) {
          do {
            iVar11 = iVar2;
            if ((uVar13 & 0xffffffff) == 0) break;
            uVar5 = uVar5 - uVar13;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar13);
            iVar11 = ((int)(*puVar1 >> (0x40 - uVar13 & 0x7f)) << ((uint)uVar5 & 0x3f)) + iVar11;
            *puVar1 = *puVar1 << (uVar13 & 0x7f);
            if ((longlong)(uVar3 - uVar13) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar13 = uVar3 + 0x10;
            iVar2 = iVar11;
          } while ((uVar13 & 0xffffffff) < (uVar5 & 0xffffffff));
        }
        uVar13 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar5);
        *puVar1 = uVar13 << (uVar5 & 0x7f);
        if ((longlong)(uVar3 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar14 = 0xe;
        iVar12 = 0;
        piVar7[6] = (uint)(((uVar4 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar10 & 0xffffffff) <<
                          2) | (int)(uVar13 >> (0x40 - uVar5 & 0x7f)) + iVar11;
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
        iVar2 = 0;
        if ((uVar4 & 0xffffffff) < 0xe) {
          do {
            iVar12 = iVar2;
            if ((uVar4 & 0xffffffff) == 0) break;
            uVar14 = uVar14 - uVar4;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
            iVar12 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar14 & 0x3f)) + iVar12;
            *puVar1 = *puVar1 << (uVar4 & 0x7f);
            if ((longlong)(uVar3 - uVar4) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar4 = uVar3 + 0x10;
            iVar2 = iVar12;
          } while ((uVar4 & 0xffffffff) < (uVar14 & 0xffffffff));
        }
        uVar4 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar14);
        *puVar1 = uVar4 << (uVar14 & 0x7f);
        if ((longlong)(uVar3 - uVar14) < 0) {
          fn_82C4E5E8(puVar1);
        }
        piVar7[3] = (int)(uVar4 >> (0x40 - uVar14 & 0x7f)) + iVar12;
        uVar13 = 0xe;
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        iVar11 = 0;
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
        iVar2 = 0;
        if ((uVar4 & 0xffffffff) < 0xe) {
          do {
            iVar11 = iVar2;
            if ((uVar4 & 0xffffffff) == 0) break;
            uVar13 = uVar13 - uVar4;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
            iVar11 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((uint)uVar13 & 0x3f)) + iVar11;
            *puVar1 = *puVar1 << (uVar4 & 0x7f);
            if ((longlong)(uVar3 - uVar4) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar3 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar4 = uVar3 + 0x10;
            iVar2 = iVar11;
          } while ((uVar4 & 0xffffffff) < (uVar13 & 0xffffffff));
        }
        uVar4 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar13);
        *puVar1 = uVar4 << (uVar13 & 0x7f);
        if ((longlong)(uVar3 - uVar13) < 0) {
          fn_82C4E5E8(puVar1);
        }
        lVar8 = lVar8 + -1;
        piVar7 = piVar7 + 4;
        *piVar7 = (int)(uVar4 >> (0x40 - uVar13 & 0x7f)) + iVar11;
      } while (lVar8 != 0);
    }
    *param_3 = iVar6;
  }
  return 0;
}


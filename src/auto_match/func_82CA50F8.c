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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();


undefined8 fn_82CA50F8(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  ulonglong *puVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  
  *(char *)(param_2 + 1) = (char)*(undefined4 *)(param_1 + 0xf8) * '\x02' + -1;
  if (*(int *)(param_1 + 0x1c4) == 0) {
    *param_2 = *param_2 & 0x7fffffff;
  }
  else {
    if (*(int *)(param_1 + 0x1b4) == 0) {
      puVar6 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = *puVar6;
      uVar20 = *(uint *)(puVar6 + 1);
      *puVar6 = uVar16 << 1;
      *(int *)(puVar6 + 1) = (int)((ulonglong)uVar20 - 1);
      if ((longlong)((ulonglong)uVar20 - 1) < 0) {
        fn_82C4E5E8();
      }
      *param_2 = (uint)((uVar16 >> 0x3f) << 0x1f) | *param_2 & 0x7fffffff;
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
        return 1;
      }
    }
    if ((*param_2 & 0x80000000) != 0) {
      *(undefined2 *)((int)param_2 + 0xe) = 0;
      *(undefined2 *)(param_2 + 4) = 0;
      *(undefined2 *)((int)param_2 + 0x12) = 0;
      *param_2 = *param_2 | 0x20000;
      return 0;
    }
  }
  puVar6 = *(ulonglong **)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x1bc) == 0) {
    if ((int *)(param_1 + 0x854) == (int *)0x0) {
      uVar16 = 0;
      *(undefined4 *)((int)puVar6 + 0x14) = 3;
    }
    else {
      iVar13 = *(int *)(param_1 + 0x854);
      sVar5 = *(short *)((int)((*puVar6 >> (0x40 - (ulonglong)*(byte *)(param_1 + 0x85c) & 0x7f) &
                               0xffffffff) << 1) + iVar13);
      uVar16 = (ulonglong)sVar5;
      if (sVar5 < 0) {
        fn_82C4E470(puVar6);
        do {
          uVar18 = *puVar6;
          fn_82C4E470(puVar6,1);
          sVar5 = *(short *)((int)(((uVar16 - ((longlong)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar13);
          uVar16 = (ulonglong)sVar5;
        } while (sVar5 < 0);
      }
      else {
        iVar13 = *(int *)(puVar6 + 1);
        iVar11 = (int)(uVar16 & 0xf);
        *puVar6 = *puVar6 << (uVar16 & 0xf);
        *(int *)(puVar6 + 1) = iVar13 - iVar11;
        if (iVar13 < iVar11) {
          do {
            pbVar8 = *(byte **)((int)puVar6 + 0xc);
            if (pbVar8 < (byte *)(*(int *)(puVar6 + 2) - 4U)) {
              bVar14 = *pbVar8;
              bVar15 = pbVar8[1];
              bVar1 = pbVar8[2];
              bVar2 = pbVar8[3];
              bVar3 = pbVar8[4];
              bVar4 = pbVar8[5];
              iVar13 = *(int *)(puVar6 + 1);
              *(byte **)((int)puVar6 + 0xc) = pbVar8 + 6;
              *(int *)(puVar6 + 1) = iVar13 + 0x30;
              *puVar6 = ((((((ulonglong)bVar15 + (ulonglong)bVar14 * 0x100) * 0x100 +
                           (ulonglong)bVar1) * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                         * 0x100 + (ulonglong)bVar4 << ((longlong)-iVar13 & 0x7fU)) + *puVar6;
              goto LAB_82ca5414;
            }
            iVar13 = fn_82C4E3B0(puVar6);
          } while (iVar13 == 1);
          uVar16 = (ulonglong)((int)sVar5 >> 4);
        }
        else {
LAB_82ca5414:
          uVar16 = (ulonglong)((int)sVar5 >> 4);
        }
      }
    }
  }
  else {
    piVar7 = *(int **)(param_1 + 0x860);
    if (piVar7 == (int *)0x0) {
      uVar16 = 0;
      *(undefined4 *)((int)puVar6 + 0x14) = 3;
    }
    else {
      iVar13 = *piVar7;
      sVar5 = *(short *)((int)((*puVar6 >> (0x40 - (ulonglong)*(byte *)(piVar7 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar13);
      uVar16 = (ulonglong)sVar5;
      if (sVar5 < 0) {
        fn_82C4E470(puVar6);
        do {
          uVar18 = *puVar6;
          fn_82C4E470(puVar6,1);
          sVar5 = *(short *)((int)(((uVar16 - ((longlong)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar13);
          uVar16 = (ulonglong)sVar5;
        } while (sVar5 < 0);
      }
      else {
        iVar13 = *(int *)(puVar6 + 1);
        iVar11 = (int)(uVar16 & 0xf);
        *puVar6 = *puVar6 << (uVar16 & 0xf);
        *(int *)(puVar6 + 1) = iVar13 - iVar11;
        if (iVar13 < iVar11) {
          do {
            pbVar8 = *(byte **)((int)puVar6 + 0xc);
            if (pbVar8 < (byte *)(*(int *)(puVar6 + 2) - 4U)) {
              bVar14 = *pbVar8;
              bVar15 = pbVar8[1];
              bVar1 = pbVar8[2];
              bVar2 = pbVar8[3];
              bVar3 = pbVar8[4];
              bVar4 = pbVar8[5];
              iVar13 = *(int *)(puVar6 + 1);
              *(byte **)((int)puVar6 + 0xc) = pbVar8 + 6;
              *(int *)(puVar6 + 1) = iVar13 + 0x30;
              *puVar6 = ((((((ulonglong)bVar14 * 0x100 + (ulonglong)bVar15) * 0x100 +
                           (ulonglong)bVar1) * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                         * 0x100 + (ulonglong)bVar4 << ((longlong)-iVar13 & 0x7fU)) + *puVar6;
              goto LAB_82ca52cc;
            }
            iVar13 = fn_82C4E3B0(puVar6);
          } while (iVar13 == 1);
          uVar16 = (ulonglong)((int)sVar5 >> 4);
        }
        else {
LAB_82ca52cc:
          uVar16 = (ulonglong)((int)sVar5 >> 4);
        }
      }
    }
  }
  uVar20 = (uint)uVar16;
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
    return 1;
  }
  if ((int)uVar20 < 0) {
    return 1;
  }
  if (0x7f < (int)uVar20) {
    return 1;
  }
  uVar9 = *param_2;
  if ((uVar16 & 0x40) != 0) {
    uVar20 = uVar20 ^ 0x40;
    *param_2 = uVar9 | 0x20000;
    uVar12 = (uint)(uVar20 == 0) << 0x1e;
    *param_2 = uVar12 | uVar9 & 0xbfffffff | 0x20000;
    if (*(int *)(param_1 + 0x148) == 0) {
      *param_2 = uVar12 | uVar9 & 0xbff3ffff | 0x20000 | 0x80000;
    }
    else {
      puVar6 = *(ulonglong **)(param_1 + 0x54);
      uVar16 = *puVar6;
      uVar9 = *(uint *)(puVar6 + 1);
      *puVar6 = uVar16 << 1;
      *(int *)(puVar6 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      *param_2 = (uint)((uVar16 >> 0x3f) << 0x12) | *param_2 & 0xfff3ffff;
    }
    goto LAB_82ca565c;
  }
  *param_2 = uVar9 & 0xfffdffff;
  puVar6 = *(ulonglong **)(param_1 + 0x54);
  uVar9 = *(uint *)(puVar6 + 1);
  uVar16 = *puVar6;
  *puVar6 = uVar16 << 1;
  *(int *)(puVar6 + 1) = (int)((ulonglong)uVar9 - 1);
  if ((longlong)((ulonglong)uVar9 - 1) < 0) {
    fn_82C4E5E8();
  }
  *param_2 = (uint)((uVar16 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
  if (*(int *)(param_1 + 0x194) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x54);
    lVar19 = *plVar10;
    uVar9 = *(uint *)(plVar10 + 1);
    *plVar10 = lVar19 << 1;
    *(int *)(plVar10 + 1) = (int)((ulonglong)uVar9 - 1);
    if ((longlong)((ulonglong)uVar9 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar19 < 0) {
      plVar10 = *(longlong **)(param_1 + 0x54);
      lVar19 = *plVar10;
      uVar9 = *(uint *)(plVar10 + 1);
      *plVar10 = lVar19 << 1;
      *(int *)(plVar10 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar19 < 0) {
        plVar10 = *(longlong **)(param_1 + 0x54);
        lVar19 = *plVar10;
        uVar9 = *(uint *)(plVar10 + 1);
        *plVar10 = lVar19 << 1;
        *(int *)(plVar10 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar19 < 0) {
          *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x22;
          goto LAB_82ca5628;
        }
        bVar14 = *(byte *)(param_2 + 5) & 0xdd | 0x20;
      }
      else {
        bVar14 = *(byte *)(param_2 + 5) & 0xdd | 2;
      }
      *(byte *)(param_2 + 5) = bVar14;
    }
    else {
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xdd;
    }
LAB_82ca5628:
    bVar14 = *(byte *)(param_2 + 5);
    bVar15 = bVar14 & 0xb3 | 8;
    *(byte *)(param_2 + 5) = bVar15;
    *(byte *)(param_2 + 5) = (bVar14 & 0x20) << 1 | bVar15;
  }
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
    return 1;
  }
LAB_82ca565c:
  *param_2 = *param_2 & 0xff3fffff;
  if ((*(int *)(param_1 + 0x18c) != 0) && (uVar20 != 0)) {
    plVar10 = *(longlong **)(param_1 + 0x54);
    lVar17 = *plVar10;
    uVar9 = *(uint *)(plVar10 + 1);
    lVar19 = -(lVar17 >> 0x3f);
    *plVar10 = lVar17 << 1;
    *(int *)(plVar10 + 1) = (int)((ulonglong)uVar9 - 1);
    if ((longlong)((ulonglong)uVar9 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar17 < 0) {
      plVar10 = *(longlong **)(param_1 + 0x54);
      lVar17 = *plVar10;
      uVar9 = *(uint *)(plVar10 + 1);
      *plVar10 = lVar17 << 1;
      *(int *)(plVar10 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      lVar19 = lVar19 - (lVar17 >> 0x3f);
    }
    *param_2 = (uint)(lVar19 << 0x16) | *param_2 & 0xff3fffff;
  }
  *(byte *)((int)param_2 + 0xe) = (byte)uVar20 & 1;
  *(byte *)((int)param_2 + 0xf) = (byte)((int)uVar20 >> 1) & 1;
  *(byte *)(param_2 + 4) = (byte)((int)uVar20 >> 2) & 1;
  *(byte *)((int)param_2 + 0x11) = (byte)((int)uVar20 >> 3) & 1;
  *(byte *)((int)param_2 + 0x12) = (byte)((int)uVar20 >> 4) & 1;
  *(byte *)((int)param_2 + 0x13) = (byte)((int)uVar20 >> 5) & 1;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    uVar20 = *param_2;
    *param_2 = uVar20 & 0xefffffff;
    if (((*(int *)(param_1 + 0x14c) != 0) && ((uVar20 & 0x40000000) == 0)) &&
       ((uVar20 & 0x20000) == 0x20000)) {
      plVar10 = *(longlong **)(param_1 + 0x54);
      lVar19 = *plVar10;
      uVar20 = *(uint *)(plVar10 + 1);
      *plVar10 = lVar19 << 1;
      *(int *)(plVar10 + 1) = (int)((ulonglong)uVar20 - 1);
      if ((longlong)((ulonglong)uVar20 - 1) < 0) {
        fn_82C4E5E8();
      }
      *param_2 = (int)(lVar19 >> 0x3f) * -0x10000000 | *param_2 & 0xefffffff;
      if (-1 < lVar19) {
        plVar10 = *(longlong **)(param_1 + 0x54);
        lVar19 = *plVar10;
        uVar20 = *(uint *)(plVar10 + 1);
        *plVar10 = lVar19 << 1;
        *(int *)(plVar10 + 1) = (int)((ulonglong)uVar20 - 1);
        if ((longlong)((ulonglong)uVar20 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (-1 < lVar19) {
          *param_2 = *param_2 & 0xf8ffffff;
          return 0;
        }
        plVar10 = *(longlong **)(param_1 + 0x54);
        lVar19 = *plVar10;
        uVar20 = *(uint *)(plVar10 + 1);
        *plVar10 = lVar19 << 1;
        *(int *)(plVar10 + 1) = (int)((ulonglong)uVar20 - 1);
        if ((longlong)((ulonglong)uVar20 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (-1 < lVar19) {
          *param_2 = *param_2 & 0xf8ffffff | 0x1000000;
          return 0;
        }
        *param_2 = *param_2 & 0xf8ffffff | 0x2000000;
      }
    }
  }
  return 0;
}


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
extern int fn_82C75630();


ulonglong fn_830C13A0(int *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  int *piVar9;
  uint uVar10;
  ulonglong *puVar11;
  byte *pbVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  
  piVar9 = (int *)*param_2;
  uVar10 = param_2[1];
  uVar21 = 0;
  iVar20 = param_2[9];
  puVar11 = (ulonglong *)*param_1;
  uVar22 = (ulonglong)(uint)param_2[2] + 1;
  if (param_3 == 0) {
    uVar24 = *puVar11;
    uVar13 = *(uint *)(puVar11 + 1);
    *puVar11 = uVar24 << 1;
    *(int *)(puVar11 + 1) = (int)((ulonglong)uVar13 - 1);
    if ((longlong)((ulonglong)uVar13 - 1) < 0) {
      fn_82C4E5E8(puVar11);
    }
    if ((longlong)uVar24 < 0) {
      iVar17 = *piVar9;
      sVar7 = *(short *)((int)((*puVar11 >> 0x36) << 1) + iVar17);
      uVar24 = (ulonglong)sVar7;
      if (sVar7 < 0) {
        fn_82C4E470(puVar11,10);
        do {
          uVar18 = *puVar11;
          fn_82C4E470(puVar11,1);
          sVar7 = *(short *)((int)(((uVar24 - ((longlong)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar17);
          uVar24 = (ulonglong)sVar7;
        } while (sVar7 < 0);
      }
      else {
        iVar17 = *(int *)(puVar11 + 1);
        iVar16 = (int)(uVar24 & 0xf);
        *(int *)(puVar11 + 1) = iVar17 - iVar16;
        *puVar11 = *puVar11 << (uVar24 & 0xf);
        if (iVar17 < iVar16) {
          do {
            pbVar12 = *(byte **)((int)puVar11 + 0xc);
            if (pbVar12 < (byte *)(*(int *)(puVar11 + 2) - 4U)) {
              bVar1 = *pbVar12;
              bVar2 = pbVar12[1];
              bVar3 = pbVar12[2];
              bVar4 = pbVar12[3];
              bVar5 = pbVar12[4];
              bVar6 = pbVar12[5];
              iVar17 = *(int *)(puVar11 + 1);
              *(byte **)((int)puVar11 + 0xc) = pbVar12 + 6;
              *(int *)(puVar11 + 1) = iVar17 + 0x30;
              *puVar11 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 +
                            (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5
                          ) * 0x100 + (ulonglong)bVar6 << ((longlong)-iVar17 & 0x7fU)) + *puVar11;
              goto LAB_830c168c;
            }
            iVar17 = fn_82C4E3B0(puVar11);
          } while (iVar17 == 1);
          uVar24 = (ulonglong)((int)sVar7 >> 4);
        }
        else {
LAB_830c168c:
          uVar24 = (ulonglong)((int)sVar7 >> 4);
        }
      }
      if ((uVar24 & 0xffffffff) == (ulonglong)uVar10) {
        return 0xffffffffffffffff;
      }
      uVar8 = *(ushort *)((int)((uVar24 & 0xffffffff) << 1) + iVar20);
      iVar20 = (int)(short)uVar8 >> 8;
      uVar25 = (ulonglong)iVar20;
      if ((uVar24 & 0xffffffff) < (uVar22 & 0xffffffff)) {
        iVar17 = param_2[5];
      }
      else {
        iVar17 = param_2[6];
      }
      uVar10 = *(uint *)(puVar11 + 1);
      uVar23 = (ulonglong)*(byte *)(iVar17 + iVar20) + ((ulonglong)uVar8 & 0xff) + 1;
      uVar18 = *puVar11 >> 0x3f;
      *puVar11 = *puVar11 << 1;
      *(int *)(puVar11 + 1) = (int)((ulonglong)uVar10 - 1);
      if ((longlong)((ulonglong)uVar10 - 1) < 0) {
        fn_82C4E5E8(puVar11);
      }
    }
    else {
      uVar21 = *puVar11;
      uVar10 = *(uint *)(puVar11 + 1);
      *puVar11 = uVar21 << 1;
      *(int *)(puVar11 + 1) = (int)((ulonglong)uVar10 - 1);
      if ((longlong)((ulonglong)uVar10 - 1) < 0) {
        fn_82C4E5E8(puVar11);
      }
      uVar24 = (uVar22 - ((longlong)uVar21 >> 0x3f)) - 1;
      if (*(char *)((int)param_1 + 0x4e3) != '\0') {
        fn_82C75630(param_1);
        *(undefined1 *)((int)param_1 + 0x4e3) = 0;
      }
      puVar14 = (ulonglong *)*param_1;
      lVar19 = 0;
      uVar18 = (ulonglong)*(byte *)(param_1 + 0x138);
      uVar21 = (ulonglong)*(uint *)(puVar14 + 1);
      uVar22 = uVar21 + 0x10;
      if (uVar18 < 0x21) {
        if (uVar18 == 0) {
          uVar23 = 0;
        }
        else {
          if ((uVar22 & 0xffffffff) < uVar18) {
            do {
              if ((uVar22 & 0xffffffff) == 0) break;
              uVar18 = uVar18 - uVar22;
              *(int *)(puVar14 + 1) = (int)(uVar21 - uVar22);
              lVar19 = (ulonglong)
                       (uint)((int)(*puVar14 >> (0x40 - uVar22 & 0x7f)) << ((uint)uVar18 & 0x3f)) +
                       lVar19;
              *puVar14 = *puVar14 << (uVar22 & 0x7f);
              if ((longlong)(uVar21 - uVar22) < 0) {
                fn_82C4E5E8(puVar14);
              }
              uVar21 = (ulonglong)*(uint *)(puVar14 + 1);
              uVar22 = uVar21 + 0x10;
            } while ((uVar22 & 0xffffffff) < (uVar18 & 0xffffffff));
          }
          *(int *)(puVar14 + 1) = (int)(uVar21 - uVar18);
          uVar23 = (*puVar14 >> (0x40 - uVar18 & 0x7f) & 0xffffffff) + lVar19;
          *puVar14 = *puVar14 << (uVar18 & 0x7f);
          if ((longlong)(uVar21 - uVar18) < 0) {
            fn_82C4E5E8(puVar14);
          }
        }
      }
      else {
        uVar23 = 0;
      }
      plVar15 = (longlong *)*param_1;
      lVar19 = *plVar15;
      uVar10 = *(uint *)(plVar15 + 1);
      *plVar15 = lVar19 << 1;
      *(int *)(plVar15 + 1) = (int)((ulonglong)uVar10 - 1);
      if ((longlong)((ulonglong)uVar10 - 1) < 0) {
        fn_82C4E5E8();
      }
      puVar14 = (ulonglong *)*param_1;
      uVar18 = (ulonglong)*(byte *)((int)param_1 + 0x4df);
      iVar20 = 0;
      uVar21 = (ulonglong)*(uint *)(puVar14 + 1);
      uVar22 = uVar21 + 0x10;
      if (lVar19 < 0) {
        if (uVar18 < 0x21) {
          if (uVar18 == 0) {
            iVar20 = 0;
          }
          else {
            if ((uVar22 & 0xffffffff) < uVar18) {
              do {
                if ((uVar22 & 0xffffffff) == 0) break;
                uVar18 = uVar18 - uVar22;
                *(int *)(puVar14 + 1) = (int)(uVar21 - uVar22);
                iVar20 = ((int)(*puVar14 >> (0x40 - uVar22 & 0x7f)) << ((uint)uVar18 & 0x3f)) +
                         iVar20;
                *puVar14 = *puVar14 << (uVar22 & 0x7f);
                if ((longlong)(uVar21 - uVar22) < 0) {
                  fn_82C4E5E8(puVar14);
                }
                uVar21 = (ulonglong)*(uint *)(puVar14 + 1);
                uVar22 = uVar21 + 0x10;
              } while ((uVar22 & 0xffffffff) < (uVar18 & 0xffffffff));
            }
            uVar22 = *puVar14;
            *(int *)(puVar14 + 1) = (int)(uVar21 - uVar18);
            *puVar14 = uVar22 << (uVar18 & 0x7f);
            if ((longlong)(uVar21 - uVar18) < 0) {
              fn_82C4E5E8(puVar14);
            }
            iVar20 = -((int)(uVar22 >> (0x40 - uVar18 & 0x7f)) + iVar20);
          }
        }
        else {
          iVar20 = 0;
        }
      }
      else if (uVar18 < 0x21) {
        if (uVar18 == 0) {
          iVar20 = 0;
        }
        else {
          if ((uVar22 & 0xffffffff) < uVar18) {
            do {
              if ((uVar22 & 0xffffffff) == 0) break;
              uVar18 = uVar18 - uVar22;
              *(int *)(puVar14 + 1) = (int)(uVar21 - uVar22);
              iVar20 = ((int)(*puVar14 >> (0x40 - uVar22 & 0x7f)) << ((uint)uVar18 & 0x3f)) + iVar20
              ;
              *puVar14 = *puVar14 << (uVar22 & 0x7f);
              if ((longlong)(uVar21 - uVar22) < 0) {
                fn_82C4E5E8(puVar14);
              }
              uVar21 = (ulonglong)*(uint *)(puVar14 + 1);
              uVar22 = uVar21 + 0x10;
            } while ((uVar22 & 0xffffffff) < (uVar18 & 0xffffffff));
          }
          *(int *)(puVar14 + 1) = (int)(uVar21 - uVar18);
          iVar20 = (int)(*puVar14 >> (0x40 - uVar18 & 0x7f)) + iVar20;
          *puVar14 = *puVar14 << (uVar18 & 0x7f);
          if ((longlong)(uVar21 - uVar18) < 0) {
            fn_82C4E5E8(puVar14);
          }
        }
      }
      else {
        iVar20 = 0;
      }
      uVar18 = (ulonglong)(uint)(iVar20 >> 0x1f) & 1;
      uVar25 = (longlong)(1 - (int)(uVar18 << 1)) * (longlong)iVar20;
      uVar21 = (ulonglong)((int)uVar25 >> 8);
      uVar25 = uVar25 & 0xff;
    }
  }
  else {
    iVar17 = *piVar9;
    sVar7 = *(short *)((int)((*puVar11 >> 0x36) << 1) + iVar17);
    uVar24 = (ulonglong)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(puVar11,10);
      do {
        uVar18 = *puVar11;
        fn_82C4E470(puVar11,1);
        sVar7 = *(short *)((int)(((uVar24 - ((longlong)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar17);
        uVar24 = (ulonglong)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar17 = *(int *)(puVar11 + 1);
      iVar16 = (int)(uVar24 & 0xf);
      *puVar11 = *puVar11 << (uVar24 & 0xf);
      *(int *)(puVar11 + 1) = iVar17 - iVar16;
      if (iVar17 < iVar16) {
        do {
          pbVar12 = *(byte **)((int)puVar11 + 0xc);
          if (pbVar12 < (byte *)(*(int *)(puVar11 + 2) - 4U)) {
            bVar1 = *pbVar12;
            bVar2 = pbVar12[1];
            bVar3 = pbVar12[2];
            bVar4 = pbVar12[3];
            bVar5 = pbVar12[4];
            bVar6 = pbVar12[5];
            iVar17 = *(int *)(puVar11 + 1);
            *(byte **)((int)puVar11 + 0xc) = pbVar12 + 6;
            *(int *)(puVar11 + 1) = iVar17 + 0x30;
            *puVar11 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                          * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                        (ulonglong)bVar6 << ((longlong)-iVar17 & 0x7fU)) + *puVar11;
            goto LAB_830c14b0;
          }
          iVar17 = fn_82C4E3B0(puVar11);
        } while (iVar17 == 1);
        uVar24 = (ulonglong)((int)sVar7 >> 4);
      }
      else {
LAB_830c14b0:
        uVar24 = (ulonglong)((int)sVar7 >> 4);
      }
    }
    if ((uVar24 & 0xffffffff) == (ulonglong)uVar10) {
      return 0xffffffffffffffff;
    }
    uVar10 = *(uint *)(puVar11 + 1);
    uVar18 = *puVar11 >> 0x3f;
    *puVar11 = *puVar11 << 1;
    *(int *)(puVar11 + 1) = (int)((ulonglong)uVar10 - 1);
    if ((longlong)((ulonglong)uVar10 - 1) < 0) {
      fn_82C4E5E8(puVar11);
    }
    uVar8 = *(ushort *)((int)((uVar24 & 0xffffffff) << 1) + iVar20);
    uVar23 = (ulonglong)uVar8 & 0xff;
    lVar19 = (longlong)((int)(short)uVar8 >> 8);
    if ((uVar24 & 0xffffffff) < (uVar22 & 0xffffffff)) {
      uVar25 = *(char *)(param_2[3] + (int)uVar23) + lVar19;
    }
    else {
      uVar25 = *(char *)(param_2[4] + (int)uVar23) + lVar19;
    }
  }
  if (*(int *)((int)puVar11 + 0x14) != 0) {
    return 0xffffffffffffffff;
  }
  return ((((((uVar21 & 0xfffff) << 0xc | uVar24 & 0xffffffff) & 0xffffff) << 8 |
           uVar25 & 0xffffffff) & 0xffffff) << 1 | uVar18) << 7 | uVar23;
}


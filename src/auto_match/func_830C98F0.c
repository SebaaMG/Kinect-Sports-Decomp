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
extern int fn_830C77E8();
extern int fn_830C7BD0();
extern int fn_830C8648();
extern int fn_830C8D48();
extern unsigned int lbl_820FD978;
extern unsigned int lbl_820FD9D0;


undefined8
fn_830C98F0(int *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  short sVar8;
  int *piVar9;
  ulonglong *puVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  if ((*param_2 & 0x80000000) != 0) {
    *(undefined1 *)((int)param_2 + 5) = 0;
    fn_830C77E8();
    return 0;
  }
  if (param_5 == 0) {
    iVar17 = 0;
LAB_830c9abc:
    uVar13 = *param_2 >> 8 & 7;
    cVar7 = *(char *)(param_1[0x13c] + iVar17);
    *(char *)((int)param_2 + 5) = cVar7;
    if (uVar13 == 0) {
      uVar16 = fn_830C77E8();
    }
    else if (uVar13 == 1) {
      uVar16 = fn_830C7BD0();
    }
    else if (uVar13 == 2) {
      uVar16 = fn_830C8648();
    }
    else {
      uVar16 = fn_830C8D48(param_1,param_2,param_3,param_4,param_7);
    }
    if ((int)uVar16 != 0) {
      return uVar16;
    }
    if ((*(char *)((int)param_1 + 0x1b) != '\0') && (cVar7 != '\0')) {
      if (*(byte *)((int)param_1 + 0x4dd) == 0) {
        puVar10 = (ulonglong *)*param_1;
        lVar19 = 0;
        uVar21 = (ulonglong)*(uint *)(puVar10 + 1);
        uVar18 = uVar21 + 0x10;
        if (*(char *)((int)param_1 + 0x4e2) == '\0') {
          uVar20 = 3;
          if ((uVar18 & 0xffffffff) < 3) {
            do {
              if ((uVar18 & 0xffffffff) == 0) break;
              uVar20 = uVar20 - uVar18;
              *(int *)(puVar10 + 1) = (int)(uVar21 - uVar18);
              lVar19 = (ulonglong)
                       (uint)((int)(*puVar10 >> (0x40 - uVar18 & 0x7f)) << ((uint)uVar20 & 0x3f)) +
                       lVar19;
              *puVar10 = *puVar10 << (uVar18 & 0x7f);
              if ((longlong)(uVar21 - uVar18) < 0) {
                fn_82C4E5E8(puVar10);
              }
              uVar21 = (ulonglong)*(uint *)(puVar10 + 1);
              uVar18 = uVar21 + 0x10;
            } while ((uVar18 & 0xffffffff) < (uVar20 & 0xffffffff));
          }
          *(int *)(puVar10 + 1) = (int)(uVar21 - uVar20);
          lVar19 = (*puVar10 >> (0x40 - uVar20 & 0x7f) & 0xffffffff) + lVar19;
          *puVar10 = *puVar10 << (uVar20 & 0x7f);
          if ((longlong)(uVar21 - uVar20) < 0) {
            fn_82C4E5E8(puVar10);
          }
          if ((int)lVar19 == 7) {
            puVar10 = (ulonglong *)*param_1;
            uVar20 = 5;
            lVar19 = 0;
            uVar18 = (ulonglong)*(uint *)(puVar10 + 1);
            uVar21 = uVar18 + 0x10;
            if ((uVar21 & 0xffffffff) < 5) {
              do {
                if ((uVar21 & 0xffffffff) == 0) break;
                uVar20 = uVar20 - uVar21;
                *(int *)(puVar10 + 1) = (int)(uVar18 - uVar21);
                lVar19 = (ulonglong)
                         (uint)((int)(*puVar10 >> (0x40 - uVar21 & 0x7f)) << ((uint)uVar20 & 0x3f))
                         + lVar19;
                *puVar10 = *puVar10 << (uVar21 & 0x7f);
                if ((longlong)(uVar18 - uVar21) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                uVar18 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar21 = uVar18 + 0x10;
              } while ((uVar21 & 0xffffffff) < (uVar20 & 0xffffffff));
            }
            *(int *)(puVar10 + 1) = (int)(uVar18 - uVar20);
            uVar21 = (*puVar10 >> (0x40 - uVar20 & 0x7f) & 0xffffffff) + lVar19;
            *puVar10 = *puVar10 << (uVar20 & 0x7f);
            if ((longlong)(uVar18 - uVar20) < 0) {
              fn_82C4E5E8(puVar10);
            }
          }
          else {
            uVar21 = (ulonglong)*(byte *)(param_1 + 0x137) + lVar19;
          }
          *(char *)(param_2 + 1) = (char)((uVar21 & 0xffffffff) << 1) + -1;
        }
        else {
          uVar20 = 1;
          if ((uVar18 & 0xffffffff) == 0) {
            do {
              if ((uVar18 & 0xffffffff) == 0) break;
              uVar20 = uVar20 - uVar18;
              *(int *)(puVar10 + 1) = (int)(uVar21 - uVar18);
              lVar19 = (ulonglong)
                       (uint)((int)(*puVar10 >> (0x40 - uVar18 & 0x7f)) << ((uint)uVar20 & 0x3f)) +
                       lVar19;
              *puVar10 = *puVar10 << (uVar18 & 0x7f);
              if ((longlong)(uVar21 - uVar18) < 0) {
                fn_82C4E5E8(puVar10);
              }
              uVar21 = (ulonglong)*(uint *)(puVar10 + 1);
              uVar18 = uVar21 + 0x10;
            } while ((uVar18 & 0xffffffff) < (uVar20 & 0xffffffff));
          }
          uVar18 = *puVar10;
          *(int *)(puVar10 + 1) = (int)(uVar21 - uVar20);
          *puVar10 = uVar18 << (uVar20 & 0x7f);
          if ((longlong)(uVar21 - uVar20) < 0) {
            fn_82C4E5E8(puVar10);
          }
          if (((uVar18 >> (0x40 - uVar20 & 0x7f) & 0xffffffff) + lVar19 & 0xffffffff) == 0) {
            *(char *)(param_2 + 1) =
                 *(char *)(param_1 + 0x137) * '\x02' + *(char *)((int)param_1 + 0x4e1) + -1;
          }
          else {
            *(char *)(param_2 + 1) = *(char *)((int)param_1 + 0x4de) * '\x02' + -1;
          }
        }
      }
      else if ((*param_2 >> 0xc & (uint)*(byte *)((int)param_1 + 0x4dd) & 0xf) == 0) {
        *(char *)(param_2 + 1) =
             *(char *)(param_1 + 0x137) * '\x02' + *(char *)((int)param_1 + 0x4e1) + -1;
      }
      else {
        *(char *)(param_2 + 1) = *(char *)((int)param_1 + 0x4de) * '\x02' + -1;
      }
      if ((*(byte *)(param_2 + 1) == 0) || (0x3e < *(byte *)(param_2 + 1))) goto LAB_830c9aac;
    }
    if ((*(char *)((int)param_1 + 0x1d) != '\0') && (cVar7 != '\0')) {
      piVar9 = (int *)param_1[0x5a];
      puVar10 = (ulonglong *)*param_1;
      if (piVar9 == (int *)0x0) {
        uVar21 = 0;
        *(undefined4 *)((int)puVar10 + 0x14) = 3;
      }
      else {
        iVar17 = *piVar9;
        sVar8 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                                 0xffffffff) << 1) + iVar17);
        uVar21 = (ulonglong)sVar8;
        if (sVar8 < 0) {
          fn_82C4E470(puVar10);
          do {
            uVar18 = *puVar10;
            fn_82C4E470(puVar10,1);
            sVar8 = *(short *)((int)(((uVar21 - ((longlong)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff)
                                    << 1) + iVar17);
            uVar21 = (ulonglong)sVar8;
          } while (sVar8 < 0);
        }
        else {
          iVar17 = *(int *)(puVar10 + 1);
          iVar11 = (int)(uVar21 & 0xf);
          *puVar10 = *puVar10 << (uVar21 & 0xf);
          *(int *)(puVar10 + 1) = iVar17 - iVar11;
          if (iVar17 < iVar11) {
            do {
              pbVar12 = *(byte **)((int)puVar10 + 0xc);
              if (pbVar12 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                bVar1 = *pbVar12;
                bVar2 = pbVar12[1];
                bVar3 = pbVar12[2];
                bVar4 = pbVar12[3];
                bVar5 = pbVar12[4];
                bVar6 = pbVar12[5];
                iVar17 = *(int *)(puVar10 + 1);
                *(byte **)((int)puVar10 + 0xc) = pbVar12 + 6;
                *(int *)(puVar10 + 1) = iVar17 + 0x30;
                *puVar10 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 +
                              (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                            (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                           ((longlong)-iVar17 & 0x7fU)) + *puVar10;
                goto LAB_830c9f14;
              }
              iVar17 = fn_82C4E3B0(puVar10);
            } while (iVar17 == 1);
            uVar21 = (ulonglong)((int)sVar8 >> 4);
          }
          else {
LAB_830c9f14:
            uVar21 = (ulonglong)((int)sVar8 >> 4);
          }
        }
      }
      if (*(int *)(*param_1 + 0x14) != 0) goto LAB_830c9aac;
      uVar13 = *param_2;
      iVar17 = (int)((uVar21 & 0xffffffff) << 2);
      uVar14 = (uint)((((~uVar21 & 0xffffffff) >> 0x1f) + (ulonglong)(7 < uVar21) & 1) << 0x1c);
      *param_2 = uVar14 | uVar13 & 0xefffffff;
      uVar15 = (*(uint *)((int)&lbl_820FD978 + iVar17) & 7) << 0x18;
      *param_2 = uVar15 | uVar14 | uVar13 & 0xe8ffffff;
      *param_2 = (*(uint *)((int)&lbl_820FD9D0 + iVar17) & 3) << 0x14 |
                 uVar15 | uVar14 | uVar13 & 0xe0cfffff;
    }
    uVar16 = 0;
  }
  else {
    piVar9 = (int *)param_1[0x136];
    puVar10 = (ulonglong *)*param_1;
    if (piVar9 == (int *)0x0) {
      iVar17 = 0;
      *(undefined4 *)((int)puVar10 + 0x14) = 3;
    }
    else {
      iVar11 = *piVar9;
      sVar8 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar11);
      uVar21 = (ulonglong)sVar8;
      if (sVar8 < 0) {
        fn_82C4E470(puVar10);
        do {
          uVar18 = *puVar10;
          fn_82C4E470(puVar10,1);
          sVar8 = *(short *)((int)(((uVar21 - ((longlong)uVar18 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar11);
          uVar21 = (ulonglong)sVar8;
          iVar17 = (int)sVar8;
        } while (sVar8 < 0);
      }
      else {
        iVar17 = *(int *)(puVar10 + 1);
        iVar11 = (int)(uVar21 & 0xf);
        *puVar10 = *puVar10 << (uVar21 & 0xf);
        *(int *)(puVar10 + 1) = iVar17 - iVar11;
        if (iVar17 < iVar11) {
          do {
            pbVar12 = *(byte **)((int)puVar10 + 0xc);
            if (pbVar12 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
              bVar1 = *pbVar12;
              bVar2 = pbVar12[1];
              bVar3 = pbVar12[2];
              bVar4 = pbVar12[3];
              bVar5 = pbVar12[4];
              bVar6 = pbVar12[5];
              iVar17 = *(int *)(puVar10 + 1);
              *(byte **)((int)puVar10 + 0xc) = pbVar12 + 6;
              *(int *)(puVar10 + 1) = iVar17 + 0x30;
              *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 +
                            (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5
                          ) * 0x100 + (ulonglong)bVar6 << ((longlong)-iVar17 & 0x7fU)) + *puVar10;
              goto LAB_830c9a58;
            }
            iVar17 = fn_82C4E3B0(puVar10);
          } while (iVar17 == 1);
          iVar17 = (int)sVar8 >> 4;
        }
        else {
LAB_830c9a58:
          iVar17 = (int)sVar8 >> 4;
        }
      }
    }
    iVar17 = iVar17 + 1;
    if (*(int *)(*param_1 + 0x14) == 0) goto LAB_830c9abc;
LAB_830c9aac:
    uVar16 = 1;
  }
  return uVar16;
}


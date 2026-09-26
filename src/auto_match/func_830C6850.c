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
extern int fn_830D8E88();


undefined8 fn_830C6850(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  short sVar8;
  int *piVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  longlong *plVar12;
  uint uVar14;
  int iVar15;
  ulonglong uVar13;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  char cVar22;
  int iVar24;
  ulonglong uVar23;
  int iVar25;
  
  cVar22 = *(char *)((int)param_1 + 0x1d);
  uVar21 = (uint)*(byte *)((int)param_1 + 0x22);
  uVar17 = (ulonglong)*(byte *)((int)param_2 + 5);
  uVar20 = *param_2 >> 0x14 & 3;
  if (cVar22 != '\0') {
    uVar21 = *param_2 >> 0x18 & 7;
  }
  uVar18 = 0;
  uVar23 = 0;
  do {
    uVar19 = uVar23;
    if ((uVar17 & 1) == 0) {
      *(undefined1 *)((int)param_2 + uVar18 + 8) = 0;
    }
    else {
      if (((*param_2 & 0x10000000) != 0) && (cVar22 == '\0')) {
        piVar9 = (int *)param_1[0x98];
        puVar10 = (ulonglong *)*param_1;
        if (piVar9 == (int *)0x0) {
          iVar24 = 0;
          *(undefined4 *)((int)puVar10 + 0x14) = 3;
        }
        else {
          iVar15 = *piVar9;
          sVar8 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                                   0xffffffff) << 1) + iVar15);
          uVar23 = (ulonglong)sVar8;
          if (sVar8 < 0) {
            fn_82C4E470(puVar10);
            do {
              uVar13 = *puVar10;
              fn_82C4E470(puVar10,1);
              sVar8 = *(short *)((int)(((uVar23 - ((longlong)uVar13 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar15);
              uVar23 = (ulonglong)sVar8;
              iVar24 = (int)sVar8;
            } while (sVar8 < 0);
          }
          else {
            iVar15 = *(int *)(puVar10 + 1);
            iVar24 = (int)(uVar23 & 0xf);
            *puVar10 = *puVar10 << (uVar23 & 0xf);
            *(int *)(puVar10 + 1) = iVar15 - iVar24;
            if (iVar15 < iVar24) {
              do {
                pbVar11 = *(byte **)((int)puVar10 + 0xc);
                if (pbVar11 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                  bVar6 = *pbVar11;
                  bVar1 = pbVar11[1];
                  bVar2 = pbVar11[2];
                  bVar3 = pbVar11[3];
                  bVar4 = pbVar11[4];
                  bVar5 = pbVar11[5];
                  iVar15 = *(int *)(puVar10 + 1);
                  *(byte **)((int)puVar10 + 0xc) = pbVar11 + 6;
                  *(int *)(puVar10 + 1) = iVar15 + 0x30;
                  *puVar10 = ((((((ulonglong)bVar6 * 0x100 + (ulonglong)bVar1) * 0x100 +
                                (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 +
                              (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                             ((longlong)-iVar15 & 0x7fU)) + *puVar10;
                  goto LAB_830c69c8;
                }
                iVar15 = fn_82C4E3B0(puVar10);
              } while (iVar15 == 1);
              iVar24 = (int)sVar8 >> 4;
            }
            else {
LAB_830c69c8:
              iVar24 = (int)sVar8 >> 4;
            }
          }
        }
        if (*(int *)(*param_1 + 0x14) != 0) {
          return 1;
        }
        uVar21 = (uint)*(byte *)((int)param_1 + iVar24 + 0x2ac);
        uVar20 = (uint)*(byte *)((int)param_1 + iVar24 + 0x2b4);
      }
      *(char *)((int)param_2 + uVar18 + 8) = (char)uVar21;
      if (uVar21 == 0) {
        iVar15 = *(int *)(param_3 + 0x14);
        uVar14 = fn_830D8E88(param_1,param_1[0x65],*(undefined1 *)(param_1 + 0x28),iVar15);
        if (uVar14 == 0xffffffff) {
          **(undefined1 **)(param_3 + 0x18) = 0;
          return 0xffffffffffffffff;
        }
        uVar19 = uVar19 | 1;
        cVar22 = '\0';
        *(uint *)(param_3 + 0x14) = (uVar14 & 0x7f) * 2 + iVar15;
        **(undefined1 **)(param_3 + 0x18) = (char)uVar14;
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
      }
      else {
        if (uVar21 == 4) {
          puVar10 = (ulonglong *)*param_1;
          iVar15 = *(int *)param_1[0x99];
          sVar8 = *(short *)((int)((*puVar10 >> 0x3a) << 1) + iVar15);
          uVar23 = (ulonglong)sVar8;
          if (sVar8 < 0) {
            fn_82C4E470(puVar10,6);
            do {
              uVar13 = *puVar10;
              fn_82C4E470(puVar10,1);
              sVar8 = *(short *)((int)(((uVar23 - ((longlong)uVar13 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar15);
              uVar23 = (ulonglong)sVar8;
              iVar24 = (int)sVar8;
            } while (sVar8 < 0);
          }
          else {
            iVar15 = *(int *)(puVar10 + 1);
            iVar24 = (int)(uVar23 & 0xf);
            *puVar10 = *puVar10 << (uVar23 & 0xf);
            *(int *)(puVar10 + 1) = iVar15 - iVar24;
            if (iVar15 < iVar24) {
              do {
                pbVar11 = *(byte **)((int)puVar10 + 0xc);
                if (pbVar11 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                  bVar6 = *pbVar11;
                  bVar1 = pbVar11[1];
                  bVar2 = pbVar11[2];
                  bVar3 = pbVar11[3];
                  bVar4 = pbVar11[4];
                  bVar5 = pbVar11[5];
                  iVar15 = *(int *)(puVar10 + 1);
                  *(byte **)((int)puVar10 + 0xc) = pbVar11 + 6;
                  *(int *)(puVar10 + 1) = iVar15 + 0x30;
                  *puVar10 = ((((((ulonglong)bVar1 + (ulonglong)bVar6 * 0x100) * 0x100 +
                                (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 +
                              (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                             ((longlong)-iVar15 & 0x7fU)) + *puVar10;
                  goto LAB_830c6b6c;
                }
                iVar15 = fn_82C4E3B0(puVar10);
              } while (iVar15 == 1);
              iVar24 = (int)sVar8 >> 4;
            }
            else {
LAB_830c6b6c:
              iVar24 = (int)sVar8 >> 4;
            }
          }
          uVar14 = iVar24 + 1;
          if (*(int *)(*param_1 + 0x14) != 0) {
            return 1;
          }
        }
        else {
          uVar14 = uVar20;
          if ((cVar22 == '\0') && ((*param_2 & 0x10000000) == 0)) {
            plVar12 = (longlong *)*param_1;
            lVar16 = *plVar12;
            uVar14 = *(uint *)(plVar12 + 1);
            *plVar12 = lVar16 << 1;
            *(int *)(plVar12 + 1) = (int)((ulonglong)uVar14 - 1);
            if ((longlong)((ulonglong)uVar14 - 1) < 0) {
              fn_82C4E5E8();
            }
            if (lVar16 < 0) {
              plVar12 = (longlong *)*param_1;
              lVar16 = *plVar12;
              uVar14 = *(uint *)(plVar12 + 1);
              *plVar12 = lVar16 << 1;
              *(int *)(plVar12 + 1) = (int)((ulonglong)uVar14 - 1);
              if ((longlong)((ulonglong)uVar14 - 1) < 0) {
                fn_82C4E5E8();
              }
              uVar14 = 1 - (int)(lVar16 >> 0x3f);
            }
            else {
              uVar14 = 3;
            }
          }
        }
        bVar6 = *(byte *)((int)param_1 + uVar14 + 0x140);
        uVar19 = (longlong)(int)(uVar21 << 4 | uVar14) | uVar19;
        if (bVar6 == 0) {
          return 1;
        }
        iVar15 = param_1[0x65];
        iVar24 = *(int *)(param_3 + 0x18);
        iVar25 = 0;
        uVar23 = (ulonglong)*(uint *)(param_3 + 0x14);
        uVar7 = *(undefined1 *)((int)param_1 + uVar21 + 0xa0);
        if (bVar6 != 0) {
          do {
            uVar13 = fn_830D8E88(param_1,iVar15,uVar7,uVar23);
            if ((int)uVar13 == -1) {
              *(undefined1 *)(iVar25 + iVar24) = 0;
            }
            else {
              *(char *)(iVar25 + iVar24) = (char)uVar13;
              uVar23 = (uVar13 & 0x7f) * 2 + uVar23;
            }
            iVar25 = iVar25 + 1;
          } while (iVar25 < (int)(uint)bVar6);
        }
        if ((int)uVar23 == -1) {
          return 1;
        }
        *(int *)(param_3 + 0x14) = (int)uVar23;
        cVar22 = '\0';
        *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + (uint)bVar6;
      }
    }
    uVar18 = uVar18 + 1;
    uVar17 = uVar17 >> 1;
    uVar23 = uVar19 << 8;
    if (5 < uVar18) {
      *(ulonglong *)(*(int *)(param_3 + 4) * 8 + param_1[0x148]) =
           ((ulonglong)*(byte *)(param_2 + 1) << 8 | (ulonglong)(*param_2 >> 2) & 0xc0 |
           (ulonglong)*(byte *)((int)param_2 + 5)) << 0x30 | uVar19 & 0xffffffffffffff;
      return 0;
    }
  } while( true );
}


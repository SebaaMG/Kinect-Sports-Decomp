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
extern unsigned int *auStack_d0;
extern int fn_82ACB180();
extern int fn_82AEFC28();
extern int fn_82B20868();
extern int fn_82B208B8();
extern unsigned int iStack_a0;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int iStack_b8;
extern unsigned int iStack_c0;
extern unsigned int iStack_c8;
extern unsigned int uStack_a4;
extern unsigned int uStack_b4;
extern unsigned int uStack_c4;


longlong fn_82B241A0(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint auStack_d0 [2];
  int iStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_b8;
  uint uStack_b4;
  int iStack_b0;
  int iStack_a8;
  uint uStack_a4;
  int iStack_a0;
  
  lVar6 = 0;
  for (uVar11 = *(uint *)(param_2 + 4); ((uVar11 & 1) == 0 && (uVar11 != 0));
      uVar11 = *(uint *)((uVar11 & 0xfffffffe) + 4)) {
    lVar6 = (ulonglong)*(uint *)(uVar11 + 8) + lVar6;
  }
  lVar14 = 0;
  uVar13 = 0;
  fn_82AEFC28(auStack_d0,lVar6,0xffffffff82af07e8,param_1);
  uVar12 = 0;
  iStack_a0 = 0;
  uStack_a4 = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
  uVar11 = auStack_d0[0];
  iStack_a8 = param_2;
LAB_82b24234:
  do {
    do {
      if ((uStack_a4 == 0) || (bVar2 = false, iStack_a0 == *(int *)(uStack_a4 + 8))) {
        bVar2 = true;
      }
      if (bVar2) {
        uVar12 = lVar14 - 1;
        iVar15 = 0;
        if ((uVar12 & 0xffffffff) < (uVar13 & 0xffffffff)) {
          uVar20 = uVar13 - uVar12;
        }
        else {
          uVar20 = 0;
          lVar14 = (uVar12 - uVar13) + lVar14;
        }
        bVar2 = false;
        iStack_b0 = 0;
        uVar21 = 0;
        uStack_b4 = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
        iStack_b8 = param_2;
        while( true ) {
          if ((uStack_b4 == 0) || (bVar3 = false, iStack_b0 == *(int *)(uStack_b4 + 8))) {
            bVar3 = true;
          }
          if (bVar3) break;
          piVar4 = (int *)fn_82ACB180(&iStack_b8);
          uVar21 = uVar21 + 1;
          puVar10 = (uint *)(uVar11 + 4);
          if ((~uVar11 & 1) == 0) {
            puVar10 = auStack_d0;
          }
          if ((*(uint *)((uVar21 >> 3 & 0x1ffffffc) + (int)puVar10) >> (uVar21 & 0x1f) & 1) == 0) {
            uVar12 = 0;
            for (uVar17 = *(uint *)(*piVar4 + 4); ((uVar17 & 1) == 0 && (uVar17 != 0));
                uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 4)) {
              uVar12 = *(uint *)(uVar17 + 8) + uVar12;
            }
            if (2 < (uVar12 & 0xffffffff)) {
              lVar6 = uVar12 - 2;
              lVar14 = lVar6 + lVar14;
              do {
                uVar12 = uVar12 - 1;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
            if ((uVar12 & 0xffffffff) == 2) {
              iVar15 = iVar15 + 1;
              lVar14 = lVar14 + 1;
            }
            if (bVar2) {
              if ((uVar20 & 0xffffffff) == 0) {
                if (iVar15 == 0) {
                  lVar14 = lVar14 + 1;
                }
                else {
                  iVar15 = iVar15 + -1;
                }
              }
              else {
                uVar20 = uVar20 - 1;
              }
            }
            bVar2 = true;
          }
        }
        return lVar14;
      }
      piVar4 = (int *)fn_82ACB180(&iStack_a8);
      iVar15 = *piVar4;
      uVar12 = uVar12 + 1;
      puVar10 = (uint *)(uVar11 + 4);
      if ((~uVar11 & 1) == 0) {
        puVar10 = auStack_d0;
      }
    } while ((*(uint *)(((uint)((uVar12 & 0xffffffff) >> 3) & 0x1ffffffc) + (int)puVar10) >>
              ((uint)uVar12 & 0x1f) & 1) != 0);
    cVar5 = fn_82B20868(iVar15);
    if (cVar5 == '\0') {
LAB_82b24400:
      cVar5 = fn_82B208B8(iVar15);
      if (cVar5 != '\0') {
        uVar21 = *(uint *)(iVar15 + 4);
        iVar15 = 1;
        uVar17 = -(uint)((uVar21 & 1) == 0) & uVar21;
        uVar21 = -(uint)((uVar21 & 1) == 0) & uVar21;
        do {
          uVar18 = 0;
          iStack_b0 = 0;
          uVar19 = 0;
          uStack_b4 = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
          iStack_b8 = param_2;
          do {
            do {
              do {
                if ((uStack_b4 == 0) || (bVar2 = false, iStack_b0 == *(int *)(uStack_b4 + 8))) {
                  bVar2 = true;
                }
                if (bVar2) goto LAB_82b24570;
                piVar4 = (int *)fn_82ACB180(&iStack_b8);
                iVar16 = *piVar4;
                uVar19 = uVar19 + 1;
                puVar10 = (uint *)(uVar11 + 4);
                if ((~uVar11 & 1) == 0) {
                  puVar10 = auStack_d0;
                }
                uVar8 = uVar19 >> 3 & 0x1ffffffc;
              } while (((*(uint *)(uVar8 + (int)puVar10) >> (uVar19 & 0x1f) & 1) != 0) ||
                      (cVar5 = fn_82B208B8(iVar16), cVar5 == '\0'));
              uVar7 = *(uint *)(iVar16 + 4);
              uVar9 = -(uint)((uVar7 & 1) == 0) & uVar7;
              uVar7 = -(uint)((uVar7 & 1) == 0) & uVar7;
            } while (((*(int *)(uVar9 + 0x10) != *(int *)(uVar17 + 0x10)) ||
                     (((*(int *)(uVar9 + 0x18) != *(int *)(uVar17 + 0x18) ||
                       (*(int *)(uVar7 + 0x1c) != *(int *)(uVar21 + 0x1c))) ||
                      (*(int *)(uVar7 + 0x24) != *(int *)(uVar21 + 0x24))))) ||
                    (uVar18 = uVar18 + 1, iVar15 != 2));
            puVar10 = (uint *)(uVar11 + 4);
            if ((~uVar11 & 1) == 0) {
              puVar10 = auStack_d0;
            }
            *(uint *)(uVar8 + (int)puVar10) = 1 << (uVar19 & 0x1f) | *(uint *)(uVar8 + (int)puVar10)
            ;
            uVar11 = auStack_d0[0];
          } while (uVar18 != 4);
LAB_82b24570:
          if (uVar18 < 2) goto LAB_82b24234;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
        lVar14 = lVar14 + 1;
        if (uVar18 == 2) {
          uVar13 = uVar13 + 1;
        }
      }
      goto LAB_82b24234;
    }
    bVar2 = false;
    iVar16 = 1;
    uVar21 = -(uint)((*(uint *)(iVar15 + 4) & 1) == 0) & *(uint *)(iVar15 + 4);
    do {
      uVar17 = 0;
      iStack_c0 = 0;
      uVar18 = 0;
      uStack_c4 = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
      iStack_c8 = param_2;
      do {
        do {
          if ((uStack_c4 == 0) || (bVar3 = false, iStack_c0 == *(int *)(uStack_c4 + 8))) {
            bVar3 = true;
          }
          if (bVar3) goto LAB_82b243d8;
          piVar4 = (int *)fn_82ACB180(&iStack_c8);
          iVar1 = *piVar4;
          uVar18 = uVar18 + 1;
          puVar10 = (uint *)(uVar11 + 4);
          if ((~uVar11 & 1) == 0) {
            puVar10 = auStack_d0;
          }
          uVar19 = uVar18 >> 3 & 0x1ffffffc;
        } while (((((*(uint *)(uVar19 + (int)puVar10) >> (uVar18 & 0x1f) & 1) != 0) ||
                  (cVar5 = fn_82B20868(iVar1), cVar5 == '\0')) ||
                 (uVar8 = *(uint *)(iVar1 + 4), uVar8 = -(uint)((uVar8 & 1) == 0) & uVar8,
                 *(int *)(uVar21 + 0x10) != *(int *)(uVar8 + 0x10))) ||
                ((*(int *)(uVar21 + 0x18) != *(int *)(uVar8 + 0x18) ||
                 (uVar17 = uVar17 + 1, iVar16 != 2))));
        puVar10 = (uint *)(uVar11 + 4);
        if ((~uVar11 & 1) == 0) {
          puVar10 = auStack_d0;
        }
        *(uint *)(uVar19 + (int)puVar10) = 1 << (uVar18 & 0x1f) | *(uint *)(uVar19 + (int)puVar10);
        uVar11 = auStack_d0[0];
      } while (uVar17 != 4);
LAB_82b243d8:
      if (uVar17 < 3) break;
      iVar16 = iVar16 + 1;
      bVar2 = true;
    } while (iVar16 < 3);
    if (!bVar2) goto LAB_82b24400;
    lVar14 = lVar14 + 1;
  } while( true );
}


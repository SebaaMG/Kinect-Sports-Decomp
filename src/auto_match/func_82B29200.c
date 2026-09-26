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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD2020();
extern int fn_82B25E80();
extern int fn_82B8AE98();
extern int fn_82B8F170();
extern int fn_82B8F1B0();


ulonglong fn_82B29200(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar6;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  
  uVar9 = 0;
  do {
    iVar5 = *(int *)(param_2 + 8);
    uVar13 = 0;
    if ((iVar5 == 0) || (bVar7 = true, *(int *)(iVar5 + 0xc) == 0)) {
      bVar7 = false;
    }
    if (((!bVar7) && (iVar5 != 0)) && (uVar11 = *(uint *)(iVar5 + 4), uVar11 != 0)) {
      if ((*(int *)(uVar11 + 0xc) == 0) || (bVar7 = true, *(int *)(*(int *)(uVar11 + 0xc) + 8) == 0)
         ) {
        bVar7 = false;
      }
      if ((!bVar7) && (cVar6 = fn_82B25E80(param_1,uVar11,param_2,1), cVar6 != '\0')) {
        uVar13 = 1;
        param_2 = uVar11;
      }
    }
    piVar12 = *(int **)(param_2 + 0xc);
    if ((piVar12 == (int *)0x0) || (bVar7 = true, piVar12[2] == 0)) {
      bVar7 = false;
    }
    if (((!bVar7) && (piVar12 != (int *)0x0)) && (iVar5 = *piVar12, iVar5 != 0)) {
      if ((*(int *)(iVar5 + 8) == 0) || (bVar7 = true, *(int *)(*(int *)(iVar5 + 8) + 0xc) == 0)) {
        bVar7 = false;
      }
      if ((!bVar7) && (cVar6 = fn_82B25E80(param_1,param_2,iVar5,1), cVar6 != '\0')) {
        uVar13 = 1;
      }
    }
    if (param_2 != (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4))) {
      puVar10 = (uint *)(param_2 + 0x30);
      if (((((*(uint *)(param_2 + 0x30) >> 0x13 & 1) == 0) && ((*(uint *)(param_2 + 0x14) & 1) != 0)
           ) && ((*(uint *)(param_2 + 0x1c) & 1) != 0)) && ((*(uint *)(param_2 + 0x24) & 1) != 0)) {
        puVar8 = *(uint **)(param_2 + 0xc);
        if ((puVar8 == (uint *)0x0) || (bVar7 = true, puVar8[2] == 0)) {
          bVar7 = false;
        }
        if (bVar7) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        uVar11 = 0;
        if (puVar8 != (uint *)0x0) {
          uVar11 = *puVar8;
        }
        if (uVar11 != param_2) {
          if (uVar11 != 0) {
            if (((*(uint *)(param_2 + 0x30) >> 0x15 & 1) != 0) &&
               ((*(uint *)(uVar11 + 0x30) >> 0x15 & 1) != 0)) goto LAB_82b295c4;
            piVar12 = (int *)(param_2 + 8);
            iVar5 = *(int *)(param_2 + 8);
            while (iVar5 != 0) {
              iVar3 = *(int *)(iVar5 + 4);
              for (puVar8 = *(uint **)(iVar3 + 0xc); puVar8 != (uint *)0x0;
                  puVar8 = (uint *)puVar8[2]) {
                if (uVar11 == *puVar8) {
                  bVar7 = true;
                  goto LAB_82b29410;
                }
              }
              bVar7 = false;
LAB_82b29410:
              if (bVar7) {
                fn_82B8F1B0(iVar3,param_2,param_1);
              }
              else {
                fn_82B8F170(iVar3,iVar5,uVar11);
              }
              iVar3 = fn_82AD2020(param_1,iVar3);
              if (iVar3 != 0) {
                uVar1 = *(uint *)(iVar3 + 8);
                iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
                puVar8 = (uint *)(iVar4 + iVar3 + -0x10);
                if (*puVar8 == param_2) {
                  *puVar8 = uVar11;
                }
                if (bVar7) {
                  uVar1 = *(uint *)(iVar3 + 8) >> 7 & 0x7f;
                  if (uVar1 == 0x57) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0xdac,0xffffffff820d7f64);
                  }
                  if (uVar1 == 0x5a) {
                    fn_82B8AE98(param_1,iVar3);
                  }
                }
              }
              if (*piVar12 == iVar5) {
                piVar12 = (int *)(iVar5 + 0xc);
              }
              iVar5 = *piVar12;
            }
            for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
                uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
              if ((*(int *)(uVar1 + 0xc) == 0) ||
                 (bVar7 = true, *(int *)(*(int *)(uVar1 + 0xc) + 8) == 0)) {
                bVar7 = false;
              }
              if ((!bVar7) && (iVar5 = fn_82AD2020(param_1,uVar1), iVar5 != 0)) {
                uVar2 = *(uint *)(iVar5 + 8);
                iVar3 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
                puVar8 = (uint *)(iVar3 + iVar5 + -0x10);
                if (*puVar8 == param_2) {
                  *puVar8 = uVar11;
                }
              }
            }
            fn_82B8F1B0(param_2,uVar11,param_1);
          }
          if ((*puVar10 >> 0x15 & 1) != 0) {
            *(uint *)(uVar11 + 0x30) = *(uint *)(uVar11 + 0x30) | 0x200000;
          }
          puVar8 = (uint *)(param_2 & 0xfffffffe);
          uVar13 = 1;
          *(uint *)(puVar8[1] & 0xfffffffe) = *puVar8;
          *(uint *)(*puVar8 & 0xfffffffe) = puVar8[1];
          *(uint *)(param_2 + 0x50) = uVar11;
          *puVar10 = *puVar10 | 0x400000;
          param_2 = uVar11;
        }
      }
    }
LAB_82b295c4:
    uVar9 = uVar9 | uVar13;
    if ((uVar13 == 0) || (param_2 == 0)) {
      return uVar9;
    }
  } while( true );
}


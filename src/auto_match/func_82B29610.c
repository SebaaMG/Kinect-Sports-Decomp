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
extern int fn_82ABE0E8();
extern int fn_82B170D8();
extern int fn_82B17130();
extern int fn_82B17520();
extern int fn_82B175C8();
extern int fn_82B26678();
extern int fn_82B268A0();
extern int fn_82B28C98();
extern int fn_82B8D5B0();
extern int fn_82B8DEE8();


byte fn_82B29610(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar7;
  int iVar5;
  char cVar8;
  int iVar6;
  uint uVar9;
  byte bVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar14;
  longlong lVar13;
  
  bVar10 = 0;
  bVar4 = false;
  for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    if ((*(uint *)(uVar1 + 0x30) >> 0x13 & 1) != 0) {
      for (iVar5 = *(int *)(uVar1 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
        if ((*(uint *)(*(int *)(iVar5 + 4) + 0x24) & 1) == 0) {
          iVar6 = (*(uint *)(*(int *)(iVar5 + 4) + 0x20) & 0xfffffffe) - 0x28;
        }
        else {
          iVar6 = 0;
        }
        if ((*(uint *)(iVar6 + 8) & 0x3f80) != 0x2b80) {
          bVar7 = fn_82B26678(param_1,iVar6);
          piVar14 = (int *)(*(int *)(uVar1 + 0x74) + 0x10);
          bVar10 = bVar7 | bVar10;
          if (*(int *)(*(int *)(uVar1 + 0x74) + 0x10) != 0) {
            for (; piVar14 != (int *)0x0; piVar14 = (int *)piVar14[1]) {
              if (((*(uint *)(*piVar14 + 0x30) >> 0x16 & 1) == 0) &&
                 ((*(uint *)(*piVar14 + 0x30) >> 0x14 & 1) != 0)) {
                bVar7 = fn_82B26678(param_1,iVar6);
                bVar10 = bVar7 | bVar10;
              }
            }
          }
        }
      }
    }
    for (iVar5 = *(int *)(uVar1 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
      uVar2 = (ulonglong)*(uint *)(uVar1 + 0x30) & 0x7ffff;
      if ((*(uint *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar5 + 4) + 0x28)) &
          1 << ((uint)uVar2 & 0x1f)) != 0) {
        bVar4 = true;
        break;
      }
    }
  }
  if (((bVar4) || ((*(uint *)(param_1 + 0x28) & 0x102084) != 0)) ||
     ((*(uint *)(param_1 + 0x2c) & 0x200) != 0)) {
    for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
      for (uVar9 = *(uint *)(uVar1 + 0x1c); ((uVar9 & 1) == 0 && (uVar9 != 0));
          uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 0x28)) {
        if ((*(uint *)(uVar9 + 8) & 0x3f80) == 0x3b80) {
          for (iVar5 = *(int *)(uVar9 + 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
            iVar6 = *(int *)(iVar5 + 0x10);
            if (iVar6 != 0) {
              if ((*(uint *)(iVar6 + 8) & 0x3f80) == 0x3b00) {
                iVar6 = *(int *)(*(int *)(iVar6 + 0x30) + 0xc);
                if ((*(uint *)(iVar6 + 8) & 0x3f80) != 0x1b80) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                fn_82B8D5B0(param_1,*(undefined4 *)(iVar6 + 0x2c),0);
              }
              else {
                fn_82B8DEE8(param_1,iVar5);
              }
            }
          }
          bVar7 = fn_82B268A0(param_1,uVar9);
          bVar10 = bVar7 | bVar10;
        }
        uVar12 = *(uint *)(uVar9 + 8) >> 7 & 0x7f;
        if (((((uVar12 == 0x56) || (uVar12 == 0x57)) || (uVar12 == 0x59)) ||
            ((uVar12 == 0x5a || (uVar12 == 0x54)))) || (bVar3 = false, uVar12 == 0x55)) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar12 = *(uint *)(uVar9 + 8);
          iVar5 = fn_82ABDD90(param_1,uVar12 >> 7 & 0x7f,uVar12 >> 0x13 & 7,uVar12 >> 0xe & 7);
          iVar5 = iVar5 + (uVar9 - 0x10);
          if ((*(uint *)(iVar5 + 8) & 3) != 0) {
            fn_82B8D5B0(param_1,*(uint *)(iVar5 + 4) & 0xfffffffc,0);
            bVar7 = fn_82B268A0(param_1,uVar9);
            bVar10 = bVar7 | bVar10;
          }
        }
        iVar5 = fn_82B17130(uVar9,param_1);
        if (iVar5 != 0) {
          uVar12 = 0;
          if (*(int *)(iVar5 + 4) != 0) {
            puVar11 = (undefined4 *)(iVar5 + 4);
            do {
              puVar11 = puVar11 + 1;
              fn_82B8D5B0(param_1,*puVar11,0);
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(iVar5 + 4));
          }
          bVar7 = fn_82B268A0(param_1,uVar9);
          bVar10 = bVar7 | bVar10;
        }
        cVar8 = fn_82B170D8(uVar9);
        if (cVar8 != '\0') {
          if (((*(uint *)(uVar9 + 8) & 0x3f80) != 0x3000) ||
             (bVar3 = true, (*(uint *)(uVar9 + 8) & 0x380000) < 0x80001)) {
            bVar3 = false;
          }
          iVar5 = *(int *)((0xc - (uint)!bVar3) * 4 + uVar9);
          cVar8 = fn_82B175C8(param_1,uVar9,*(undefined4 *)(iVar5 + 0xc),0);
          if (cVar8 == '\0') {
            fn_82B8D5B0(param_1,iVar5,0);
            bVar7 = fn_82B268A0(param_1,uVar9);
            bVar10 = bVar7 | bVar10;
          }
        }
        if ((*(uint *)(uVar9 + 8) & 0x3f80) == 0x3380) {
          iVar5 = fn_82ABDD90(param_1,0x67,*(uint *)(uVar9 + 8) >> 0x13 & 7,0);
          iVar5 = *(int *)(iVar5 + (uVar9 - 4));
          if ((5 < iVar5) && (iVar5 < 0xf)) {
            puVar11 = (undefined4 *)(uVar9 + 0x28);
            for (uVar12 = 0; uVar12 < (*(uint *)(uVar9 + 8) >> 0x13 & 7); uVar12 = uVar12 + 1) {
              puVar11 = puVar11 + 1;
              fn_82B8D5B0(param_1,*puVar11,0);
            }
            bVar7 = fn_82B268A0(param_1,uVar9);
            bVar10 = bVar7 | bVar10;
          }
        }
      }
      if (bVar4) {
        iVar5 = *(int *)(uVar1 + 8);
LAB_82b29a80:
        if (iVar5 != 0) {
          uVar2 = (ulonglong)*(uint *)(uVar1 + 0x30) & 0x7ffff;
          if ((*(uint *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar5 + 4) + 0x28)) &
              1 << ((uint)uVar2 & 0x1f)) == 0) goto code_r0x82b29ab8;
          fn_82B28C98(param_1,uVar1,0x10);
          uVar9 = *(uint *)(param_1 + 4);
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
          for (; ((uVar9 & 1) == 0 && (uVar9 != 0)); uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 4)) {
            if ((*(uint *)(uVar9 + 0x30) >> 0x1e & 1) != 0) {
              for (piVar14 = *(int **)(uVar9 + 0xc); piVar14 != (int *)0x0;
                  piVar14 = (int *)piVar14[2]) {
                if ((*(uint *)(*piVar14 + 0x30) >> 0x1e & 1) == 0) {
                  if ((*(uint *)(uVar9 + 0x24) & 1) == 0) {
                    uVar12 = *(uint *)(uVar9 + 0x20) & 0xfffffffe;
                    if ((uVar12 - 0x28 != 0) && ((*(uint *)(uVar12 - 0x20) & 0x3f80) == 0x2d00)) {
                      fn_82B8D5B0(param_1,*(undefined4 *)(uVar12 + 4),0);
                      bVar7 = fn_82B268A0(param_1,uVar12 - 0x28);
                      bVar10 = bVar7 | bVar10;
                    }
                  }
                  break;
                }
              }
            }
          }
          for (uVar9 = *(uint *)(param_1 + 4); ((uVar9 & 1) == 0 && (uVar9 != 0));
              uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 4)) {
            if ((*(uint *)(uVar9 + 0x30) >> 0x1e & 1) != 0) {
              *(uint *)(uVar9 + 0x30) = *(uint *)(uVar9 + 0x30) & 0xbfffffff;
            }
          }
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -8;
        }
      }
    }
  }
  do {
    bVar4 = false;
    for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
      for (piVar14 = *(int **)(uVar1 + 0xc); piVar14 != (int *)0x0; piVar14 = (int *)piVar14[2]) {
        iVar5 = *piVar14;
        if ((*(uint *)(iVar5 + 0x30) >> 0x13 & 1) != 0) {
          if ((*(uint *)(uVar1 + 0x24) & 1) == 0) {
            lVar13 = ((ulonglong)*(uint *)(uVar1 + 0x20) & 0xfffffffe) - 0x28;
          }
          else {
            lVar13 = 0;
          }
          iVar6 = fn_82ABE0E8(lVar13,param_1);
          if (iVar6 == 5) {
            uVar12 = *(uint *)(uVar1 + 0x30);
            uVar9 = uVar1;
            while (((uVar12 >> 0x13 & 1) == 0 && (uVar9 = *(uint *)(uVar9 + 0x34), uVar9 != 0))) {
              uVar12 = *(uint *)(uVar9 + 0x30);
            }
            uVar12 = 1;
            if ((uVar9 != 0) && (uVar12 = (*(uint *)(uVar9 + 0x78) & 7) + 1, 4 < uVar12)) {
              fn_82B17520(param_1,lVar13);
              bVar10 = 1;
              uVar12 = 4;
            }
            if ((*(uint *)(iVar5 + 0x78) & 7) < uVar12) {
              bVar4 = true;
              *(uint *)(iVar5 + 0x78) = uVar12 & 7 | *(uint *)(iVar5 + 0x78) & 0xfffffff8;
            }
          }
          break;
        }
      }
    }
    if (!bVar4) {
      return bVar10;
    }
  } while( true );
code_r0x82b29ab8:
  iVar5 = *(int *)(iVar5 + 0xc);
  goto LAB_82b29a80;
}


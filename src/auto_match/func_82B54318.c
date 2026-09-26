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
extern unsigned int *auStack_78;
extern int fn_82AA66A8();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD2128();
extern int fn_82B4A218();
extern int fn_82B4B9A8();
extern int fn_82B54048();
extern int fn_82B541B8();
extern int fn_82B841E8();
extern int fn_82B89CA0();
extern unsigned int uStack_80;


void fn_82B54318(int param_1,int param_2,uint param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar5;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uStack_80;
  undefined1 auStack_78 [120];
  
  iVar1 = *(int *)(param_2 + 4);
  iVar13 = *(int *)(iVar1 + 0x2c);
  if ((iVar13 != 0) && (*(int *)(iVar13 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  do {
    if (iVar13 == 0) {
      if (param_4 != '\0') {
        uVar9 = *(uint *)(*(int *)(param_1 + 0x234) + 0x1c);
        if (((uVar9 & 1) == 0) && (uVar8 = 0, uVar9 != 0)) {
          do {
            uVar16 = uVar8;
            if (((*(uint *)(uVar9 + 8) & 0x3f80) == 0x3000) && (uVar16 = uVar9, uVar8 != 0)) {
              fn_82AD2128(uVar9,3,uVar8,param_1);
            }
            uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 0x28);
          } while (((uVar9 & 1) == 0) && (uVar8 = uVar16, uVar9 != 0));
          if (uVar16 != 0) {
            iVar10 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                       (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,0x75,0,0);
            fn_82AD2128(iVar10,3,uVar16,param_1);
            iVar1 = *(int *)(param_1 + 0x234);
            iVar13 = *(int *)(iVar1 + 0x68);
            if (iVar13 != 0) {
              fn_82AD2128(iVar10,3,iVar13,param_1);
            }
            *(int *)(iVar1 + 0x68) = iVar10;
            *(uint *)(iVar10 + 8) = *(uint *)(iVar10 + 8) | 0x2000000;
          }
        }
      }
      return;
    }
    iVar10 = *(int *)(iVar13 + 8);
    if (*(int *)(iVar10 + 4) == 6) {
      if (*(int *)(iVar10 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar2 = *(int *)(iVar10 + 0x18);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar3 = *(int *)(iVar2 + 0x10);
      if (((iVar3 != *(int *)(iVar1 + 0x10)) && (iVar3 != *(int *)(param_1 + 0x10))) &&
         (*(int *)(iVar2 + 0x14) != 0)) {
        if (param_4 == '\0') {
          iVar14 = iVar3 * 0x28 + *(int *)(param_1 + 0xc);
          *(uint *)(iVar14 + 4) = *(uint *)(iVar14 + 4) | 0x10000000;
        }
        uVar9 = *(uint *)(iVar2 + 0x2c);
        if ((uVar9 & 0x40) == 0) {
          if ((uVar9 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdac,0xffffffff820d8984);
          }
          fn_82B54048(param_1,iVar3,iVar10,iVar2,2,param_2);
          iVar10 = *(int *)(param_1 + 0xc);
          if ((*(uint *)(iVar2 + 0x2c) & 0x20) == 0) {
            iVar14 = iVar3 * 0x28;
            *(uint *)(iVar14 + iVar10) = *(uint *)(iVar14 + iVar10) & 0xfffffff8 | param_3 & 7;
            if ((param_4 != '\0') && ((*(uint *)(param_1 + 0x2c) & 0x40) == 0)) {
              puVar7 = (undefined8 *)
                       fn_82B4A218(*(undefined4 *)(param_1 + 0x234),iVar3,param_1);
              uVar9 = 0;
              uVar17 = 0;
              if (*(int *)(iVar2 + 0x14) != 0) {
                do {
                  fn_82B89CA0(&uStack_80,param_1,iVar3,uVar17);
                  *puVar7 = uStack_80;
                  uVar8 = fn_82B4B9A8(param_1,&uStack_80);
                  if ((*(uint *)(uVar8 + 8) & 0x3f80) == 0x180) {
                    uVar8 = *(uint *)(*(int *)(uVar8 + 0x2c) + 0xc);
                  }
                  if ((*(uint *)(uVar8 + 8) & 0x3f80) == 0x3880) {
                    if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
                      uVar16 = *(uint *)(param_1 + 0x218);
                      uVar12 = 0;
                      if (uVar16 != 0) {
                        puVar11 = (uint *)(param_1 + 0x15c);
                        do {
                          if (((uVar8 == puVar11[1]) && (uVar4 = *puVar11, (uVar4 & 0x1e0) == 0)) &&
                             (((uVar4 & 0x1f) == 0 || ((uVar4 & 0x1f) == 4)))) break;
                          uVar12 = uVar12 + 1;
                          puVar11 = puVar11 + 3;
                        } while (uVar12 < uVar16);
                      }
                      if (uVar12 < uVar16) {
                        iVar10 = (uVar12 + 0x1d) * 0xc;
                        *(uint *)(iVar10 + param_1) = *(uint *)(iVar10 + param_1) | 0x2000;
                        goto LAB_82b54660;
                      }
                    }
                    if (uVar9 == 0) {
                      uVar9 = fn_82B841E8(param_1,*(undefined4 *)(param_1 + 0x234),0,0x75,0,0)
                      ;
                      *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x2000000;
                    }
                    uVar5 = fn_82AD17B0(param_1,uVar8);
                    fn_82AD1978(uVar9,uVar5);
                  }
LAB_82b54660:
                  uVar17 = uVar17 + 1;
                  puVar7 = puVar7 + 1;
                } while ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 0x14));
                if (uVar9 != 0) {
                  iVar10 = *(int *)(param_1 + 0x234);
                  uVar9 = uVar9 & 0xfffffffe;
                  *(undefined4 *)(uVar9 + 0x28) = *(undefined4 *)(iVar10 + 0x1c);
                  *(uint *)((*(uint *)(iVar10 + 0x1c) & 0xfffffffe) + 0x24) = uVar9 + 0x28;
                  *(uint *)(uVar9 + 0x24) = iVar10 + 0x1cU | 1;
                  *(uint *)(iVar10 + 0x1c) = uVar9;
                  iVar14 = iVar14 + *(int *)(param_1 + 0xc);
                  *(uint *)(iVar14 + 4) = *(uint *)(iVar14 + 4) | 2;
                }
              }
            }
          }
          else {
            iVar14 = iVar3 * 0x28;
            if ((*(uint *)(iVar14 + iVar10 + 4) & 0x70) == 0x30) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c1);
            }
            *(uint *)(iVar14 + *(int *)(param_1 + 0xc)) =
                 *(uint *)(iVar14 + *(int *)(param_1 + 0xc)) & 0xfffffff8 | 2;
            if ((param_4 != '\0') && ((*(uint *)(iVar2 + 0x2c) & 0x10) != 0)) {
              iVar10 = fn_82B4A218(*(undefined4 *)(param_1 + 0x234),iVar3,param_1);
              uVar17 = 0;
              if (*(int *)(iVar2 + 0x14) != 0) {
                puVar15 = (undefined4 *)(iVar10 + -8);
                do {
                  puVar6 = (undefined4 *)fn_82B89CA0(auStack_78,param_1,iVar3,uVar17);
                  uVar17 = uVar17 + 1;
                  puVar15[2] = *puVar6;
                  puVar15[3] = puVar6[1];
                  puVar15 = puVar15 + 2;
                } while ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 0x14));
              }
              iVar14 = iVar14 + *(int *)(param_1 + 0xc);
              *(uint *)(iVar14 + 4) = *(uint *)(iVar14 + 4) | 2;
            }
          }
        }
        else {
          if ((uVar9 & 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          fn_82B541B8(param_1,iVar10);
          *(uint *)(iVar3 * 0x28 + *(int *)(param_1 + 0xc)) =
               *(uint *)(iVar3 * 0x28 + *(int *)(param_1 + 0xc)) | 0x80000000;
        }
      }
    }
    iVar13 = *(int *)(iVar13 + 0xc);
    if ((iVar13 != 0) && (*(int *)(iVar13 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
  } while( true );
}


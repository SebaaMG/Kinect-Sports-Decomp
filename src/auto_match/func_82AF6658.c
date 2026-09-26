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
extern int fn_82ADD158();
extern int fn_82ADD198();
extern int fn_82ADD570();
extern int fn_82ADD590();
extern int fn_82ADD810();
extern int fn_82ADE7E8();
extern int fn_82ADFFA8();
extern int fn_82AE0148();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82AF6658(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,char param_6
             )

{
  int iVar1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar2;
  int iVar8;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [36];
  
  piVar14 = (int *)(param_3 + 0x2c);
  uVar11 = 0;
  iVar4 = 0;
  for (uVar13 = 0; uVar13 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar13 = uVar13 + 1) {
    iVar6 = *(int *)(*(int *)((param_2 - param_3) + (int)piVar14) + 0xc);
    iVar7 = *(int *)(*piVar14 + 0xc);
    if (((*(uint *)(iVar6 + 8) >> 0x17 & 1) != 0) && ((*(uint *)(iVar7 + 8) >> 0x17 & 1) != 0)) {
      *(int *)((int)aiStack_a0 + iVar4) = iVar6;
      *(int *)((int)aiStack_90 + iVar4) = iVar7;
      uVar3 = fn_82ADD810(param_1);
      *(undefined4 *)((int)aiStack_b0 + iVar4) = uVar3;
      uVar3 = fn_82ADD810(param_1,iVar7);
      uVar11 = uVar11 + 1;
      *(undefined4 *)((int)aiStack_c0 + iVar4) = uVar3;
      iVar4 = iVar4 + 4;
    }
    piVar14 = piVar14 + 1;
  }
  uVar13 = uVar11;
  if (((*(uint *)(param_2 + 8) >> 0x17 & 1) != 0) && (param_6 == '\0')) {
    aiStack_a0[uVar11] = param_2;
    aiStack_90[uVar11] = param_3;
    iVar4 = fn_82ADD810(param_1,param_2);
    aiStack_b0[uVar11] = iVar4;
    iVar4 = fn_82ADD810(param_1,param_3);
    uVar13 = uVar11 + 1;
    aiStack_c0[uVar11] = iVar4;
  }
  uVar11 = 0;
  if (uVar13 != 0) {
    iVar4 = 0;
    do {
      iVar6 = *(int *)((int)aiStack_b0 + iVar4);
      iVar7 = *(int *)((int)aiStack_c0 + iVar4);
      if (iVar6 != iVar7) {
        iVar5 = 0;
        iVar12 = iVar7;
        if (uVar11 == 0) {
LAB_82af6800:
          iVar5 = fn_82ADE7E8(param_1);
          fn_82AE0148(param_1,iVar5,iVar6,0,0,0,0,param_5);
        }
        else {
          iVar8 = 0;
          uVar16 = uVar11;
          do {
            iVar1 = *(int *)(iVar8 + param_4);
            if (iVar1 != 0) {
              if ((*(int *)((int)aiStack_b0 + iVar8) == iVar6) ||
                 (*(int *)((int)aiStack_c0 + iVar8) == iVar6)) {
                iVar5 = iVar1;
              }
              if ((*(int *)((int)aiStack_b0 + iVar8) == iVar7) ||
                 (*(int *)((int)aiStack_c0 + iVar8) == iVar7)) {
                iVar12 = iVar1;
              }
            }
            iVar8 = iVar8 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          if (iVar5 == 0) goto LAB_82af6800;
          if (iVar5 == iVar12) goto LAB_82af69f4;
        }
        if (uVar11 != 0) {
          iVar8 = 0;
          uVar16 = uVar11;
          do {
            if ((((*(int *)((int)aiStack_b0 + iVar8) == iVar6) ||
                 (*(int *)((int)aiStack_c0 + iVar8) == iVar6)) ||
                (*(int *)((int)aiStack_b0 + iVar8) == iVar7)) ||
               ((*(int *)((int)aiStack_c0 + iVar8) == iVar7 || (*(int *)(iVar8 + param_4) == iVar12)
                ))) {
              *(int *)(iVar8 + param_4) = iVar5;
            }
            iVar8 = iVar8 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        *(int *)(iVar4 + param_4) = iVar5;
        iVar6 = fn_82ADD158(param_1,*(undefined4 *)((int)aiStack_a0 + iVar4));
        iVar7 = fn_82ADD158(param_1,*(undefined4 *)((int)aiStack_90 + iVar4));
        uVar16 = *(uint *)(iVar6 + 8) >> 1 & 0xf;
        while( true ) {
          if (uVar16 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = ((ulonglong)*(ushort *)(iVar6 + 0x12) - LZCOUNT(uVar16 & ~(uVar16 - 1))) + 0x1f
            ;
          }
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar2 = fn_82ADD198(param_1,uVar10);
          iVar8 = fn_82ADD590(param_1,uVar2);
          uVar15 = *(uint *)(iVar7 + 8) >> 1 & 0xf;
          while( true ) {
            if (uVar15 == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = ((ulonglong)*(ushort *)(iVar7 + 0x12) - LZCOUNT(uVar15 & ~(uVar15 - 1))) +
                       0x1f;
            }
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar2 = fn_82ADD198(param_1,uVar10);
            fn_82ADD570(param_1,*(undefined4 *)((iVar8 + 4) * 4 + iVar5),uVar2);
            uVar15 = uVar15 - (uVar15 & ~(uVar15 - 1));
          }
          uVar16 = uVar16 - (uVar16 & ~(uVar16 - 1));
        }
        cVar9 = fn_82ADFFA8(param_1,iVar5,iVar12,0,0,0,0);
        if (cVar9 == '\0') {
          return 0;
        }
        fn_82AE0148(param_1,iVar5,iVar12,0,0,0,0,param_5);
      }
LAB_82af69f4:
      uVar11 = uVar11 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar11 < uVar13);
  }
  return 1;
}


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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82954D90();
extern int fn_8297F1E8();
extern int fn_82F691F0();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_829A9DF0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint auStack_d0 [6];
  longlong lStack_b8;
  
  lVar6 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = fn_8297F1E8(param_1,param_2);
    if ((-1 < lVar3) &&
       (lVar3 = fn_82954D90(param_1,*(undefined4 *)(param_1 + 0x7c),
                                  *(undefined4 *)(param_1 + 0x38),0x200,0x42080,99), -1 < lVar3)) {
      uVar5 = 0;
      uVar8 = 0;
      auStack_d0[1] = 0xffffffff;
      auStack_d0[0] = 0xffffffff;
      uVar9 = 0;
      auStack_d0[4] = 0;
      auStack_d0[5] = 0;
      auStack_d0[2] = 0xffffffff;
      auStack_d0[3] = 0xffffffff;
      lStack_b8 = 0;
      if (*(uint *)(param_1 + 8) != 0) {
        iVar4 = 0;
        uVar7 = uVar5;
        do {
          iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
          iVar1 = *(int *)(iVar2 + 4);
          if ((((*(int *)(param_1 + 0x78) != iVar1) ||
               (uVar5 = *(int *)(iVar2 + 0xc) + 1, uVar5 <= uVar7)) &&
              (uVar5 = uVar7, *(int *)(param_1 + 0x88) == iVar1)) &&
             (uVar7 = *(int *)(iVar2 + 0xc) + 1, uVar8 < uVar7)) {
            uVar8 = uVar7;
          }
          if (*(int *)(param_1 + 0x84) == iVar1) {
            if (auStack_d0[4] < *(uint *)(iVar2 + 0xc)) {
              auStack_d0[4] = *(uint *)(iVar2 + 0xc);
            }
            if ((*(int *)(param_1 + 0x84) == iVar1) && (*(uint *)(iVar2 + 0xc) < auStack_d0[0])) {
              auStack_d0[0] = *(uint *)(iVar2 + 0xc);
            }
          }
          if (*(int *)(param_1 + 0xb4) == iVar1) {
            if (auStack_d0[5] < *(uint *)(iVar2 + 0xc)) {
              auStack_d0[5] = *(uint *)(iVar2 + 0xc);
            }
            if ((*(int *)(param_1 + 0xb4) == iVar1) && (*(uint *)(iVar2 + 0xc) < auStack_d0[1])) {
              auStack_d0[1] = *(uint *)(iVar2 + 0xc);
            }
          }
          if (*(int *)(param_1 + 0xb8) == iVar1) {
            if ((((U64)(lStack_b8) >> 0) & 0xFFFFFFFF) < *(uint *)(iVar2 + 0xc)) {
              lStack_b8 = (ulonglong)*(uint *)(iVar2 + 0xc) << 0x20;
            }
            if (*(int *)(param_1 + 0xb8) == iVar1) {
              if (*(uint *)(iVar2 + 0xc) < auStack_d0[2]) {
                auStack_d0[2] = *(uint *)(iVar2 + 0xc);
              }
            }
          }
          uVar9 = uVar9 + 1;
          iVar4 = iVar4 + 4;
          uVar7 = uVar5;
        } while (uVar9 < *(uint *)(param_1 + 8));
      }
      uVar9 = 0;
      do {
        if (*(uint *)((int)auStack_d0 + uVar9) != 0xffffffff) {
          lVar10 = ((ulonglong)*(uint *)((int)auStack_d0 + uVar9 + 0x10) -
                   (ulonglong)*(uint *)((int)auStack_d0 + uVar9)) + 1;
          lVar3 = fn_8265C940(lVar10,0x24810000);
          if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(lVar3,0,lVar10);
          }
          goto LAB_829aa254;
        }
        uVar9 = uVar9 + 4;
      } while (uVar9 < 0xc);
      lVar6 = fn_8265C940(uVar5 << 5,0x24810000);
      if (lVar6 == 0) {
LAB_829aa254:
        lVar3 = -0x7ff8fff2;
      }
      else if (uVar8 < 0x41) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar6,0,uVar5 << 5);
      }
    }
    fn_8265C990(lVar6,0x24810000);
    fn_8265C990(0,0x24810000);
    fn_8265C990(0,0x24810000);
    fn_8265C990(0,0x24810000);
  }
  return lVar3;
}


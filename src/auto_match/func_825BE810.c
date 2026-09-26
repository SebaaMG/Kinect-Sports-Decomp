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
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_8256BE68();
extern int fn_825BF4E0();
extern int fn_8265BC60();
extern int fn_827D50B8();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827D9720();
extern int fn_827DBA00();
extern int fn_82A1E810();
extern unsigned int iStack_80;
extern unsigned int iStack_a8;
extern unsigned int iStack_fc;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195D98;
extern unsigned int lbl_82195D9C;
extern unsigned int uStack_100;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_825BE810(int param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar4;
  longlong lVar3;
  uint uVar5;
  double dVar6;
  undefined4 uStack_100;
  int iStack_fc;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [24];
  int iStack_a8;
  undefined4 auStack_a0 [2];
  undefined1 auStack_98 [24];
  int iStack_80;
  
  uVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x44));
  iVar4 = (int)uVar2;
  if (iVar4 == 0x3e5) {
    return uVar2;
  }
  if (iVar4 == 0x3e4) {
LAB_825be974:
    iVar4 = (int)uVar2;
    if (iVar4 == 0x3e5) {
      return uVar2;
    }
    if (iVar4 == 0x3e4) {
      return uVar2;
    }
    if (iVar4 != 0) goto LAB_825beb64;
  }
  else {
    if (*(int *)(param_1 + 0x1b0) == 0) {
      if (iVar4 == 0) {
        uStack_100 = 0;
        iStack_fc = 0;
        fn_8256BE68(&uStack_100,0);
        fn_823F2E20((undefined4 *)(param_1 + 0x44),&uStack_100);
        if (iStack_fc != 0) {
          fn_822315A0();
        }
        iVar4 = *(int *)(param_1 + 0x5c);
        fn_827DBA00(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x54),0,0x20,
                          (longlong)*(int *)(iVar4 + 8) * (longlong)*(int *)(iVar4 + 4) +
                          ((ulonglong)*(uint *)(iVar4 + 0x18) & 0x3fffffff) * 4,0,param_1 + 0x60,0);
        *(undefined4 *)(param_1 + 0x1b0) = 1;
        return 0x3e5;
      }
LAB_825be8f8:
      lVar3 = fn_827D50B8(*(undefined4 *)(param_1 + 0x44));
      uVar2 = 0;
      if (lVar3 != 0) {
        uVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x3c));
      }
      goto LAB_825be974;
    }
    if (iVar4 != 0) goto LAB_825be8f8;
    dVar6 = (double)fn_8265BC60(0xffffffff821c8d78);
    fVar1 = **(float **)(param_1 + 0x5c);
    if (((fVar1 < (float)(dVar6 - (double)lbl_82193CC0)) ||
        ((float)(dVar6 + (double)lbl_82193CC0) < fVar1)) &&
       ((fVar1 < lbl_82195D98 || (lbl_82195D9C < fVar1)))) {
      uVar2 = 0xb;
      goto LAB_825be974;
    }
  }
  uVar5 = 0;
  *(int *)(param_1 + 100) = *(int *)(*(int *)(param_1 + 0x5c) + 0x18) * 4 + *(int *)(param_1 + 0x60)
  ;
  if (*(int *)(*(int *)(param_1 + 0x5c) + 8) != 0) {
    lVar3 = 0;
    do {
      fn_825200F0(auStack_e0,lVar3 + (ulonglong)*(uint *)(param_1 + 100));
      fn_827D9720(auStack_e0,(ulonglong)*(uint *)(param_1 + 0x5c) + 0x10);
      iVar4 = *(int *)(param_1 + 100);
      fn_827D9630(auStack_c0,auStack_e0);
      iStack_a8 = (int)lVar3 + iVar4;
      auStack_a0[0] = fn_827D96A0(auStack_e0);
      fn_827D9630(auStack_98,auStack_c0);
      iStack_80 = iStack_a8;
      fn_825BF4E0(auStack_f0,param_1 + 0x1c4,auStack_a0);
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar5 < *(uint *)(*(int *)(param_1 + 0x5c) + 8));
  }
  if (*(int *)(*(int *)(param_1 + 0x5c) + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x148);
  }
LAB_825beb64:
  fn_82A1E810(*(undefined4 *)(param_1 + 0x1b4));
  return uVar2;
}


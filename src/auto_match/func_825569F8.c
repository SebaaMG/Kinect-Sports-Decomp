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
extern unsigned int *auStack_460;
extern unsigned int *auStack_4a8;
extern unsigned int *auStack_4ac;
extern unsigned int *auStack_4b4;
extern unsigned int *auStack_4b8;
extern unsigned int *auStack_4bc;
extern unsigned int fStack_48c;
extern unsigned int fStack_498;
extern unsigned int fStack_49c;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82523340();
extern int fn_82523548();
extern int fn_82554260();
extern int fn_82554860();
extern int fn_82556FE8();
extern int fn_8265C9E0();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern int fn_827F62A8();
extern int fn_827F6318();
extern int fn_827F6430();
extern int fn_82837D98();
extern int fn_82A1EFC0();
extern int fn_82A81CD0();
extern int fn_82BA02A8();
extern unsigned int iStack_4b0;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B394;
extern unsigned int uStack_46c;
extern unsigned int uStack_470;
extern unsigned int uStack_474;
extern unsigned int uStack_478;
extern unsigned int uStack_47c;
extern unsigned int uStack_480;
extern unsigned int uStack_484;
extern unsigned int uStack_488;
extern unsigned int uStack_490;
extern unsigned int uStack_494;
extern unsigned int uStack_4a0;


/* WARNING: Removing unreachable block (ram,0x82556af8) */
/* WARNING: Removing unreachable block (ram,0x82556b04) */

void fn_825569F8(double param_1,double param_2,int param_3,uint *param_4,uint *param_5,
                  ulonglong param_6,undefined4 *param_7,undefined8 param_8,uint param_9,
                  ulonglong param_10)

{
  code *pcVar1;
  int iVar2;
  int iVar6;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar7;
  longlong lVar5;
  uint uVar8;
  double dVar9;
  double dVar10;
  int *in_stack_00000054;
  int in_stack_0000005c;
  int *in_stack_00000064;
  uint in_stack_00000074;
  uint in_stack_0000007c;
  int in_stack_00000094;
  undefined1 auStack_4bc [4];
  undefined1 auStack_4b8 [4];
  undefined1 auStack_4b4 [4];
  int iStack_4b0;
  undefined1 auStack_4ac [4];
  undefined1 auStack_4a8 [8];
  undefined4 uStack_4a0;
  float fStack_49c;
  float fStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  float fStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_460 [1120];
  
  param_4[0x53] = 0xffffffff;
  param_4[1] = 0;
  uVar7 = *param_5 >> 0x18;
  if (*param_5 == 0) {
    uVar7 = 0x7a;
  }
  if (uVar7 != 0x6f) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(param_4 + 0x54,0,0x48);
  }
  iVar6 = fn_8251F720(param_5,0);
  if (*(int *)(iVar6 + 0x1c) < 0) {
    fn_82556FE8(param_4,iVar6 + 0xc,iVar6 + 0x10);
    if (*(int *)(iVar6 + 8) != 0) {
      uVar4 = fn_8265C9E0(0x319c0);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = fn_82523548(uVar4,1,0,1,param_4 + 0x54,param_4 + 0x5d,0,1);
      }
      *param_4 = uVar7;
      goto LAB_82556c34;
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)(in_stack_00000094 + 0x844) + 0x36c);
    if ((pcVar1 == (code *)0x0) ||
       (iVar2 = *(int *)(*(int *)(in_stack_00000094 + 0x844) + 0x370), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_460,0,1000);
    }
    (*pcVar1)(iVar2,*(undefined4 *)(iVar6 + 0x1c),auStack_460,auStack_4ac,auStack_4b4,auStack_4a8,
              auStack_4bc,auStack_4b8);
    fn_82A81CD0(auStack_460,0xffffffff8327fc10);
    if (*(int *)(iVar6 + 4) == 0) {
      *param_4 = 0;
      goto LAB_82556c34;
    }
    fn_82556FE8(param_4,iVar6 + 0xc,iVar6 + 0x10);
  }
  uVar3 = fn_8251F720(iVar6 + 4,0);
  uVar4 = fn_8265C9E0(0x319c0);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = fn_82523340(uVar4,uVar3,param_4 + 0x54,param_4 + 0x5d,0,1,0,0);
  }
  *param_4 = uVar7;
  fn_8251FA58(uVar3);
LAB_82556c34:
  fn_8251FA58(iVar6);
  param_4[2] = *in_stack_00000054 * 0x40 + *(int *)(param_3 + 8);
  param_4[3] = in_stack_00000054[1] * 0x40 + *(int *)(param_3 + 8);
  param_4[4] = *in_stack_00000054 * 0x40 + *(int *)(param_3 + 0xc);
  param_4[5] = in_stack_00000054[1] * 0x40 + *(int *)(param_3 + 0xc);
  param_4[6] = *(int *)(param_3 + 0x14) + in_stack_0000005c * 0x10;
  if (*in_stack_00000064 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = *in_stack_00000064 * 4 + *(int *)(param_3 + 0x1c);
  }
  param_4[7] = uVar7;
  if (in_stack_00000064[1] == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = in_stack_00000064[1] * 4 + *(int *)(param_3 + 0x1c);
  }
  param_4[8] = uVar7;
  param_4[9] = (uint)(*(int *)(*param_4 + 0x9c) != 0) << 0x1e | param_4[9] & 0xbfffffff;
  lVar5 = (**(code **)(**(int **)(*param_4 + 0x1a8) + 0x14))();
  param_4[0x10] = (uint)(float)param_2;
  param_4[0x11] = 1;
  param_4[0x12] = 1;
  param_4[10] = 0xffffffff;
  param_4[9] = ((uint)(lVar5 != 0) << 1 | in_stack_00000074 & 1) << 0x1c | param_4[9] & 0xc7ffffff;
  if ((param_6 & 0xffffffff) != 0) {
    uStack_488 = 0;
    uStack_47c = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_478 = 0;
    dVar9 = (double)lbl_821CA460;
    dVar10 = (double)lbl_821CC160;
    uStack_484 = 0x40;
    iVar6 = *(int *)*param_4;
    fStack_49c = lbl_821CA460;
    fStack_498 = lbl_821CC160;
    uStack_474 = 0;
    fStack_48c = lbl_821CC160;
    uStack_4a0 = 0x4d697850;
    uStack_490 = lbl_821917C0;
    uStack_494 = 0x20;
    uStack_480 = lbl_821917C0;
    if (param_4[1] == 0) {
      uVar7 = (**(code **)(iVar6 + 0x4c))();
      param_4[0x50] = uVar7;
    }
    else {
      uVar7 = (**(code **)(iVar6 + 0x50))((int *)*param_4,param_4 + 0x53);
      param_4[0x50] = uVar7;
      (**(code **)(*(int *)*param_4 + 0x9c))((int *)*param_4,param_4[0x53]);
    }
    uVar4 = fn_827F04B0(0x1a0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_82554260(uVar4,param_4[0x50],1);
    }
    param_4[0x51] = uVar7;
    if (param_7 != (undefined4 *)0x0) {
      uStack_47c = *param_7;
      uVar8 = 0;
      if (*(int *)(uVar7 + 0x18c) != 0) {
        iVar6 = 0;
        do {
          uVar8 = uVar8 + 1;
          iVar2 = *(int *)(iVar6 + *(int *)(uVar7 + 400));
          iVar6 = iVar6 + 4;
          *(code **)(iVar2 + 0x174) = fn_82BA02A8;
          *(code **)(iVar2 + 0x170) = fn_82BA02A8;
          *(undefined4 *)(iVar2 + 0x178) = 0;
        } while (uVar8 < *(uint *)(uVar7 + 0x18c));
      }
    }
    fn_827F2DD0(dVar10,param_4[0x50],param_4[0x51]);
    fn_82554860(param_4[0x51],0,param_6,&uStack_4a0);
    if (((dVar10 < param_1) && (param_1 < dVar9)) &&
       (iVar6 = **(int **)(param_4[0x51] + 400), *(int *)(iVar6 + 0x110) != 0)) {
      fn_827F62A8(param_1);
      fn_827F6318(*(undefined4 *)(iVar6 + 0x110));
      fn_827F6430(*(undefined4 *)(iVar6 + 0x110));
    }
    if (param_9 != 0) {
      *(undefined4 *)(**(int **)(param_4[0x51] + 400) + 0x118) = 1;
    }
  }
  param_4[0x52] = param_9;
  if ((param_10 & 0xffffffff) != 0) {
    uVar7 = fn_8251F720(param_10,0);
    param_4[0x66] = uVar7;
    if ((uVar7 != 0) && ((ulonglong)*param_4 != 0xfffffffffffffe68)) {
      fn_82837D98(*(undefined4 *)(uVar7 + 0x14),0,&iStack_4b0);
      if (iStack_4b0 == 0) {
        iStack_4b0 = lbl_8326B394;
      }
      *(int *)(*param_4 + 0x19c) = iStack_4b0;
    }
  }
  param_4[0x67] = in_stack_0000007c;
  return;
}


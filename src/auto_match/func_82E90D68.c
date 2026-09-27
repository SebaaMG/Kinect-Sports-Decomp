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
extern int fn_82E83368();
extern int fn_82E8F418();
extern int fn_82E8FCA8();
extern int fn_82E90418();
extern int fn_82E90418();
extern int fn_82E90960();
extern int fn_82E93850();
extern int fn_82E98828();
extern int fn_82EFF4A8();
extern int fn_82EFFF60();
extern int fn_82EFFFA8();
extern int fn_82F00008();
extern int fn_82F023B0();
extern int fn_82F14D40();
extern unsigned int lbl_82005730;
extern float lbl_82017EF8;
extern unsigned int uStack_70;


undefined8
fn_82E90D68(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5,
             undefined8 param_6,undefined8 param_7,int param_8)

{
  bool bVar1;
  byte bVar2;
  int iVar4;
  undefined8 uVar3;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  byte bVar10;
  uint uVar9;
  double dVar11;
  double dVar12;
  longlong in_stack_00000050;
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  undefined4 in_stack_0000006c;
  uint in_stack_00000074;
  undefined4 in_stack_00000084;
  undefined4 in_stack_000000b4;
  undefined8 uStack_70;

  uVar9 = *(uint *)(param_1 + 0x1a70);
  *(undefined4 *)(param_1 + 0x884) = in_stack_00000084;
  if ((uVar9 != 0) &&
     (((*(int *)(param_2 + 0x10) == 0x56555949 || (*(int *)(param_2 + 0x10) == 0x30323449)) &&
      (uVar7 = (ulonglong)uVar9 - 1, (uVar7 & 0xffffffff) < 4)))) {
    bVar1 = (int)uVar7 != 0;
    if ((ulonglong)uVar9 == 2 && bVar1) {
      in_stack_00000074 = 1;
    }
    else if ((uVar7 == 2 && bVar1) || (!bVar1)) {
      in_stack_00000074 = 1;
    }
    else {
      in_stack_00000074 = 0;
    }
  }
  if (*(int *)(param_1 + 0x6f4c) == 0) {
    in_stack_00000074 = 0;
  }
  if (*(int *)(param_1 + 0x6f98) != 0) {
    *(undefined4 *)(param_1 + 0x6f9c) = 0;
    *(undefined4 *)(param_1 + 0x6fa0) = 0;
    *(undefined4 *)(param_1 + 0x6fa4) = 0;
    *(undefined4 *)(param_1 + 0x6fa8) = 0;
  }
  if (*(int *)(param_1 + 0x6f90) != 0) {
    *(undefined4 *)(param_1 + 0x75f8) = 0;
  }
  if ((*(int *)(param_1 + 0x76c8) != 0) && (*(int *)(param_1 + 0x654) != 0)) {
    fn_82E93850(param_1);
  }
  *(longlong *)(param_1 + 0x7738) = *(longlong *)(param_1 + 0x7738) + 1;
  *(longlong *)(param_1 + 0x2e0) = *(longlong *)(param_1 + 0x2e0) + 1;
  if (param_8 == 0) {
    in_stack_00000050 = *(longlong *)(param_1 + 0x1e38) + *(longlong *)(param_1 + 0x1e28);
  }
  *(longlong *)(param_1 + 0x1e30) = in_stack_00000050;
  *(undefined4 *)(param_1 + 0x1e14) = in_stack_0000005c;
  fn_82E8FCA8(param_1);
  if (*(int *)(param_1 + 0xaf0) == 0) {
    *(undefined4 *)(param_1 + 0x1a40) = 6;
    *(undefined4 *)(param_1 + 0x1ac8) = 6;
    iVar4 = fn_82E83368(param_1);
    if ((iVar4 != 0) && (*(longlong *)(param_1 + 0x2e0) == 1)) {
      uVar8 = 3;
      *(undefined4 *)(param_1 + 0x1a40) = 3;
LAB_82e90f10:
      *(undefined4 *)(param_1 + 0x1ac8) = uVar8;
    }
  }
  else if (*(int *)(param_1 + 0xaf0) == 1) {
    uVar8 = 6;
    goto LAB_82e90f10;
  }
  if ((((*(int *)(param_1 + 0xaf0) == 0) && (*(int *)(param_1 + 0x76c8) != 0)) &&
      (*(int *)(param_1 + 0x77a4) != 0)) && (*(int *)(param_1 + 0x77e8) != 0)) {
    fn_82E98828(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  }
  iVar4 = *(int *)(param_1 + 0xaf0);
  if ((iVar4 == 2) && (*(int *)(param_1 + 4) == 8)) {
    in_stack_00000074 = 1;
    if (*(int *)(param_1 + 0x1e90) != 2) {
      in_stack_00000074 = (uint)(*(int *)(param_1 + 0x1e90) == 1);
    }
  }
  bVar2 = *(byte *)(param_1 + 0x7b31);
  if (bVar2 != 0) {
    if ((iVar4 == 1) && (bVar2 <= *(byte *)(param_1 + 0x7b32))) {
      *(undefined1 *)(param_1 + 0x7b32) = 0;
    }
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x7b33) = 0;
LAB_82e9101c:
      *(undefined1 *)(param_1 + 0x7b32) = 0;
    }
    else {
      bVar10 = *(char *)(param_1 + 0x7b33) + 1;
      bVar6 = *(char *)(param_1 + 0x7b32) + 1;
      *(byte *)(param_1 + 0x7b33) = bVar10;
      *(byte *)(param_1 + 0x7b32) = bVar6;
      if (bVar2 <= bVar6) {
        iVar4 = *(int *)(param_1 + 0x35c);
        if (iVar4 <= (int)(*(int *)(param_1 + 0x1e48) - (uint)bVar10)) {
          iVar4 = *(int *)(param_1 + 0x1e48) - (uint)*(byte *)(param_1 + 0x7b33);
        }
        if (iVar4 < (int)(uint)(bVar2 >> 1)) goto LAB_82e9101c;
      }
    }
  }
  if ((*(int *)(param_1 + 0x7b2c) != 0) &&
     ((*(int *)(param_1 + 0x1dac) == 0 || (*(int *)(param_1 + 0x1dac) == 2)))) {
    fn_82EFFF60(param_1);
  }
  uVar3 = fn_82E8F418(param_1,param_4,param_2,param_3,param_6,param_7,in_stack_0000006c,
                        in_stack_00000074);
  uStack_70 = (ulonglong)(((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar4 = *(int *)(param_1 + 0x1dac);
  if ((iVar4 == 0) || (iVar4 == 5)) {
    if ((*(int *)(param_1 + 4) == 8) && (*(int *)(param_1 + 0x1f28) == 0)) {
      fn_82EFF4A8(param_1);
    }
    fn_82EFFFA8(param_1);
    uVar9 = *(uint *)(param_1 + 0x698);
    uVar5 = *(uint *)(param_1 + 0x694);
    uVar5 = ((int)uVar5 >> 4) + (uint)((int)uVar5 < 0 && (uVar5 & 0xf) != 0);
    if (*(int *)(param_1 + 0x7b38) == 0) {
      *(uint *)(param_1 + 0x69c) = uVar5;
      *(uint *)(param_1 + 0x6a0) = ((int)uVar9 >> 4) + (uint)((int)uVar9 < 0 && (uVar9 & 0xf) != 0);
LAB_82e9123c:
      fn_82E90418(param_1,in_stack_000000b4);
    }
    else {
      *(uint *)(param_1 + 0x69c) = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      uVar9 = ((int)uVar9 >> 4) + (uint)((int)uVar9 < 0 && (uVar9 & 0xf) != 0);
      *(uint *)(param_1 + 0x6a0) = ((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0);
      fn_82E90418(param_1,in_stack_000000b4);
    }
LAB_82e91240:
    *(int *)(param_1 + 0x1dd0) = (*(int *)(param_1 + 0x1dd0) - *(int *)(param_1 + 0x1f58)) + 1;
  }
  else if ((iVar4 == 1) || (*(int *)(param_1 + 0x1c14) == 0)) {
    if (*(int *)(param_1 + 0x1db0) == 1) {
      *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_1 + 0x1d94);
      *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x1d94);
    }
    else if (*(int *)(param_1 + 0x1db0) == 2) {
      if (*(int *)(param_1 + 0x7b38) == 0) goto LAB_82e9123c;
      fn_82E90418();
      goto LAB_82e91240;
    }
  }
  else if (iVar4 == 2) {
    if ((-1 < in_stack_00000064) && (in_stack_00000064 < 0x65)) {
      *(int *)(param_1 + 0x1ee0) = in_stack_00000064;
      fn_82F00008(param_1);
    }
    fn_82EFFFA8(param_1);
    fn_82E90960(param_1,in_stack_000000b4,&uStack_70);
  }
  else if (iVar4 == 3) {
    if (*(int *)(param_1 + 0x1db0) == 1) {
      *(undefined4 *)(param_1 + 0x525c) = 0;
      fn_82E90960(param_1,in_stack_000000b4,&uStack_70);
    }
    else if ((*(int *)(param_1 + 0x1db0) == 2) && (in_stack_00000064 != -1)) {
      if ((-1 < in_stack_00000064) && (in_stack_00000064 < 0x65)) {
        *(int *)(param_1 + 0x1ee0) = in_stack_00000064;
        fn_82F00008(param_1);
      }
      fn_82EFFFA8(param_1);
      fn_82E90960(param_1,in_stack_000000b4,&uStack_70);
    }
  }
  if ((*(char *)(param_1 + 0x7b31) != '\0') && ((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) != 0)) {
    *(undefined1 *)(param_1 + 0x7b32) = 0;
    *(undefined1 *)(param_1 + 0x7b33) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x1ebc);
  *(int *)(param_1 + 0x1dcc) = *(int *)(param_1 + 0x1dcc) + 1;
  dVar11 = (double)(longlong)*(int *)(param_1 + 0x588);
  dVar12 = (double)(((0x27 - (ulonglong)*(uint *)(iVar4 + 0x10) & 0xffffffff) >> 3) +
                    (ulonglong)*(uint *)(iVar4 + 4) & 0xffffffff) * lbl_82017EF8;
  if (*(int *)(param_1 + 0x590) != 0) {
    dVar11 = dVar11 + lbl_82005730;
  }
  *(double *)(param_1 + 0x1dd8) = *(double *)(param_1 + 0x1dd8) + dVar12;
  uStack_70 = (ulonglong)(*(int *)(param_1 + 0x550) * *(int *)(param_1 + 0x548));
  *(double *)(param_1 + 0x1de8) = (dVar11 * dVar12) / (double)(longlong)uStack_70;
  iVar4 = (0x27U - *(int *)(iVar4 + 0x10) >> 3) + *(int *)(iVar4 + 4);
  *param_5 = iVar4;
  if ((*(int *)(param_1 + 0x1c18) != 0) && (iVar4 != 0)) {
    fn_82F14D40();
  }
  fn_82F023B0(*(undefined4 *)(param_1 + 0x1ebc));
  if (((*(int *)(param_1 + 0x1f58) == 0) || (1 < *(longlong *)(param_1 + 0x2e0))) &&
     (iVar4 = *(int *)(param_1 + 0x1acc) + 1, *(int *)(param_1 + 0x1acc) = iVar4,
     *(int *)(param_1 + 0x84c) < iVar4)) {
    *(undefined4 *)(param_1 + 0x1acc) = 0;
  }
  if (*param_5 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x6d54) == 0) || (*(int *)(param_1 + 0x7b38) == 0)) {
    iVar4 = *(int *)(param_1 + 0xaf0);
  }
  else {
    if (*(int *)(param_1 + 0xaf4) == 0) goto LAB_82e913c4;
    iVar4 = *(int *)(param_1 + 0xaf8);
  }
  if (iVar4 != 0) {
    return 0;
  }
LAB_82e913c4:
  *(int *)(param_1 + 0x1e4c) = *(int *)(param_1 + 0x1e4c) + 1;
  return 0;
}

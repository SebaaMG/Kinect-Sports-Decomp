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
extern unsigned int *auStack_50;
extern int fn_8262FE50();
extern int fn_8262FEC8();
extern int fn_82637B30();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263DF30();
extern int fn_8263FB38();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_821CE890;
extern unsigned int lbl_821CEA10;


void fn_825CC628(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined8 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)(param_2 + 0x3148);
  if (iVar1 != 0) {
    fn_8262FE50(iVar1);
  }
  fn_8263A1B8(param_2,0,*(undefined4 *)(param_1 + 0x68));
  iVar2 = *(int *)(param_2 + 0x3158);
  if (iVar2 != 0) {
    fn_8262FE50(iVar2);
  }
  fn_8263A508(param_2,0);
  *(undefined4 *)(param_2 + 0x2f08) = 0xf;
  *(uint *)(param_2 + 0x28dc) =
       (-(uint)(*(int *)(param_2 + 0x314c) != 0) & 0xf) << 4 |
       *(uint *)(param_2 + 0x28dc) & 0xffffff0f;
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x2000000000;
  *(undefined4 *)(param_2 + 0x2f0c) = 0xf;
  *(uint *)(param_2 + 0x28dc) =
       (-(uint)(*(int *)(param_2 + 0x3150) != 0) & 0xf) << 8 |
       *(uint *)(param_2 + 0x28dc) & 0xfffff0ff;
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x2000000000;
  uVar5 = fn_82637B30(param_2,0);
  puVar3 = (undefined4 *)((uint)(&lbl_821CE890 + in_r0) & 0xfffffff0);
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  dVar6 = (double)lbl_821CC160;
  *(uint *)(param_2 + 0x293c) = *(uint *)(param_2 + 0x293c) & 0xfffffff7;
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x40200;
  fn_8263DF30(dVar6,uVar5,1,0,auStack_50);
  fn_8263FB38(dVar6,param_2,0,0,*(undefined4 *)(param_1 + 0x5c),0,0,0,0);
  puVar3 = (undefined4 *)((uint)(&lbl_821CEA10 + in_r0) & 0xfffffff0);
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  fn_8263DF30(dVar6,param_2,1,0,auStack_50);
  fn_8263FB38(dVar6,param_2,0,0,*(undefined4 *)(param_1 + 0x58),0,0,0,0);
  fn_8263FB38(dVar6,param_2,0,0,*(undefined4 *)(param_1 + 0x60),0,0,0,0);
  fn_8263A1B8(param_2,0,iVar1);
  if (iVar1 != 0) {
    fn_8262FEC8(iVar1);
  }
  fn_8263A508(param_2,iVar2);
  if (iVar2 != 0) {
    fn_8262FEC8(iVar2);
  }
  *(float *)(param_1 + 0xa8) =
       *(float *)(*(int *)(param_1 + 0x54) + 0x6c) + *(float *)(*(int *)(param_1 + 0x54) + 0x68);
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0xc4) = 1;
  return;
}


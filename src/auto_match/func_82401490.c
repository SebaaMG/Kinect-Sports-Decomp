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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_30;
extern int fn_82359558();
extern int fn_824016B0();
extern int fn_82401C30();
extern int fn_82401E28();
extern int fn_82401FE0();
extern int fn_82402248();
extern int fn_82402DF8();
extern int fn_82402FA0();
extern int fn_82570840();
extern int fn_825709D8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82401490(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 in_r0;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined1 auStack_30 [24];
  
  fn_82402DF8();
  iVar4 = fn_82359558(*(undefined4 *)(param_2 + 0x240),*(undefined4 *)(param_2 + 0x10));
  if ((*(int *)(iVar4 + 0x788) == 4) && (*(int *)(param_2 + 0x2a0) == 0)) {
    *(undefined4 *)(param_2 + 0x2a4) = 0;
    *(undefined4 *)(param_2 + 0x2a0) = 1;
  }
  iVar4 = *(int *)(param_2 + 0x27c);
  if (iVar4 == 0) {
    fn_824016B0(param_2);
    goto LAB_82401558;
  }
  if (iVar4 != 2) {
    if (iVar4 == 3) {
      fn_82401C30(param_2);
      goto LAB_82401558;
    }
    if (iVar4 == 4) {
      fn_82402248(param_1,param_2);
      goto LAB_82401558;
    }
    if (iVar4 == 5) {
      fn_82401FE0(param_2);
      goto LAB_82401558;
    }
    if (iVar4 != 6) goto LAB_82401558;
  }
  fn_82401E28(param_2);
LAB_82401558:
  iVar4 = *(int *)(param_2 + 0x360);
  if (iVar4 != -1) {
    iVar1 = *(int *)(param_2 + 0x2dc);
    for (piVar6 = *(int **)(iVar1 + 8); (piVar6 != *(int **)(iVar1 + 0xc) && (*piVar6 != iVar4));
        piVar6 = piVar6 + 0xc) {
    }
    if (piVar6 == *(int **)(iVar1 + 0xc)) {
      bVar7 = true;
    }
    else {
      bVar7 = *(float *)(piVar6[1] + 0x88) < *(float *)(piVar6[1] + 0x8c);
    }
    if (bVar7) {
      for (piVar6 = *(int **)(iVar1 + 8); (piVar6 != *(int **)(iVar1 + 0xc) && (*piVar6 != iVar4));
          piVar6 = piVar6 + 0xc) {
      }
      if (piVar6 != *(int **)(iVar1 + 0xc)) {
        *(undefined4 *)(piVar6[1] + 0x11c) = 0;
        *piVar6 = -1;
      }
      *(undefined4 *)(param_2 + 0x360) = 0xffffffff;
    }
  }
  fn_82402FA0(param_1,param_2);
  iVar4 = *(int *)(param_2 + 0x364);
  if (iVar4 == -1) {
    if (*(int *)(param_2 + 0x2f4) != 0) {
      uVar5 = fn_82570840(*(undefined4 *)(param_2 + 0x2dc),param_2 + 0x2f4,1,param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x364) = uVar5;
    }
  }
  else {
    fVar3 = lbl_821CA460;
    if (*(int *)(param_2 + 0x27c) == 4) {
      fVar3 = lbl_821916FC;
    }
    uVar5 = *(undefined4 *)(param_2 + 0x2dc);
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
    puVar2 = (undefined4 *)((uint)(auStack_30 + (int)in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    fn_825709D8((double)fVar3,uVar5,iVar4,ZEXT48(&stack0x00000000) - 0x30);
  }
  return;
}


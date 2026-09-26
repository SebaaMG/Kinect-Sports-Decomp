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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_bc;
extern int fn_822D5340();
extern int fn_82381BC0();
extern int fn_825089A0();
extern int fn_828865A0();
extern int fn_8288CBD8();
extern int fn_828A0BE8();
extern int fn_828A0C50();
extern int fn_828AC428();
extern int fn_828AC488();
extern int fn_828ACCE8();
extern int fn_828AEBB8();
extern int fn_828D45F8();
extern int fn_828D47D0();
extern int fn_828E08A0();
extern int fn_828E09C8();
extern int fn_828E0DE0();
extern int fn_828E0FD0();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int lbl_8200571C;
extern unsigned int uStack_98;
extern unsigned int uStack_bd;


void fn_828E19D0(int *param_1)

{
  char cVar5;
  int *piVar3;
  undefined8 uVar1;
  int iVar4;
  undefined8 uVar2;
  double dVar6;
  double dVar7;
  undefined1 uStack_bd;
  undefined1 auStack_bc [4];
  int iStack_b8;
  int iStack_b4;
  undefined4 auStack_b0 [2];
  undefined1 auStack_a8 [8];
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  cVar5 = fn_828ACCE8(param_1[6]);
  if (cVar5 == '\0') {
    cVar5 = fn_828865A0(param_1);
    if (cVar5 != '\0') {
      fn_828D45F8(param_1);
      fn_828E09C8();
    }
    if (param_1[3] == 0) {
      return;
    }
    piVar3 = (int *)fn_825089A0();
    dVar6 = (double)(**(code **)(*piVar3 + 8))();
    param_1[4] = (int)(float)dVar6;
    param_1[3] = 0;
    return;
  }
  cVar5 = fn_828ACCE8(param_1[6]);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = fn_828865A0(param_1);
  if (cVar5 == '\0') {
LAB_828e1ccc:
    cVar5 = fn_828865A0(param_1);
    if (cVar5 != '\0') {
      fn_828D45F8(param_1);
      fn_828E09C8();
    }
    fn_828E0DE0(param_1,7);
    return;
  }
  uVar1 = fn_828D45F8(param_1);
  iVar4 = fn_828D47D0(uVar1,3,0);
  if (iVar4 == 0) goto LAB_828e1ccc;
  fn_828AC428(auStack_80);
  uVar1 = fn_828D45F8(param_1);
  fn_828E0FD0(uVar1,auStack_60,auStack_a8,auStack_90,&iStack_b4,&uStack_bd,auStack_80,auStack_bc);
  cVar5 = fn_828A0C50((ulonglong)*(uint *)(param_1[6] + 0x8c) + 0x14,auStack_a8);
  if (cVar5 != '\0') {
    fn_828D45F8(param_1);
    fn_828E09C8();
    fn_828E0DE0(param_1,7);
    fn_828AC488(auStack_80);
    return;
  }
  iStack_a0 = 0;
  iStack_9c = 0;
  uStack_98 = 0;
  iStack_b4 = **(int **)(param_1[5] + 0x210);
  if ((int *)iStack_b4 != *(int **)(param_1[5] + 0x210)) {
    do {
      auStack_b0[0] = *(undefined4 *)(iStack_b4 + 0x10);
      uVar1 = fn_828AEBB8();
      iStack_b8 = **(int **)(param_1[6] + 0x210);
      if ((int *)iStack_b8 != *(int **)(param_1[6] + 0x210)) {
        do {
          iVar4 = *(int *)(iStack_b8 + 0x10);
          uVar2 = fn_828AEBB8(iVar4);
          cVar5 = fn_828A0BE8(uVar1,uVar2);
          if (cVar5 != '\0') {
            if (iVar4 != 0) goto LAB_828e1bd8;
            break;
          }
          fn_82381BC0(&iStack_b8);
        } while (iStack_b8 != *(int *)(param_1[6] + 0x210));
      }
      fn_8288CBD8(&iStack_a0,auStack_b0);
LAB_828e1bd8:
      fn_82381BC0(&iStack_b4);
    } while (iStack_b4 != *(int *)(param_1[5] + 0x210));
  }
  if ((iStack_9c - iStack_a0 & 0xfffffffcU) == 0) {
LAB_828e1c0c:
    uVar1 = fn_828D45F8(param_1);
    fn_828E08A0(uVar1,1,4,0);
    uVar1 = 3;
  }
  else {
    dVar7 = (double)((float)param_1[4] + lbl_8200571C);
    piVar3 = (int *)fn_825089A0();
    dVar6 = (double)(**(code **)(*piVar3 + 8))();
    cVar5 = (**(code **)(*param_1 + 8))(param_1,&iStack_a0,dVar7 < dVar6);
    if (cVar5 != '\0') goto LAB_828e1c0c;
    if (dVar7 >= dVar6) goto LAB_828e1cb0;
    fn_828D45F8(param_1);
    fn_828E09C8();
    uVar1 = 7;
  }
  fn_828E0DE0(param_1,uVar1);
LAB_828e1cb0:
  fn_822D5340(&iStack_a0);
  fn_828AC488(auStack_80);
  return;
}


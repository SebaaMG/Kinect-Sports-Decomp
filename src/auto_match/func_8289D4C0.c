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
extern int fn_82381BC0();
extern int fn_825089A0();
extern int fn_8265CA20();
extern int fn_82897F68();
extern int fn_8289AEE0();
extern int fn_8289C078();
extern int fn_8289C128();
extern int fn_8289C9A8();
extern int fn_828A13B8();
extern unsigned int lbl_82023BA4;
extern unsigned int lbl_82197140;


void fn_8289D4C0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_30 [12];
  
  *param_1 = &lbl_82023BA4;
  if (((int *)param_1[8] == (int *)0x0) ||
     (iVar3 = (**(code **)(*(int *)param_1[8] + 4))(), iVar3 == 0)) {
    if (((int *)param_1[8] == (int *)0x0) ||
       (iVar3 = (**(code **)(*(int *)param_1[8] + 0xc))(), iVar3 == 0)) {
      if (((int *)param_1[8] != (int *)0x0) &&
         (((iVar3 = (**(code **)(*(int *)param_1[8] + 0x14))(), iVar3 != 0 && (param_1[10] != 0)) &&
          (piVar4 = *(int **)(param_1[10] + 0x220), aiStack_30[0] = *piVar4,
          (int *)aiStack_30[0] != piVar4)))) {
        do {
          fn_8289C078(param_1,*(undefined4 *)(aiStack_30[0] + 0x10));
          fn_82381BC0(aiStack_30);
        } while (aiStack_30[0] != *(int *)(param_1[10] + 0x220));
      }
    }
    else {
      fn_8289C128(param_1);
    }
  }
  else if ((param_1[10] != 0) &&
          (piVar4 = *(int **)(param_1[10] + 0x220), aiStack_30[0] = *piVar4,
          (int *)aiStack_30[0] != piVar4)) {
    do {
      fn_8289C078(param_1,*(undefined4 *)(aiStack_30[0] + 0x10));
      fn_82381BC0(aiStack_30);
    } while (aiStack_30[0] != *(int *)(param_1[10] + 0x220));
  }
  if (param_1[10] != 0) {
    fn_828A13B8(param_1[10],param_1);
  }
  puVar1 = (undefined4 *)param_1[8];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[8] = 0;
  fn_8289C9A8(aiStack_30,param_1 + 0x11,*(undefined4 *)param_1[0x12]);
  uVar2 = param_1[0x12];
  piVar4 = (int *)fn_825089A0();
  (**(code **)(*piVar4 + 0x28))(piVar4,uVar2);
  fn_8289AEE0(param_1 + 0xe);
  uVar2 = param_1[0xe];
  piVar4 = (int *)fn_825089A0();
  (**(code **)(*piVar4 + 0x28))(piVar4,uVar2);
  param_1[1] = &lbl_82197140;
  if (param_1[2] == 7) {
    if (4 < (uint)param_1[4]) {
      fn_8265CA20(param_1[3]);
    }
    param_1[3] = 0;
  }
  else if (param_1[2] == 8) {
    fn_82897F68(param_1 + 3,0);
  }
  return;
}


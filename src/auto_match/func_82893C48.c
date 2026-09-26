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
extern int fn_822315A0();
extern int fn_82381BC0();
extern int fn_8265CA20();
extern int fn_8288EE68();
extern int fn_82891FE0();
extern int fn_828926B8();
extern int fn_828A12E8();
extern int fn_828B55B0();
extern int fn_828C9840();
extern int fn_828CB310();
extern int fn_82A4AAA8();
extern unsigned int lbl_82023898;
extern unsigned int lbl_82023C3C;


void fn_82893C48(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  int aiStack_30 [12];
  
  *param_1 = &lbl_82023898;
  uVar3 = fn_828CB310();
  fn_828C9840(uVar3,param_1);
  iVar4 = fn_828A12E8(param_1[4]);
  *(int *)(iVar4 + 0x8c) = *(int *)(iVar4 + 0x8c) + -1;
  if ((param_1[0xd] == 0) || (iVar4 = *(int *)(param_1[0xd] + 0x38), iVar4 == 0)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)(iVar4 + 0x26);
  }
  if ((cVar5 != '\0') && (*(char *)((int)param_1 + 0x5e) != '\0')) {
    aiStack_30[0] = **(int **)(param_1[4] + 0x230);
    if ((int *)aiStack_30[0] != *(int **)(param_1[4] + 0x230)) {
      do {
        uVar1 = *(undefined4 *)(aiStack_30[0] + 0x10);
        iVar4 = fn_82A4AAA8(uVar1);
        if (iVar4 == 1) {
          fn_8288EE68(param_1,uVar1);
        }
        fn_82381BC0(aiStack_30);
      } while (aiStack_30[0] != *(int *)(param_1[4] + 0x230));
    }
  }
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  uVar3 = fn_828A12E8(param_1[4]);
  fn_82891FE0(uVar3,param_1);
  fn_828926B8(param_1,param_1[4]);
  puVar2 = (undefined4 *)param_1[0xd];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  if (param_1[0xf] != 0) {
    fn_8265CA20();
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[8] = &lbl_82023C3C;
  fn_828B55B0(param_1 + 10);
  fn_828B55B0(param_1 + 5);
  if (param_1[3] != 0) {
    fn_822315A0();
  }
  return;
}


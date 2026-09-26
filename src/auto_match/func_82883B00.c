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
extern int fn_82882E60();
extern int fn_82886C80();
extern int fn_8289F160();
extern unsigned int lbl_83212A04;
extern unsigned int uStack_30;


void fn_82883B00(undefined4 *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  uStack_30 = *param_1;
  fn_8289F160(aiStack_2c,0xffffffff83212a00,&uStack_30);
  if (aiStack_2c[0] == lbl_83212A04) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(aiStack_2c[0] + 0x10);
  }
  piVar2 = (int *)param_1[1];
  if (*(char *)(piVar2 + 9) != '\0') {
    uVar1 = *(undefined2 *)((int)piVar2 + 0x26);
    uVar4 = (**(code **)(*piVar2 + 4))();
    fn_82886C80(*(undefined4 *)(iVar6 + 0xb4),uVar4,uVar1);
  }
  uVar5 = fn_82882E60(param_1,*(undefined4 *)(param_1[1] + 0x30));
  iVar3 = param_1[1];
  if (*(int *)(iVar3 + 0x30) != 0) {
    *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x34) = *(undefined4 *)(iVar3 + 0x34);
  }
  if (*(int *)(iVar3 + 0x34) != 0) {
    *(undefined4 *)(*(int *)(iVar3 + 0x34) + 0x30) = *(undefined4 *)(iVar3 + 0x30);
  }
  if (*(int *)(iVar6 + 0xa4) == iVar3) {
    *(int *)(iVar6 + 0xa4) = *(int *)(iVar3 + 0x30);
  }
  if (*(int *)(iVar6 + 0xa8) == iVar3) {
    *(undefined4 *)(iVar6 + 0xa8) = *(undefined4 *)(iVar3 + 0x34);
  }
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(int *)(iVar6 + 0xac) = *(int *)(iVar6 + 0xac) + -1;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  param_1[1] = uVar5;
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  return;
}


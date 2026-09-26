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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_828A17A0();
extern int fn_828C01A0();
extern int fn_828D0BE0();
extern int fn_82F68CC0();
extern unsigned int iStack_4c;
extern unsigned int lbl_83213FC8;
extern unsigned int stack0x00000000;


int fn_828C10D0(int param_1,undefined4 param_2,longlong param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 auStack_48 [18];
  
  fn_82F68CC0(param_1,param_3,0x54);
  fn_828C01A0(param_1 + 0x58,param_4);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = param_2;
  uVar5 = (ulonglong)lbl_83213FC8;
  if (uVar5 == 0) {
    uVar5 = fn_828A17A0();
  }
  puVar3 = (undefined4 *)
           fn_828D0BE0(&stack0x00000000 + -0x50,uVar5,0,param_3 + 0x1c,param_3 + 0x14,
                             param_3 + 0x40);
  uVar4 = 0;
  uVar6 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x48) != puVar3) {
    uVar6 = puVar3[1];
    puVar3[1] = 0;
    uVar4 = *puVar3;
    *puVar3 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  piVar2 = (int *)param_4[4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,param_4 != piVar2);
    param_4[4] = 0;
  }
  return param_1;
}


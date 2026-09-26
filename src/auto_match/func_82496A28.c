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
extern int fn_8248F890();
extern int fn_824925D0();
extern int fn_82496B28();
extern int fn_82F622A8();
extern unsigned int lbl_821A0000;
extern unsigned int lbl_821BEBAC;


undefined8 fn_82496A28(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = **(int **)(param_2 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  piVar5 = (int *)fn_8248F890(0x70);
  *piVar5 = iVar1;
  piVar5[1] = iVar2;
  if (piVar5 + 4 != (int *)0x0) {
    piVar5[4] = *param_3;
    iVar2 = param_3[5];
    piVar5[8] = (int)&lbl_821BEBAC;
    piVar5[9] = iVar2;
    piVar5[10] = param_3[6];
    piVar5[0xb] = param_3[7];
    piVar5[0xc] = param_3[8];
    puVar3 = (undefined4 *)((uint)(param_3 + 0xc) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(piVar5 + 0x10) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    fn_824925D0(piVar5 + 0x14,param_3 + 0x10);
    piVar5[0x19] = param_3[0x15];
  }
  puVar6 = *(undefined **)(param_2 + 8);
  if (puVar6 == (undefined *)0x2aaaaa9) {
    puVar6 = &lbl_821A0000;
    fn_82F622A8(0xffffffff8219852c);
  }
  *(undefined **)(param_2 + 8) = puVar6 + 1;
  *(int **)(iVar1 + 4) = piVar5;
  *(int **)piVar5[1] = piVar5;
  fn_82496B28(param_1,param_2,(ulonglong)**(uint **)(param_2 + 4) + 0x10);
  return param_1;
}


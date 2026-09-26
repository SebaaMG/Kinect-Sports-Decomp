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
extern int fn_822ABA88();
extern int fn_822C5180();
extern int fn_822C72E0();
extern int fn_82369668();
extern int fn_8236A6E8();
extern int fn_8236C428();
extern int fn_823DBB58();
extern int fn_823E69D0();
extern int fn_824FE498();


void fn_823D0140(int *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar5;
  undefined8 uVar4;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_8236C428();
  fn_824FE498(param_1[900]);
  iVar5 = param_1[900];
  puVar3 = (undefined4 *)(iVar5 + 0xc30U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  puVar3 = (undefined4 *)(iVar5 + 0xbd0U & 0xfffffff0);
  *puVar3 = in_register_00010020;
  puVar3[1] = in_register_00010024;
  puVar3[2] = in_register_00010028;
  puVar3[3] = in_vr2;
  piVar2 = *(int **)(*(int *)param_1[2] + param_3 * 4);
  iVar5 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),param_2);
  uVar1 = *(undefined4 *)(*(int *)(iVar5 + 0x114) + 0x20);
  uVar4 = fn_822C5180(param_4,param_5);
  fn_822C72E0(uVar1,uVar4);
  fn_82369668(param_1,param_3,param_2);
  fn_8236A6E8(param_1,4);
  if (param_1[0x130] == 0) {
    fn_823E69D0(param_1,param_6);
  }
  iVar5 = (**(code **)(*param_1 + 200))(param_1);
  if (iVar5 == 0) {
    fn_823DBB58(param_1[300]);
  }
  return;
}


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
extern int fn_822ABA88();
extern int fn_822ACAD8();
extern int fn_822AF138();
extern int fn_823690C8();
extern int fn_823693A0();
extern int fn_82369A00();
extern int fn_8236BA88();
extern int fn_823C2148();
extern int fn_823C4850();
extern int fn_823CC298();
extern int fn_823E8D38();
extern int fn_824FE498();
extern int fn_825275B0();
extern unsigned int lbl_821CC160;


void fn_823C4238(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_50 [80];
  
  fn_8236BA88(*(undefined4 *)**(undefined4 **)(param_1 + 8));
  fn_8236BA88(*(undefined4 *)(**(int **)(param_1 + 8) + 4));
  iVar1 = *(int *)(param_1 + 0xee0);
  uVar4 = (uint)((ulonglong)LZCOUNT(iVar1) >> 3) & 4;
  piVar2 = *(int **)(iVar1 * 4 + **(int **)(param_1 + 8));
  uVar3 = *(undefined4 *)(uVar4 + **(int **)(param_1 + 8));
  fn_822ACAD8(*(undefined4 *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x48),0xffffffff821ac494,
                    0xffffffff821af8ec);
  fn_822AF138(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4),9);
  fn_822AF138(*(undefined4 *)(*(int *)(param_1 + 0xc) + uVar4),10);
  fn_823E8D38(param_1,piVar2,uVar3,(undefined4 *)(param_1 + 0xee4));
  uVar6 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),*(undefined4 *)(param_1 + 0xee4));
  fn_823693A0(param_1,uVar6);
  if (*(int *)(param_1 + 0x42c) != 0) {
    fn_825275B0(*(undefined4 *)(param_1 + 0xe10));
  }
  *(undefined4 *)(param_1 + 0x42c) = 0;
  fn_823C4850(param_1,piVar2);
  fn_823C4850(param_1,uVar3);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_823690C8(auStack_50,param_1,iVar1);
    fn_824FE498(*(undefined4 *)(param_1 + 0xe10));
    iVar1 = *(int *)(param_1 + 0xe10);
    puVar5 = (undefined4 *)(iVar1 + 0xbd0U & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
    puVar5 = (undefined4 *)(iVar1 + 0xc30U & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
  }
  else {
    uVar6 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),*(undefined4 *)(param_1 + 0xee4));
    fn_82369A00(param_1,*(undefined4 *)(param_1 + 0xe10),uVar6,2);
  }
  fn_823C2148(param_1,1,1);
  *(undefined4 *)(param_1 + 0xef4) = lbl_821CC160;
  fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),0x20);
  return;
}


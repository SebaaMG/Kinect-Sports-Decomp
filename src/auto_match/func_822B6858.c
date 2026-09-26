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
extern int fn_822B7480();
extern int fn_822B8768();
extern int fn_822C6880();
extern int fn_825613E0();
extern unsigned int lbl_82196750;


void fn_822B6858(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_register_000104d0;
  undefined4 uVar6;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_822B8768(*(undefined4 *)(param_1 + 0x118));
  (**(code **)(**(int **)(param_1 + 0x114) + 4))();
  (**(code **)(**(int **)(param_1 + 0x110) + 0xc))();
  fn_822C6880(param_1 + 0xc0);
  uVar3 = in_vr77;
  uVar4 = in_register_000104d8;
  uVar5 = in_register_000104d4;
  uVar6 = in_register_000104d0;
  fn_825613E0(-(double)*(float *)(param_1 + 0x100),(double)*(float *)(param_1 + 0x100));
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0xc0 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)(param_1 + 0xa0U & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar5;
  puVar1[2] = uVar4;
  puVar1[3] = uVar3;
  puVar1 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)(param_1 + 0xb0U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  fn_822B7480(param_1);
  return;
}


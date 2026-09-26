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
extern int fn_82CED628();
extern int fn_82DF0A60();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8207A328;
extern unsigned int lbl_8207F25C;
extern unsigned int lbl_820D2840;
extern unsigned int lbl_82145760;
extern unsigned int lbl_82145780;


undefined4 * fn_82DF15B0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  fn_82DF0A60();
  *param_1 = &lbl_82145780;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  uVar5 = lbl_8207F25C;
  uVar4 = lbl_8207A328;
  *(undefined1 *)(param_1 + 2) = 3;
  uVar3 = lbl_82005748;
  param_1[0xb] = 10;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar5;
  fn_82CED628(param_1 + 3,0xffffffff82145770);
  puVar1 = (undefined4 *)((uint)(&lbl_82145760 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(&lbl_820D2840 + in_r0) & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  return param_1;
}


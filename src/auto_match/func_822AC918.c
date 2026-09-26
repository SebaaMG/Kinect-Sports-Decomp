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
extern int fn_822AC9A8();
extern unsigned int lbl_82196750;


undefined8 fn_822AC918(int param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  if ((*(int *)(param_1 + 8) == 0) ||
     (iVar4 = fn_822AC9A8(param_1,*(int *)(param_1 + 8),param_2,param_3,param_4), iVar4 == 0))
  {
    if (param_3 != 0) {
      puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
    }
    if (param_4 != 0) {
      puVar1 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


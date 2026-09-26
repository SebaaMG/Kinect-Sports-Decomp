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
extern int fn_82D7E1E0();
extern int fn_82D937A8();
extern unsigned int lbl_82139EE8;


undefined4 * fn_82D8D6C0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fn_82D937A8(param_1,0,2);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x80000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x80000000;
  *(undefined1 *)(param_1 + 8) = 0xf0;
  *param_1 = &lbl_82139EE8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x80000000;
  *(undefined1 *)(param_1 + 0x37) = 0;
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((int)param_1 + in_r0 + 0xb0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x30) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  param_1[0xb] = param_3;
  fn_82D7E1E0(param_1);
  return param_1;
}


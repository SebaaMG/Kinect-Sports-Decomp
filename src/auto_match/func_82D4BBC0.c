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
extern int fn_82CE4040();
extern unsigned int lbl_8213671C;


undefined4 * fn_82D4BBC0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_1[3] = param_2;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &lbl_8213671C;
  param_1[5] = param_3;
  fn_82CE4040(param_3);
  puVar1 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  param_1[6] = *(undefined4 *)(param_3 + 0x20);
  param_1[7] = *(undefined4 *)(param_3 + 0x24);
  return param_1;
}


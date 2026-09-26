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
extern int fn_82D931B8();
extern unsigned int lbl_8213A1DC;
extern unsigned int lbl_8217D960;


undefined4 * fn_82D9B4D8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fn_82D931B8();
  *param_1 = &lbl_8213A1DC;
  puVar1 = (undefined4 *)((uint)(&lbl_8217D960 + in_r0) & 0xfffffff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined1 *)(param_1 + 2) = 3;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x30) & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return param_1;
}


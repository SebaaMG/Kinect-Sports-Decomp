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
extern int fn_827F3770();
extern int fn_827F4248();
extern unsigned int lbl_821BF540;
extern unsigned int lbl_821CA460;


undefined4 * fn_824A1C90(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_827F4248(param_1,param_1 + 8,0,0,0);
  *param_1 = &lbl_821BF540;
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  fn_827F3770(param_1 + 8,uVar3);
  param_1[0x2d] = param_2;
  param_1[0x2e] = param_3;
  param_1[0x34] = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x30) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x35] = 0;
  uVar2 = lbl_821CA460;
  param_1[0x36] = 1;
  param_1[0x37] = uVar2;
  return param_1;
}


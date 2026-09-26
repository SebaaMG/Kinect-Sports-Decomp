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
extern int fn_82EF2CB8();


undefined8
fn_82EF3718(int param_1,ulonglong param_2,undefined2 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined2 *param_7)

{
  undefined8 uVar1;
  undefined2 *puStack_50;
  int aiStack_4c [19];
  
  uVar1 = 0;
  if ((((param_3 == (undefined2 *)0x0) || (param_4 == (undefined4 *)0x0)) ||
      (param_5 == (undefined4 *)0x0)) ||
     (((param_6 == (undefined4 *)0x0 || (param_7 == (undefined2 *)0x0)) ||
      ((ulonglong)*(uint *)(param_1 + 0x264) <= (param_2 & 0xffffffff))))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    param_1 = param_1 + 0x58;
    fn_82EF2CB8(param_1,param_2,&puStack_50);
    *param_3 = *puStack_50;
    fn_82EF2CB8(param_1,param_2,aiStack_4c);
    *param_4 = *(undefined4 *)(aiStack_4c[0] + 4);
    fn_82EF2CB8(param_1,param_2,&puStack_50);
    *param_5 = *(undefined4 *)(puStack_50 + 4);
    fn_82EF2CB8(param_1,param_2,aiStack_4c);
    *param_6 = *(undefined4 *)(aiStack_4c[0] + 0x10);
    fn_82EF2CB8(param_1,param_2,&puStack_50);
    *param_7 = puStack_50[10];
  }
  return uVar1;
}


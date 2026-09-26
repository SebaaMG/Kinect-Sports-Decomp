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
extern int fn_82AB7FD0();
extern int fn_82B7C438();
extern int fn_82BA02A8();


void fn_82B7CB40(int param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = fn_82BA02A8(param_4,0xffffffff820db4ec,param_2,param_3);
  puVar2 = (undefined4 *)fn_82B7C438(uVar1,0x20);
  puVar2[1] = (int)param_2;
  *puVar2 = 0;
  puVar2[2] = (int)param_3;
  puVar2[3] = param_5;
  puVar2[4] = 0;
  puVar2[5] = 1;
  puVar2[6] = 2;
  puVar2[7] = 3;
  fn_82AB7FD0(*(undefined4 *)(param_1 + 4),puVar2);
  (**(code **)(param_4 + 0x59c))(*(undefined4 *)(param_4 + 0x5a4),puVar2);
  return;
}


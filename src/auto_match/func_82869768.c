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
extern int fn_82876910();


undefined8
fn_82869768(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82876910(param_2 + 8,param_3,param_4);
  if (iVar2 == 0) {
    uVar1 = 0x42;
  }
  else {
    uVar1 = 1;
    *(undefined4 *)(param_5 + 3) = *(undefined4 *)(param_1 + 0x41c);
    *(undefined4 *)((int)param_5 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
    *param_5 = *(undefined8 *)(iVar2 + 8);
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(param_5 + 2) = 0;
    *(undefined4 *)((int)param_5 + 0xc) = *(undefined4 *)(iVar2 + 4);
  }
  return uVar1;
}


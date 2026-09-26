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
extern int fn_831429EC();
extern unsigned int iStack00000014;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


undefined8
fn_829D2A00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar2;
  undefined8 uVar1;
  int iStack00000014;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  undefined4 uStack0000004c;
  
  if ((*(ulonglong *)(param_1 + 8) & 2) == 0) {
    uVar1 = 0x40050002;
  }
  else {
    iStack00000014 = param_1;
    uStack0000002c = param_4;
    uStack00000034 = param_5;
    uStack0000003c = param_6;
    uStack00000044 = param_7;
    uStack0000004c = param_8;
    uVar2 = XamGetCurrentTitleId();
    uVar1 = fn_831429EC(iStack00000014,1,2,0x58,uVar2,0x202dff07,param_2,param_3);
  }
  return uVar1;
}


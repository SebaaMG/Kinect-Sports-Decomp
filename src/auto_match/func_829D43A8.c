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
extern unsigned int fStack00000074;
extern int fn_831429EC();
extern unsigned int uStack00000034;
extern unsigned int uStack00000044;


undefined8
fn_829D43A8(double param_1,int param_2,undefined8 param_3,undefined1 param_4,undefined2 param_5,
             undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar2;
  undefined8 uVar1;
  undefined4 uStack00000034;
  undefined4 uStack00000044;
  float fStack00000074;
  
  fStack00000074 = (float)param_1;
  if ((*(ulonglong *)(param_2 + 8) & 4) == 0) {
    uVar1 = 0x40050002;
  }
  else {
    uStack00000034 = param_6;
    uStack00000044 = param_8;
    uVar2 = XamGetCurrentTitleId();
    uVar1 = fn_831429EC(param_2,2,4,0xb0,uVar2,param_3,param_4,param_5);
  }
  return uVar1;
}


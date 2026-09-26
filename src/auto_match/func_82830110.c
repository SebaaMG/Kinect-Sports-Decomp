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
extern unsigned int *auStack_1c;
extern int fn_82816968();
extern int fn_82830028();
extern int fn_82830088();
extern unsigned int uStack_20;


void fn_82830110(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined1 uStack_20;
  undefined1 auStack_1c [4];
  
  uVar1 = (int)(param_1[1] - *param_1) >> 5;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_82830088(auStack_1c,param_1,(param_2 & 0x7ffffff) * 0x20 + (ulonglong)*param_1);
  }
  else if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    fn_82816968(param_1,param_2 - (longlong)(int)uVar1);
    fn_82830028(param_1[1],param_2 - (longlong)((int)(param_1[1] - *param_1) >> 5),0,param_1 + 3,0
                  ,uStack_20);
    param_1[1] = (int)((param_2 - (longlong)((int)(param_1[1] - *param_1) >> 5) & 0xffffffff) << 5)
                 + param_1[1];
  }
  return;
}


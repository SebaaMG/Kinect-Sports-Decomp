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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822924C0();
extern int fn_822A9D80();
extern int fn_82864898();
extern int fn_828648F0();


undefined8 fn_822A89B8(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint auStack_60 [4];
  undefined1 auStack_50 [80];
  
  if (*(int *)(param_3 + 0x10) == 0) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    fn_828648F0(auStack_50,param_3);
    param_1 = param_2 * 0x10 + param_1;
    fn_822A9D80(auStack_60,param_1 + 4,auStack_50);
    if ((ulonglong)auStack_60[0] == (ulonglong)*(uint *)(param_1 + 8)) {
      uVar1 = 0xffffffff80004005;
    }
    else {
      fn_822924C0(param_4,(ulonglong)auStack_60[0] + 0xc);
      uVar1 = 0;
    }
    fn_82864898(auStack_50);
  }
  return uVar1;
}


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
extern unsigned int *auStack_10;
extern int fn_82E7EC68();
extern int fn_82E802B0();


undefined8 fn_82E804C0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_10 [4];
  
  auStack_10[0] = 0;
  if (((*(ushort *)param_1 & 0x1000) == 0) && (*(ushort *)param_1 != 0)) {
    uVar1 = 0xffffffffc00d36ec;
  }
  else {
    uVar1 = fn_82E7EC68(param_1,auStack_10,param_2);
    if (-1 < (int)uVar1) {
      uVar1 = fn_82E802B0(param_1,auStack_10[0]);
    }
  }
  return uVar1;
}


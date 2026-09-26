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
extern int fn_8267B890();
extern int fn_826C35B8();


undefined1 * fn_82695598(undefined1 *param_1,int *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  *param_1 = 8;
  uVar1 = fn_8267B890(*(undefined4 *)(*param_2 + 0x288),0x34,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_826C35B8(uVar1,param_2,param_3);
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


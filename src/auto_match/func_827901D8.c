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
extern int fn_8267BDA8();


void fn_827901D8(undefined4 *param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((uint)param_1[8] < param_1[9] + 6) {
    iVar2 = param_1[8] + 6;
    param_1[8] = iVar2;
    iVar2 = iVar2 * 2;
    if (param_1[7] == 0) {
      uVar1 = fn_8267B890(*param_1,iVar2,0);
    }
    else {
      uVar1 = fn_8267BDA8(param_1[7],iVar2);
    }
    param_1[7] = uVar1;
  }
  *(undefined2 *)(param_1[7] + param_1[9] * 2) = param_2;
  param_1[9] = param_1[9] + 1;
  return;
}


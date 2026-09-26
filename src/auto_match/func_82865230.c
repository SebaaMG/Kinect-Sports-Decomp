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


void fn_82865230(undefined4 *param_1,int param_2,longlong param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = (int)param_3;
  if (iVar1 == 1) {
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    *(undefined2 *)(param_2 * 2 + (int)param_1) = param_4;
    return;
  }
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)((int)param_1 + param_2 * 2 + -2);
    if (iVar1 != 0) {
      do {
        puVar2 = puVar2 + 1;
        *puVar2 = param_4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
    return;
  }
  return;
}


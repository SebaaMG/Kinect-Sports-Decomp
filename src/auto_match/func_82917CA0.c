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


undefined8 fn_82917CA0(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff8876086c;
  }
  if (((0x1b < *(uint *)(param_1 + 0xc)) && (puVar1 = *(uint **)(param_1 + 8), 0x1b < *puVar1)) &&
     (puVar1[1] < *(uint *)(param_1 + 0xc))) {
    iVar2 = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if (puVar1[1] != 0) {
      iVar2 = *(int *)(param_1 + 8) + puVar1[1];
    }
    *param_2 = iVar2;
    param_2[1] = puVar1[2];
    param_2[2] = puVar1[3];
    return 0;
  }
  return 0xffffffff88760b59;
}


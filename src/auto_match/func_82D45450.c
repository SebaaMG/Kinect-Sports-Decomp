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


void fn_82D45450(int param_1,uint param_2,undefined2 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(param_2 >> (*(uint *)(param_1 + 0x1c) & 0x3f));
  if (uVar2 == 0) {
    *(undefined2 *)((*(uint *)(param_1 + 0x20) & param_2) * 0x10 + *(int *)(param_1 + 0x6c) + 0xc) =
         param_3;
    return;
  }
  uVar2 = uVar2 - 1;
  uVar1 = (ulonglong)
          *(ushort *)
           ((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 4) + *(int *)(param_1 + 0x78) +
           0x44);
  if (uVar1 != 0xffff) {
    uVar2 = uVar1;
  }
  *(undefined2 *)
   (*(int *)((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 4) + *(int *)(param_1 + 0x78)
            + 0x34) + (*(uint *)(param_1 + 0x24) & param_2) * 2) = param_3;
  return;
}


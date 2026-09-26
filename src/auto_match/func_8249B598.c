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


uint fn_8249B598(int param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(((int)param_2 + 5) * 4 + param_1) + 0x20);
  if ((int)uVar2 < 0) {
    iVar1 = *(int *)(*(int *)((((int)param_2 == 0) + 5) * 4 + param_1) + 0x20);
    if (iVar1 < 0) {
      uVar2 = (uint)(param_2 != 0);
    }
    else {
      uVar2 = (uint)(iVar1 == 0);
    }
  }
  return uVar2;
}


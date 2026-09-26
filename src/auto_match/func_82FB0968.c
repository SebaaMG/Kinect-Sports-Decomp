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


void fn_82FB0968(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  do {
    piVar1 = (int *)(iVar2 + 4);
    iVar2 = iVar2 + 8;
    *(uint *)(*piVar1 + 0x14) = *(uint *)(*piVar1 + 0x14) & 0xbfffffff | (param_2 & 1) << 0x1e;
  } while (iVar2 != *(int *)(param_1 + 0x8c));
  return;
}


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
extern int fn_82270B70();


undefined8 fn_82281530(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18))) &&
       (iVar2 = fn_82270B70(), *(int *)(iVar2 + 0xa0) == 0)) {
      return 1;
    }
    uVar1 = 0;
  }
  else if (((*(int *)(iVar2 + 0x44) == 0) || (*(int *)(iVar2 + 0x44) == 2)) ||
          ((*(int *)(iVar2 + 0x8c) != 0 || (uVar1 = 0, *(int *)(iVar2 + 0x6c) != 0)))) {
    uVar1 = 1;
  }
  return uVar1;
}


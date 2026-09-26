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


void fn_82677980(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xdd) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0x2f18) = 0;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffe;
  uVar2 = *(ulonglong *)(iVar1 + 0x10);
  *(ulonglong *)(iVar1 + 0x10) = uVar2 | 0x800;
  *(ulonglong *)(iVar1 + 0x10) = uVar2 | 0x20800;
  return;
}


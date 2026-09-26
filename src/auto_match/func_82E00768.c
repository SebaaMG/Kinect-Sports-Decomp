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
extern int fn_82D82E28();


void fn_82E00768(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x14);
  if (0 < (int)*(uint *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0x10));
      fn_82D82E28(*(undefined4 *)(iVar1 + 8),iVar1);
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + 0x60;
    } while (uVar3 != 0);
  }
  return;
}


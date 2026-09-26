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


void fn_826C8620(int param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xac);
  *(uint *)(param_1 + 0x8c) =
       (uint)((param_2 & 0xff) << 0x10) & 0x30000 | *(uint *)(param_1 + 0x8c) & 0xfffcffff;
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(iVar2 + *(int *)(param_1 + 0xa8));
      (**(code **)(*piVar1 + 0xa4))(piVar1,param_2);
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 != 0);
  }
  return;
}


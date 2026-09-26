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
extern int fn_82CE4118();


void fn_82DF4738(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(iVar3 + *(int *)(param_1 + 0x2c));
      if ((*(byte *)(piVar1 + 3) & 1) == 0) {
        (**(code **)(*piVar1 + 0xc))(piVar1);
        *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 1;
      }
      fn_82CE4118(piVar1);
      uVar2 = uVar2 - 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


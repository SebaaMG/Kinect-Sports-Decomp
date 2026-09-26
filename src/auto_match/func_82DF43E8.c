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


void fn_82DF43E8(double param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (ulonglong)*(uint *)(param_2 + 0x30);
  if (0 < (int)*(uint *)(param_2 + 0x30)) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_2 + 0x2c) + iVar3);
      if ((*(byte *)(piVar1 + 3) & 1) == 0) {
        piVar1[5] = (int)(float)((double)(float)piVar1[5] + param_1);
        (**(code **)(*piVar1 + 0x14))(param_1);
      }
      uVar2 = uVar2 - 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 != 0);
  }
  return;
}


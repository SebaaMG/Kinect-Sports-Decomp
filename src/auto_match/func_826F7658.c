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
extern int fn_8269AD70();


void fn_826F7658(undefined8 param_1,int param_2,ulonglong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(uint *)(param_2 + 0xb00) >> 0x13 & 1) == 0) {
    piVar1 = *(int **)(param_2 + 0xaf8);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[0x1e];
      if (((~(*(byte *)((int)piVar2 + 0x66) >> 6) & 1) != 0) &&
         (((param_3 & 0xff) != 0 || (((uint)piVar2[0x23] >> 0x12 & 1) != 0)))) {
        (**(code **)(*piVar2 + 0x68))(param_1,piVar2,param_3);
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xaf8) = 0;
    *(uint *)(param_2 + 0xb00) = *(uint *)(param_2 + 0xb00) & 0xfff7ffff;
    piVar1 = *(int **)(param_2 + 0xaf4);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[0x1c];
      piVar2[0x1e] = 0;
      piVar2[0x23] = piVar2[0x23] & 0xfff7ffff;
      if ((~(*(byte *)((int)piVar2 + 0x66) >> 6) & 1) != 0) {
        iVar3 = (**(code **)(*piVar2 + 0x104))(piVar2,0);
        if (iVar3 == 1) {
          fn_8269AD70(piVar2,param_2);
        }
        if (((param_3 & 0xff) != 0) || (((uint)piVar2[0x23] >> 0x12 & 1) != 0)) {
          (**(code **)(*piVar2 + 0x68))(param_1,piVar2,param_3);
        }
      }
    }
  }
  return;
}


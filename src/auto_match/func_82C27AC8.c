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


undefined8 fn_82C27AC8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  param_2[2] = 0;
  param_2[3] = 0;
  iVar2 = *(int *)(iVar1 + 0x10);
  uVar3 = *(ulonglong *)(*param_2 + 8);
  piVar4 = *(int **)(iVar2 + 8);
  if (piVar4 == (int *)0x0) {
    *(int **)(iVar2 + 8) = param_2;
    param_2[3] = iVar2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar2 + 8);
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    return 0;
  }
  do {
    if (*(ulonglong *)(*piVar4 + 8) <= uVar3) {
      param_2[2] = (int)piVar4;
      param_2[3] = piVar4[3];
      *(int **)(piVar4[3] + 8) = param_2;
      piVar4[3] = (int)param_2;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
      return 0;
    }
    if (piVar4[2] == 0) {
      param_2[3] = (int)piVar4;
      param_2[2] = 0;
      piVar4[2] = (int)param_2;
      *(int **)(iVar1 + 0x14) = param_2;
    }
    piVar4 = (int *)piVar4[2];
  } while (piVar4 != (int *)0x0);
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  return 0;
}


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
extern int fn_827B6F80();


void fn_827B78D8(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)fn_827B6F80(param_1,*(undefined4 *)(param_2 + 0x1c),
                                (ulonglong)*(ushort *)(param_2 + 0x22) + param_3,
                                (ulonglong)*(ushort *)(param_2 + 0x24) - param_3);
  *(short *)(param_2 + 0x24) = (short)param_3;
  *(short *)(*(int *)(param_2 + 8) + 0x1c) = (short)param_3;
  iVar1 = *(int *)(param_1 + 0x34);
  *piVar2 = param_1 + 0x30;
  piVar2[1] = iVar1;
  **(int **)(param_1 + 0x34) = (int)piVar2;
  *(int **)(param_1 + 0x34) = piVar2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  iVar1 = *(int *)(param_2 + 0x10);
  piVar2[4] = iVar1;
  piVar2[3] = param_2;
  *(int **)(iVar1 + 0xc) = piVar2;
  *(int **)(param_2 + 0x10) = piVar2;
  piVar2[6] = *(int *)(param_1 + 0x54);
  piVar2[5] = param_1 + 0x3c;
  *(int **)(*(int *)(param_1 + 0x54) + 0x14) = piVar2;
  *(int **)(param_1 + 0x54) = piVar2;
  return;
}


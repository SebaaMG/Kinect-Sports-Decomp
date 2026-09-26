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
extern int fn_8252AE68();
extern int fn_82536690();


void fn_824645B8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x314);
  for (piVar3 = *(int **)(*(int *)(param_1 + 8) + 0x310); piVar3 < piVar1; piVar3 = piVar3 + 2) {
    iVar2 = *piVar3;
    if ((((iVar2 != *(int *)(param_1 + 0x1c)) && (iVar2 != *(int *)(param_1 + 0x24))) &&
        (iVar2 != *(int *)(param_1 + 0x20))) && (iVar2 = fn_8252AE68(iVar2,1), iVar2 != 0)) {
      fn_82536690(param_1 + 0x54,piVar3);
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x3e4);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xb70) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x8c4) + 0x2c) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0xb8) + 0x28) = 1;
  return;
}


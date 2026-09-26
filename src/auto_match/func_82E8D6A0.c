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


void fn_82E8D6A0(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)(*(double *)(param_1 + 0x1f48) * (double)*(longlong *)(param_1 + 0x1e40));
  *(int *)(param_1 + 0x1f54) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x1f54) = *(undefined4 *)(param_1 + 0x1ecc);
  }
  if (*(int *)(param_1 + 0x1dac) == 5) {
    iVar1 = (int)(*(double *)(param_1 + 0x7768) * (double)*(longlong *)(param_1 + 0x1e40));
    *(int *)(param_1 + 0x7774) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x7774) = *(undefined4 *)(param_1 + 0x7770);
    }
  }
  iVar1 = *(int *)(param_1 + 8000);
  iVar3 = *(int *)(param_1 + 0x1f54);
  if (0x7ffffffd - iVar1 <= *(int *)(param_1 + 0x1f54)) {
    iVar3 = 0x7ffffffd - iVar1;
  }
  *(int *)(param_1 + 0x1f54) = iVar3;
  if (*(int *)(param_1 + 0x1dac) == 5) {
    iVar3 = *(int *)(param_1 + 0x1f10);
    iVar4 = *(int *)(param_1 + 0x7774);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1f10);
  }
  iVar4 = iVar4 + iVar3;
  *(int *)(param_1 + 0x1f10) = iVar4;
  if (iVar1 <= iVar4) {
    iVar4 = iVar1;
  }
  *(int *)(param_1 + 0x1f10) = iVar4;
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x890) - (ulonglong)*(uint *)(param_1 + 0x898);
  *(int *)(param_1 + 0x890) = (int)lVar2;
  if (-1 < lVar2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x890) = 0;
  return;
}


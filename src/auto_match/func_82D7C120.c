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


undefined4 fn_82D7C120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x54) <= *(int *)(param_2 + 0x54)) {
    iVar1 = param_2;
    param_2 = param_1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x54)) {
    piVar3 = (int *)(*(int *)(param_2 + 0x50) + 4);
    do {
      if (*piVar3 == iVar1) {
        return *(undefined4 *)(iVar2 * 8 + *(int *)(param_2 + 0x50));
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar2 < *(int *)(param_2 + 0x54));
  }
  return 0;
}


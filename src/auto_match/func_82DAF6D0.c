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


void fn_82DAF6D0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    piVar1 = *(int **)(param_1 + 0x38);
    do {
      if (*piVar1 == param_2) goto LAB_82daf708;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3c));
  }
  iVar2 = -1;
LAB_82daf708:
  *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x38)) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0x33 | 0x44;
  return;
}


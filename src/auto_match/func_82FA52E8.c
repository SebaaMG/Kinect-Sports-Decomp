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
extern unsigned int lbl_83264210;


void fn_82FA52E8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x50 + lbl_83264210;
  piVar1 = *(int **)(iVar3 + 0x10);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      iVar2 = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    *(int *)(iVar3 + 0x10) = iVar2;
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + -1;
  }
  *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0x48);
  return;
}


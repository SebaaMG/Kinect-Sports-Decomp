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
extern int fn_827CCF90();


void fn_827CD040(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    piVar4 = (int *)(iVar1 + 0x30);
    do {
      iVar2 = 0;
      if (0 < iVar5) {
        piVar3 = (int *)(iVar1 + 0x20);
        do {
          if (piVar4[-4] == *piVar3) {
            iVar2 = *(int *)((iVar2 + 0xd) * 4 + iVar1);
            if (iVar2 != 0) goto LAB_827cd0b8;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar5);
      }
      iVar2 = fn_827CCF90(param_1);
LAB_827cd0b8:
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      *piVar4 = iVar2;
    } while (iVar5 < *(int *)(param_1 + 100));
  }
  return;
}


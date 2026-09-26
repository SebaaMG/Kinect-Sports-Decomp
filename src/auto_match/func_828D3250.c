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
extern int fn_823AA970();


void fn_828D3250(int param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0xc) == 5) &&
     (piVar2 = *(int **)(param_1 + 0x18), piVar2 != *(int **)(param_1 + 0x1c))) {
    do {
      iVar1 = fn_823AA970(param_2);
      if (*piVar2 == iVar1) {
        *(undefined1 *)((int)piVar2 + 5) = param_3;
        *(undefined1 *)(piVar2 + 1) = 1;
        return;
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != *(int **)(param_1 + 0x1c));
  }
  return;
}


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


void fn_8288B588(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 == -1) {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x14);
    lVar3 = 4;
    do {
      *piVar1 = param_2;
      if (param_2 == 0) {
        *(undefined1 *)(iVar2 + param_1 + 0x34) = 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return;
  }
  *(int *)((param_3 + 5) * 4 + param_1) = param_2;
  return;
}


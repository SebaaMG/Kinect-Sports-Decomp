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


void fn_828FC4C8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  lVar4 = 7;
  do {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar3 * 4 + param_2 + -4);
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar3 = iVar3 + 1;
        iVar1 = *(int *)(iVar1 + 0x20);
      } while (iVar1 != 0);
    }
    param_1 = param_1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}


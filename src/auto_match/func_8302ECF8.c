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


void fn_8302ECF8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x104);
  if (piVar1 != (int *)0x0) {
    do {
      if ((((param_2 == 0) || (param_2 == piVar1[8])) && ((param_3 == 0 || (piVar1[6] == param_3))))
         && (piVar1[0x1b] != 0)) {
        piVar1[0x1b] = 0;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
    return;
  }
  return;
}


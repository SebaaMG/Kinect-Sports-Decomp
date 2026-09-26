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
extern int fn_82F724D8();


int * fn_82F728D0(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  *(undefined1 *)((int)param_1 + 5) = 0;
  if ((param_2 == 2) || (uVar2 = 0, param_2 == 3)) {
    uVar2 = (undefined1)param_2;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = uVar2;
  if (param_2 == 1) {
    iVar1 = fn_82F724D8(1);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 3;
    }
  }
  return param_1;
}


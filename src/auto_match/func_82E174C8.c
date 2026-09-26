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
extern int fn_82D00450();


ulonglong fn_82E174C8(int param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = fn_82D00450(param_1 + 0xc,param_2,0);
  if ((uVar2 & 0xffffffff) == 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
    }
  }
  return uVar2;
}


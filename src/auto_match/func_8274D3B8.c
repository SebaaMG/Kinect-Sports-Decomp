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
extern int fn_826820F0();
extern int fn_826BEF40();
extern int fn_826C3448();


void fn_8274D3B8(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  fn_826BEF40();
  fn_826C3448(param_1 + 0x3c);
  fn_826C3448(param_1 + 0x48);
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (uVar1 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x54) + 4), uVar1 != 0)) {
    iVar2 = 0;
    do {
      if (*(int *)(**(int **)(param_1 + 0x54) + iVar2) != 0) {
        fn_826820F0();
      }
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 != 0);
  }
  return;
}


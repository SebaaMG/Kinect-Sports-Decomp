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
extern unsigned int *auStack_38;
extern int fn_82599A38();
extern int fn_82A1EFC0();


void fn_8253C720(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [56];
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(iVar2 + *(int *)(param_1 + 0x44)) + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(auStack_38,0,8);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x48));
  }
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar2 = 0;
    do {
      fn_82599A38(param_2 + 0x7fc,*(undefined4 *)(iVar2 + *(int *)(param_1 + 0x50)));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x54));
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


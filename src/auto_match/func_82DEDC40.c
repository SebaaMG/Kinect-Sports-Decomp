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
extern unsigned int *auStack_30;
extern int fn_82D890C8();


void fn_82DEDC40(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [48];
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    iVar1 = 0;
    do {
      fn_82D890C8(auStack_30,param_1,*(undefined4 *)(*(int *)(param_2 + 0x20) + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(int *)(param_2 + 0x24));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_2 + 8) + iVar1 + 8) != 0) {
        fn_82D890C8(auStack_30,param_1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < *(int *)(param_2 + 0xc));
  }
  return;
}


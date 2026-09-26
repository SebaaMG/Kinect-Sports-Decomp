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
extern int fn_82B7BEB0();
extern int fn_82BA4058();
extern int fn_82BBFE28();


void fn_82BCFB88(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)fn_82BA4058();
  iVar4 = 1;
  iVar3 = fn_82BBFE28(param_1 + 0x80);
  if (0 < iVar3) {
    do {
      piVar2 = piVar2 + 1;
      iVar3 = *piVar2;
      iVar1 = *(int *)(iVar3 + 0x6c);
      if (iVar1 != 0) {
        fn_82B7BEB0(*(undefined4 *)(iVar1 + -4),iVar1 + -4);
      }
      iVar1 = *(int *)(iVar3 + 100);
      *(undefined4 *)(iVar3 + 0x6c) = 0;
      if (iVar1 != 0) {
        fn_82B7BEB0(*(undefined4 *)(iVar1 + -4),iVar1 + -4);
      }
      iVar1 = *(int *)(iVar3 + 0x68);
      *(undefined4 *)(iVar3 + 100) = 0;
      if (iVar1 != 0) {
        fn_82B7BEB0(*(undefined4 *)(iVar1 + -4),iVar1 + -4);
      }
      *(undefined4 *)(iVar3 + 0x68) = 0;
      iVar4 = iVar4 + 1;
      iVar3 = fn_82BBFE28(param_1 + 0x80);
    } while (iVar4 <= iVar3);
  }
  return;
}


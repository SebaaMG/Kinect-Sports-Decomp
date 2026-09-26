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
extern int fn_82A455C8();
extern int fn_82A47440();
extern int fn_82A47900();
extern int fn_82A48100();
extern int fn_82A481D0();
extern int fn_82A48728();
extern int fn_82A48820();


void fn_82A49350(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1dc);
  iVar1 = fn_82A47440();
  *(int *)(param_1 + 0x1dc) = iVar1;
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x214) == 0) {
        return;
      }
      fn_82A481D0(param_1);
      if (*(int **)(param_1 + 0x20c) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(param_1 + 0x20c);
      }
      if (*(int *)(iVar2 + 0x10) == 0) {
        return;
      }
      iVar2 = fn_82A47900(param_1);
      if (iVar2 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1d4) != 0) {
        return;
      }
      fn_82A48100(param_1);
      *(undefined4 *)(param_1 + 0x1d4) = 1;
      return;
    }
    fn_82A481D0(param_1);
    if (*(int *)(param_1 + 0x1d4) != 0) {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x1c0) != 0) {
        do {
          fn_82A455C8(*(undefined4 *)(param_1 + 0x1d8),uVar3,0x80);
          uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c0));
      }
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
    fn_82A48820(param_1);
  }
  fn_82A48728(param_1);
  return;
}


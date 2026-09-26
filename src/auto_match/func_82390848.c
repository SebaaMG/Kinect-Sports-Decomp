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
extern int fn_82359C18();
extern int fn_8265CA20();


void fn_82390848(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  while (param_1[4] != 0) {
    if (param_1[4] != 0) {
      uVar1 = (param_1[4] + param_1[3]) - 1;
      if ((uint)param_1[2] <= uVar1) {
        uVar1 = uVar1 - param_1[2];
      }
      fn_82359C18(*(undefined4 *)(uVar1 * 4 + param_1[1]));
      uVar1 = param_1[4];
      param_1[4] = (int)((ulonglong)uVar1 - 1);
      if ((ulonglong)uVar1 - 1 == 0) {
        param_1[3] = 0;
      }
    }
  }
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    iVar3 = iVar2 << 2;
    do {
      iVar3 = iVar3 + -4;
      iVar2 = iVar2 + -1;
      if (*(int *)(param_1[1] + iVar3) != 0) {
        fn_8265CA20(*(int *)(param_1[1] + iVar3));
      }
    } while (iVar2 != 0);
  }
  if (param_1[1] != 0) {
    fn_8265CA20();
  }
  param_1[2] = 0;
  param_1[1] = 0;
  fn_8265CA20(*param_1);
  *param_1 = 0;
  return;
}


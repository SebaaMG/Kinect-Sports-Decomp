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
extern int fn_82368C30();
extern int fn_8236A928();
extern int fn_8236BA88();
extern unsigned int lbl_82193B00;


void fn_822B16F8(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x10);
  iVar2 = fn_82368C30(uVar3);
  if ((iVar2 != 0) &&
     (*(int *)(iVar2 + 0x2c) ==
      *(int *)(*(int *)((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)) + 0x10))) {
    iVar1 = *(int *)((int)uVar3 + 0x41c);
    if ((0 < iVar1) &&
       (((iVar1 < 3 || (iVar1 == 10)) && (*(float *)((int)uVar3 + 0x428) < lbl_82193B00)))) {
      fn_8236A928(uVar3,iVar2,4);
      return;
    }
  }
  fn_8236BA88(*(undefined4 *)(param_1 + 0xc));
  return;
}


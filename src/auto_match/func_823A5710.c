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
extern int fn_823985A8();
extern int fn_82398DA0();
extern int fn_823ADF20();
extern int fn_82490FC8();
extern int fn_8265CA20();
extern unsigned int lbl_821CC160;


void fn_823A5710(int param_1)

{
  int iVar1;
  int iVar2;
  
  fn_82490FC8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
  fn_823985A8(*(undefined4 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 8);
  fn_82398DA0(iVar1,*(undefined4 *)(iVar1 + 0x1e4));
  iVar2 = *(int *)(iVar1 + 0x1e4);
  if (iVar2 != 0) {
    fn_823ADF20(iVar2);
    fn_8265CA20(iVar2);
  }
  *(undefined4 *)(iVar1 + 0x1e4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x204) = lbl_821CC160;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x220) = 0;
  *(undefined4 *)(iVar1 + 0x224) = 0;
  *(undefined4 *)(iVar1 + 0x228) = 0;
  *(undefined4 *)(iVar1 + 0x22c) = 0;
  *(undefined4 *)(iVar1 + 0x230) = 0;
  *(undefined4 *)(iVar1 + 0x238) = 0;
  *(undefined4 *)(iVar1 + 0x23c) = 0;
  *(undefined4 *)(iVar1 + 0x234) = 0;
  return;
}


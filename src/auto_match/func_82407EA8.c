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
extern int fn_8229A000();
extern int fn_8229AAF8();
extern int fn_82359698();
extern int fn_82406BE0();
extern int fn_827F5708();
extern unsigned int lbl_821CC160;


void fn_82407EA8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 1000) = 1;
  fn_82359698(iVar2,1);
  fn_8229AAF8(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + 0xd4));
  fn_8229A000((ulonglong)*(uint *)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + 0xd4) + 0x68);
  fn_82406BE0(iVar1,0);
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x38) + 0x14) + 0x1d0)
       = 1;
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x38) + 0x118) + 0x2e4) !=
      0) {
    fn_827F5708((double)lbl_821CC160);
  }
  piVar3 = (int *)(*(int *)(param_1 + 4) + 0x44);
  if (piVar3 == (int *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = *piVar3 != 0;
  }
  if (bVar4) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x78) = 0;
  }
  return;
}


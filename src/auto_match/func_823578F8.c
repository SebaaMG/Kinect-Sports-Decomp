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
extern int fn_82536590();
extern int fn_8255B0D8();
extern unsigned int lbl_83265988;


void fn_823578F8(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x318);
  if (uVar1 != 0) {
    iVar2 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
    *(byte *)(iVar2 + (uVar1 >> 3)) = (byte)(1 << (uVar1 & 7)) | *(byte *)(iVar2 + (uVar1 >> 3));
  }
  iVar2 = *(int *)(param_1 + 4);
  fn_8255B0D8(*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x844));
  piVar3 = (int *)(iVar2 + 0x314);
  if (piVar3 == (int *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = *piVar3 != 0;
  }
  if (bVar4) {
    fn_82536590(piVar3,0);
  }
  return;
}


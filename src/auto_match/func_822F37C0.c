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
extern int fn_822C16B8();
extern int fn_8265CA20();
extern unsigned int lbl_82193E50;


void fn_822F37C0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xf8) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xf8) + 0x48) = 0;
    }
    if (*(int *)(iVar1 + 0xfc) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xfc) + 0x48) = 0;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x10) = lbl_82193E50;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    fn_822C16B8(uVar2 + 8);
    fn_8265CA20(uVar2);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


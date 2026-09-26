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
extern int fn_8226FDB8();
extern int fn_82270B70();
extern int fn_824E3740();
extern int fn_8251D888();
extern unsigned int lbl_8327F66C;


void fn_824E3D48(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = fn_824E3740();
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar2 = fn_8226FDB8(*(int *)(iVar1 + 0x14),0);
    if ((iVar2 == 0) || (iVar2 = fn_82270B70(), *(int *)(iVar2 + 0xa0) == 4)) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
  }
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    uVar3 = (ulonglong)lbl_8327F66C;
    if (0 < (int)lbl_8327F66C) {
      lbl_8327F66C = (uint)(uVar3 - 1);
      if (uVar3 - 1 == 0) {
        fn_8251D888();
      }
    }
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return;
}


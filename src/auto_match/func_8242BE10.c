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
extern int fn_8242E3E0();
extern int fn_8243A970();
extern unsigned int lbl_821CC160;


void fn_8242BE10(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = fn_8242E3E0();
  if ((iVar2 != 0) &&
     (iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x174) + 0x9c) + 0x93c), iVar2 != 0)) {
    *(undefined1 *)(iVar2 + 0x30) = 0;
    uVar1 = lbl_821CC160;
    *(undefined4 *)(iVar2 + 0x50) = lbl_821CC160;
    *(undefined4 *)(iVar2 + 0x54) = uVar1;
  }
  fn_8243A970(param_1,(ulonglong)*(uint *)(param_2 + 0x174) + 0x1c);
  return;
}


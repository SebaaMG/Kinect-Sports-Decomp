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
extern unsigned int lbl_82192604;


undefined1 fn_82360BB0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x194);
  if ((*(int *)(iVar1 + 0x200) != 5) && (lbl_82192604 < *(float *)(iVar1 + 0x20c))) {
    return 1;
  }
  iVar2 = *(int *)(iVar1 + 0x200);
  if (iVar2 == 5) {
    uVar3 = 0;
  }
  else if (((iVar2 == 2) || (iVar2 == 3)) || (uVar3 = 1, iVar2 == 1)) {
    uVar3 = *(undefined1 *)(iVar1 + 0x1fc);
  }
  return uVar3;
}


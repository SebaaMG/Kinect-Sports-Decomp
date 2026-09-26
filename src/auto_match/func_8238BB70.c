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
extern int fn_82372F88();
extern unsigned int lbl_831D1B44;


undefined8 fn_8238BB70(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = lbl_831D1B44;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(int *)(iVar1 + 0x204) == 0) {
      lVar2 = fn_82372F88(iVar1);
      iVar3 = (int)(lVar2 + 1) - ((int)lVar2 + (uint)(lVar2 + 1 == 0));
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x658);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(iVar1 + 0x94);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x50);
  }
  if ((iVar3 != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
    return 1;
  }
  return 0;
}


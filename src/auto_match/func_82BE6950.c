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
extern int fn_82BE5C78();
extern int fn_82F68CC0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_831751D0;


int fn_82BE6950(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fn_82BE5C78();
  uVar1 = uVar1 & 0xffff;
  if ((((uVar1 < 0x7d1) && (*(int *)(param_1 + 0x1c) != 0)) && (0 < *(int *)(param_1 + 0x28))) &&
     (((int)uVar1 <= *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) &&
      (iVar2 = (*(code *)lbl_831751D0)(uVar1 + 1), iVar2 != 0)))) {
    fn_82F68CC0(iVar2,(ulonglong)*(uint *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x1c),
                 uVar1);
    *(undefined1 *)(uVar1 + iVar2) = lbl_820E975C;
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


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
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82A1E968();
extern unsigned int lbl_832767D8;
extern unsigned int lbl_832823A8;


void fn_8260D928(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong alStack_20 [2];
  
  fn_82A1BB18();
  iVar1 = fn_8259A230();
  param_1 = iVar1 * 0x60 + param_1;
  lVar2 = (ulonglong)*(uint *)(param_1 + 100) - 1;
  *(int *)(param_1 + 100) = (int)lVar2;
  if (lVar2 < 1) {
    fn_82A1E968(alStack_20);
    lVar2 = ((alStack_20[0] - *(longlong *)(param_1 + 0x28)) - lbl_832767D8) - lbl_832823A8;
    if (lVar2 < 0) {
      lVar2 = 0;
    }
    *(longlong *)(param_1 + 0x30) = lVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + lVar2;
    if (*(longlong *)(param_1 + 0x20) < lVar2) {
      *(longlong *)(param_1 + 0x20) = lVar2;
    }
    if ((lVar2 < *(longlong *)(param_1 + 0x18)) || (*(longlong *)(param_1 + 0x18) == -1)) {
      *(longlong *)(param_1 + 0x18) = lVar2;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}


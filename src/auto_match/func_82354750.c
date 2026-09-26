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
extern int fn_82250A18();
extern int fn_823548E8();
extern int fn_828AAF70();
extern int (*lbl_83276794)();
extern unsigned int lbl_832975B0;


void fn_82354750(int param_1)

{
  int iVar2;
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x3ec) == 0) {
    if (lbl_83276794 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*lbl_83276794)();
    }
    if (iVar2 != 0) {
      fn_823548E8(param_1);
    }
  }
  else {
    iVar2 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(char *)(iVar2 + 4) == '\0') {
      iVar2 = 1;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x88);
    }
    *(int *)(param_1 + 1000) = iVar2;
    if (iVar2 != 0) {
      if (*(int **)(param_1 + 0x3f4) != (int *)0x0) {
        lVar1 = (**(code **)(**(int **)(param_1 + 0x3f4) + 8))();
        fn_828AAF70(lVar1 + 0x150,1);
      }
      if (*(int *)(param_1 + 8) != 3) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
        *(undefined4 *)(param_1 + 8) = 3;
      }
    }
  }
  return;
}


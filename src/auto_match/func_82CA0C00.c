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
extern unsigned int lbl_83232478;


void fn_82CA0C00(int param_1,int param_2,int param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = lbl_83232478;
  iVar2 = 0;
  if (0 < (int)param_4) {
    do {
      *(undefined1 *)(iVar2 + param_1) =
           *(undefined1 *)((*(byte *)(iVar2 + param_1) - 0x40) * 2 + iVar1);
      iVar2 = iVar2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar2 = 0;
  lVar3 = param_5;
  if (0 < (int)param_5) {
    do {
      *(undefined1 *)(iVar2 + param_2) =
           *(undefined1 *)((*(byte *)(iVar2 + param_2) - 0x40) * 2 + iVar1);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar2 = 0;
  if (0 < (int)param_5) {
    do {
      *(undefined1 *)(iVar2 + param_3) =
           *(undefined1 *)((*(byte *)(iVar2 + param_3) - 0x40) * 2 + iVar1);
      iVar2 = iVar2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    return;
  }
  return;
}


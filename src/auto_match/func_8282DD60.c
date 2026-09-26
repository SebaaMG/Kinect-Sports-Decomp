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
extern int fn_828223C8();
extern int fn_828252D0();


void fn_8282DD60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_20 [2];
  
  iVar2 = param_1 + 0x2f4;
  while (fn_828223C8(iVar2,aiStack_20), iVar2 = aiStack_20[0], aiStack_20[0] != 0) {
    if (*(int *)(param_1 + 0x3dc) == 0) {
      *(undefined4 *)(aiStack_20[0] + 0x20) = 0;
    }
    else {
      uVar1 = fn_828252D0(*(undefined4 *)(aiStack_20[0] + 0x1c));
      *(undefined4 *)(iVar2 + 0x20) = uVar1;
      iVar2 = aiStack_20[0];
    }
  }
  return;
}


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
extern int fn_82BD3818();
extern int (*lbl_83223F44)();


undefined8 fn_82BD6260(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  
  uVar2 = 0;
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x50);
  lVar5 = 4;
  do {
    if (*piVar4 != 0) {
      uVar2 = (uint)(*(int *)(*piVar4 + 4) != 0) << (uVar3 & 0x3f) | uVar2;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((lbl_83223F44 == (code *)0x0) &&
     (fn_82BD3818(0x48c,0xffffffff83223f44), lbl_83223F44 == (code *)0x0)) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar1 = (*lbl_83223F44)(uVar2,1);
  }
  return uVar1;
}


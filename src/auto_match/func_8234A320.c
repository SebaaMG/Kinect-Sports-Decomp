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
extern int fn_824A73D8();
extern int fn_824CCFC8();
extern int fn_824CD030();


undefined8 fn_8234A320(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x11) == '\0') {
    iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
    if ((iVar1 == 0) || (iVar3 = fn_824CCFC8(iVar1), iVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      iVar3 = fn_824CD030(iVar1);
      if (iVar3 != 0) {
        iVar1 = *(int *)(*(int *)(iVar1 + 0xfc) + 0x20);
        iVar3 = fn_824A73D8(iVar1);
        if ((iVar3 != 0) &&
           (iVar1 = *(int *)(iVar1 + 0x3c), *(float *)(iVar1 + 0x20) < *(float *)(iVar1 + 0x28))) {
          return 1;
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


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
extern int fn_826D69D0();
extern int fn_826E3078();


undefined8 fn_826E3B90(int param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  piVar4 = (int *)(iVar1 + 8);
  if (*(uint *)(iVar1 + 0xc) < 0x1c) {
    iVar3 = fn_826D69D0(piVar4,0x1c);
  }
  else {
    iVar3 = *piVar4;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) - 0x1c;
    *piVar4 = iVar3 + 0x1c;
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_826E3078();
  }
  return uVar2;
}


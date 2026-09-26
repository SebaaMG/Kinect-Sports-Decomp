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
extern int fn_8242C1B8();
extern unsigned int lbl_832975B0;


ulonglong fn_8242C348(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x1d4) == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
    iVar2 = *(int *)(*(int *)(iVar2 + 0x1d4) * 4 + *(int *)(iVar2 + 0x1c4));
  }
  if (*(int *)(*(int *)(iVar2 + 0x40) + 0xf8) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(char *)(iVar2 + 4) == '\0') {
      iVar2 = fn_8242C1B8(param_1);
      uVar1 = (ulonglong)*(uint *)(iVar2 + 0x2c) + 1;
    }
    else {
      uVar1 = 1;
    }
    uVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x174) + 0xbc);
    uVar1 = ((~(uVar3 ^ uVar1) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar3 <= uVar1) & 1;
  }
  return uVar1;
}


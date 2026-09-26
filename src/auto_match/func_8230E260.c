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
extern int fn_822BD338();
extern unsigned int lbl_831CC3C8;


undefined8 fn_8230E260(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x114);
  uVar2 = *(uint *)(iVar1 + 0x28);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(iVar1 + 0x20);
    ppuVar5 = &lbl_831CC3C8;
    do {
      cVar3 = fn_822BD338((ulonglong)uVar2 + 4,*ppuVar5);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 4;
      ppuVar5 = ppuVar5 + 1;
    } while ((uVar4 & 0xffffffff) < 8);
  }
  else {
    ppuVar5 = &lbl_831CC3C8;
    do {
      cVar3 = fn_822BD338((ulonglong)uVar2 + 4,*ppuVar5);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 4;
      ppuVar5 = ppuVar5 + 1;
    } while ((uVar4 & 0xffffffff) < 8);
  }
  return 0;
}


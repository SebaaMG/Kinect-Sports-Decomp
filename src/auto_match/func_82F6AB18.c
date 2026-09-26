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
extern int fn_82F6E1C8();
extern unsigned int lbl_831BB660;
extern unsigned int lbl_831BB670;
extern unsigned int lbl_8329F620;
extern unsigned int lbl_8329F734;
extern unsigned int lbl_8329F738;


undefined8 fn_82F6AB18(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  if (lbl_8329F738 == 0) {
    lbl_8329F738 = 0x200;
  }
  else if (lbl_8329F738 < 0x14) {
    lbl_8329F738 = 0x14;
  }
  lbl_8329F734 = fn_82F6E1C8(lbl_8329F738,4);
  if (lbl_8329F734 == 0) {
    lbl_8329F738 = 0x14;
    lbl_8329F734 = fn_82F6E1C8(0x14,4);
    if (lbl_8329F734 == 0) {
      return 0x1a;
    }
  }
  puVar1 = &lbl_831BB660;
  iVar3 = 0;
  lVar5 = 0x14;
  do {
    *(undefined **)(iVar3 + lbl_8329F734) = puVar1;
    puVar1 = puVar1 + 0x20;
    iVar3 = iVar3 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = &lbl_831BB670;
  uVar4 = 0;
  lVar5 = 3;
  do {
    iVar3 = *(int *)((&lbl_8329F620)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x48);
    if (((iVar3 == -1) || (iVar3 == -2)) || (iVar3 == 0)) {
      *puVar2 = 0xfffffffe;
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}


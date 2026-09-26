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
extern int fn_829D1AD8();
extern unsigned int lbl_831BA870;
extern unsigned int lbl_8326183C;


void fn_82F4D6A0(void)

{
  undefined **ppuVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined **ppuVar6;
  int iVar7;
  
  ppuVar6 = &lbl_831BA870;
  iVar7 = 0;
  lVar5 = 3;
  iVar2 = lbl_8326183C;
  do {
    *(undefined4 *)(iVar7 + iVar2 + 4) = 0;
    ppuVar1 = ppuVar6 + 2;
    ppuVar6 = ppuVar6 + 3;
    uVar3 = fn_829D1AD8(*ppuVar1,*ppuVar6,0,2,0,iVar7 + iVar2 + 4);
    iVar2 = lbl_8326183C;
    iVar4 = iVar7 + lbl_8326183C;
    lVar5 = lVar5 + -1;
    iVar7 = iVar7 + 0x14;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(uint *)(iVar4 + 0x14) = (uint)((uVar3 & 0xffffffff) >> 0x1f) ^ 1;
  } while (lVar5 != 0);
  return;
}


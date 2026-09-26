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
extern unsigned int lbl_832960CC;
extern unsigned int lbl_83296190;


void fn_8251D888(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  
  piVar3 = &lbl_832960CC;
  lVar5 = 4;
  do {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && ((lbl_83296190 == piVar3 + -1 || (piVar3[2] != 0)))) {
      if (*(int *)(iVar1 + 0x10) == 1) {
        iVar2 = *(int *)(iVar1 + 0x24);
        if ((iVar2 < 1) || (3 < iVar2)) {
          uVar4 = 0;
        }
        else {
          uVar4 = (uint)LZCOUNT((uint)LZCOUNT(*(int *)((iVar2 + 4) * 4 + iVar1) + -1) >> 5) >> 5;
        }
        if (uVar4 == 0) goto LAB_8251d994;
LAB_8251d94c:
        uVar4 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x24);
        if ((iVar2 < 1) || (3 < iVar2)) goto LAB_8251d94c;
        uVar4 = (uint)LZCOUNT(*(int *)((iVar2 + 4) * 4 + iVar1) + -1) >> 5;
      }
      if ((uVar4 == 0) &&
         ((iVar2 = *(int *)(iVar1 + 0x24), iVar2 < 1 || (*(int *)((iVar2 + 4) * 4 + iVar1) != 1))))
      {
        *(undefined4 *)((iVar2 + 5) * 4 + iVar1) = 1;
        *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
      }
    }
LAB_8251d994:
    piVar3 = piVar3 + 0xc;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}


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
extern unsigned int lbl_8327F66C;
extern unsigned int lbl_832960CC;
extern unsigned int lbl_83296190;


void fn_82526930(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  lbl_8327F66C = lbl_8327F66C + 1;
  if (lbl_8327F66C != 1) {
    return;
  }
  piVar3 = &lbl_832960CC;
  lVar4 = 4;
  lbl_8327F66C = 1;
  do {
    iVar1 = *piVar3;
    if (((iVar1 != 0) && ((lbl_83296190 == piVar3 + -1 || (piVar3[2] != 0)))) &&
       ((iVar2 = *(int *)(iVar1 + 0x24), iVar2 < 1 || (*(int *)((iVar2 + 4) * 4 + iVar1) != 3)))) {
      *(undefined4 *)((iVar2 + 5) * 4 + iVar1) = 3;
      *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
    }
    piVar3 = piVar3 + 0xc;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}


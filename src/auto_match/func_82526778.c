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
extern int (*lbl_8327F650)();
extern unsigned int lbl_8327F66C;
extern unsigned int lbl_8327F670;
extern unsigned int lbl_8327F674;
extern unsigned int lbl_8327F678;
extern unsigned int lbl_8327F67C;
extern unsigned int lbl_8327FBDC;


void fn_82526778(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (lbl_8327F67C != '\0') {
    return;
  }
  lbl_8327FBDC = lbl_8327FBDC + 1;
  lbl_8327F67C = 1;
  if (lbl_8327F650 != (code *)0x0) {
    (*lbl_8327F650)(lbl_8327F674,0);
  }
  iVar3 = lbl_8327F678;
  if ((lbl_8327F678 != 0) && (lbl_8327F66C != lbl_8327F670)) {
    if ((lbl_8327F66C == 0) && (0 < lbl_8327F670)) {
      iVar2 = *(int *)(lbl_8327F678 + 0x24);
      if ((0 < iVar2) &&
         (lbl_8327F670 = lbl_8327F66C, *(int *)((iVar2 + 4) * 4 + lbl_8327F678) == 1))
      goto LAB_8252687c;
      uVar4 = 1;
    }
    else {
      bVar1 = lbl_8327F670 != 0;
      lbl_8327F670 = lbl_8327F66C;
      if (((bVar1) || (lbl_8327F66C < 1)) ||
         ((iVar2 = *(int *)(lbl_8327F678 + 0x24), 0 < iVar2 &&
          (*(int *)((iVar2 + 4) * 4 + lbl_8327F678) == 0)))) goto LAB_8252687c;
      uVar4 = 0;
    }
    *(undefined4 *)((iVar2 + 5) * 4 + lbl_8327F678) = uVar4;
    *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
    lbl_8327F670 = lbl_8327F66C;
  }
LAB_8252687c:
  lbl_8327FBDC = lbl_8327FBDC + -1;
  lbl_8327F67C = 0;
  return;
}


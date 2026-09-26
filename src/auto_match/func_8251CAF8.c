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
extern int (*lbl_83265A14)();
extern unsigned int lbl_83274690;
extern unsigned int lbl_8329615C;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296190;
extern int (*lbl_832961B8)();


void fn_8251CAF8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = &lbl_8329615C;
  lbl_83296190 = lbl_8329618C;
  piVar4 = lbl_8329618C;
  do {
    if (*piVar5 != 0) {
      lbl_8329618C = piVar5 + -1;
      if ((piVar4 == piVar5 + -1) || (piVar5[2] != 0)) {
        iVar1 = *piVar5;
        *(uint *)(iVar1 + 0x40) = (uint)LZCOUNT(*(undefined4 *)(iVar1 + 0x40)) >> 5;
        piVar4 = lbl_83296190;
        if (*(int *)(iVar1 + 0x10) == 1) {
          iVar2 = *(int *)(iVar1 + 0x24);
          if ((iVar2 < 1) || (3 < iVar2)) {
            uVar3 = 0;
          }
          else {
            uVar3 = (uint)LZCOUNT((uint)LZCOUNT(*(int *)((iVar2 + 4) * 4 + iVar1) + -1) >> 5) >> 5;
          }
          if (uVar3 == 0) {
            uVar3 = *(int *)(iVar1 + 0x44) + 1;
            *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x44);
            *(uint *)(iVar1 + 0x44) =
                 uVar3 + (((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0)) * -4;
            piVar4 = lbl_83296190;
          }
        }
      }
      if (piVar4 == piVar5 + -1) {
        *(undefined4 *)(*(int *)(*piVar5 + 0x408) + 0x800) = 0;
        lbl_83274690 = 0;
        piVar4 = lbl_83296190;
        if (lbl_83265A14 != (code *)0x0) {
          (*lbl_83265A14)();
          piVar4 = lbl_83296190;
        }
      }
    }
    piVar5 = piVar5 + -0xc;
  } while (-0x7cd69f35 < (int)piVar5);
  lbl_8329618C = piVar4;
  if (lbl_832961B8 != (code *)0x0) {
    (*lbl_832961B8)(piVar4[1]);
  }
  return;
}


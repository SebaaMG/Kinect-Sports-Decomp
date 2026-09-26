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
extern int fn_82A1EFC0();
extern int iRam832660d0;
extern int iRam832821fc;
extern unsigned int lbl_83265A5C;
extern unsigned int uRam832660bc;
extern unsigned int uRam832660c0;
extern unsigned int uRam832660c4;
extern unsigned int uRam832660c8;
extern unsigned int uRam83281158;


void fn_8259C110(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((iRam832821fc != 0) && ((lbl_83265A5C & 4) == 0)) {
    iVar5 = 0;
    iVar3 = 0;
    do {
      piVar2 = (int *)(iVar5 + -0x7cd7ee9c);
      if (*(int *)(iVar5 + -0x7cd7eea0) != 0) {
        iVar4 = 0;
        do {
          iVar1 = (iVar3 + iVar4) * 4;
          if (*(code **)(iVar1 + -0x7cd7ee94) != (code *)0x0) {
            (**(code **)(iVar1 + -0x7cd7ee94))
                      (*(undefined4 *)(iVar1 + -0x7cd7ed94),*piVar2,
                       *(undefined4 *)(iVar5 + -0x7cd7ec94));
            *(undefined4 *)(iVar1 + -0x7cd7ee94) = 0;
            *(undefined4 *)(iVar1 + -0x7cd7ed94) = 0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x40);
        if (*piVar2 != 0) {
          *piVar2 = 0;
        }
        *(undefined4 *)(iVar5 + -0x7cd7eea4) = 0;
        *(undefined4 *)(iVar5 + -0x7cd7eea0) = 0;
        iRam832821fc = 0;
      }
      iVar3 = iVar3 + 0x85;
      iVar5 = iVar5 + 0x214;
    } while (iVar3 < 0x428);
    iVar3 = 0;
    piVar2 = (int *)0x8328115c;
    do {
      if (*piVar2 != 0) {
        iRam832660d0 = iVar3 * 0x214;
        uRam832660c4 = 0;
        *(undefined4 *)(iRam832660d0 + -0x7cd7eea0) = 1;
        if (*(int *)(iRam832660d0 + -0x7cd7ee98) != 0) {
          uRam832660c4 = 0x200;
        }
        uRam832660c0 = 1;
        uRam832660c8 = 0;
        uRam832660bc = *(undefined4 *)(iRam832660d0 + -0x7cd7ee9c);
        iRam832660d0 = iRam832660d0 + -0x7cd7ec94;
        uRam83281158 = 0;
        iRam832821fc = 1;
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(0xffffffff832660a0,0,0x1c,0xffffffff8328136c,1,0,0);
      }
      piVar2 = piVar2 + 0x85;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < -0x7cd7de04);
    iRam832821fc = 0;
  }
  return;
}


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
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8320A898;


void fn_825F9C50(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar2 = (int *)fn_82F6A540();
  iVar1 = lbl_8320A898;
  if (*piVar2 == 0) {
    uVar4 = 0;
    piVar3 = piVar2 + 5;
    do {
      if (*piVar3 != 0) break;
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar4 < 3);
    if (uVar4 == 3) {
      fn_82F6A58C();
      return;
    }
  }
  *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,piVar2[0x11]);
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,piVar2[0x12]);
}


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
extern int fn_82F691F0();
extern unsigned int lbl_832177A0;


undefined8 fn_829C9540(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)&lbl_832177A0;
  do {
    if (*piVar1 == 0) {
      *(undefined4 *)(&lbl_832177A0 + uVar2 * 4) = 1;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2 * 0x130 + -0x7cde8bf0,0,0x130);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (uVar2 < 3);
  return 0;
}


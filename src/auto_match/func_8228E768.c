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
extern unsigned int *auStack_162e;
extern int fn_82F691F0();
extern unsigned int lbl_832659CD;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228E768(int param_1)

{
  uint *puVar2;
  ulonglong uVar1;
  undefined1 auStack_162e [5678];
  
  puVar2 = (uint *)(*(int *)(param_1 + 4) + 0x180);
  if (puVar2 != (uint *)0x0) {
    uVar1 = (ulonglong)*puVar2;
    if ((uVar1 != (uVar1 - 1) + (ulonglong)(uVar1 == 0)) && (lbl_832659CD != '\0')) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_162e,0,0x1fe);
    }
  }
  return;
}


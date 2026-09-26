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
extern int fn_8262FEC8();
extern int fn_8265C990();
extern int fn_829C9180();
extern unsigned int *lbl_83217270;


void fn_829CB450(void)

{
  int *piVar1;
  uint uVar2;
  
  if (lbl_83217270 != (int *)0x0) {
    if (*lbl_83217270 != 0) {
      fn_829C9180(lbl_83217270 + 1,0x400);
      fn_8265C990(*lbl_83217270,0xffffffff8c9c0001);
      *lbl_83217270 = 0;
    }
    if (lbl_83217270[0xe] != 0) {
      fn_829C9180(lbl_83217270 + 0xf,0x400);
      fn_8265C990(lbl_83217270[0xe],0xffffffff8c9c0001);
      lbl_83217270[0xe] = 0;
    }
    if (lbl_83217270[0x1c] != 0) {
      fn_8265C990(lbl_83217270[0x1c],0xffffffffac9c0000);
      lbl_83217270[0x1c] = 0;
    }
    uVar2 = 0xb4;
    piVar1 = lbl_83217270;
    do {
      if (*(int *)(uVar2 + (int)piVar1) != 0) {
        fn_8262FEC8(*(int *)(uVar2 + (int)piVar1));
        *(undefined4 *)(uVar2 + (int)lbl_83217270) = 0;
        piVar1 = lbl_83217270;
      }
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0xc4);
    fn_8265C990(piVar1,0x209c0000);
    lbl_83217270 = (int *)0x0;
  }
  return;
}


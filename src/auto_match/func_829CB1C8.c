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
extern int fn_8264B730();
extern int fn_8265C940();
extern int fn_82F691F0();
extern unsigned int lbl_83217270;


ulonglong fn_829CB1C8(void)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  lbl_83217270 = fn_8265C940(0xc4,0x209c0000);
  if (lbl_83217270 == 0) {
    uVar3 = 0xffffffffc0000017;
    uVar4 = 0;
    lbl_83217270 = 0;
    iVar5 = lbl_83217270;
    do {
      if (uVar4 == 0) {
        uVar1 = 0x7000;
      }
      else {
        uVar1 = 0xc000;
      }
      if (-1 < (int)uVar3) {
        lVar2 = fn_8264B730(uVar1,0);
        *(int *)((uVar4 + 0x2d) * 4 + iVar5) = (int)lVar2;
        uVar3 = -(ulonglong)(lVar2 == 0) & 0xffffffff8007000e;
        iVar5 = lbl_83217270;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    if (-1 < (int)uVar3) {
      *(undefined4 *)(iVar5 + 0xa8) = 0;
      *(undefined4 *)(lbl_83217270 + 0xac) = 0x4b00;
      *(undefined4 *)(lbl_83217270 + 0xb0) = 0x9600;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lbl_83217270,0,0xc4);
}


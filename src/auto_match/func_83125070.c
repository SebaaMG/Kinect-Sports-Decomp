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
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_82F63EC8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_832967A0;
extern unsigned int lbl_832967A4;
extern unsigned int lbl_832967A8;
extern unsigned int lbl_832967AC;
extern unsigned int lbl_832967B0;
extern unsigned int uStack_14;


void fn_83125070(void)

{
  undefined8 *puVar1;
  undefined **ppuStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined8 *)fn_8265C9E0(8);
  if (puVar1 != (undefined8 *)0x0) {
    lbl_832967A0 = puVar1;
    *puVar1 = 0;
    *(undefined8 ***)lbl_832967A0 = &lbl_832967A0;
    lbl_832967A4 = 0;
    lbl_832967A8 = 0;
    lbl_832967AC = 0;
    lbl_832967B0 = 0;
    fn_82F63EC8(0xffffffff8313f588);
    return;
  }
  uStack_14 = 0;
  ppuStack_18 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_18);
}


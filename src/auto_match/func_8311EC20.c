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
extern int atexit();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83292C84;
extern unsigned int uStack_c;


void fn_8311EC20(void)

{
  int iVar1;
  undefined **ppuStack_10;
  undefined4 uStack_c;
  
  iVar1 = fn_8265C9E0(0x1c);
  if (iVar1 != 0) {
    lbl_83292C84 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83292C84 + 4) = lbl_83292C84;
    *(int *)(lbl_83292C84 + 8) = lbl_83292C84;
    *(undefined1 *)(lbl_83292C84 + 0x18) = 1;
    *(undefined1 *)(lbl_83292C84 + 0x19) = 1;
    atexit(0xffffffff8313e4f0);
    return;
  }
  uStack_c = 0;
  ppuStack_10 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_10);
}


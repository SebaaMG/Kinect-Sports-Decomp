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
extern unsigned int lbl_83297948;
extern unsigned int lbl_8329794C;
extern unsigned int lbl_83298FD8;
extern unsigned int uStack_1c;


undefined8 fn_825154B8(void)

{
  int iVar1;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  
  if ((lbl_83298FD8 & 1) == 0) {
    lbl_83298FD8 = lbl_83298FD8 | 1;
    lbl_8329794C = 0;
    iVar1 = fn_8265C9E0(0x4c);
    if (iVar1 == 0) {
      uStack_1c = 0;
      ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_20);
    }
    lbl_83297948 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83297948 + 4) = lbl_83297948;
    *(int *)(lbl_83297948 + 8) = lbl_83297948;
    *(undefined1 *)(lbl_83297948 + 0x48) = 1;
    *(undefined1 *)(lbl_83297948 + 0x49) = 1;
    fn_82F63EC8(0xffffffff8313f190);
  }
  return 0xffffffff83297944;
}


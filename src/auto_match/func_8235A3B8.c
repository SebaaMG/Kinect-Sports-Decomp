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
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C0B60;
extern unsigned int lbl_83298EF8;
extern unsigned int lbl_83298EFC;
extern unsigned int lbl_83298F04;
extern unsigned int lbl_83298F08;
extern unsigned int uStack_1c;


undefined8 fn_8235A3B8(void)

{
  int iVar1;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  
  lbl_83298EF8 = &lbl_821C0B60;
  lbl_83298EFC = "MindStateMan";
  lbl_83298F08 = 0;
  iVar1 = fn_8265C9E0(0x34);
  if (iVar1 != 0) {
    lbl_83298F04 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83298F04 + 4) = lbl_83298F04;
    *(int *)(lbl_83298F04 + 8) = lbl_83298F04;
    *(undefined1 *)(lbl_83298F04 + 0x30) = 1;
    *(undefined1 *)(lbl_83298F04 + 0x31) = 1;
    return 0xffffffff83298ef8;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}


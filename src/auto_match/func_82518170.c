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
extern int iRam83297928;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83297938;
extern unsigned int lbl_8329793C;
extern unsigned int uRam8329792c;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


undefined8 fn_82518170(void)

{
  int iVar1;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  uRam8329792c = 0;
  iVar1 = fn_8265C9E0(0x24);
  if (iVar1 == 0) {
    uStack_24 = 0;
    ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_28);
  }
  iRam83297928 = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iRam83297928 + 4) = iRam83297928;
  *(int *)(iRam83297928 + 8) = iRam83297928;
  *(undefined1 *)(iRam83297928 + 0x20) = 1;
  *(undefined1 *)(iRam83297928 + 0x21) = 1;
  lbl_8329793C = 0;
  iVar1 = fn_8265C9E0(0x18);
  if (iVar1 != 0) {
    lbl_83297938 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83297938 + 4) = lbl_83297938;
    *(int *)(lbl_83297938 + 8) = lbl_83297938;
    *(undefined1 *)(lbl_83297938 + 0x14) = 1;
    *(undefined1 *)(lbl_83297938 + 0x15) = 1;
    return 0xffffffff83297924;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}


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
extern unsigned int lbl_821C242C;
extern unsigned int lbl_832977D0;
extern unsigned int lbl_832977D8;
extern unsigned int lbl_832977DC;
extern unsigned int lbl_832977E8;
extern unsigned int lbl_832977EC;
extern unsigned int lbl_832977F4;
extern unsigned int lbl_832977F8;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


undefined8 fn_82511A50(void)

{
  int iVar1;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  lbl_832977DC = 0;
  lbl_832977D0 = &lbl_821C242C;
  iVar1 = fn_8265C9E0(0x1c);
  if (iVar1 == 0) {
    uStack_2c = 0;
    ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_30);
  }
  lbl_832977D8 = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(lbl_832977D8 + 4) = lbl_832977D8;
  *(int *)(lbl_832977D8 + 8) = lbl_832977D8;
  *(undefined1 *)(lbl_832977D8 + 0x18) = 1;
  *(undefined1 *)(lbl_832977D8 + 0x19) = 1;
  lbl_832977EC = 0;
  iVar1 = fn_8265C9E0(0x18);
  if (iVar1 != 0) {
    lbl_832977E8 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_832977E8 + 4) = lbl_832977E8;
    *(int *)(lbl_832977E8 + 8) = lbl_832977E8;
    *(undefined1 *)(lbl_832977E8 + 0x14) = 1;
    *(undefined1 *)(lbl_832977E8 + 0x15) = 1;
    lbl_832977F8 = 0;
    iVar1 = fn_8265C9E0(0x10);
    if (iVar1 != 0) {
      lbl_832977F4 = iVar1;
      *(int *)iVar1 = iVar1;
      *(int *)(lbl_832977F4 + 4) = lbl_832977F4;
      return 0xffffffff832977d0;
    }
    uStack_3c = 0;
    ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_40);
  }
  uStack_34 = 0;
  ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_38);
}


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
extern int fn_82587028();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83297A58;
extern unsigned int lbl_83297A5C;
extern unsigned int lbl_83297A60;
extern unsigned int lbl_83297A68;
extern unsigned int lbl_83297A6C;
extern unsigned int lbl_83297A70;
extern unsigned int lbl_83297A80;
extern unsigned int lbl_83297A84;
extern unsigned int lbl_83297A8C;
extern unsigned int lbl_83297A90;
extern unsigned int lbl_83297A94;
extern unsigned int lbl_83297A9C;
extern unsigned int lbl_83297AA0;
extern unsigned int lbl_83297AA4;
extern unsigned int uStack_14;
extern unsigned int uStack_20;


undefined8 fn_82569B60(void)

{
  int iVar1;
  undefined1 uStack_20;
  undefined **ppuStack_18;
  undefined4 uStack_14;
  
  lbl_83297A58 = uStack_20;
  lbl_83297A60 = 0;
  iVar1 = fn_8265C9E0(0x10);
  if (iVar1 != 0) {
    lbl_83297A5C = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83297A5C + 4) = lbl_83297A5C;
    lbl_83297A68 = 0;
    lbl_83297A80 = lbl_821CA460;
    lbl_83297A6C = 0;
    lbl_83297A70 = 0;
    fn_82587028(0xffffffff83297a58,8);
    lbl_83297A84 = 0;
    lbl_83297A8C = 0;
    lbl_83297A90 = 0;
    lbl_83297A94 = 0;
    lbl_83297A9C = 0;
    lbl_83297AA0 = 0;
    lbl_83297AA4 = 0;
    return 0xffffffff83297a48;
  }
  uStack_14 = 0;
  ppuStack_18 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_18);
}


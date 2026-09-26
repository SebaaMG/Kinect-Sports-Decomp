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
extern unsigned int *auStack_70;
extern int fn_82230040();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8251F720();
extern int fn_8251FBA8();
extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int iStack_50;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_84;


void fn_8243D160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined **ppuStack_88;
  undefined4 uStack_84;
  undefined1 auStack_70 [32];
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  
  fn_8251F720(param_3,0);
  uVar1 = fn_8251FBA8();
  if ((uVar1 & 0xffffffff) < 0x38) {
    return;
  }
  fn_82230300(auStack_70,0,0);
  uStack_4c = 0;
  iStack_50 = fn_8265C9E0(0x18);
  if (iStack_50 != 0) {
    *(int *)iStack_50 = iStack_50;
    *(int *)(iStack_50 + 4) = iStack_50;
    *(int *)(iStack_50 + 8) = iStack_50;
    *(undefined1 *)(iStack_50 + 0x14) = 1;
    *(undefined1 *)(iStack_50 + 0x15) = 1;
    uStack_44 = 0;
    fn_82230218(auStack_70,param_2,0,0xffffffffffffffff);
                    /* WARNING: Subroutine does not return */
    fn_82522D98(uVar1);
  }
  uStack_84 = 0;
  ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_88);
}


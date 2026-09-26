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
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_82359C18();
extern int fn_824C5930();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B2D04;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 *
fn_82365DD8(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,float *param_4,
             float *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined4 *puStack_50;
  
  uVar2 = (((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
  bVar1 = false;
  param_1[1] = 1;
  param_1[2] = 1;
  *param_1 = &lbl_821A8D8C;
  ppuStack_80 = (undefined **)0x0;
  if (param_1 + 4 != (undefined4 *)0x0) {
    uStack_70 = *param_3;
    uStack_68 = param_3[1];
    puStack_50 = (undefined4 *)fn_8265C9E0(0x18);
    if (puStack_50 == (undefined4 *)0x0) {
      uStack_7c = 0;
      ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_80);
    }
    bVar1 = true;
    *puStack_50 = &lbl_821B2D04;
    puStack_50[2] = uVar2;
    puStack_50[3] = (((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
    puStack_50[4] = (((U64)(uStack_68) >> 0) & 0xFFFFFFFF);
    puStack_50[5] = (((U64)(uStack_68) >> 32) & 0xFFFFFFFF);
    fn_824C5930((double)*param_4,(double)*param_5,param_1 + 4,*param_2,auStack_60);
  }
  if (bVar1) {
    fn_82359C18(auStack_60);
  }
  return param_1;
}


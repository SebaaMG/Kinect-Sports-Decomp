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
extern unsigned int *auStack_38;
extern unsigned int *auStack_60;
extern int fn_8223C610();
extern int fn_82429898();
extern int fn_82429BA8();
extern int fn_828ABBC0();
extern int fn_828ABF58();
extern unsigned int lbl_821B8BDC;
extern unsigned int lbl_821B8C30;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_3c;
extern unsigned int uStack_6c;


void fn_8242A2B0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [32];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [56];
  
  uStack_3c = 0;
  ppuStack_40 = &lbl_821B8C30;
  fn_828ABF58(auStack_38,0,0,7);
  iVar1 = param_3 + 8;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  fn_82429898(&ppuStack_40,param_2,iVar1);
  fn_828ABF58(auStack_60,0,4,0x18);
  iVar1 = param_3 + 0xc;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  fn_828ABBC0(auStack_60,param_2,iVar1);
  iVar1 = fn_8223C610(param_2,1,0,0);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      *(undefined4 *)(param_3 + 0x10) = lbl_821CC160;
    }
  }
  else {
    uStack_6c = 0;
    iVar1 = param_3 + 0x10;
    ppuStack_70 = &lbl_821B8BDC;
    if (param_3 == 0) {
      iVar1 = 0;
    }
    fn_82429BA8(&ppuStack_70,param_2,iVar1);
  }
  return;
}


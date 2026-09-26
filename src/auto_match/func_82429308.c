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
extern unsigned int *auStack_80;
extern int fn_8223C478();
extern int fn_822CB7F8();
extern int fn_82429A78();
extern int fn_828ABF58();
extern int fn_828AC330();
extern int fn_828E9DB8();
extern unsigned int lbl_821B8BAC;
extern unsigned int lbl_821B8BC4;
extern unsigned int lbl_821B8BDC;
extern unsigned int uStack_3c;
extern unsigned int uStack_5c;
extern unsigned int uStack_8c;


void fn_82429308(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [32];
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  int aiStack_58 [6];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [14];
  
  uStack_5c = 0;
  ppuStack_60 = &lbl_821B8BAC;
  fn_828ABF58(aiStack_58,0,0,3);
  ppuStack_90 = *(undefined ***)(param_3 + 8);
  (**(code **)(aiStack_58[0] + 0x10))(aiStack_58,param_2,&ppuStack_90);
  fn_828ABF58(auStack_80,0,0xe,0x18);
  fn_828AC330(auStack_80,param_2,param_3 + 0xc);
  if (*(int *)(param_3 + 8) == 1) {
    fn_822CB7F8(param_2,param_3 + 0x10,3,8,3,8,3,8);
    fn_822CB7F8(param_2,param_3 + 0x20,10,3,10,3,10,3);
    uStack_3c = 0;
    ppuStack_40 = &lbl_821B8BC4;
    fn_828ABF58(aiStack_38,0,0,2);
    ppuStack_90 = *(undefined ***)(param_3 + 0x40);
    (**(code **)(aiStack_38[0] + 0x10))(aiStack_38,param_2,&ppuStack_90);
    iVar1 = *(int *)(param_3 + 0x38);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,iVar1 != 0,1);
    iVar1 = *(int *)(param_3 + 0x34);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,iVar1 != 0,1);
  }
  else if (*(int *)(param_3 + 8) == 2) {
    uStack_8c = 0;
    ppuStack_90 = &lbl_821B8BDC;
    fn_82429A78(&ppuStack_90,param_2,param_3 + 0x68);
  }
  return;
}


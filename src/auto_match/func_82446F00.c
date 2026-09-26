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
extern int fn_8223C478();
extern int fn_822CB7F8();
extern int fn_828ABF58();
extern int fn_828E5660();
extern int fn_828E9DB8();
extern unsigned int lbl_821B9BCC;
extern unsigned int lbl_821B9BE4;
extern unsigned int uStack_3c;
extern unsigned int uStack_5c;


void fn_82446F00(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint auStack_70 [4];
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  int aiStack_58 [6];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [14];
  
  uStack_5c = 0;
  ppuStack_60 = &lbl_821B9BCC;
  fn_828ABF58(aiStack_58,0,0,3);
  auStack_70[0] = *(uint *)(param_3 + 8);
  (**(code **)(aiStack_58[0] + 0x10))(aiStack_58,param_2,auStack_70);
  if (*(uint *)(param_3 + 8) == 0) {
    iVar1 = *(int *)(param_3 + 0xc);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,iVar1 != 0,1);
  }
  else if (*(uint *)(param_3 + 8) < 3) {
    fn_822CB7F8(param_2,param_3 + 0x10,9,8,9,8,9,8);
    if (*(int *)(param_3 + 8) == 1) {
      fn_828E5660((double)*(float *)(param_3 + 0x20),param_2);
    }
    else {
      uStack_3c = 0;
      ppuStack_40 = &lbl_821B9BE4;
      fn_828ABF58(aiStack_38,0,0,8);
      auStack_70[0] = (uint)*(byte *)(param_3 + 0x24);
      (**(code **)(aiStack_38[0] + 0x10))(aiStack_38,param_2,auStack_70);
    }
  }
  return;
}


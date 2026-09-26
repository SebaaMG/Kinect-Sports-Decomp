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
extern unsigned int *auStack_48;
extern int fn_82429898();
extern int fn_828ABF58();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828EA130();
extern unsigned int lbl_821B9B78;
extern unsigned int uStack_4c;


void fn_82446798(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int aiStack_60 [4];
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [72];
  
  uStack_4c = 0;
  ppuStack_50 = &lbl_821B9B78;
  fn_828ABF58(auStack_48,0,0,4);
  fn_82429898(&ppuStack_50,param_2,aiStack_60);
  uVar3 = 0;
  if (aiStack_60[0] == 0) {
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (iVar1 - iVar2 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828EA130(param_2,0x20);
    }
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = aiStack_60[0];
    *(undefined4 *)(param_3 + 0xc) = uVar3;
  }
  return;
}


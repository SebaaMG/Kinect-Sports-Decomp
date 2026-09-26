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
extern unsigned int *auStack_50;
extern int fn_8223C478();
extern int fn_828ABF58();
extern int fn_828E9DB8();
extern unsigned int lbl_821B9B78;
extern unsigned int uStack_3c;


void fn_824466E8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 auStack_50 [4];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [8];
  
  uStack_3c = 0;
  ppuStack_40 = &lbl_821B9B78;
  fn_828ABF58(aiStack_38,0,0,4);
  auStack_50[0] = *(undefined4 *)(param_3 + 8);
  (**(code **)(aiStack_38[0] + 0x10))(aiStack_38,param_2,auStack_50);
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = *(undefined4 *)(param_3 + 0xc);
    fn_8223C478(param_2,0x20,0);
    fn_828E9DB8(param_2,uVar1,0x20);
  }
  return;
}


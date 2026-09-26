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
extern int fn_8280AC48();
extern int fn_8280C348();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_24;
extern unsigned int uStack_34;
extern unsigned int uStack_44;


void fn_8280C450(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [12];
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_1 == param_2) {
    fn_8280C348(param_1,auStack_50);
    uStack_44 = lbl_821AAD20;
    uStack_34 = lbl_821AAD20;
    uStack_24 = lbl_821AAD20;
    uStack_14 = lbl_82002AE0;
    fn_8280AC48(auStack_50,param_2);
  }
  else {
    fn_8280C348(param_1,param_2);
    uVar2 = lbl_821AAD20;
    uVar1 = lbl_82002AE0;
    *(undefined4 *)(param_2 + 0xc) = lbl_821AAD20;
    *(undefined4 *)(param_2 + 0x1c) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
  }
  return;
}


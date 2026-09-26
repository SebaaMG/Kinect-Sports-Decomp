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
extern int fn_82FAB9C0();
extern int fn_8300F1E0();
extern int fn_8300F208();
extern unsigned int iStack_5c;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5e;


undefined8
fn_82FEA1E0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined2 uVar2;
  undefined8 uVar1;
  undefined1 auStack_60 [2];
  undefined2 uStack_5e;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uStack_5e = 0x1f;
  iStack_5c = fn_82FAB9C0((ulonglong)lbl_832642E0 + 0x674,param_1);
  if (iStack_5c == 0) {
    uVar1 = 2;
  }
  else {
    uStack_58 = param_3;
    uStack_54 = param_2;
    uStack_50 = param_4;
    uStack_4c = param_5;
    uVar2 = fn_8300F1E0();
    uVar1 = fn_8300F208(lbl_832642E4,auStack_60,uVar2);
  }
  return uVar1;
}


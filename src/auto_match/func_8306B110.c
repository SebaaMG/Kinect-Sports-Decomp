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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810558();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined8 fn_8306B110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  uVar1 = 2;
  fn_82810328(param_3,param_2,auStack_50);
  fn_82810328(param_1,param_2,auStack_40);
  dVar2 = (double)fn_82810280(auStack_40,auStack_50);
  dVar3 = (double)fn_82810280(auStack_50,auStack_50);
  dVar2 = (double)(float)(dVar2 / dVar3);
  if ((double)lbl_821AAD20 < dVar2) {
    if ((double)lbl_82002AE0 <= dVar2) {
      uVar1 = 1;
      dVar2 = (double)lbl_82002AE0;
    }
  }
  else {
    uVar1 = 0;
    dVar2 = (double)lbl_821AAD20;
  }
  fn_82810558(dVar2,auStack_50,param_2);
  return uVar1;
}


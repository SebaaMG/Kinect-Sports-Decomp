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
extern unsigned int *auStack_30;
extern unsigned int fStack_40;
extern unsigned int fStack_4c;
extern int fn_82D38870();
extern unsigned int lbl_82134504;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821348F8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_31;
extern unsigned int uStack_32;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;


double fn_82D1F558(int param_1,int *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined **ppuStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 auStack_30 [32];
  
  uStack_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_3c = lbl_82134508;
  uStack_33 = 0;
  uStack_38 = lbl_82134504;
  fStack_40 = lbl_821AAD20;
  ppuStack_50 = &lbl_821348F8;
  fStack_4c = lbl_821AAD20;
  uStack_32 = 1;
  uStack_34 = 1;
  piStack_44 = param_2;
  uStack_31 = param_3;
  uVar1 = (**(code **)(*param_2 + 0xc))(auStack_30);
  fn_82D38870(param_1 + 0x720,uVar1,&ppuStack_50);
  return -(double)fStack_40;
}


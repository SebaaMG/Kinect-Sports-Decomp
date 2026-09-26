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
extern unsigned int fStack_5c;
extern int fn_82D38870();
extern unsigned int lbl_82134504;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821348F8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_41;
extern unsigned int uStack_42;
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


undefined1
fn_82D1F490(double param_1,int param_2,int *param_3,undefined8 param_4,undefined4 *param_5,
             undefined1 param_6)

{
  undefined8 uVar1;
  undefined **ppuStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 auStack_40 [40];
  
  uStack_58 = *(undefined4 *)(param_2 + 0x38);
  fStack_5c = (float)param_1;
  uStack_44 = param_5 != (undefined4 *)0x0;
  ppuStack_60 = &lbl_821348F8;
  uStack_4c = lbl_82134508;
  uStack_43 = 0;
  uStack_48 = lbl_82134504;
  uStack_41 = 0;
  uStack_50 = lbl_821AAD20;
  piStack_54 = param_3;
  uStack_42 = param_6;
  uVar1 = (**(code **)(*param_3 + 0xc))(auStack_40);
  fn_82D38870(param_2 + 0x720,uVar1,&ppuStack_60);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uStack_4c;
  }
  return uStack_43;
}


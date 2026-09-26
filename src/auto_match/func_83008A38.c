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
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int iStack_50;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_5c;


void fn_83008A38(double param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  if (param_3[2] != 0) {
    fStack_54 = (float)param_1;
    fn_82FF5400(lbl_832642F4,param_3[2],0x10000,param_5,param_7,param_6,param_5);
  }
  if (param_3[2] == 0) {
    fStack_58 = (float)param_3[3];
    if ((param_5 & 0xffffffff) == 0) {
      param_1 = (double)lbl_821AAD20;
      fStack_54 = lbl_821AAD20;
    }
    else if ((param_5 & 0xffffffff) < 3) {
      fStack_54 = (float)param_1;
    }
    else {
      param_1 = (double)fStack_54;
    }
    if (((double)fStack_58 == param_1) || (iStack_50 = (int)param_7, iStack_50 == 0)) {
      (**(code **)*param_3)(param_3,0x10000);
    }
    else {
      uStack_4c = (undefined4)param_6;
      uStack_5c = 0x10000;
      uStack_48 = 1;
      puStack_60 = param_3;
      uVar1 = fn_82FF59A8(lbl_832642F4,&puStack_60,1,0);
      param_3[2] = uVar1;
    }
  }
  return;
}


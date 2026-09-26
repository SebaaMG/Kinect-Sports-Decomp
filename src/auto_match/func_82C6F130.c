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
extern int fn_82C696B8();
extern int fn_82C6A398();
extern int fn_82C6BE00();
extern int fn_82C6D128();
extern int fn_82C6ECC0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


undefined8
fn_82C6F130(double param_1,double param_2,undefined8 param_3,double param_4,double param_5,
             undefined8 param_6,double param_7,int param_8,int param_9,int param_10,int param_11,
             int param_12,int param_13,int param_14)

{
  double dVar1;
  
  if (((((param_8 == 0) || (param_9 == 0)) || (param_10 == 0)) ||
      ((param_11 == 0 || (param_12 == 0)))) || ((param_13 == 0 || (param_14 == 0)))) {
    return 0xfffffffffffffffd;
  }
  *(int *)(param_8 + 0x3c38) = param_12;
  *(int *)(param_8 + 0x3c3c) = param_13;
  *(int *)(param_8 + 0x3c40) = param_14;
  *(int *)(param_8 + 0x3c2c) = param_9;
  *(int *)(param_8 + 0x3c30) = param_10;
  dVar1 = lbl_82005710;
  *(int *)(param_8 + 0x3c34) = param_11;
  if ((param_2 != dVar1) || (param_4 != dVar1)) {
    fn_82C6ECC0(param_1,param_2,param_3,param_4,param_5);
    return 0;
  }
  if ((param_1 == param_5) && (param_1 == lbl_82005758)) {
    if (param_7 == lbl_82005758) {
      fn_82C696B8();
      return 0;
    }
    fn_82C6A398(param_3,param_6,param_7);
    return 0;
  }
  if (param_7 == lbl_82005758) {
    fn_82C6BE00();
    return 0;
  }
  fn_82C6D128(param_1,param_3,param_5,param_6,param_7);
  return 0;
}


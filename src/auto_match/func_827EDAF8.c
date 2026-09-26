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
extern unsigned int *auStack_54;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_827ECE88();
extern int fn_827EF590();
extern int fn_827EF608();
extern int fn_8280A5E8();
extern int fn_82810328();
extern int fn_828106A0();
extern int fn_8281CB50();
extern unsigned int lbl_82002AE0;


undefined8
fn_827EDAF8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float *param_5,undefined8 param_6)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [72];
  
  fn_828106A0(auStack_80);
  iVar2 = fn_8280A5E8((double)*param_5);
  if (((iVar2 == 0) && (iVar2 = fn_8280A5E8((double)param_5[1]), iVar2 == 0)) &&
     (iVar2 = fn_8280A5E8((double)param_5[2]), iVar2 == 0)) {
    fn_82810328(param_1,param_4,auStack_60);
    fn_82810328(param_2,param_4,auStack_54);
    fn_82810328(param_3,param_4,auStack_48);
    fn_8281CB50(param_6,auStack_60,auStack_60,3);
    fn_827EF590(param_5,auStack_90);
    fn_827EF608(auStack_90,auStack_60,auStack_60);
    fn_827EF608(auStack_90,auStack_54,auStack_54);
    fn_827EF608(auStack_90,auStack_48,auStack_48);
    uVar1 = fn_827ECE88((double)lbl_82002AE0,auStack_80);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


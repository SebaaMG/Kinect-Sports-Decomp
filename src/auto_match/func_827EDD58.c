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
extern unsigned int *auStack_60;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_827E9A68();
extern int fn_827EF590();
extern int fn_827EF608();
extern int fn_8280A5E8();
extern int fn_82810328();
extern int fn_8281CAE8();
extern unsigned int lbl_82002AE0;


undefined8
fn_827EDD58(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,float *param_7,undefined8 param_8,
             undefined8 param_9)

{
  int iVar2;
  undefined8 uVar1;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fStack_70 = (float)((double)*param_7 + param_1);
  fStack_6c = (float)((double)param_7[1] + param_1);
  fStack_68 = (float)((double)param_7[2] + param_1);
  fn_82810328(param_3,param_6,auStack_50);
  fn_82810328(param_5,param_9,auStack_60);
  fn_8281CAE8(param_8,auStack_50,auStack_50);
  fn_8281CAE8(param_8,auStack_60,auStack_60);
  iVar2 = fn_8280A5E8((double)fStack_70);
  if (((iVar2 == 0) && (iVar2 = fn_8280A5E8((double)fStack_6c), iVar2 == 0)) &&
     (iVar2 = fn_8280A5E8((double)fStack_68), iVar2 == 0)) {
    fn_827EF590(&fStack_70,auStack_40);
    fn_827EF608(auStack_40,auStack_50,auStack_50);
    fn_827EF608(auStack_40,auStack_60,auStack_60);
    uVar1 = fn_827E9A68((double)lbl_82002AE0,param_2,auStack_50,auStack_60);
    return uVar1;
  }
  return 0;
}


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
extern unsigned int *auStack_ec;
extern unsigned int *auStack_f0;
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82255B50();
extern int fn_82520AC8();


undefined8
fn_822558D8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [156];
  undefined1 auStack_50 [80];
  
  fn_8223CFC0(auStack_f0,2,1);
  fn_82240158(auStack_f0,0xffffffff82196f90);
  uVar1 = fn_82520AC8(auStack_f0,2);
  fn_82240158(uVar1,0xffffffff82196fac);
  uVar1 = fn_82520AC8(auStack_f0,1);
  fn_82240158(uVar1,0xffffffff82196fac);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  fn_82240158(auStack_f0,0xffffffff82196582);
  uVar1 = fn_82255B50(auStack_50,param_2,param_3,param_4);
  uVar2 = fn_82240158(auStack_f0,0xffffffff82196fb4);
  uVar1 = fn_8223B728(uVar2,uVar1);
  fn_82240158(uVar1,0xffffffff82196fb0);
  fn_82230300(auStack_50,1,0);
  fn_822403C8(param_1,auStack_ec);
  fn_8223DCC8(auStack_f0);
  return param_1;
}


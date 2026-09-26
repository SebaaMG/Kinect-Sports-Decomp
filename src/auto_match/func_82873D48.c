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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82864898();
extern int fn_828648F0();
extern int fn_82865100();
extern int fn_82865170();
extern int fn_82865EE0();
extern int fn_82866418();
extern int fn_828685D8();
extern int fn_82873BB8();
extern int fn_82878F88();


undefined8
fn_82873D48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  fn_82230110(auStack_b0,0xffffffff82022380);
  fn_82230110(auStack_d0,0xffffffff82022388);
  uVar1 = fn_82865100();
  uVar1 = fn_82865EE0(auStack_90,uVar1,auStack_d0,auStack_b0);
  fn_828648F0(auStack_70,uVar1);
  fn_82230300(auStack_90,1,0);
  fn_82230300(auStack_d0,1,0);
  fn_82230300(auStack_b0,1,0);
  piVar2 = (int *)fn_828685D8();
  uVar1 = (**(code **)(*piVar2 + 4))(piVar2,auStack_70,param_3,param_4,param_5);
  iVar3 = fn_82878F88(uVar1,param_6,param_7);
  if (iVar3 < 0) {
    fn_82864898(auStack_70);
    uVar1 = 0xffffffffa0120000;
  }
  else {
    iVar3 = fn_82873BB8(param_1,uVar1,param_2);
    if (iVar3 < 0) {
      fn_82865170();
      fn_82866418();
      uVar1 = 0xffffffffa0120000;
    }
    else {
      uVar1 = 0x20120000;
    }
    fn_82864898(auStack_70);
  }
  return uVar1;
}


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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
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
fn_82874458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_stack_00000054;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  fn_82230110(auStack_c0,0xffffffff820223d0);
  fn_82230110(auStack_e0,0xffffffff820223d8);
  uVar1 = fn_82865100();
  uVar1 = fn_82865EE0(auStack_a0,uVar1,auStack_e0,auStack_c0);
  fn_828648F0(auStack_80,uVar1);
  fn_82230300(auStack_a0,1,0);
  fn_82230300(auStack_e0,1,0);
  fn_82230300(auStack_c0,1,0);
  piVar2 = (int *)fn_828685D8();
  uVar1 = (**(code **)(*piVar2 + 0x1c))(param_1,piVar2,auStack_80,param_4,param_5,param_6,param_7);
  iVar3 = fn_82878F88(uVar1,param_9,in_stack_00000054);
  if (iVar3 < 0) {
    fn_82864898(auStack_80);
    uVar1 = 0xffffffffa0120000;
  }
  else {
    iVar3 = fn_82873BB8(param_2,uVar1,param_3);
    if (iVar3 < 0) {
      fn_82865170();
      fn_82866418();
      uVar1 = 0xffffffffa0120000;
    }
    else {
      uVar1 = 0x20120000;
    }
    fn_82864898(auStack_80);
  }
  return uVar1;
}


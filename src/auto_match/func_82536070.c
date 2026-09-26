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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822A89B8();
extern int fn_82864848();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int *lbl_8327F848;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F878;


void fn_82536070(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [40];
  
  fn_82864848(auStack_70);
  uVar2 = lbl_8327F878;
  uVar3 = fn_82230110(auStack_90,param_1);
  uVar4 = fn_822A89B8(uVar2,4,uVar3,auStack_70);
  fn_82230300(auStack_90,1,0);
  if ((uVar4 & 0xffffffff) >> 0x1f == 0) {
    iVar1 = *lbl_8327F848;
    uVar3 = fn_82864988(auStack_40,param_2);
    uVar4 = (**(code **)(iVar1 + 8))(lbl_8327F848,auStack_70,uVar3);
    fn_82864898(auStack_40);
    if ((uVar4 & 0xffffffff) >> 0x1f == 0) goto code_r0x82536158;
    uVar3 = 0x889;
    uVar5 = 0xffffffff821c3e88;
  }
  else {
    uVar3 = 0x881;
    uVar5 = 0xffffffff821c3e38;
  }
  (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,uVar3,uVar5);
code_r0x82536158:
  fn_82864898(auStack_70);
  return;
}


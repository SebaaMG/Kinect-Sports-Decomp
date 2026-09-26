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
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_826B2CF0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


undefined8
fn_826B32D0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  char cVar3;
  undefined8 uVar2;
  int iStack_50;
  int iStack_4c;
  byte bStack_48;
  char acStack_40 [64];
  
  acStack_40[0] = '\0';
  cVar3 = (**(code **)(*(int *)(param_2 + 0x10) + 0x10))(param_2 + 0x10,param_1,param_3,acStack_40);
  if (cVar3 != '\0') {
    if ((acStack_40[0] == '\b') || (bVar1 = false, acStack_40[0] == '\v')) {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = fn_82696B20(&iStack_50,acStack_40,param_1);
      uVar2 = fn_826B2CF0(param_1,uVar2,param_4,param_5);
      if (((bStack_48 & 2) == 0) && (iStack_50 != 0)) {
        fn_826824B0();
      }
      iStack_50 = 0;
      if (((bStack_48 & 1) == 0) && (iStack_4c != 0)) {
        fn_826824B0();
      }
      iStack_4c = 0;
      goto LAB_826b33a0;
    }
  }
  uVar2 = 0;
LAB_826b33a0:
  fn_82696330(acStack_40);
  return uVar2;
}


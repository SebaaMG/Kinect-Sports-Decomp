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
extern unsigned int *auStack_30;
extern int fn_826824B0();
extern int fn_82695598();
extern int fn_82696330();
extern int fn_82696B20();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


bool fn_827219A0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iStack_40;
  int iStack_3c;
  byte bStack_38;
  undefined1 auStack_30 [24];
  
  uVar3 = fn_82695598(auStack_30,param_2,0xffffffff827210c8);
  piVar4 = (int *)fn_82696B20(&iStack_40,uVar3,0);
  iVar1 = *piVar4;
  iVar2 = *(int *)(param_1 + 0x48);
  if (((bStack_38 & 2) == 0) && (iStack_40 != 0)) {
    fn_826824B0();
  }
  iStack_40 = 0;
  if (((bStack_38 & 1) == 0) && (iStack_3c != 0)) {
    fn_826824B0();
  }
  iStack_3c = 0;
  fn_82696330(auStack_30);
  return iVar1 != iVar2;
}


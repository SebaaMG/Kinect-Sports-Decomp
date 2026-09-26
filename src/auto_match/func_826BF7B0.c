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
extern unsigned int *auStack_50;
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_826C3768();
extern unsigned int iStack_44;
extern unsigned int iStack_48;


undefined8 fn_826BF7B0(longlong param_1,int param_2,uint *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  int iStack_48;
  int iStack_44;
  byte bStack_40;
  undefined1 auStack_30 [48];
  
  uVar1 = fn_82696B20(&iStack_48,param_4,0);
  fn_826C3768(param_1 + 4,uVar1);
  if (((bStack_40 & 2) == 0) && (iStack_48 != 0)) {
    fn_826824B0();
  }
  iStack_48 = 0;
  if (((bStack_40 & 1) == 0) && (iStack_44 != 0)) {
    fn_826824B0();
  }
  iStack_44 = 0;
  auStack_50[0] = 3;
  auStack_30[0] = 10;
  (**(code **)(*(int *)(param_2 + 0x10) + 0x28))
            (param_2 + 0x10,param_3,(ulonglong)*param_3 + 0x138,auStack_30,auStack_50);
  fn_82696330(auStack_30);
  return 1;
}


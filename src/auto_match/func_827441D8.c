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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_30;
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82713EE8();
extern int fn_82743CD8();


undefined8 fn_827441D8(longlong param_1,int param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  if (*param_3 == *(int *)(*(int *)(param_2 + 0x78) + 0x250)) {
    fn_82743CD8(param_1 + -0x10,param_2,&dStack_20);
    auStack_30[0] = 3;
    dStack_28 = SQRT(dStack_20 * dStack_20 + dStack_18 * dStack_18);
    fn_82695FA0(param_4,auStack_30);
    fn_82696330(auStack_30);
    uVar1 = 1;
  }
  else {
    uVar1 = fn_82713EE8();
  }
  return uVar1;
}


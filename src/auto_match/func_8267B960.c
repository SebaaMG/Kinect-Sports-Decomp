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
extern int fn_82692DC0();
extern int fn_82692DE8();
extern unsigned int lbl_82005520;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined4 * fn_8267B960(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = param_1 + 1;
  *param_1 = &lbl_82005520;
  fn_82692DC0(puVar1);
  param_1[0x28] = param_2;
  param_1[0x2a] = 0x1000;
  param_1[0x2c] = 0;
  param_1[0x29] = param_2;
  param_1[0x2b] = 1;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(code **)*param_2)(param_2,&uStack_40);
  if ((((U64)(uStack_38) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82692DE8(puVar1,param_2);
    param_1[0x29] = puVar1;
    param_1[0x2a] = (((U64)(uStack_38) >> 0) & 0xFFFFFFFF);
  }
  if ((uint)param_1[0x2b] < (((U64)(uStack_40) >> 0) & 0xFFFFFFFF)) {
    param_1[0x2b] = (((U64)(uStack_40) >> 0) & 0xFFFFFFFF);
  }
  return param_1;
}


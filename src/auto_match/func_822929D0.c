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
extern int fn_82292828();
extern int fn_82536070();
extern int fn_82536CC8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_82005748;
extern unsigned int *lbl_8327F848;
extern unsigned int lbl_8327F874;


undefined4 * fn_822929D0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_50 [80];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  fn_82864988(param_1 + 10,0xffffffff821aa2d4);
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 3;
  param_1[0x15] = 1;
  uVar2 = lbl_82005748;
  param_1[0x17] = lbl_82005748;
  param_1[0x16] = uVar2;
  fn_82536070(0xffffffff821aa2fc,0xffffffff821aa2ec);
  fn_82536070(0xffffffff821aa320,0xffffffff821aa314);
  uVar3 = (ulonglong)lbl_8327F874;
  if (uVar3 == 0) {
    uVar3 = fn_82536CC8();
    lbl_8327F874 = (uint)uVar3;
  }
  fn_82292828(uVar3,param_1 + 10);
  dVar5 = (double)(float)param_1[0x16];
  iVar1 = *lbl_8327F848;
  uVar4 = fn_82864988(auStack_50,0xffffffff821c3f50);
  (**(code **)(iVar1 + 0x10))(dVar5,lbl_8327F848,uVar4);
  fn_82864898(auStack_50);
  return param_1;
}


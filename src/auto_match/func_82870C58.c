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
extern int fn_82864988();
extern int fn_82865170();
extern int fn_82866400();
extern int fn_828684F8();
extern int fn_82869EA0();
extern unsigned int lbl_82021E30;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82870C58(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = &lbl_82021E30;
  param_1[1] = 0xdeadbeef;
  param_1[2] = 0xdeadbeef;
  param_1[3] = 0xdeadbeef;
  param_1[4] = 0xdeadbeef;
  uVar1 = fn_82869EA0();
  param_1[5] = uVar1;
  fn_82864988(param_1 + 6,0xffffffff82021dc0);
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  uVar1 = lbl_821AAD20;
  param_1[0x10] = 0;
  param_1[0x19] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x1b] = uVar1;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  param_1[0x1c] = uVar1;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x75) = 0;
  RtlInitializeCriticalSection(param_1 + 0x12);
  fn_82865170();
  iVar2 = fn_82866400();
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  fn_828684F8();
  return param_1;
}


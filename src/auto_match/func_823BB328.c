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
extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897BD8();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_823BB328(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  fn_82230110(auStack_90,0xffffffff821b5cd0);
  *(undefined1 *)(param_1 + 0x40) = 0;
  fn_82897DF8(param_1 + 0x34,param_1,auStack_90);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_d0,0xffffffff821b5cf0);
  fn_82897DF8(param_1 + 0x8c,param_1,auStack_d0);
  fn_82230300(auStack_d0,1,0);
  fn_82230110(auStack_110,0xffffffff821b5d0c);
  fn_82897DF8(param_1 + 0xe4,param_1,auStack_110);
  fn_82230300(auStack_110,1,0);
  fn_82230110(auStack_f0,0xffffffff821b5d24);
  *(undefined1 *)(param_1 + 0x148) = 0;
  fn_82897DF8(param_1 + 0x13c,param_1,auStack_f0);
  fn_82230300(auStack_f0,1,0);
  fn_82230110(auStack_b0,0xffffffff821b5d40);
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  fn_82897DF8(param_1 + 0x194,param_1,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  fn_82230110(auStack_70,0xffffffff821b5d60);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x244) = 1;
  *(undefined4 *)(param_1 + 0x248) = 0;
  uVar1 = fn_828EA268();
  *(undefined4 *)(param_1 + 0x250) = uVar1;
  fn_82897DF8(param_1 + 0x1ec,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82897BD8(param_1 + 0x34,1);
  fn_82897BD8(param_1 + 0x8c,1);
  fn_82897BD8(param_1 + 0xe4,1);
  fn_82897BD8(param_1 + 0x13c,1);
  fn_82897BD8(param_1 + 0x194,1);
  fn_82897BD8(param_1 + 0x1ec,1);
  return;
}


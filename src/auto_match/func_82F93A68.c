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
extern unsigned int *auStack_220;
extern int fn_82F64020();
extern int fn_82F664B0();
extern int fn_82F69CA0();
extern int fn_82F6F870();
extern int fn_82F91548();
extern int fn_82F96B30();
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_20;


void fn_82F93A68(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined8 uVar1;
  uint uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  int *piStack0000002c;
  undefined1 auStack_220 [512];
  undefined4 uStack_20;
  
  uStack_20 = lbl_831BB8F0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  piStack0000002c = param_4;
  fn_82F64020(auStack_220,0x200,0xffffffff8216c0e4,param_2,param_3);
  uVar1 = (**(code **)(*piStack0000002c + 8))(piStack0000002c);
  fn_82F96B30(uStack00000014,uVar1,auStack_220);
  fn_82F664B0((ulonglong)uStack00000014 + 0x234,0x201,uStack0000001c);
  fn_82F69CA0((ulonglong)uStack00000014 + 0x234,0x201);
  fn_82F91548((ulonglong)uStack00000014 + 0x20c,piStack0000002c);
  fn_82F6F870(uStack_20);
  return;
}


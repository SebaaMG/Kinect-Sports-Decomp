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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_8f;
extern int fn_827D8830();
extern int fn_827D8910();
extern int fn_827D9670();
extern int fn_827DC918();
extern int fn_827DE048();
extern int fn_827DF630();
extern int fn_827E0DD8();
extern unsigned int lbl_8201AC88;
extern unsigned int uStack_90;


undefined4 * fn_827D7F40(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar2;
  undefined8 uVar1;
  undefined4 *puStack00000014;
  undefined1 uStack_90;
  undefined1 auStack_8f [3];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  puStack00000014 = param_1;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  *param_1 = uVar2;
  uVar1 = fn_827DE048(auStack_70);
  fn_827D8910(param_1 + 1,uVar1);
  uVar1 = fn_827DE048(auStack_50);
  fn_827DC918(param_1 + 0x11,uVar1);
  fn_827D8830(param_1 + 0x29);
  uVar1 = fn_827DE048(auStack_50);
  fn_827DC918(param_1 + 0x33,uVar1);
  fn_827DF630(param_1 + 0x44);
  param_1[0xb1] = param_4;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  uVar1 = fn_827DE048(auStack_50);
  fn_827E0DD8(param_1 + 0xb4,&uStack_90,uVar1);
  param_1[0xd3] = param_3;
  param_1[0xd2] = 0;
  uVar1 = fn_827DE048(auStack_70);
  fn_827E0DD8(param_1 + 0xd4,auStack_8f,uVar1);
  fn_827D9670(param_1 + 0xfa,auStack_88,auStack_80,auStack_8c);
  param_1[0x100] = &lbl_8201AC88;
  RtlInitializeCriticalSection(param_1 + 0xf2);
  RtlInitializeCriticalSection(param_1 + 0x1b);
  RtlInitializeCriticalSection(param_1 + 0x22);
  RtlInitializeCriticalSection(param_1 + 0x3d);
  return param_1;
}


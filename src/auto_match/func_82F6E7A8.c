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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AB08();
extern int fn_82F6ACF0();
extern int fn_82F6E870();
extern int fn_82F709B8();
extern int fn_82F816D0();
extern int fn_82F817C0();
extern unsigned int stack0x00000018;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


ulonglong fn_82F6E7A8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar4;
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar5;
  undefined8 uStack00000018;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (param_1 == 0) {
    puVar4 = (undefined4 *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    lVar2 = fn_82F6AB08();
    fn_82F6ACF0(1,lVar2 + 0x20);
    lVar2 = fn_82F6AB08();
    uVar3 = fn_82F816D0(lVar2 + 0x20);
    lVar2 = fn_82F6AB08();
    uVar5 = fn_82F709B8(lVar2 + 0x20,param_1,0,&stack0x00000018);
    lVar2 = fn_82F6AB08();
    fn_82F817C0(uVar3,lVar2 + 0x20);
    fn_82F6E870();
    uVar1 = (ulonglong)uVar5;
  }
  return uVar1;
}


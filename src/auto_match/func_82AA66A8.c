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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82AA64F8();
extern int fn_82F6EDE8();
extern unsigned int stack0x00000000;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AA66A8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  longlong lStack_18;
  
  uVar1 = ZEXT48(&stack0x00000000);
  lVar3 = uVar1 + 0x20;
  lVar4 = lVar3;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  uVar2 = fn_82AA64F8();
  lStack_40 = lVar3;
  uStack_38 = param_4;
  uStack_30 = param_5;
  uStack_28 = param_6;
  uStack_20 = param_7;
  lStack_18 = lVar4;
  fn_82F6EDE8(uVar1 - 0x170,0x100,param_2,&lStack_40);
  ((int (*)())fn_82AA66A8)(uVar2,0xdd6,uVar1 - 0x170);
  return;
}


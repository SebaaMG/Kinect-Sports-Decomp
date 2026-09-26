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
extern int fn_82789C80();
extern int fn_82789CF8();
extern unsigned int iStack_98;
extern unsigned int uStack_58;
extern unsigned int uStack_5a;
extern unsigned int uStack_5b;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82789E08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined4 uStack_58;
  
  iVar2 = param_1 + 0x10;
  iVar1 = *(int *)(param_1 + 0x20) * 4;
  uStack_78 = *(undefined4 *)(param_1 + 0x10);
  uStack_6c = 0xffffffff;
  uStack_70 = 0xffffffff;
  uStack_74 = 0xffffffff;
  uStack_60 = 0xffffffff;
  uStack_64 = 0xffffffff;
  uStack_68 = 0xffffffff;
  uStack_5a = 0;
  uStack_5b = 0;
  uStack_5c = 0;
  uStack_a0 = param_2;
  uStack_9c = param_3;
  iStack_98 = iVar1;
  uStack_90 = param_2;
  uStack_8c = param_3;
  uStack_88 = param_4;
  uStack_84 = param_2;
  uStack_80 = param_3;
  uStack_7c = param_4;
  uStack_58 = param_5;
  fn_82789C80(iVar2,&uStack_a0);
  iStack_98 = iVar1 + 1;
  uStack_a0 = param_3;
  uStack_9c = param_4;
  fn_82789C80(iVar2,&uStack_a0);
  iStack_98 = iVar1 + 2;
  uStack_a0 = param_4;
  uStack_9c = param_2;
  fn_82789C80(iVar2,&uStack_a0);
  fn_82789CF8(param_1 + 0x20,&uStack_90);
  *(undefined4 *)(param_1 + 0x7c) = param_5;
  return;
}


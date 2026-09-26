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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82681B80();
extern int fn_82695FA0();
extern int fn_82696330();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_88;
extern unsigned int uStack_98;


longlong fn_827418A8(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  param_1 = param_1 + 0x10;
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff8200befc,param_3);
  if (cVar1 == '\0') {
    auStack_a0[0] = 4;
    uStack_98 = 1;
    fn_82695FA0(param_3,auStack_a0);
    fn_82696330(auStack_a0);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff8200bef0,param_3 + 0x10);
  if (cVar1 == '\0') {
    auStack_90[0] = 4;
    uStack_88 = 0;
    fn_82695FA0(param_3 + 0x10,auStack_90);
    fn_82696330(auStack_90);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff8201261c,param_3 + 0x20);
  if (cVar1 == '\0') {
    auStack_80[0] = 4;
    uStack_78 = 0;
    fn_82695FA0(param_3 + 0x20,auStack_80);
    fn_82696330(auStack_80);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff8200bef8,param_3 + 0x30);
  if (cVar1 == '\0') {
    auStack_70[0] = 4;
    uStack_68 = 1;
    fn_82695FA0(param_3 + 0x30,auStack_70);
    fn_82696330(auStack_70);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff82012618,param_3 + 0x40);
  if (cVar1 == '\0') {
    auStack_60[0] = 4;
    uStack_58 = 0;
    fn_82695FA0(param_3 + 0x40,auStack_60);
    fn_82696330(auStack_60);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff82012614,param_3 + 0x50);
  if (cVar1 == '\0') {
    auStack_50[0] = 4;
    uStack_48 = 0;
    fn_82695FA0(param_3 + 0x50,auStack_50);
    fn_82696330(auStack_50);
  }
  return param_3;
}


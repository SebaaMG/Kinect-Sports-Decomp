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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82868378();
extern int fn_8286DA10();
extern int fn_83013618();


undefined8 fn_82866B38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  uVar1 = fn_83013618(3,0,0x6c,0xffffffff82f97e20,0xffffffff82f986d0);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_e0,0xffffffff82020b78);
    uVar2 = fn_8223B688(auStack_1a0,auStack_e0);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_e0,1,0);
  }
  uVar1 = fn_83013618(3,0,0x6a,0xffffffff82f98e30,0xffffffff82f99428);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_40,0xffffffff82020ba4);
    uVar2 = fn_8223B688(auStack_1a0,auStack_40);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_40,1,0);
  }
  uVar1 = fn_83013618(3,0,0x6d,0xffffffff82f9a2b0,0xffffffff82f9ab70);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_60,0xffffffff82020bcc);
    uVar2 = fn_8223B688(auStack_1a0,auStack_60);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_60,1,0);
  }
  uVar1 = fn_83013618(3,0,0x73,0xffffffff82fa4960,0xffffffff82fa4de0);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_120,0xffffffff82020bf8);
    uVar2 = fn_8223B688(auStack_1a0,auStack_120);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_120,1,0);
  }
  uVar1 = fn_83013618(3,0,0x69,0xffffffff82fba2f8,0xffffffff82fba810);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_a0,0xffffffff82020c28);
    uVar2 = fn_8223B688(auStack_1a0,auStack_a0);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_a0,1,0);
  }
  uVar1 = fn_83013618(3,0,0x6e,0xffffffff82fbbc28,0xffffffff82fbc708);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_180,0xffffffff82020c58);
    uVar2 = fn_8223B688(auStack_1a0,auStack_180);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_180,1,0);
  }
  uVar1 = fn_83013618(3,0,0x67,0xffffffff82fc8f80,0xffffffff82fc9820);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_160,0xffffffff82020c88);
    uVar2 = fn_8223B688(auStack_1a0,auStack_160);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_160,1,0);
  }
  uVar1 = fn_83013618(3,0,0x68,0xffffffff82fda5d0,0xffffffff82fdaae8);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_140,0xffffffff82020cb0);
    uVar2 = fn_8223B688(auStack_1a0,auStack_140);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_140,1,0);
  }
  uVar1 = fn_83013618(3,0,0x76,0xffffffff82fe2a38,0xffffffff82fe3a88);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_100,0xffffffff82020cdc);
    uVar2 = fn_8223B688(auStack_1a0,auStack_100);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_100,1,0);
  }
  uVar1 = fn_83013618(2,0,0x65,0xffffffff82fe64a8,0xffffffff82fe6450);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_c0,0xffffffff82020d08);
    uVar2 = fn_8223B688(auStack_1a0,auStack_c0);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_c0,1,0);
  }
  uVar1 = fn_83013618(3,0x42,0x67,0xffffffff83056908,0xffffffff83057028);
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_80,0xffffffff82020d34);
    uVar2 = fn_8223B688(auStack_1a0,auStack_80);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_80,1,0);
  }
  return 0x200a0000;
}


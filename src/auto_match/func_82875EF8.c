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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_8234D690();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828663F0();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286DA10();
extern int fn_82FE9528();
extern unsigned int uStack_cc;
extern unsigned int uStack_ec;


undefined8 fn_82875EF8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 **appuStack_100 [5];
  uint uStack_ec;
  undefined4 **appuStack_e0 [5];
  uint uStack_cc;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  fn_828648B8(auStack_80,param_1 + 4);
  fn_8223B688(appuStack_e0,auStack_80);
  fn_82230300(auStack_80,1,0);
  if (uStack_cc < 0x10) {
    appuStack_e0[0] = appuStack_e0;
  }
  uVar1 = fn_82FE9528(appuStack_e0[0],0xffffffff82875958,param_1);
  if ((int)uVar1 == 1) {
    uVar1 = 0x20360000;
  }
  else {
    fn_828648B8(auStack_c0,param_1 + 4);
    fn_8223B688(appuStack_100,auStack_c0);
    fn_82230300(auStack_c0,1,0);
    uVar2 = fn_8234D690(auStack_60,0xffffffff820225dc,appuStack_100);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff820225d4,4);
    fn_82240378(auStack_a0,uVar2);
    fn_82230300(auStack_60,1,0);
    uVar2 = fn_8223B688(auStack_40,auStack_a0);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82865170();
    fn_82866418();
    fn_82865170();
    piVar4 = (int *)fn_828663F0();
    if (uStack_ec < 0x10) {
      appuStack_100[0] = appuStack_100;
    }
    (**(code **)(*piVar4 + 0xc))
              (piVar4,0xffffffff82022630,0x269,0xffffffff820225fc,appuStack_100[0]);
    fn_82230300(auStack_a0,1,0);
    fn_82230300(appuStack_100,1,0);
    uVar1 = 0xffffffffa0360000;
  }
  fn_82230300(appuStack_e0,1,0);
  return uVar1;
}


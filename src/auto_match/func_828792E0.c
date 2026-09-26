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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_822924C0();
extern int fn_828647D8();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82FEB1D0();


undefined8 fn_828792E0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 auStack_c0 [4];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = fn_828647D8(param_2);
  uVar2 = fn_82FEB1D0(uVar2,uVar1,auStack_c0);
  if ((int)uVar2 == 1) {
    uVar2 = fn_828647F0(auStack_50,auStack_c0[0]);
    fn_822924C0(param_3,uVar2);
    fn_82864898(auStack_50);
    uVar2 = 0x20200000;
  }
  else {
    fn_828648B8(auStack_b0,param_2);
    uVar3 = fn_8223B688(auStack_70,auStack_b0);
    uVar3 = fn_8286A3D8(uVar3,0,0xffffffff8202284c,0x23);
    uVar3 = fn_8223DFF0(uVar3,0xffffffff82022844,4);
    fn_82240378(auStack_90,uVar3);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_b0,1,0);
    uVar3 = fn_8223B688(auStack_50,auStack_90);
    uVar4 = fn_82868378();
    fn_8286DA10(uVar4,uVar3,uVar2);
    fn_82865170();
    fn_82866418();
    uVar2 = fn_828647F0(auStack_50,0);
    fn_822924C0(param_3,uVar2);
    fn_82864898(auStack_50);
    fn_82230300(auStack_90,1,0);
    uVar2 = 0xffffffffa0200000;
  }
  return uVar2;
}


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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_82292780();
extern int fn_82360F68();
extern int fn_828648B8();
extern int fn_828681F8();
extern int fn_82868378();
extern int fn_82868758();
extern int fn_828691F0();
extern int fn_8286A3D8();
extern int fn_8286BC88();
extern int fn_8286CD88();
extern int fn_8286DA10();
extern int fn_82874908();
extern int fn_82877F50();
extern int fn_82879708();
extern int fn_8287BDF0();
extern int fn_82FE6850();
extern unsigned int lbl_82022994;
extern unsigned int lbl_82022A0C;
extern unsigned int lbl_82022A1C;
extern unsigned int lbl_82022A34;


undefined4 * fn_82879A60(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar5;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  *param_1 = &lbl_82022994;
  fn_8287BDF0(param_1 + 1);
  *param_1 = &lbl_82022A34;
  puVar5 = param_1 + 6;
  param_1[1] = &lbl_82022A1C;
  fn_82292780(puVar5,param_2);
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = &lbl_82022A0C;
  uVar1 = fn_828691F0();
  fn_8286BC88(param_1 + 0x11,uVar1);
  fn_828681F8();
  uVar4 = fn_8286CD88();
  param_1[0x14] = uVar4;
  param_1[0x15] = 0;
  fn_82877F50(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0xf] = param_1;
  fn_828648B8(auStack_b0,puVar5);
  fn_8223B688(auStack_70,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  fn_82879708(param_1);
  fn_82868758();
  uVar1 = fn_82874908();
  param_1[0x13] = (int)uVar1;
  uVar1 = fn_82FE6850(param_1[0xf],uVar1);
  if ((int)uVar1 != 1) {
    fn_828648B8(auStack_d0,puVar5);
    uVar2 = fn_8223B688(auStack_90,auStack_d0);
    uVar2 = fn_8286A3D8(uVar2,0,0xffffffff820227bc,0x25);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff820227b4,4);
    fn_82240378(auStack_f0,uVar2);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_d0,1,0);
    uVar2 = fn_8223B688(auStack_50,auStack_f0);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_f0,1,0);
  }
  fn_82360F68(param_1 + 0x1f,4);
  fn_82230300(auStack_70,1,0);
  return param_1;
}


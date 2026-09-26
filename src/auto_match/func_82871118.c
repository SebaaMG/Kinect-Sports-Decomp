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
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_828684F8();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82FE6F10();
extern unsigned int lbl_82006848;


double fn_82871118(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  int aiStack_c0 [2];
  longlong lStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  fn_828684F8();
  uVar1 = fn_82FE6F10(*(undefined4 *)(param_2 + 0x40),aiStack_c0);
  if ((int)uVar1 == 1) {
    lStack_b8 = (longlong)aiStack_c0[0];
    *(float *)(param_2 + 100) = (float)lStack_b8 * lbl_82006848;
    fn_828684F8();
    dVar4 = (double)*(float *)(param_2 + 100);
  }
  else {
    fn_828648B8(auStack_b0,param_2 + 0x18);
    uVar2 = fn_8223B688(auStack_70,auStack_b0);
    uVar2 = fn_8286A3D8(uVar2,0,0xffffffff82021dd4,0x28);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff82021dd0,2);
    fn_82240378(auStack_90,uVar2);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_b0,1,0);
    uVar2 = fn_8223B688(auStack_50,auStack_90);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82865170();
    fn_82866418();
    fn_828684F8();
    dVar4 = (double)*(float *)(param_2 + 100);
    fn_82230300(auStack_90,1,0);
  }
  return dVar4;
}


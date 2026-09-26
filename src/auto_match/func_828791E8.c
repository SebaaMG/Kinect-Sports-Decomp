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
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82FE6A00();


undefined8 fn_828791E8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = fn_828647D8(param_3);
  uVar3 = fn_828647D8(param_2);
  uVar2 = fn_82FE6A00(uVar3,uVar2,uVar1);
  if ((int)uVar2 == 1) {
    uVar2 = 0x20200000;
  }
  else {
    fn_828648B8(auStack_a0,param_2);
    uVar3 = fn_8223B688(auStack_60,auStack_a0);
    uVar3 = fn_8286A3D8(uVar3,0,0xffffffff82022824,0x1c);
    uVar3 = fn_8223DFF0(uVar3,0xffffffff8202281c,4);
    fn_82240378(auStack_80,uVar3);
    fn_82230300(auStack_60,1,0);
    fn_82230300(auStack_a0,1,0);
    uVar3 = fn_8223B688(auStack_40,auStack_80);
    uVar4 = fn_82868378();
    fn_8286DA10(uVar4,uVar3,uVar2);
    fn_82865170();
    fn_82866418();
    fn_82230300(auStack_80,1,0);
    uVar2 = 0xffffffffa0200000;
  }
  return uVar2;
}


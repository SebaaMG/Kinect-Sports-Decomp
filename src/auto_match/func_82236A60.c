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
extern unsigned int *auStack_110;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern int fn_82230300();
extern int fn_82234268();
extern int fn_82237920();
extern int fn_82237A48();
extern int fn_82237F60();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern unsigned int iStack_100;
extern unsigned int iStack_f8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_fc;


undefined8 fn_82236A60(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined1 auStack_110 [16];
  int iStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [188];
  
  iStack_100 = param_4 + 8;
  if (4 < *(uint *)(param_4 + 0xc)) {
    iStack_100 = *(int *)(param_4 + 8);
  }
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 3;
  fn_828E9D28(auStack_110,iStack_100,3);
  fn_82237F60(&fStack_120,auStack_110);
  fn_8223CFC0(auStack_c0,2,1);
  uVar1 = fn_82234268(auStack_e0,param_2,param_3,param_4);
  uVar2 = fn_82240158(auStack_c0,0xffffffff82196828);
  uVar2 = fn_82237920(uVar2,0x14);
  uVar2 = fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_82237920(uVar2,0);
  uVar2 = fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_82237920(uVar2,0);
  fn_82240158(uVar2,0xffffffff82196fb4);
  uVar2 = fn_82237A48((double)fStack_120);
  fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_82237A48((double)fStack_11c);
  fn_82240158(uVar2,0xffffffff82196824);
  uVar2 = fn_82237A48((double)fStack_118);
  uVar2 = fn_82240158(uVar2,0xffffffff8219681c);
  uVar1 = fn_8223B728(uVar2,uVar1);
  fn_82240158(uVar1,0xffffffff82196fb0);
  fn_82230300(auStack_e0,1,0);
  fn_822403C8(param_1,auStack_bc);
  fn_8223DCC8(auStack_c0);
  if (iStack_f8 != 0) {
    fn_8265CA20();
  }
  return param_1;
}


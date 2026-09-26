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
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_ec;
extern unsigned int *auStack_f0;
extern unsigned int fStack_150;
extern unsigned int fStack_154;
extern unsigned int fStack_158;
extern int fn_82230300();
extern int fn_82235450();
extern int fn_82237920();
extern int fn_82237A48();
extern int fn_82237F60();
extern int fn_822395B8();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8232A988();
extern int fn_823B4900();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern unsigned int iStack_128;
extern unsigned int iStack_130;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_12c;


undefined8 fn_822374F8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_160 [8];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined1 auStack_140 [16];
  int iStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [236];
  
  iStack_130 = param_4 + 8;
  if (4 < *(uint *)(param_4 + 0xc)) {
    iStack_130 = *(int *)(param_4 + 8);
  }
  iStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 4;
  fn_828E9D28(auStack_140,iStack_130,4);
  fn_82237F60(&fStack_158,auStack_140);
  uVar1 = fn_823B4900(auStack_140,9,0,0);
  fn_8232A988(auStack_160,uVar1 >> 6 & 7,0,3);
  fn_8232A988(auStack_160,uVar1 & 0x3f,3,6);
  dVar4 = (double)fn_822395B8(auStack_160);
  dVar6 = (double)(float)((double)fStack_158 * dVar4);
  dVar5 = (double)(float)((double)fStack_154 * dVar4);
  dVar4 = (double)(float)((double)fStack_150 * dVar4);
  fn_8223CFC0(auStack_f0,2,1);
  uVar2 = fn_82235450(auStack_110,param_2,param_3,param_4);
  uVar3 = fn_82240158(auStack_f0,0xffffffff82196828);
  uVar3 = fn_82237920(uVar3,0x14);
  uVar3 = fn_82240158(uVar3,0xffffffff82196824);
  uVar3 = fn_82237920(uVar3,6);
  uVar3 = fn_82240158(uVar3,0xffffffff82196824);
  uVar3 = fn_82237920(uVar3,3);
  fn_82240158(uVar3,0xffffffff82196fb4);
  uVar3 = fn_82237A48(dVar6);
  fn_82240158(uVar3,0xffffffff82196824);
  uVar3 = fn_82237A48(dVar5);
  fn_82240158(uVar3,0xffffffff82196824);
  uVar3 = fn_82237A48(dVar4);
  uVar3 = fn_82240158(uVar3,0xffffffff8219681c);
  uVar2 = fn_8223B728(uVar3,uVar2);
  fn_82240158(uVar2,0xffffffff82196fb0);
  fn_82230300(auStack_110,1,0);
  fn_822403C8(param_1,auStack_ec);
  fn_8223DCC8(auStack_f0);
  if (iStack_128 != 0) {
    fn_8265CA20();
  }
  return param_1;
}


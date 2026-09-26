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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_82890428();
extern int fn_82896F40();
extern int fn_828A12E8();
extern unsigned int iStack_6c;
extern unsigned int uStack_8c;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82897060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  uint auStack_c0 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 auStack_a0 [5];
  uint uStack_8c;
  int iStack_6c;
  
  uVar1 = fn_828A12E8(param_8);
  uStack_d0 = 0;
  uStack_cc = 0xf;
  auStack_e0[0] = auStack_e0[0] & 0xffffff;
  fn_82230218(auStack_e0,param_1,0,0xffffffffffffffff);
  fn_82230218((ulonglong)*param_7 + 0x18,auStack_e0,0,0xffffffffffffffff);
  if (0xf < uStack_cc) {
    fn_8265CA20(auStack_e0[0]);
  }
  uStack_cc = 0xf;
  uStack_d0 = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff;
  uStack_ac = 0xf;
  uStack_b0 = 0;
  auStack_c0[0] = auStack_c0[0] & 0xffffff;
  fn_82230218(auStack_c0,param_1,0,0xffffffffffffffff);
  fn_82890428(auStack_a0,auStack_c0,param_2,param_3,param_4,param_5,param_6,param_7);
  if (0xf < uStack_ac) {
    fn_8265CA20(auStack_c0[0]);
  }
  uStack_ac = 0xf;
  uStack_b0 = 0;
  auStack_c0[0] = auStack_c0[0] & 0xffffff;
  fn_82896F40(uVar1,auStack_a0);
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  if (0xf < uStack_8c) {
    fn_8265CA20(auStack_a0[0]);
  }
  return;
}


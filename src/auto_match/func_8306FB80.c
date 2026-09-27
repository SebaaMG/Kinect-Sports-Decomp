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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_8c;
extern unsigned int fStack_9c;
extern unsigned int fStack_ac;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82F534D8();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern int fn_8306E7D8();
extern int fn_8306E7E8();
extern int fn_8306ED30();
extern int fn_8306ED38();
extern int fn_8306ED98();
extern int fn_8306EE38();
extern int fn_83075D30();
extern int fn_83075DB8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82079FD0;
extern unsigned int lbl_820AA968;
extern unsigned int lbl_82186E24;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


void fn_8306FB80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  struct { float first; float second; } stack_pair_d0;

  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [4];
  float fStack_ac;
  undefined1 auStack_a0 [4];
  float fStack_9c;
  undefined1 auStack_90 [4];
  float fStack_8c;
  undefined1 auStack_80 [56];
  
  iVar1 = fn_82F6DA24();
  fn_83075D30(auStack_c0);
  fn_83075D30(auStack_90,param_2,0x10);
  fn_83075D30(auStack_a0,param_2,0xc);
  altv207_13(in_vs32,in_vs35);
  fStack_c4 = lbl_82002C5C;
  fStack_c8 = lbl_82002C5C;
  stack_pair_d0.second = lbl_82002C5C;
  stack_pair_d0.first = lbl_82002C5C;
  altv207_13(in_vs32,in_vs42);
  fn_8306ED30();
  dVar2 = (double)fn_8306EE38();
  if ((double)lbl_82196080 < dVar2) {
    fn_8306ED38((double)lbl_82186E24);
    fn_83075DB8(param_2,0xc);
    fn_83075DB8(param_2,0x10);
    fn_83075D30(&stack_pair_d0.first,param_2,4);
    fn_83075D30(auStack_80,param_2,8);
    dVar3 = (double)fn_8306ED98();
    fn_8306ED98();
    stack_pair_d0.first = (float)(dVar3 / (double)(float)(dVar2 * dVar2)) - lbl_820AA968;
    dVar2 = (double)stack_pair_d0.first;
    altv207_13(in_vs32,in_vs42);
    stack_pair_d0.second = stack_pair_d0.first;
    fStack_c8 = stack_pair_d0.first;
    fStack_c4 = stack_pair_d0.first;
    fn_83075DB8(param_2,4);
    fStack_c4 = (float)dVar2;
    fStack_c8 = (float)dVar2;
    stack_pair_d0.second = (float)dVar2;
    stack_pair_d0.first = (float)dVar2;
    altv207_13(in_vs32,in_vs43);
    fn_83075DB8(param_2,8);
    fn_83075D30(auStack_90,param_2,0);
    fn_83075D30(auStack_a0,param_2,0xc);
    fn_83075D30(auStack_b0,param_2,0x10);
    if (*(int *)(iVar1 + 0xd24) != 0) {
      uVar4 = fn_8306E7D8((double)fStack_9c,(double)fStack_ac);
      dVar2 = (double)fn_8306E7D8((double)fStack_8c,uVar4);
      dVar3 = (double)lbl_821AAD20;
      dVar2 = (double)fn_8306E7E8((double)(float)((double)*(float *)(iVar1 + 0xd14) *
                                                   (double)lbl_82079FD0 - dVar2),dVar3);
      if (dVar3 < dVar2) {
        fn_82F534D8(dVar3,dVar2,dVar3,dVar3);
        fn_83075DB8(param_2,0xc);
        fn_83075DB8(param_2,0x10);
        fn_83075DB8(param_2,0);
        fn_83075DB8(param_2,1);
        fn_83075DB8(param_2,2);
        fn_83075DB8(param_2,4);
        fn_83075DB8(param_2,8);
        fn_83075DB8(param_2,3);
        fn_83075DB8(param_2,5);
        fn_83075DB8(param_2,9);
        fn_83075DB8(param_2,6);
        fn_83075DB8(param_2,10);
        fn_83075DB8(param_2,7);
        fn_83075DB8(param_2,0xb);
      }
    }
  }
  fn_82F6DCBC();
  return;
}


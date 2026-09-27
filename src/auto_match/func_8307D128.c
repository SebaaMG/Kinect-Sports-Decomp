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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int fStack_7c;
extern unsigned int fStack_8c;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern int fn_82539560();
extern int fn_8306D698();
extern int fn_8306D7E0();
extern int fn_8306E7D8();
extern int fn_8306E818();
extern int fn_8306E890();
extern int fn_8306ECC8();
extern int fn_830763C8();
extern int fn_83077098();
extern int fn_83078890();
extern int fn_83079670();
extern int fn_830798D0();
extern int fn_83079B68();
extern int fn_8307A468();
extern int fn_8307AFE0();
extern int fn_8307B700();
extern int fn_8307BE10();
extern int fn_8307C548();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_8200DC14;
extern unsigned int lbl_8205751C;
extern unsigned int lbl_8215F718;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_8307D128(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar2;
  undefined4 *puVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  struct { float first; float second; } stack_pair_a0;

  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [4];
  float fStack_8c;
  undefined1 auStack_80 [4];
  float fStack_7c;
  undefined1 auStack_70 [16];
  
  fn_8306D698(auStack_90,*(undefined4 *)(param_2 + 0xb0),0xe);
  fn_8306D698(auStack_80,*(undefined4 *)(param_2 + 0xb0),0x12);
  cVar2 = fn_8306D7E0(*(undefined4 *)(param_2 + 0xb0));
  if (cVar2 == '\0') {
    uVar3 = fn_8306E7D8((double)fStack_8c,(double)fStack_7c);
    uVar4 = fn_82539560(uVar3,(double)lbl_82186E6C,(double)lbl_82002C2C,(double)lbl_8200DC14,
                         (double)lbl_8205751C);
    uVar4 = fn_8306E890(uVar4,param_1);
    dVar5 = (double)fn_8306E818((double)*(float *)(param_2 + 0xe8),uVar3,uVar4);
    *(float *)(param_2 + 0xe8) = (float)dVar5;
  }
  else {
    *(undefined4 *)(param_2 + 0xe8) = lbl_821AAD20;
  }
  fn_83079B68(param_2);
  fn_8307B700(param_1,param_2);
  fn_8307C548(param_1,param_2,1,param_6);
  fn_8307C548(param_1,param_2,0,param_6);
  altv207_13(in_vs32,in_vs43);
  altv207_13(in_vs32,in_vs42);
  dVar5 = (double)lbl_82002C5C;
  fStack_94 = lbl_82002C5C;
  fStack_98 = lbl_82002C5C;
  stack_pair_a0.second = lbl_82002C5C;
  stack_pair_a0.first = lbl_82002C5C;
  altv207_13(in_vs32,in_vs40);
  fn_8306D698(&uStack_b0,*(undefined4 *)(param_2 + 0xb0),0x11);
  fStack_94 = (float)dVar5;
  fStack_98 = (float)dVar5;
  stack_pair_a0.second = (float)dVar5;
  stack_pair_a0.first = (float)dVar5;
  fn_8306D698(auStack_70,*(undefined4 *)(param_2 + 0xb0),0xd);
  altv207_13(in_vs32,in_vs35);
  altv207_13(in_vs32,in_vs43);
  fn_8307A468(param_1,param_2,1,param_4,param_6);
  fn_8307A468(param_1,param_2,0,param_4,param_6);
  fn_8307AFE0(param_1,(double)fStack_bc,param_2,1);
  fn_8307AFE0(param_1,(double)fStack_b8,param_2,0);
  fn_830798D0(param_1,param_2);
  uVar3 = fn_83077098(param_6);
  fn_8307BE10(uVar3,param_1,&uStack_b0,param_2,1);
  fn_83079670(param_1,dVar5,param_2 + 0x88,&uStack_b0);
  fn_83078890(*(undefined4 *)(*(int *)(param_2 + 0xb4) + 0x70b0),1);
  puVar1 = (undefined4 *)fn_8307BE10(uVar3,param_1,&stack_pair_a0.first,param_2,0);
  uStack_b0 = *puVar1;
  uStack_ac = puVar1[1];
  uStack_a8 = puVar1[2];
  fn_83079670(param_1,(double)lbl_8200533C,param_2 + 0x94,&uStack_b0);
  fn_83078890(*(undefined4 *)(*(int *)(param_2 + 0xb4) + 0x70d0),1);
  fn_8306ECC8();
  dVar5 = (double)lbl_8215F718;
  fn_830763C8((double)(float)((double)*(float *)(param_2 + 0x88) * dVar5));
  fn_83078890(*(undefined4 *)(*(int *)(param_2 + 0xb4) + 0x70e8),0);
  fn_8306ECC8();
  fn_830763C8((double)(float)((double)*(float *)(param_2 + 0x94) * dVar5));
  fn_83078890(*(undefined4 *)(*(int *)(param_2 + 0xb4) + 0x70f0),0);
  return;
}


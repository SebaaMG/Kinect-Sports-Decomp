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
extern unsigned int *auStack_15c;
extern unsigned int *auStack_160;
extern unsigned int *auStack_200;
extern unsigned int *auStack_240;
extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern int fn_824DCB30();
extern int fn_829D3900();
extern int fn_829D4800();
extern int fn_829DE2A8();
extern int fn_829DE440();
extern int fn_829DF810();
extern int fn_82A1F2F8();
extern int fn_82A94368();
extern unsigned int iStack_29c;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_2a0;


undefined8
fn_829DFA80(double param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
             undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9)

{
  undefined8 in_r0;
  int iVar1;
  char cVar3;
  undefined8 uVar2;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 in_vs43 [16];
  undefined1 in_vs56 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined4 uStack_2a0;
  int iStack_29c;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [160];
  undefined1 auStack_160 [4];
  undefined4 auStack_15c [87];
  
  fn_82A94368(*(undefined4 *)(param_3 + 0x14),0,auStack_280);
  fn_82A94368(*(undefined4 *)(param_5 + 0x14),0,auStack_240);
  puVar7 = auStack_15c;
  puVar6 = auStack_200;
  lVar5 = 0x14;
  do {
    fn_824DCB30(puVar7 + -1,puVar7,puVar7 + 1);
    fn_829D3900(*(undefined4 *)(param_3 + 0x10),param_3 + 0x1c,puVar7[-1],*puVar7,
                 *(undefined2 *)(puVar7 + 1),puVar6,puVar6 + 4);
    iVar1 = (int)in_r0;
    lVar5 = lVar5 + -1;
    puVar6 = puVar6 + 8;
    puVar7 = puVar7 + 3;
  } while (lVar5 != 0);
  iStack_29c = lbl_832179FC + 0x8f3e8;
  uStack_2a0 = fn_82A1F2F8();
  cVar3 = fn_829DE2A8(auStack_200,auStack_280,auStack_290,param_9);
  if (cVar3 == '\0') {
    fn_829D4800(&uStack_2a0);
    uVar2 = 0xffffffff80004005;
  }
  else {
    fn_829DE440(auStack_280,param_4,auStack_290,param_8 + 0x10,0,0);
    fn_829D4800(&uStack_2a0);
    iStack_29c = lbl_832179FC + 0x8f3f8;
    uStack_2a0 = fn_82A1F2F8();
    uVar4 = fn_829DF810(auStack_160,auStack_280,param_4,param_3 + 0x1c,auStack_240,param_6,
                              auStack_290,param_8 + 0x2cc);
    *(undefined1 *)(param_8 + 0x588) = uVar4;
    fn_829D4800(&uStack_2a0);
    uVar2 = 0;
    altv207_13(in_vs56,in_vs43);
    *(float *)(param_8 + 0x58c) = (float)param_1;
    puVar7 = (undefined4 *)(iVar1 + param_8 & 0xfffffff0);
    *puVar7 = in_register_000103f0;
    puVar7[1] = in_register_000103f4;
    puVar7[2] = in_register_000103f8;
    puVar7[3] = in_vr63;
  }
  return uVar2;
}


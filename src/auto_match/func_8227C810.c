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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_128;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_8227C0A8();
extern int fn_82526C70();
extern int fn_826728E8();
extern int fn_82672C20();
extern unsigned int iStack_124;
extern unsigned int iStack_e8;
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195528;
extern unsigned int lbl_821955B8;
extern unsigned int lbl_821958F0;
extern unsigned int uStack_d8;
extern unsigned int uStack_f8;


void fn_8227C810(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [4];
  int iStack_124;
  undefined1 auStack_120 [4];
  int aiStack_11c [3];
  undefined1 auStack_110 [8];
  double dStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  int iStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 uStack_d8;
  undefined1 auStack_d0 [8];
  double dStack_c8;
  undefined1 auStack_c0 [8];
  double dStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  char cStack_68;
  undefined1 auStack_60 [96];
  
  piVar4 = aiStack_11c;
  lVar6 = 0xb;
  do {
    piVar4[3] = 0;
    piVar4 = piVar4 + 4;
    *piVar4 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  fn_82273CD8(auStack_110,3);
  dStack_108 = (double)(longlong)(int)param_2;
  fn_82273CD8(auStack_f0,5);
  iStack_e8 = param_4 + 0xc;
  dVar7 = (double)*(uint *)(param_4 + 0x54);
  fn_82273CD8(auStack_d0,3);
  dVar8 = (double)*(uint *)(param_4 + 0x50);
  dStack_c8 = dVar7;
  fn_82273CD8(auStack_c0,3);
  dVar7 = (double)*(float *)(param_4 + 0x4c);
  dStack_b8 = dVar8;
  fn_82273CD8(auStack_b0,3);
  dVar8 = (double)*(uint *)(param_4 + 0x60);
  dStack_a8 = dVar7;
  fn_82273CD8(auStack_a0,3);
  dVar7 = (double)*(uint *)(param_4 + 0x5c);
  dStack_98 = dVar8;
  fn_82273CD8(auStack_90,3);
  dVar8 = (double)*(float *)(param_4 + 0x58);
  dStack_88 = dVar7;
  fn_82273CD8(auStack_80,3);
  cVar1 = '\x01' - (*(int *)(param_1 + 0xa68) == 0);
  dStack_78 = dVar8;
  fn_82273CD8(auStack_70,2);
  cStack_68 = cVar1;
  if (param_3 == 1) {
    fn_82273CD8(auStack_100,3);
    uStack_f8 = lbl_82195528;
  }
  else {
    if (param_3 != 2) {
      iVar2 = *(int *)(param_4 + 8);
      fn_82273CD8(auStack_e0,2);
      uStack_d8 = iVar2 == 2;
      iVar2 = fn_8227C0A8(param_1);
      if ((iVar2 == 0) || (param_5 == 0)) {
        fn_82273CD8(auStack_100,3);
        uStack_f8 = lbl_821958F0;
      }
      else {
        fn_82273CD8(auStack_100,3);
        uStack_f8 = lbl_821955B8;
      }
      goto LAB_8227ca14;
    }
    fn_82273CD8(auStack_100,3);
    uStack_f8 = lbl_82195518;
  }
  fn_82273CD8(auStack_e0,2);
  uStack_d8 = 0;
LAB_8227ca14:
  puVar3 = (undefined4 *)fn_82279C58(auStack_120,param_1);
  fn_82672C20(*puVar3,0xffffffff821a86c8,auStack_110,0xb);
  if (aiStack_11c[0] != 0) {
    fn_822315A0();
  }
  fn_82526C70(auStack_60,0x10,0xffffffff821a84f0,param_2);
  puVar3 = (undefined4 *)fn_82279C58(auStack_128,param_1);
  fn_826728E8(*puVar3,auStack_60,*(undefined4 *)(param_4 + 4));
  if (iStack_124 != 0) {
    fn_822315A0();
  }
  puVar5 = auStack_60;
  lVar6 = 10;
  do {
    puVar5 = puVar5 + -0x10;
    fn_82273C88(puVar5);
    lVar6 = lVar6 + -1;
  } while (-1 < lVar6);
  return;
}


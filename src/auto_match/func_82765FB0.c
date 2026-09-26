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
extern unsigned int *auStack_c0;
extern int fn_8267BE38();
extern int fn_8268CC00();
extern int fn_82758858();
extern int fn_82759900();
extern int fn_8275F338();
extern int fn_8275FA28();
extern int fn_827601F0();
extern int fn_82763948();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_6b;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82765FB0(int param_1,int param_2,char param_3)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 auStack_c0 [32];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  
  (**(code **)(**(int **)(param_2 + 0xc) + 0x14))(&uStack_d0);
  puVar5 = (undefined4 *)(param_1 + 0x60);
  lVar4 = ((ulonglong)uStack_c4 - (ulonglong)uStack_cc) * 0x14;
  dVar6 = (double)(longlong)(int)lVar4;
  iVar1 = *(int *)(param_1 + 100);
  lVar3 = ((ulonglong)uStack_c8 - (ulonglong)uStack_d0) * 0x14;
  dVar7 = (double)(longlong)(int)lVar3;
  fn_82758858(puVar5,puVar5,1);
  if (iVar1 == 0) {
    fn_827601F0(*puVar5,1);
  }
  fn_8268CC00(auStack_c0);
  fn_82759900(*puVar5,(-(ulonglong)(param_3 != '\0') & 0xfffffffe) + 0x43,param_2,auStack_c0);
  fVar2 = lbl_821AAD20;
  dVar8 = (double)lbl_821AAD20;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  *(float *)(param_1 + 0x18) = fVar2;
  *(float *)(param_1 + 0x14) = fVar2;
  *(float *)(param_1 + 0x1c) = (float)dVar7;
  *(float *)(param_1 + 0x20) = (float)dVar6;
  (**(code **)(*(int *)(param_1 + 0x10) + 8))((int *)(param_1 + 0x10),param_1 + 0x14);
  *(float *)(param_1 + 0x78) = (float)dVar8;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 0x10;
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined2 *)(param_1 + 0x5e) = 0x20;
  }
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6b = 0;
  uStack_a0 = 0;
  uStack_9c = 1;
  uStack_98 = 0;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 4;
  fn_8275FA28(&uStack_a0,0,0,0);
  fn_82763948(&uStack_a0,lVar3);
  fn_82763948(&uStack_a0,0,lVar4,0);
  fn_82763948(&uStack_a0,((ulonglong)uStack_c8 - (ulonglong)uStack_d0) * -0x14,0,0);
  fn_82763948(&uStack_a0,0,((ulonglong)uStack_c4 - (ulonglong)uStack_cc) * -0x14,0);
  fn_8275F338(&uStack_a0,param_1 + 0x54,param_1 + 0x44);
  fn_8267BE38(uStack_84);
  return;
}


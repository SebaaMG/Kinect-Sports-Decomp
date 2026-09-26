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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_8273D588();
extern int fn_827A5378();
extern int fn_827A70E0();
extern int fn_827A74A0();
extern int fn_827A7548();
extern int fn_827A7C28();
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int uStack_3c;
extern U64 storeWordConditionalIndexed();


void fn_827A8168(int param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  char in_RESERVE;
  byte bVar13;
  int iStack_40;
  uint uStack_3c;
  int aiStack_38 [2];
  int iStack_30;
  int *piStack_2c;
  
  fn_8268B330(&uStack_3c);
  uVar7 = (ulonglong)*(uint *)(param_2 + 8);
  uVar11 = 0;
  if ((uVar7 == 0) || (**(short **)(param_2 + 4) != 0x2e)) {
    psVar6 = *(short **)(param_2 + 4);
  }
  else {
    uVar7 = uVar7 - 1;
    psVar6 = *(short **)(param_2 + 4) + 1;
    uVar11 = 1;
  }
  fn_8268B508(&uStack_3c,psVar6,uVar7);
  iVar2 = *(int *)(param_1 + 4);
  iVar12 = iVar2 + 4;
  fn_827A5378(iVar12,uVar11,&uStack_3c);
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar5 = fn_827A7548(uVar3,iVar12);
  piVar10 = (int *)(-(uint)(iVar5 != 0) & iVar5 + 0xcU);
  bVar13 = (piVar10 == (int *)0x0) << 1;
  if (piVar10 == (int *)0x0) {
    iStack_40 = 0;
  }
  else {
    iStack_40 = *piVar10;
  }
  if (iStack_40 == 0) {
    uVar11 = fn_8267BF50(uVar3);
    uVar7 = fn_8267B890(uVar11,0x44,0);
    bVar1 = (uVar7 & 0xffffffff) == 0;
    bVar13 = bVar1 << 1;
    if (bVar1) {
      iStack_40 = 0;
    }
    else {
      iStack_40 = fn_827A70E0(uVar7,uVar11);
    }
    piStack_2c = aiStack_38;
    aiStack_38[0] = iStack_40;
    iStack_30 = iVar12;
    fn_827A7C28(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),&iStack_30,
                  *(undefined4 *)(iVar2 + 0xc));
  }
  else {
    fn_827A74A0();
  }
  fn_8273D588(param_3,&iStack_40);
  lVar8 = ((ulonglong)uStack_3c & 0xfffffffc) + 4;
  do {
    puVar9 = (uint *)lVar8;
    uVar7 = (ulonglong)*puVar9;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar7 - 1,0,lVar8);
      *puVar9 = uVar4;
      bVar13 = 2;
    }
  } while (!(bool)(bVar13 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  return;
}


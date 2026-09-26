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
extern unsigned int *auStack_58;
extern float fRam831cabc4;
extern int fn_8229FE70();
extern int fn_8229FF28();
extern int fn_822CFF20();
extern int fn_82359420();
extern int fn_82359698();
extern int fn_82359BB0();
extern int fn_82365BD8();
extern int fn_82374C88();
extern int fn_82374D08();
extern int fn_8238C880();
extern int fn_8238CAC8();
extern int fn_8238CC68();
extern int fn_8238CEB8();
extern int fn_8238D478();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_60;


void fn_8238C620(double param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  double dVar8;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  int *piStack_50;
  int *piStack_4c;
  
  fVar1 = (float)param_2[0xf];
  param_2[0xf] = (int)(float)((double)fVar1 + param_1);
  iVar2 = param_2[2];
  if (fRam831cabc4 <= (float)((double)fVar1 + param_1)) {
    fn_82374C88(iVar2,1);
  }
  fn_8238CEB8(param_1,param_2);
  fn_822CFF20(&piStack_50,(ulonglong)(uint)param_2[2] + 0x184);
  for (piVar7 = piStack_50; piVar7 != piStack_4c; piVar7 = piVar7 + 2) {
    iVar6 = *piVar7;
    if ((*(int *)(iVar6 + 0x174) != 0) && (*(int *)(iVar6 + 0xa0) != 0)) {
      if (*(int *)(iVar6 + 0xd8) == 0) {
        uVar5 = fn_82365BD8(auStack_58,piVar7);
        fn_8238CC68(param_2,uVar5);
      }
      else {
        uVar5 = fn_82365BD8(&uStack_60,piVar7);
        fn_8238CAC8(param_2,uVar5);
      }
    }
  }
  fn_82359BB0(&piStack_50);
  iVar6 = fn_8238C880(param_2);
  if (iVar6 == 0) {
    param_2[4] = (int)(float)((double)(float)param_2[4] + param_1);
    iVar6 = (**(code **)(*param_2 + 0x78))(param_2);
    lVar4 = uStack_60;
    if (iVar6 != 0) {
      uStack_60 = ((((U64)(uStack_60)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)(longlong)(float)param_2[4])) & ((U64)0xFFFFFFFF)) << 32));
      iVar3 = (((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
      piVar7 = *(int **)**(undefined4 **)(iVar2 + 8);
      iVar6 = (int)*(float *)(*(int *)(piVar7[4] * 4 + *piVar7) + 0x20);
      lVar4 = (longlong)iVar6;
      if ((((U64)(uStack_60) >> 32) & 0xFFFFFFFF) != iVar6) {
        uStack_60 = (longlong)(((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
        *(float *)(*(int *)(piVar7[4] * 4 + *piVar7) + 0x20) = (float)uStack_60;
        (**(code **)(*param_2 + 0x38))(param_2,iVar3);
        iVar6 = *(int *)(*(int *)(iVar2 + 0xd4) + 0xc);
        if (*(int *)(iVar6 + 0x58) == 0) {
          fn_8229FE70();
          lVar4 = uStack_60;
        }
        else {
          fn_8229FF28(iVar6,iVar3);
          lVar4 = uStack_60;
        }
      }
    }
    uStack_60 = lVar4;
    dVar8 = (double)lbl_821CC160;
    if (dVar8 < (double)(float)param_2[6]) {
      param_2[6] = (int)(float)((double)(float)param_2[6] - param_1);
      fn_82374D08(iVar2);
      fn_82359420(param_1,iVar2,*(undefined4 *)(iVar2 + 0x9b8),param_4,iVar2 + 0x31c);
    }
    if ((dVar8 < (double)(float)param_2[7]) &&
       (fVar1 = (float)((double)(float)param_2[7] - param_1), param_2[7] = (int)fVar1,
       (double)fVar1 <= dVar8)) {
      fn_8238D478(param_2);
      dVar8 = (double)(**(code **)(*param_2 + 0x7c))(param_2);
      param_2[7] = (int)(float)dVar8;
    }
  }
  else {
    *(undefined4 *)(param_2[2] + 0x100) = 1;
    fn_82359698(param_2[2],0x12);
  }
  return;
}


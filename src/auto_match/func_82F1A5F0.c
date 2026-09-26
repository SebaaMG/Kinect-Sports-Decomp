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
extern unsigned int *auStack_50;
extern int fn_82F085F8();
extern int fn_82F08690();
extern int fn_82F1A430();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820DA2C8;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined2
fn_82F1A5F0(int param_1,uint param_2,int param_3,ulonglong param_4,short *param_5,
             undefined2 *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  ulonglong auStack_50 [10];
  
  dVar8 = (double)*(float *)(param_7 + 0x30) * (double)(longlong)*param_5;
  if ((double)*(float *)(param_7 + 0x30) * (double)(longlong)*param_5 * lbl_820DA2C8 <= lbl_82005710
     ) {
    uVar1 = (uint)(dVar8 * lbl_820DA2C8 - lbl_82005730);
    uVar4 = (undefined2)uVar1;
  }
  else {
    uVar1 = (uint)(dVar8 * lbl_820DA2C8 + lbl_82005730);
    uVar4 = (undefined2)uVar1;
  }
  auStack_50[0] = (ulonglong)(int)uVar1;
  *param_6 = uVar4;
  uStack_5c = 0;
  uStack_60 = 0;
  if ((((*(uint *)(param_1 + 0x7b2c) & 0xe) != 0) && (-1 < (int)param_2)) && ((int)param_2 < 4)) {
    auStack_50[0] = (ulonglong)uVar1;
    uStack_58 = 0;
    fn_82F085F8(param_1,*(uint *)(param_1 + 0x7b2c),param_4,param_3,param_2,&uStack_5c);
    fn_82F08690(param_1,*(undefined4 *)(param_1 + 0x7b2c),param_4,param_3,param_2,0x40,&uStack_60,
                  auStack_50);
  }
  uVar4 = fn_82F1A430(param_1,param_6,param_5,0x40,param_7,uStack_5c,uStack_60);
  uVar1 = *(uint *)(param_1 + 0x2d0) * 2;
  if ((int)param_2 < 4) {
    iVar6 = *(int *)(param_1 + 0x908);
    param_3 = (((int)param_2 >> 1) + (int)((param_4 & 0xffffffff) << 1)) * uVar1 + (param_2 & 1) +
              param_3 * 2;
  }
  else {
    iVar2 = (int)(uVar1 | *(uint *)(param_1 + 0x2d0) >> 0x1f) >> 1;
    if (param_2 == 4) {
      iVar6 = *(int *)(param_1 + 0x90c);
      param_3 = iVar2 * (int)param_4 + param_3;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x910);
      param_3 = iVar2 * (int)param_4 + param_3;
    }
  }
  iVar6 = param_3 * 0x20 + iVar6;
  iVar2 = 0;
  iVar7 = 0;
  do {
    sVar5 = (short)iVar7 + 1;
    *(undefined2 *)(iVar7 * 2 + iVar6) = param_6[iVar7];
    puVar3 = (undefined2 *)(iVar2 + (int)param_6);
    iVar2 = (int)sVar5 << 4;
    *(undefined2 *)((iVar7 + 8) * 2 + iVar6) = *puVar3;
    iVar7 = (int)sVar5;
  } while (sVar5 < 8);
  return uVar4;
}


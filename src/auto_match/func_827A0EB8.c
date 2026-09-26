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
extern unsigned int fStack_44;
extern int fn_8279C2A0();
extern int fn_827A0BD0();
extern int fn_827A8770();
extern int fn_827A9328();
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_68;
extern unsigned int uStack_74;


longlong fn_827A0EB8(double param_1,double param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar5;
  undefined4 *puVar4;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined4 uStack_74;
  int aiStack_70 [2];
  uint uStack_68;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  float fStack_44;
  byte bStack_40;
  
  fn_827A0BD0();
  iVar7 = param_3 + 0x24;
  dVar9 = (double)(float)(param_1 -
                         (double)(*(float *)(param_3 + 0x3c) - *(float *)(param_3 + 0xf0)));
  dVar10 = (double)(float)(param_2 -
                          (double)(*(float *)(param_3 + 0x40) - *(float *)(param_3 + 0xf4)));
  uVar2 = fn_827A8770(iVar7);
  fn_827A9328((double)(float)((double)uVar2 + dVar10),aiStack_70,iVar7);
  if (((aiStack_70[0] == 0) || (*(uint *)(aiStack_70[0] + 4) <= uStack_68)) ||
     (bVar5 = false, (int)uStack_68 < 0)) {
    bVar5 = true;
  }
  if (bVar5) {
    puVar4 = &uStack_74;
    uStack_4c = 0;
    fStack_44 = lbl_821AAD20;
    lVar8 = 5;
    puVar6 = &uStack_54;
    if ((double)lbl_821AAD20 < dVar10) {
      bVar1 = *(byte *)(param_3 + 0x98);
      iStack_48 = *(int *)(param_3 + 0x28) + -1;
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar6;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      bVar1 = *(byte *)(param_3 + 0x98);
      iStack_48 = 0;
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar6;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    bStack_40 = bVar1 >> 2 & 1;
    iStack_50 = iVar7;
  }
  uVar3 = (ulonglong)uStack_68;
  if (((aiStack_70[0] == 0) || (*(uint *)(aiStack_70[0] + 4) <= uVar3)) ||
     (bVar5 = false, (int)uStack_68 < 0)) {
    bVar5 = true;
  }
  if (bVar5) {
    lVar8 = -(ulonglong)(*(int *)(param_3 + 0x28) != 0);
  }
  else {
    if ((int)uStack_68 < 0) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar8 = fn_8279C2A0(dVar9,param_3,uVar3);
  }
  return lVar8;
}


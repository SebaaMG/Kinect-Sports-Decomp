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
extern int fn_82F655D8();
extern unsigned int iStack_1c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8208ED48;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216DE58;
extern unsigned int lbl_8216DE5C;
extern unsigned int lbl_821AAD20;


undefined8 fn_82FC9390(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  double dVar9;
  ulonglong uVar10;
  int iStack_1c;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  fVar3 = lbl_821AAD20;
  fVar7 = lbl_8216C698;
  fVar6 = lbl_8208ED48;
  fVar4 = lbl_82002AE0;
  fVar1 = (float)param_2[1];
  fVar2 = lbl_821AAD20;
  if ((lbl_8216C698 < fVar1) && (fVar2 = lbl_82002AE0, fVar1 < lbl_821AAD20)) {
    uVar10 = (ulonglong)(fVar1 + lbl_8208ED48);
    iStack_1c = (int)uVar10;
    fVar1 = (fVar1 + lbl_8208ED48) - (float)(uVar10 & 0xffffffff);
    fVar2 = *(float *)(&lbl_8216DE58 + iStack_1c * 4) * (lbl_82002AE0 - fVar1) +
            *(float *)(&lbl_8216DE5C + iStack_1c * 4) * fVar1;
  }
  *(float *)(param_1 + 8) = fVar2;
  fVar1 = (float)param_2[2];
  if ((fVar7 < fVar1) && (bVar8 = fVar1 < fVar3, fVar3 = fVar4, bVar8)) {
    uVar10 = (ulonglong)(fVar1 + fVar6);
    iStack_1c = (int)uVar10;
    fVar1 = (fVar1 + fVar6) - (float)(uVar10 & 0xffffffff);
    fVar3 = *(float *)(&lbl_8216DE58 + iStack_1c * 4) * (fVar4 - fVar1) +
            *(float *)(&lbl_8216DE5C + iStack_1c * 4) * fVar1;
  }
  *(float *)(param_1 + 0xc) = fVar3;
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  uVar5 = lbl_82015618;
  fVar1 = lbl_82005718;
  *(undefined4 *)(param_1 + 0x14) = param_2[4];
  *(undefined4 *)(param_1 + 0x18) = param_2[5];
  *(undefined4 *)(param_1 + 0x1c) = param_2[6];
  *(undefined4 *)(param_1 + 0x20) = param_2[7];
  dVar9 = (double)fn_82F655D8(uVar5,(double)((float)param_2[8] * fVar1));
  *(float *)(param_1 + 0x24) = (float)dVar9;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 9);
  return 1;
}


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
extern int fn_82A1EFC0();
extern int fn_82F98E98();
extern int fn_82F9AD50();
extern int fn_82FE1178();
extern unsigned int lbl_82005758;
extern unsigned int lbl_821AAD20;


void fn_82FA4758(int param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  
  if (((*(char *)(param_1 + 0x220) == '\0') || ((*(uint *)(param_2 + 4) & 8) == 0)) ||
     (bVar8 = true, *(int *)(param_1 + 0x24) != 0)) {
    bVar8 = false;
  }
  if (bVar8) {
    uVar2 = *(ushort *)(param_2 + 0xe);
    uVar7 = fn_82F98E98(param_2);
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(uVar7,0,(ulonglong)uVar2 << 2);
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    iVar3 = *(int *)(param_1 + 8);
    bVar8 = false;
    fVar1 = *(float *)(iVar3 + 4);
    *(float *)(param_1 + 0xc) = fVar1;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar3 + 0x14);
    if ((fVar1 != *(float *)(param_1 + 0x6c)) ||
       (*(float *)(param_1 + 0x10) != *(float *)(param_1 + 0x70))) {
      fn_82F9AD50(param_1);
      bVar8 = true;
      fVar1 = *(float *)(param_1 + 0xc);
      *(float *)(param_1 + 0x6c) = fVar1;
      *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x10);
      dVar11 = lbl_82005758 / (double)*(float *)(param_1 + 0x10);
      dVar10 = (lbl_82005758 - dVar11) / (dVar11 + lbl_82005758);
      dVar11 = lbl_82005758 / (lbl_82005758 - dVar10);
      *(float *)(param_1 + 0x84) = (float)dVar11;
      *(float *)(param_1 + 0x88) = (float)-(dVar11 * dVar10);
    }
    uVar6 = lbl_821AAD20;
    if (*(char *)(param_1 + 0x220) != '\0') {
      *(undefined4 *)(param_1 + 0x20c) = lbl_821AAD20;
      *(undefined4 *)(param_1 + 0x18) = uVar6;
    }
    bVar5 = *(int *)(param_2 + 8) == 0x11;
    if (bVar5) {
      if ((bVar8) || (*(char *)(param_1 + 0x221) == '\0')) {
        *(int *)(param_1 + 0x218) = (int)(longlong)((float)*(uint *)(param_1 + 0x214) * fVar1);
      }
      uVar4 = *(uint *)(param_1 + 0x218);
      uVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) - (ulonglong)*(ushort *)(param_2 + 0xe);
      if ((ulonglong)uVar4 < (uVar9 & 0xffffffff)) {
        uVar9 = (ulonglong)uVar4;
      }
      *(uint *)(param_1 + 0x218) = uVar4 - (int)uVar9;
      fn_82FE1178(param_1,param_2,uVar9);
      *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + (short)uVar9;
      if (*(int *)(param_1 + 0x218) != 0) {
        *(undefined4 *)(param_2 + 8) = 0x2d;
      }
    }
    *(bool *)(param_1 + 0x221) = bVar5;
    (**(code **)(param_1 + 4))(param_1,param_2);
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}


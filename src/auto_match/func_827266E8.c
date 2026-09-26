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
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C488();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_82687270();
extern int fn_826C62B8();
extern int fn_826C6368();
extern int fn_827249B8();
extern int fn_8278B290();
extern int fn_8278BC18();
extern int fn_8278D240();
extern int fn_8278D270();
extern int fn_8278D2E0();
extern int fn_8278D368();
extern int fn_8278DAD0();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82010C6C;
extern unsigned int uStack_3a;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_40;
extern unsigned int uStack_42;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_60;


void fn_827266E8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  ushort uVar11;
  int *piVar12;
  undefined4 auStack_70 [2];
  int *apiStack_68 [2];
  undefined8 uStack_60;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  
  fn_8278DAD0(param_2);
  fn_8278BC18(param_3);
  if (*(short *)(param_1[0x27] + 0x1a) != 0) {
    fn_827249B8(apiStack_68,param_1[0x29],param_1[0x27] + 0x10);
    if (apiStack_68[0] == (int *)0x0) {
      lVar6 = (**(code **)(*param_1 + 0x94))(param_1);
      if (lVar6 != 0) {
        fn_8267C4C8(lVar6);
        uVar9 = 0xffffffff82010f08;
LAB_827267b8:
        fn_82683F88(lVar6 + 0xc,uVar9,*(undefined2 *)(param_1[0x27] + 0x1a),
                          *(undefined2 *)((int)param_1 + 0x12),
                          ((ulonglong)*(uint *)(param_1[0x27] + 0x48) & 0xfffffffc) + 8);
        fn_8267C4F0(lVar6);
      }
    }
    else {
      uVar7 = (**(code **)(*apiStack_68[0] + 8))();
      piVar5 = apiStack_68[0];
      if ((uVar7 & 0xff00) == 0x200) {
        if (apiStack_68[0] == (int *)0x0) goto LAB_82726908;
        piVar12 = apiStack_68[0] + 3;
        uVar9 = (**(code **)(*(int *)apiStack_68[0][3] + 0x3c))();
        fn_8278D240(param_2,uVar9,0xffffffffffffffff);
        if ((*(ushort *)(param_1[0x27] + 0x50) >> 7 & 1) == 0) {
          fn_8278D2E0(param_2,*(uint *)(*piVar12 + 0x14) >> 1 & 1);
          fn_8278D368(param_2,*(uint *)(*piVar12 + 0x14) & 1);
          if ((*(byte *)(param_1[0x27] + 0x50) & 1) == 0) {
            if (((~(ulonglong)*(uint *)(*piVar12 + 0x14) & 0xffffffff) >> 6 & 1) != 0) {
              auStack_70[0] = 0x146;
              uVar7 = fn_8267BED0(param_1,0x1c,auStack_70);
              if ((uVar7 & 0xffffffff) == 0) {
                puVar8 = (uint *)0x0;
              }
              else {
                puVar8 = (uint *)fn_826C62B8(uVar7,0,piVar5,0,0,
                                                   *(undefined4 *)(param_1[0x29] + 0x2c));
              }
              fn_8278D270(param_2,puVar8);
              if (puVar8 != (uint *)0x0) {
                uVar3 = *puVar8;
                *puVar8 = (uint)((ulonglong)uVar3 - 1);
                if ((ulonglong)uVar3 - 1 == 0) {
                  fn_826C6368(puVar8);
                  fn_8267BE38(puVar8);
                }
              }
            }
          }
        }
      }
      else {
        lVar6 = (**(code **)(*param_1 + 0x94))(param_1);
        if (lVar6 != 0) {
          fn_8267C4C8(lVar6);
          uVar9 = 0xffffffff82010ea8;
          goto LAB_827267b8;
        }
      }
    }
    if (apiStack_68[0] != (int *)0x0) {
      fn_82687270();
    }
  }
LAB_82726908:
  uStack_60 = (longlong)*(float *)(param_1[0x27] + 0x2c);
  uVar10 = (undefined2)uStack_60;
  if (0x10000 < (((U64)(uStack_60) >> 32) & 0xFFFFFFFF)) {
    uVar10 = 0xffff;
  }
  uVar11 = *(ushort *)(param_2 + 0x2a);
  *(undefined2 *)(param_2 + 0x26) = uVar10;
  *(ushort *)(param_2 + 0x2a) = uVar11 | 8;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1[0x27] + 0x30);
  *(ushort *)(param_2 + 0x2a) = uVar11 & 0xfffe | 9;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_4c = 1;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  uVar3 = *(uint *)(param_1[0x27] + 0x54);
  if (uVar3 == 0) {
    uVar11 = *(ushort *)(param_3 + 0x16) & 0xf9fe | 1;
  }
  else if (uVar3 == 1) {
    uVar11 = *(ushort *)(param_3 + 0x16) & 0xf9fe | 0x201;
  }
  else if (uVar3 < 3) {
    uVar11 = *(ushort *)(param_3 + 0x16) | 0x601;
  }
  else {
    if (uVar3 != 3) goto LAB_827269e0;
    uVar11 = *(ushort *)(param_3 + 0x16) & 0xf9fe | 0x401;
  }
  *(ushort *)(param_3 + 0x16) = uVar11;
LAB_827269e0:
  if ((*(ushort *)(param_1[0x27] + 0x50) >> 9 & 1) != 0) {
    uVar11 = *(ushort *)(param_3 + 0x16);
    fVar2 = *(float *)(param_1[0x27] + 0x38);
    *(ushort *)(param_3 + 0x16) = uVar11 | 0x10;
    fVar4 = lbl_82005718;
    *(short *)(param_3 + 0x12) = (short)(longlong)(fVar2 * lbl_82005718);
    fVar2 = *(float *)(param_1[0x27] + 0x3c);
    *(ushort *)(param_3 + 0x16) = uVar11 | 0x30;
    *(short *)(param_3 + 0x14) = (short)(longlong)(fVar2 * fVar4);
    fVar2 = *(float *)(param_1[0x27] + 0x40);
    *(ushort *)(param_3 + 0x16) = uVar11 | 0x34;
    *(short *)(param_3 + 0xe) = (short)(int)(fVar2 * fVar4);
    iVar1 = (int)(*(float *)(param_1[0x27] + 0x44) * fVar4);
    uStack_60 = (longlong)iVar1;
    *(short *)(param_3 + 0x10) = (short)iVar1;
    *(ushort *)(param_3 + 0x16) = uVar11 | 0x3c;
  }
  ppuStack_50 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_50);
  fn_8267C488(&ppuStack_50);
  return;
}


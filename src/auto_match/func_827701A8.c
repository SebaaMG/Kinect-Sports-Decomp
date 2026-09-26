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
extern int fn_827700E8();
extern int fn_827B5330();
extern int fn_82F68918();
extern int fn_82F6B2A8();


longlong fn_827701A8(int param_1,int *param_2,uint param_3,uint param_4,longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (param_3 < param_4) {
    iVar4 = param_3 * 0x28;
    do {
      iVar7 = *param_2 + iVar4;
      if (*(int *)(iVar7 + 8) == -1) {
        dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x18));
        dVar11 = (double)(float)dVar9;
        dVar9 = (double)fn_82F68918((double)*(float *)(iVar7 + 0x10));
        dVar10 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x1c));
        dVar12 = (double)(float)dVar10;
        dVar10 = (double)fn_82F68918((double)*(float *)(iVar7 + 0x14));
        fn_827700E8(param_1 + 0x30,(int)(dVar11 - (double)(float)dVar9),
                      (int)(dVar12 - (double)(float)dVar10),param_3);
      }
      param_3 = param_3 + 1;
      iVar4 = iVar4 + 0x28;
    } while (param_3 < param_4);
  }
  fn_827B5330(param_1 + 0x30);
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    do {
      uVar6 = 0;
      piVar5 = (int *)(*(int *)((uVar3 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x70)) +
                      (uVar3 & 0xf) * 8);
      if (piVar5[1] != 0) {
        do {
          puVar8 = (uint *)(*(int *)((*piVar5 + uVar6 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x60))
                           + (*piVar5 + uVar6 & 0xff) * 0xc);
          iVar4 = puVar8[2] * 0x28 + *param_2;
          dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar4 + 0x18));
          dVar11 = (double)(float)dVar9;
          dVar9 = (double)fn_82F68918((double)*(float *)(iVar4 + 0x10));
          dVar10 = (double)fn_82F6B2A8((double)*(float *)(iVar4 + 0x1c));
          dVar12 = (double)(float)dVar10;
          dVar10 = (double)fn_82F68918((double)*(float *)(iVar4 + 0x14));
          uVar6 = uVar6 + 1;
          *(float *)(iVar4 + 0x20) = (float)*puVar8 - *(float *)(iVar4 + 0x10);
          *(float *)(iVar4 + 0x24) = (float)puVar8[1] - *(float *)(iVar4 + 0x14);
          *(float *)(iVar4 + 0x10) = (float)*puVar8;
          *(float *)(iVar4 + 0x14) = (float)puVar8[1];
          *(float *)(iVar4 + 0x18) =
               (float)((ulonglong)*puVar8 +
                       ((longlong)(dVar11 - (double)(float)dVar9) & 0xffffffffU) & 0xffffffff);
          uVar1 = puVar8[1];
          *(uint *)(iVar4 + 0xc) = uVar3 + (int)param_5;
          *(float *)(iVar4 + 0x1c) =
               (float)((ulonglong)uVar1 + ((longlong)(dVar12 - (double)(float)dVar10) & 0xffffffffU)
                      & 0xffffffff);
        } while (uVar6 < (uint)piVar5[1]);
      }
      uVar2 = (ulonglong)*(uint *)(param_1 + 100);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return uVar2 + param_5;
}


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
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_600;
extern int fn_82CC3930();
extern unsigned int uRam8329f07c;
extern unsigned int uRam8329f088;


undefined8 fn_830BA210(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  int iVar18;
  uint *puStack_66c;
  undefined1 auStack_600 [592];
  undefined1 auStack_3b0 [944];
  
  puVar16 = *(ulonglong **)(param_2 + 0x520);
  param_3[10] = (int)auStack_600;
  param_3[0xb] = (int)auStack_3b0;
  param_3[7] = *(int *)(param_1 + 0x56fc);
  puVar8 = *(uint **)(param_1 + 0x5708);
  puStack_66c = puVar8 + 1;
  param_3[8] = (int)puVar8;
  uVar2 = *puVar8;
  iVar13 = 0;
  *param_3 = 0;
  iVar12 = 0;
  param_3[1] = 0;
  iVar11 = 0;
  *(undefined2 *)(param_3 + 4) = 0;
  iVar10 = 0;
  uVar6 = uVar2 & 0xffff;
  uVar7 = uVar2 >> 0x10 & 0x3ff;
  uVar1 = *(ushort *)(param_2 + 0x4a);
  uVar14 = 0;
  uVar2 = (uint)(*(ushort *)(param_2 + 0x32) >> 1);
  uVar4 = *(ushort *)(param_2 + 0x34) >> 1;
  if (uVar4 != 0) {
    do {
      param_3[2] = iVar11;
      param_3[3] = iVar10;
      *(undefined2 *)((int)param_3 + 0x12) = 0;
      if ((uVar14 == uVar7) && (uVar15 = 0, puVar17 = puVar16, uVar2 != 0)) {
        do {
          while (uVar15 != uVar6) {
            uVar15 = uVar15 + 1;
            puVar17 = puVar17 + 1;
            *param_3 = *param_3 + 2;
            param_3[1] = param_3[1] + 1;
            param_3[2] = param_3[2] + 0x10;
            param_3[3] = param_3[3] + 8;
            *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
            if (uVar2 <= uVar15) goto LAB_830ba3f4;
          }
          uVar9 = *puVar17;
          iVar18 = 0;
          do {
            uVar6 = param_3[7];
            lVar5 = (ulonglong)uVar6 - 0x80;
            uVar7 = *(uint *)((iVar18 + 0x8c) * 4 + param_2);
            uVar3 = param_3[(iVar18 >> 2) + 2];
            param_3[7] = (int)lVar5;
            dataCacheBlockTouch((ulonglong)uVar6 - 0x100);
            dataCacheBlockClearToZero((ulonglong)(uint)param_3[10]);
            fn_82CC3930(lVar5,param_3[10],
                            (uVar9 >> 0x38 & 0x3f) * 0x40 + (ulonglong)*(uint *)(param_2 + 0x188),
                            uRam8329f07c,(ulonglong)uVar7 + (ulonglong)uVar3,
                            *(undefined2 *)(((iVar18 >> 2) + 0x2d) * 2 + param_2),uRam8329f088);
            iVar18 = iVar18 + 1;
          } while (iVar18 < 6);
          puVar8 = puStack_66c + 1;
          uVar7 = *puStack_66c >> 0x10 & 0x3ff;
          uVar6 = *puStack_66c & 0xffff;
          puStack_66c = puVar8;
        } while (uVar14 == uVar7);
      }
LAB_830ba3f4:
      iVar13 = uVar2 * 4 + iVar13;
      puVar16 = puVar16 + uVar2;
      *param_3 = iVar13;
      iVar12 = uVar2 + iVar12;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      param_3[1] = iVar12;
      uVar14 = uVar14 + 1;
      iVar11 = (uint)uVar1 * 0x10 + iVar11;
      iVar10 = (uint)uVar1 * 4 + iVar10;
    } while (uVar14 < uVar4);
  }
  return 0;
}


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
extern int fn_82CC3F68();
extern int fn_830BF860();
extern int fn_830BF8B0();
extern int fn_830BF900();
extern int fn_830BF950();
extern int fn_830C10E0();
extern unsigned int uRam8329f07c;
extern unsigned int uRam8329f088;
extern unsigned int uStack_a0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


undefined8 fn_830BF9A0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_a0;
  
  uVar11 = *(uint *)(param_1 + 0xdc);
  iVar7 = *(int *)(param_1 + 0x88) << 4;
  uVar2 = *(uint *)(param_1 + 0xec0);
  uVar3 = *(uint *)(param_1 + 0xe0);
  uVar4 = *(uint *)(param_1 + 0xec4);
  uVar8 = *(ushort *)(param_2 + 0x32) >> 1;
  uVar5 = *(uint *)(param_1 + 0xec8);
  iVar6 = *(int *)(param_1 + 0x110);
  bVar1 = *(byte *)(param_2 + 0x21);
  if (param_4 == 0) {
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x56fc);
  }
  else {
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_4 * 0x10 + param_2 + 0x5c8);
  }
  lVar10 = (longlong)(int)((uint)*(ushort *)(param_2 + 0x4c) << 3) * (longlong)param_5;
  uVar15 = (longlong)(int)((uint)*(ushort *)(param_2 + 0x4a) << 4) * (longlong)param_5 +
           (ulonglong)uVar2 + (ulonglong)uVar11;
  uVar16 = lVar10 + (ulonglong)uVar4 + (ulonglong)uVar3;
  uVar21 = lVar10 + (ulonglong)uVar5 + (ulonglong)uVar3;
  uStack_bc = (uint)uVar15;
  puVar18 = (uint *)((uint)uVar8 * param_5 * 0x18 + iVar6);
  uStack_c0 = (uint)uVar16;
  uStack_b8 = (uint)uVar21;
  if (param_5 < param_6) {
    uStack_a0 = param_6 - param_5;
    while( true ) {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x50d8);
      uVar11 = 0;
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x50dc);
      uVar12 = (ulonglong)*(uint *)(param_1 + 0x50e0);
      if (uVar8 != 0) {
        iVar6 = (int)uVar16;
        iVar17 = 0;
        do {
          iVar20 = 0;
          lVar10 = 0;
          puVar19 = (uint *)(param_2 + 0x22c);
          do {
            puVar19 = puVar19 + 1;
            uVar2 = *puVar19;
            lVar9 = (ulonglong)*(uint *)(param_3 + 0x1c) - 0x80;
            uVar3 = *(uint *)(((iVar20 >> 2) + 2) * 4 + param_3);
            dataCacheBlockTouch((ulonglong)*(uint *)(param_3 + 0x1c) - 0x100);
            *(int *)(param_3 + 0x1c) = (int)lVar9;
            fn_82CC3F68(lVar9,lVar10 + (ulonglong)*(uint *)(param_2 + 0x568),
                            (ulonglong)*(byte *)(puVar18 + 1) * 0x40 +
                            (ulonglong)*(uint *)(param_2 + 0x188),uRam8329f07c,
                            (ulonglong)uVar3 + (ulonglong)uVar2,
                            *(undefined2 *)(((iVar20 >> 2) + 0x2d) * 2 + param_2),uRam8329f088);
            lVar10 = lVar10 + 0x80;
            iVar20 = iVar20 + 1;
          } while ((int)lVar10 < 0x300);
          if ((bVar1 & 1) == 0) {
            if ((*puVar18 & 0x10000) == 0) {
              fn_830BF900();
            }
            else {
              fn_830BF950(*(undefined4 *)(param_2 + 0x568),uVar15,uVar16,
                              (uint)((int)uVar21 - iVar6) + uVar16,*(undefined2 *)(param_2 + 0x4a),
                              *(undefined2 *)(param_2 + 0x4c));
            }
          }
          else {
            lVar10 = ((ulonglong)uVar11 & 0x7fffffff) * 2;
            iVar20 = (int)(((ulonglong)uVar11 & 0x1fffffff) << 3);
            if ((*puVar18 & 0x800) == 0) {
              *(undefined4 *)(*(int *)(param_2 + 0x160) + iVar17) = 0;
              *(undefined4 *)
               ((int)(((ulonglong)*(ushort *)(param_2 + 0x32) + lVar10 + 1 & 0xffffffff) << 2) +
               *(int *)(param_2 + 0x15c)) = 0;
              *(undefined4 *)
               ((int)(((ulonglong)*(ushort *)(param_2 + 0x32) + lVar10 & 0xffffffff) << 2) +
               *(int *)(param_2 + 0x15c)) = 0;
              *(undefined4 *)(iVar20 + *(int *)(param_2 + 0x15c) + 4) = 0;
              *(undefined4 *)(iVar20 + *(int *)(param_2 + 0x15c)) = 0;
            }
            else {
              *(undefined4 *)(*(int *)(param_2 + 0x160) + iVar17) = 1;
              *(undefined4 *)
               ((int)(((ulonglong)*(ushort *)(param_2 + 0x32) + lVar10 + 1 & 0xffffffff) << 2) +
               *(int *)(param_2 + 0x15c)) = 1;
              *(undefined4 *)
               ((int)(((ulonglong)*(ushort *)(param_2 + 0x32) + lVar10 & 0xffffffff) << 2) +
               *(int *)(param_2 + 0x15c)) = 1;
              *(undefined4 *)(iVar20 + *(int *)(param_2 + 0x15c) + 4) = 1;
              *(undefined4 *)(iVar20 + *(int *)(param_2 + 0x15c)) = 1;
            }
            if ((*puVar18 & 0x10000) == 0) {
              fn_830BF860();
              uVar14 = uVar14 + 0x20;
              uVar13 = uVar13 + 0x10;
              uVar12 = uVar12 + 0x10;
            }
            else {
              fn_830BF8B0(*(undefined4 *)(param_2 + 0x568),uVar14,uVar13,uVar12,iVar7,iVar7 >> 1
                             );
              uVar14 = uVar14 + 0x20;
              uVar13 = uVar13 + 0x10;
              uVar12 = uVar12 + 0x10;
            }
          }
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + 0x10;
          uVar16 = uVar16 + 8;
          puVar18 = puVar18 + 6;
          iVar17 = iVar17 + 4;
        } while ((int)uVar11 < (int)(uint)uVar8);
        uVar21 = (ulonglong)uStack_b8;
        uVar16 = (ulonglong)uStack_c0;
        uVar15 = (ulonglong)uStack_bc;
      }
      if ((bVar1 & 1) != 0) {
        fn_830C10E0(param_2,uVar15,uVar16,uVar21,*(undefined4 *)(param_1 + 0x50d8),
                        *(undefined4 *)(param_1 + 0x50dc),*(undefined4 *)(param_1 + 0x50e0));
      }
      uVar12 = (ulonglong)uStack_a0;
      uStack_c0 = *(int *)(param_1 + 0xe8) + (int)uVar16;
      uStack_bc = (int)uVar15 + *(int *)(param_1 + 0xe4);
      uStack_b8 = *(int *)(param_1 + 0xe8) + (int)uVar21;
      uStack_a0 = (uint)(uVar12 - 1);
      if (uVar12 - 1 == 0) break;
      uVar21 = (ulonglong)uStack_b8;
      uVar16 = (ulonglong)uStack_c0;
      uVar15 = (ulonglong)uStack_bc;
    }
  }
  return 0;
}


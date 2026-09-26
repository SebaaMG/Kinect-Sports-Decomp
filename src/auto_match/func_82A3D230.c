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
extern unsigned int *auStack_880;
extern int fn_82A3CF38();


undefined8
fn_82A3D230(int param_1,longlong param_2,ulonglong param_3,uint param_4,uint *param_5,
             uint *param_6)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short sVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  short sStack_882;
  ushort auStack_880 [1088];
  
  *param_5 = (uint)param_3;
  if (param_6 != (uint *)0x0) {
    *param_6 = param_4;
  }
  if ((0x17ff < (param_3 - param_2 & 0xffffffff)) && (bVar1 = *(byte *)(param_1 + 0x871), bVar1 < 4)
     ) {
    uVar3 = (param_3 & 0xffffffff) >> 3;
    sVar8 = 0;
    uVar9 = 0;
    if (uVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      psVar7 = &sStack_882;
      do {
        if ((uVar9 & 7) == 0) {
          psVar7 = psVar7 + 1;
          *psVar7 = sVar8;
        }
        iVar4 = (int)uVar9;
        uVar9 = uVar9 + 1;
        sVar8 = (ushort)*(byte *)((uint)*(byte *)(iVar2 + iVar4) + param_1 + 0x872) + sVar8;
      } while ((uVar9 & 0xffffffff) < uVar3);
    }
    uVar3 = param_2 + 0x3fU & 0xffffffc0;
    uVar9 = uVar3 + 0x800;
    if ((uVar9 & 0xffffffff) < (param_3 - 0x1000 & 0xffffffff)) {
      lVar13 = uVar3 + 0xc00;
      do {
        uVar5 = fn_82A3CF38(param_1,uVar9,lVar13,
                              *(undefined2 *)((int)auStack_880 + (int)((uVar9 & 0xffffffff) >> 5)),
                              *(undefined2 *)((int)auStack_880 + ((uint)lVar13 >> 5)),0x400);
        if (((0x578 < uVar5) &&
            (uVar5 = fn_82A3CF38(param_1,lVar13 - 0x800U,lVar13 + 0x400,
                                   *(undefined2 *)
                                    ((int)auStack_880 + (int)((lVar13 - 0x800U & 0xffffffff) >> 5)),
                                   *(undefined2 *)((int)auStack_880 + ((uint)(lVar13 + 0x400) >> 5))
                                   ,0x400), 0x578 < uVar5)) &&
           (uVar5 = fn_82A3CF38(param_1,lVar13 - 0xc00U,lVar13 + 0x800,
                                  *(undefined2 *)
                                   ((int)auStack_880 + (int)((lVar13 - 0xc00U & 0xffffffff) >> 5)),
                                  *(undefined2 *)((int)auStack_880 + ((uint)(lVar13 + 0x800) >> 5)),
                                  0x400), 0x578 < uVar5)) {
          uVar12 = lVar13 - 0x200;
          uVar5 = 0;
          uVar10 = 0;
          if ((uVar12 & 0xffffffff) < (lVar13 + 0x600U & 0xffffffff)) {
            uVar11 = lVar13 - 0x600;
            do {
              uVar6 = fn_82A3CF38(param_1,uVar11,uVar12,
                                    *(undefined2 *)
                                     ((int)auStack_880 + (int)((uVar11 & 0xffffffff) >> 5)),
                                    *(undefined2 *)((int)auStack_880 + ((uint)uVar12 >> 5)),0x400);
              if (uVar5 < uVar6) {
                uVar10 = uVar12;
                uVar5 = uVar6;
              }
              uVar12 = uVar12 + 0x40;
              uVar11 = uVar11 + 0x40;
            } while ((uVar12 & 0xffffffff) < (lVar13 + 0x600U & 0xffffffff));
            if ((0x6a3 < uVar5) && (0xfff < (uVar10 - uVar3 & 0xffffffff))) {
              *(byte *)(param_1 + 0x871) = bVar1 + 1;
              *param_5 = (uint)uVar10;
              if (param_6 != (uint *)0x0) {
                *param_6 = (uint)*(ushort *)((int)auStack_880 + ((uint)uVar10 >> 5));
              }
              return 1;
            }
          }
        }
        uVar9 = uVar9 + 0x400;
        lVar13 = lVar13 + 0x400;
      } while ((uVar9 & 0xffffffff) < (param_3 - 0x1000 & 0xffffffff));
    }
  }
  return 0;
}


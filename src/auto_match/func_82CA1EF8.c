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
extern int fn_82C9F760();
extern int fn_82CA00E8();
extern int fn_82CA1B48();
extern int fn_82CA1D38();
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


void fn_82CA1EF8(int param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
                  ,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uStack0000003c;
  uint uStack00000044;
  uint uStack0000004c;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  uint in_stack_00000094;
  uint in_stack_0000009c;
  uint in_stack_000000a4;
  
  uStack0000003c = (uint)param_6;
  uStack00000044 = (uint)param_7;
  uStack0000004c = (uint)param_8;
  lVar6 = 0;
  lVar10 = 0;
  if (*(int *)(param_1 + 0x55b4) == 0) {
    if ((ulonglong)in_stack_0000009c == 0) {
      lVar6 = ((ulonglong)*(uint *)(param_1 + 0xcc) & 0x1fffffff) << 3;
      lVar10 = ((ulonglong)*(uint *)(param_1 + 0xd0) & 0x1fffffff) << 3;
    }
    fn_82C9F760(param_1,param_5,param_6,param_7,param_8,in_stack_00000054,in_stack_0000005c,
                  in_stack_00000094);
    uVar7 = (ulonglong)in_stack_000000a4 - (ulonglong)in_stack_0000009c;
    fn_82CA00E8(param_1,in_stack_00000064,in_stack_0000006c,in_stack_00000074,in_stack_0000007c,
                  in_stack_00000084,in_stack_0000008c,in_stack_00000094);
    lVar5 = (uVar7 & 0x7fffffff) * 2;
    fn_82CA1B48(param_1,lVar6 + param_2,lVar10 + param_3,lVar10 + param_4,
                  lVar5 - (ulonglong)(in_stack_0000009c == 0),param_5,uStack0000003c,uStack00000044)
    ;
    lVar6 = ((ulonglong)*(uint *)(param_1 + 0xd0) & 0x3fffffff) * 4;
    fn_82CA1B48(param_1,((ulonglong)*(uint *)(param_1 + 0xcc) & 0x3fffffff) * 4 + param_2,
                  lVar6 + param_3,lVar6 + param_4,lVar5,uStack0000004c,in_stack_00000054,
                  in_stack_0000005c);
    lVar6 = (uVar7 & 0xfffffff) << 4;
    fn_82CA1D38(param_1,param_2 + 8,param_3 + 8,param_4 + 8,
                  ((ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff) * 2 + -1,lVar6,
                  in_stack_00000064,in_stack_0000006c);
    fn_82CA1D38(param_1,param_2 + 4,param_3 + 4,param_4 + 4,*(int *)(param_1 + 0x88) << 1,lVar6,
                  in_stack_0000007c,in_stack_00000084);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xcc);
    uVar3 = *(uint *)(param_1 + 0xd0);
    uVar7 = (ulonglong)in_stack_0000009c;
    uVar1 = uVar4 << 2;
    uVar2 = uVar3 << 2;
    if (((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) ||
       (*(int *)(param_1 + 0x54c8) != 1)) {
      *(undefined4 *)(param_1 + 0x55d0) = *(undefined4 *)(param_1 + 0x55d4);
    }
    else {
      *(int *)(param_1 + 0x55d0) = *(int *)(param_1 + 0x8c) * 4 + *(int *)(param_1 + 0x55d4);
    }
    uVar11 = uVar7;
    if ((uVar7 < in_stack_000000a4) &&
       (uVar11 = uVar7 + 1, (uVar11 & 0xffffffff) < (ulonglong)in_stack_000000a4)) {
      lVar6 = (uVar11 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar6 + *(int *)(param_1 + 0x55d0)) != 0) break;
        uVar11 = uVar11 + 1;
        lVar6 = lVar6 + 4;
      } while ((uVar11 & 0xffffffff) < (ulonglong)in_stack_000000a4);
    }
    uVar13 = uVar11 - uVar7;
    if (uVar13 != 0) {
      uVar9 = (ulonglong)in_stack_00000094;
      do {
        if (((uVar7 & 0xffffffff) == 0) ||
           (*(int *)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(param_1 + 0x55d0)) != 0)) {
          lVar6 = ((ulonglong)uVar4 & 0x1fffffff) << 3;
          lVar10 = ((ulonglong)uVar3 & 0x1fffffff) << 3;
        }
        else {
          lVar6 = 0;
          lVar10 = 0;
        }
        iVar14 = (int)uVar13;
        fn_82C9F760(param_1,param_5,param_6,param_7,param_8,in_stack_00000054,in_stack_0000005c,
                      uVar9);
        fn_82CA00E8(param_1,in_stack_00000064,in_stack_0000006c,in_stack_00000074,
                      in_stack_0000007c,in_stack_00000084,in_stack_0000008c,uVar9);
        if (((uVar7 & 0xffffffff) == 0) ||
           (lVar5 = 0, *(int *)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(param_1 + 0x55d0)) != 0)
           ) {
          lVar5 = 1;
        }
        lVar8 = (uVar13 & 0x7fffffff) * 2;
        fn_82CA1B48(param_1,lVar6 + param_2,lVar10 + param_3,lVar10 + param_4,lVar8 - lVar5,
                      param_5,uStack0000003c,uStack00000044);
        fn_82CA1B48(param_1,(ulonglong)uVar1 + param_2,(ulonglong)uVar2 + param_3,
                      (ulonglong)uVar2 + param_4,lVar8,uStack0000004c,in_stack_00000054,
                      in_stack_0000005c);
        lVar6 = (uVar13 & 0xfffffff) << 4;
        fn_82CA1D38(param_1,param_2 + 8,param_3 + 8,param_4 + 8,
                      ((ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff) * 2 + -1,lVar6,
                      in_stack_00000064,in_stack_0000006c);
        fn_82CA1D38(param_1,param_2 + 4,param_3 + 4,param_4 + 4,*(int *)(param_1 + 0x88) << 1,
                      lVar6,in_stack_0000007c,in_stack_00000084);
        uVar4 = *(uint *)(param_1 + 0xcc);
        uVar7 = (longlong)*(int *)(param_1 + 0x88) * (longlong)iVar14;
        uVar3 = *(uint *)(param_1 + 0xd0);
        lVar6 = ((longlong)(int)uVar3 * (longlong)iVar14 & 0x1fffffffU) * 8;
        param_2 = ((longlong)(int)uVar4 * (longlong)iVar14 & 0xfffffffU) * 0x10 + param_2;
        param_3 = lVar6 + param_3;
        param_4 = lVar6 + param_4;
        uVar9 = (uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x7fffffff) * 2 + uVar9;
        uVar12 = uVar11;
        if (((uVar11 & 0xffffffff) < (ulonglong)in_stack_000000a4) &&
           (uVar12 = uVar11 + 1, (uVar12 & 0xffffffff) < (ulonglong)in_stack_000000a4)) {
          lVar6 = (uVar12 & 0x3fffffff) << 2;
          do {
            if (*(int *)((int)lVar6 + *(int *)(param_1 + 0x55d0)) != 0) break;
            uVar12 = uVar12 + 1;
            lVar6 = lVar6 + 4;
          } while ((uVar12 & 0xffffffff) < (ulonglong)in_stack_000000a4);
        }
        uVar13 = uVar12 - uVar11;
        if (uVar13 == 0) {
          return;
        }
        param_7 = (ulonglong)uStack00000044;
        param_6 = (ulonglong)uStack0000003c;
        param_8 = (ulonglong)uStack0000004c;
        uVar7 = uVar11;
        uVar11 = uVar12;
      } while( true );
    }
  }
  return;
}


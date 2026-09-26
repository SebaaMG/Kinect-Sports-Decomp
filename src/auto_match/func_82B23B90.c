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
extern int fn_82ABDD90();
extern int fn_82AD2020();
extern int fn_82B18A70();
extern int fn_82B1F1B0();
extern int fn_82B22850();
extern int fn_82B8F1B0();
extern int fn_82B8F328();


void fn_82B23B90(int param_1,int param_2,char param_3,char param_4,int param_5,undefined4 *param_6
                  ,undefined4 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = (int)uVar10;
  fn_82B18A70(param_1,uVar10);
  if (param_4 == '\0') {
    for (uVar1 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) +
                          0x1c); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar1 + 8) >> 0x1a & 1) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) & 0xfbffffff;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (param_3 != '\0') {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
    iVar7 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar7 + 1;
    *(int *)(param_1 + 0x20) = iVar7;
  }
  fn_82B1F1B0(param_1,param_5,uVar10);
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  fn_82B22850(param_1,param_5,uVar10,1);
  uVar2 = *(uint *)(param_5 + 4);
  do {
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      if (param_7 != (undefined4 *)0x0) {
        for (iVar7 = *(int *)(param_2 + 0x34); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x34)) {
          if ((ulonglong)*(uint *)(iVar7 + 0x2c) == (uVar10 & 0xffffffff)) {
            param_2 = iVar7;
          }
        }
        *param_7 = *(undefined4 *)(param_2 + 0x50);
      }
      *param_6 = (int)uVar10;
      return;
    }
    if ((*(int *)(uVar2 + 8) == 0) &&
       ((uVar3 = *(uint *)(uVar2 + 0x50),
        uVar3 != (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) &&
        (iVar7 = *(int *)(uVar3 + 0x34), iVar7 != 0)))) {
      do {
        if ((ulonglong)*(uint *)(iVar7 + 0x2c) == (uVar10 & 0xffffffff)) break;
        iVar7 = *(int *)(iVar7 + 0x34);
      } while (iVar7 != 0);
      if (iVar7 != 0) {
        iVar4 = *(int *)(iVar7 + 0x50);
        for (puVar9 = *(uint **)(iVar4 + 0xc); puVar9 != (uint *)0x0; puVar9 = (uint *)puVar9[2]) {
          uVar5 = *puVar9;
          if (((((ulonglong)*(uint *)(uVar5 + 0x2c) != (uVar10 & 0xffffffff)) &&
               (uVar6 = (ulonglong)*(uint *)(uVar5 + 0x30) & 0x7ffff, uVar6 < uVar1)) &&
              ((*(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(iVar7 + 0x28)) &
               1 << ((uint)uVar6 & 0x1f)) == 0)) &&
             ((*(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(uVar3 + 0x28)) &
              1 << ((uint)uVar6 & 0x1f)) != 0)) {
            fn_82B8F1B0(iVar4,uVar5,param_1);
            iVar7 = fn_82AD2020(param_1,iVar4);
            if (iVar7 != 0) {
              uVar3 = *(uint *)(iVar7 + 8);
              iVar8 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
              puVar9 = (uint *)(iVar8 + iVar7 + -0x10);
              if (*puVar9 == uVar5) {
                *puVar9 = uVar2;
              }
            }
            break;
          }
        }
        fn_82B8F328(iVar4,uVar2,param_1);
      }
    }
    uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 4);
  } while( true );
}


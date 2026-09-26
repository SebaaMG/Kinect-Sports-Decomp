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
extern unsigned int *auStack_68;
extern int fn_82E39C50();
extern int fn_82E579E0();
extern int fn_82EE5CC8();
extern int fn_82EE5F60();
extern int fn_82F68CC0();
extern unsigned int uStack_70;


longlong fn_82E581D0(int *param_1,int *param_2,uint *param_3,undefined8 param_4,undefined8 param_5
                      ,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uStack_70;
  byte *pbStack_6c;
  undefined4 auStack_68 [2];
  byte abStack_60 [96];
  
  if (param_1[3] == 0) {
    lVar10 = -0x3ff2c94a;
  }
  else if ((param_2 == (int *)0x0) || (param_3 == (uint *)0x0)) {
    lVar10 = -0x7ff8ffa9;
  }
  else {
    *param_3 = 0;
    uStack_70 = 0;
    auStack_68[0] = 0;
    lVar10 = (**(code **)(*param_2 + 0x14))(param_2,auStack_68,&uStack_70);
    if (-1 < (int)lVar10) {
      uVar9 = param_1[0x10];
      if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
        if (0x17 < uVar9) {
          return -0x3ff2c566;
        }
        if (uStack_70 < 0x18 - uVar9) {
          lVar10 = fn_82EE5CC8(param_1 + 10,param_2,0);
          if ((int)lVar10 < 0) {
            return lVar10;
          }
          *param_3 = uStack_70;
          return 0x400d3a98;
        }
        if ((uVar9 != 0) &&
           (lVar10 = fn_82EE5F60(param_1 + 10,abStack_60,uVar9), (int)lVar10 < 0)) {
          return lVar10;
        }
        fn_82F68CC0(abStack_60 + uVar9,auStack_68[0],0x18 - uVar9);
        pbStack_6c = abStack_60;
        fn_82E39C50(param_1 + 4,&pbStack_6c);
        bVar1 = pbStack_6c[3];
        bVar3 = pbStack_6c[2];
        bVar5 = pbStack_6c[1];
        bVar7 = *pbStack_6c;
        bVar2 = pbStack_6c[7];
        bVar4 = pbStack_6c[6];
        bVar6 = pbStack_6c[5];
        bVar8 = pbStack_6c[4];
        *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
        *(ulonglong *)(param_1 + 8) =
             ((ulonglong)bVar2 << 0x18 | (ulonglong)bVar4 << 0x10 | (ulonglong)bVar6 << 8 |
             (ulonglong)bVar8) << 0x20 |
             (ulonglong)bVar1 << 0x18 | (ulonglong)bVar3 << 0x10 | (ulonglong)bVar5 << 8 |
             (ulonglong)bVar7;
      }
      uVar11 = (**(code **)(*param_1 + 0x2c))(param_1);
      uVar12 = (ulonglong)uStack_70;
      uVar13 = uVar11 - uVar9 & 0xffffffff;
      if (uVar12 < uVar11 - uVar9) {
        uVar13 = uVar12;
      }
      lVar10 = fn_82EE5CC8(param_1 + 10,param_2,0,uVar13,param_5,param_6,uVar12);
      if (-1 < (int)lVar10) {
        if ((uint)param_1[0x10] < uVar11) {
          *param_3 = (uint)uVar13;
          lVar10 = 0x400d3a98;
        }
        else {
          lVar10 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
          *param_3 = *param_3 - uVar9;
          if (lVar10 == 0) {
            *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
            fn_82E579E0(param_1 + 10);
          }
        }
      }
    }
  }
  return lVar10;
}


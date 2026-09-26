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
extern unsigned int *auStack_30;
extern int fn_82A2DDC0();


undefined8 fn_82A2EEB0(int param_1,ulonglong param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar12;
  uint auStack_30 [12];
  uint uVar11;
  
  uVar2 = fn_82A2DDC0(param_1,param_2,0,param_3,auStack_30);
  if (-1 < (int)uVar2) {
    uVar8 = *(uint *)(param_1 + 0x9c) - param_2;
    if (0xaa < (uVar8 & 0xffffffff)) {
      uVar8 = 0xaa;
    }
    uVar8 = uVar8 + param_2;
    uVar6 = (ulonglong)*param_4;
    uVar10 = 0xffffffffffffffff;
    uVar11 = 0xffffffff;
    puVar9 = (uint *)param_4[3];
    uVar7 = param_4[4];
    uVar3 = 0xffffffffffffffff;
    iVar4 = *(int *)(param_1 + 0xa0);
    if ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) {
      puVar5 = (uint *)(auStack_30[0] + 0x14);
      do {
        uVar11 = (uint)param_2;
        if ((*puVar5 & 0xc0000000) == 0) {
          if ((puVar9 != (uint *)0x0) &&
             (puVar9[5] = puVar9[5] & 0xff000000 | uVar11 & 0xffffff, uVar7 != 0)) {
            uVar12 = uVar7 - *(int *)(param_1 + 0x34);
            uVar7 = 0;
            iVar1 = (((int)uVar12 >> 0xc) + (uint)((int)uVar12 < 0 && (uVar12 & 0xfff) != 0)) * 8 +
                    *(int *)(param_1 + 0x30);
            *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
            param_4[4] = 0;
          }
          *puVar5 = *puVar5 | 0xc0000000;
          if ((param_2 & 0xffffffff) < (uVar3 & 0xffffffff)) {
            uVar3 = param_2;
          }
          uVar6 = uVar6 - 1;
          puVar9 = puVar5 + -5;
          iVar4 = iVar4 + -1;
          uVar10 = param_2;
          if (uVar6 == 0) break;
        }
        uVar11 = (uint)uVar10;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 6;
      } while ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *param_4 = (uint)uVar6;
    *(int *)(param_1 + 0xa0) = iVar4;
    if ((uVar3 & 0xffffffff) < (ulonglong)param_4[1]) {
      param_4[1] = (uint)uVar3;
    }
    param_4[2] = uVar11;
    uVar2 = 0;
    param_4[3] = (uint)puVar9;
    param_4[4] = auStack_30[0];
  }
  return uVar2;
}


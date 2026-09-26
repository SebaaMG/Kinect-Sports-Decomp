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
extern int fn_82A29A38();
extern int fn_82AAC8C0();
extern int fn_82AAD090();


void fn_82AAF4B0(int *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 *apuStack_60 [24];
  
  if (0xffff0103 < param_2) {
    fn_82A29A38();
  }
  iVar2 = *param_1;
  puVar3 = (undefined4 *)*param_5;
  uVar6 = *(uint *)(iVar2 + 4);
  uVar4 = *(undefined4 *)(iVar2 + 8);
  uVar5 = uVar6 & 0x7ff;
  uVar1 = *(ushort *)(iVar2 + 0xe);
  uVar8 = ((ulonglong)(uVar6 >> 0x14) & 0x700 | (ulonglong)uVar6 & 0x1800) >> 8;
  lVar7 = (ulonglong)uVar1 - 0x49;
  lVar7 = lVar7 - (((ulonglong)uVar1 - 0x4a) + (ulonglong)(lVar7 == 0));
  if (lVar7 == 0) {
    uVar1 = *(ushort *)(iVar2 + 0x1a);
  }
  if (uVar8 != 3) {
    fn_82A29A38();
  }
  uVar6 = fn_82AAC8C0(uVar8,((int)lVar7 == 0) + 1 + uVar5,param_4,apuStack_60);
  *puVar3 = 0x22;
  puVar3[1] = ((uint)apuStack_60[0] & 0x3f) << 0x10 | 0x400000 | uVar6 & 0xffff;
  iVar9 = (-(uint)(lVar7 != 0) & 3) + 1;
  puVar3[2] = iVar9;
  puVar3[3] = uVar5 | 0x110000;
  apuStack_60[0] = puVar3 + 4;
  fn_82AAD090(uVar4,0,0,param_4,apuStack_60);
  if ((uint)LZCOUNT(uVar1 - 0x4d) >> 5 != 0) {
    *apuStack_60[0] = 0x47;
    apuStack_60[0][1] = 0x44000e;
    apuStack_60[0][2] = iVar9;
    apuStack_60[0][3] = uVar5 | 0x510000;
    apuStack_60[0][4] = 0x3333;
    apuStack_60[0] = apuStack_60[0] + 5;
  }
  *param_5 = apuStack_60[0];
  *param_1 = iVar2 + 0xc;
  return;
}


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
extern int fn_82AACF70();
extern int fn_82AAD090();


void fn_82AAF9C8(int *param_1,int param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *apuStack_70 [28];
  
  if (*(int *)(param_4 + 4) == 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)(*(int *)(param_4 + 4) == 2);
  }
  if ((param_2 != -0xfefe) && (param_2 != -0xfefd)) {
    fn_82A29A38();
  }
  iVar2 = *param_1;
  puVar3 = (undefined4 *)*param_5;
  sVar1 = *(short *)(iVar2 + 2);
  uVar4 = *(uint *)(iVar2 + 4);
  uVar11 = (ulonglong)uVar4;
  uVar5 = *(uint *)(iVar2 + 8);
  uVar10 = ((ulonglong)(uVar4 >> 0x14) & 0x700 | uVar11 & 0x1800) >> 8;
  if (uVar10 != 3) {
    fn_82A29A38();
  }
  *puVar3 = 0x22;
  puVar7 = puVar3 + 1;
  apuStack_70[0] = puVar7;
  if (sVar1 == 0x55) {
    fn_82AACF70(uVar11,param_4,apuStack_70);
    puVar9 = apuStack_70[0];
    puVar6 = apuStack_70[0];
  }
  else {
    puVar6 = (uint *)fn_82AAC8C0(uVar10,uVar4 & 0x7ff,param_4,apuStack_70);
    puVar9 = apuStack_70[0];
    if (apuStack_70[0] != (uint *)0x4) {
      fn_82A29A38();
    }
    *puVar7 = ((uint)puVar9 & 0x3f) << 0x10 | 0x400000 | (uint)puVar6 & 0xffff;
    puVar3[2] = 0x29;
    apuStack_70[0] = puVar3 + 3;
  }
  if ((uVar5 >> 0x14 & 0x700 | uVar5 & 0x1800) != 0x300) {
    fn_82A29A38();
  }
  fn_82AAD090(uVar5,0,0,param_4,apuStack_70);
  *apuStack_70[0] = uVar4 & 0x7ff | 0x110000;
  puVar7 = apuStack_70[0] + 1;
  if (sVar1 == 0x53) {
    apuStack_70[0] = apuStack_70[0] + 2;
    *puVar7 = (uVar8 << 8 | uVar4 & 0xff) << 0x10 | 0x5d;
    fn_82AACF70(uVar11,param_4,apuStack_70);
    *apuStack_70[0] = ((uint)puVar9 & 0x3f) << 0x10 | (uint)puVar6 & 0xffff;
    puVar7 = apuStack_70[0] + 1;
  }
  *param_5 = puVar7;
  *param_1 = iVar2 + 0xc;
  return;
}


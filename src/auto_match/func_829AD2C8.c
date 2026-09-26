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
extern int fn_829ACEA8();
extern int fn_829AD1B8();


undefined8 fn_829AD2C8(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  byte abStack_50 [80];
  
  puVar2 = (undefined4 *)param_1[6];
  uVar5 = (ulonglong)(uint)puVar2[1];
  pbVar6 = (byte *)*puVar2;
  if (uVar5 == 0) {
    iVar4 = (*(code *)puVar2[3])();
    if (iVar4 != 0) {
      pbVar6 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
      goto LAB_829ad314;
    }
LAB_829ad300:
    uVar3 = 0;
  }
  else {
LAB_829ad314:
    bVar1 = *pbVar6;
    uVar5 = uVar5 - 1;
    pbVar6 = pbVar6 + 1;
    if (uVar5 == 0) {
      iVar4 = (*(code *)puVar2[3])(param_1);
      if (iVar4 == 0) goto LAB_829ad300;
      pbVar6 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
    }
    pbVar12 = pbVar6 + 1;
    uVar5 = uVar5 - 1;
    uVar9 = (undefined4)uVar5;
    uVar7 = ((ulonglong)*pbVar6 + (ulonglong)bVar1 * 0x100) - 2;
    if ((int)uVar7 < 0xe) {
      uVar8 = (((uVar7 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar7 == 0) & uVar7;
    }
    else {
      uVar8 = 0xe;
    }
    uVar10 = 0;
    if ((uVar8 & 0xffffffff) != 0) {
      do {
        if ((uVar5 & 0xffffffff) == 0) {
          iVar4 = (*(code *)puVar2[3])(param_1);
          if (iVar4 == 0) goto LAB_829ad300;
          pbVar12 = (byte *)*puVar2;
          uVar5 = (ulonglong)(uint)puVar2[1];
        }
        bVar1 = *pbVar12;
        uVar5 = uVar5 - 1;
        uVar9 = (undefined4)uVar5;
        pbVar12 = pbVar12 + 1;
        abStack_50[(int)uVar10] = bVar1;
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    lVar11 = uVar7 - uVar8;
    if (param_1[0x69] == 0xe0) {
      fn_829ACEA8(param_1,abStack_50,uVar8,lVar11);
    }
    else if (param_1[0x69] == 0xee) {
      fn_829AD1B8(param_1,abStack_50,uVar8,lVar11);
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x44;
      *(int *)(*param_1 + 0x18) = param_1[0x69];
      (**(code **)*param_1)();
    }
    *puVar2 = pbVar12;
    puVar2[1] = uVar9;
    if (0 < (int)lVar11) {
      (**(code **)(param_1[6] + 0x10))(param_1,lVar11);
    }
    uVar3 = 1;
  }
  return uVar3;
}


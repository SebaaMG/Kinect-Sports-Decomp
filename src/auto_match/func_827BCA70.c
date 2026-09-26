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
extern int fn_827BC6B8();
extern int fn_827BC960();


undefined8 fn_827BCA70(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte abStack_50 [80];
  
  puVar2 = (undefined4 *)param_1[6];
  uVar5 = (ulonglong)(uint)puVar2[1];
  pbVar6 = (byte *)*puVar2;
  if (uVar5 == 0) {
    cVar4 = (*(code *)puVar2[3])();
    if (cVar4 != '\0') {
      pbVar6 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
      goto LAB_827bcab8;
    }
LAB_827bcaa8:
    uVar3 = 0;
  }
  else {
LAB_827bcab8:
    bVar1 = *pbVar6;
    uVar5 = uVar5 - 1;
    pbVar6 = pbVar6 + 1;
    if (uVar5 == 0) {
      cVar4 = (*(code *)puVar2[3])(param_1);
      if (cVar4 == '\0') goto LAB_827bcaa8;
      pbVar6 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
    }
    pbVar8 = pbVar6 + 1;
    uVar5 = uVar5 - 1;
    uVar7 = (undefined4)uVar5;
    uVar11 = ((ulonglong)*pbVar6 + (ulonglong)bVar1 * 0x100) - 2;
    if ((int)uVar11 < 0xe) {
      uVar10 = (((uVar11 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar11 == 0) & uVar11;
    }
    else {
      uVar10 = 0xe;
    }
    uVar9 = 0;
    if ((uVar10 & 0xffffffff) != 0) {
      do {
        if ((uVar5 & 0xffffffff) == 0) {
          cVar4 = (*(code *)puVar2[3])(param_1);
          if (cVar4 == '\0') goto LAB_827bcaa8;
          pbVar8 = (byte *)*puVar2;
          uVar5 = (ulonglong)(uint)puVar2[1];
        }
        bVar1 = *pbVar8;
        uVar5 = uVar5 - 1;
        uVar7 = (undefined4)uVar5;
        pbVar8 = pbVar8 + 1;
        abStack_50[(int)uVar9] = bVar1;
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    lVar12 = uVar11 - uVar10;
    if (param_1[0x5f] == 0xe0) {
      fn_827BC6B8(param_1,abStack_50,uVar10,lVar12);
    }
    else if (param_1[0x5f] == 0xee) {
      fn_827BC960(param_1,abStack_50,uVar10,lVar12);
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x44;
      *(int *)(*param_1 + 0x18) = param_1[0x5f];
      (**(code **)*param_1)();
    }
    *puVar2 = pbVar8;
    puVar2[1] = uVar7;
    if (0 < (int)lVar12) {
      (**(code **)(param_1[6] + 0x10))(param_1,lVar12);
    }
    uVar3 = 1;
  }
  return uVar3;
}


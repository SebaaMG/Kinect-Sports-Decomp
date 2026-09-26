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


undefined8 fn_827BC550(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  
  puVar2 = (undefined4 *)param_1[6];
  uVar5 = (ulonglong)(uint)puVar2[1];
  pbVar6 = (byte *)*puVar2;
  if (uVar5 == 0) {
    cVar4 = (*(code *)puVar2[3])();
    if (cVar4 != '\0') {
      pbVar6 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
      goto LAB_827bc598;
    }
LAB_827bc588:
    uVar3 = 0;
  }
  else {
LAB_827bc598:
    bVar1 = *pbVar6;
    uVar5 = uVar5 - 1;
    pbVar6 = pbVar6 + 1;
    if (uVar5 == 0) {
      cVar4 = (*(code *)puVar2[3])(param_1);
      if (cVar4 == '\0') goto LAB_827bc588;
      pbVar6 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
    }
    pbVar8 = pbVar6 + 1;
    uVar5 = uVar5 - 1;
    if ((uint)*pbVar6 + (uint)bVar1 * 0x100 != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    if ((uVar5 & 0xffffffff) == 0) {
      cVar4 = (*(code *)puVar2[3])(param_1);
      if (cVar4 == '\0') goto LAB_827bc588;
      pbVar8 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
    }
    bVar1 = *pbVar8;
    uVar5 = uVar5 - 1;
    pbVar8 = pbVar8 + 1;
    if (uVar5 == 0) {
      cVar4 = (*(code *)puVar2[3])(param_1);
      if (cVar4 == '\0') goto LAB_827bc588;
      pbVar8 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
    }
    iVar7 = (uint)*pbVar8 + (uint)bVar1 * 0x100;
    *(undefined4 *)(*param_1 + 0x14) = 0x52;
    *(int *)(*param_1 + 0x18) = iVar7;
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x3f] = iVar7;
    *puVar2 = pbVar8 + 1;
    uVar3 = 1;
    puVar2[1] = (int)uVar5 + -1;
  }
  return uVar3;
}


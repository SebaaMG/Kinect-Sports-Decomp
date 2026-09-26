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


undefined8 fn_827BCEC0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  char cVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  int iVar9;
  
  puVar3 = (undefined4 *)param_1[6];
  uVar6 = (ulonglong)(uint)puVar3[1];
  pbVar7 = (byte *)*puVar3;
  if (uVar6 == 0) {
    cVar5 = (*(code *)puVar3[3])();
    if (cVar5 != '\0') {
      pbVar7 = (byte *)*puVar3;
      uVar6 = (ulonglong)(uint)puVar3[1];
      goto LAB_827bcf08;
    }
LAB_827bcef8:
    uVar4 = 0;
  }
  else {
LAB_827bcf08:
    bVar1 = *pbVar7;
    uVar6 = uVar6 - 1;
    pbVar7 = pbVar7 + 1;
    if (uVar6 == 0) {
      cVar5 = (*(code *)puVar3[3])(param_1);
      if (cVar5 == '\0') goto LAB_827bcef8;
      pbVar7 = (byte *)*puVar3;
      uVar6 = (ulonglong)(uint)puVar3[1];
    }
    bVar2 = *pbVar7;
    *(undefined4 *)(*param_1 + 0x14) = 0x5b;
    lVar8 = (ulonglong)bVar2 + (ulonglong)bVar1 * 0x100 + -2;
    *(int *)(*param_1 + 0x18) = param_1[0x5f];
    iVar9 = (int)lVar8;
    *(int *)(*param_1 + 0x1c) = iVar9;
    (**(code **)(*param_1 + 4))(param_1,1);
    *puVar3 = pbVar7 + 1;
    puVar3[1] = (int)uVar6 + -1;
    if (0 < iVar9) {
      (**(code **)(param_1[6] + 0x10))(param_1,lVar8);
    }
    uVar4 = 1;
  }
  return uVar4;
}


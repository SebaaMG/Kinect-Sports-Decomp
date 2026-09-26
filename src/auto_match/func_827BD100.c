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


undefined8 fn_827BD100(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  
  puVar2 = (undefined4 *)param_1[6];
  uVar5 = (ulonglong)(uint)puVar2[1];
  pbVar6 = (byte *)*puVar2;
  if (uVar5 == 0) {
    cVar4 = (*(code *)puVar2[3])();
    if (cVar4 != '\0') {
      pbVar6 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
      goto LAB_827bd148;
    }
LAB_827bd138:
    uVar3 = 0;
  }
  else {
LAB_827bd148:
    bVar1 = *pbVar6;
    uVar5 = uVar5 - 1;
    pbVar6 = pbVar6 + 1;
    if (uVar5 == 0) {
      cVar4 = (*(code *)puVar2[3])(param_1);
      if (cVar4 == '\0') goto LAB_827bd138;
      pbVar6 = (byte *)*puVar2;
      uVar5 = (ulonglong)(uint)puVar2[1];
    }
    uVar7 = (uint)*pbVar6;
    if ((bVar1 != 0xff) || (uVar7 != 0xd8)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x35;
      *(uint *)(*param_1 + 0x18) = (uint)bVar1;
      *(uint *)(*param_1 + 0x1c) = uVar7;
      (**(code **)*param_1)(param_1);
    }
    param_1[0x5f] = uVar7;
    uVar3 = 1;
    *puVar2 = pbVar6 + 1;
    puVar2[1] = (int)uVar5 + -1;
  }
  return uVar3;
}


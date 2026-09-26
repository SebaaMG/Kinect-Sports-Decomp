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


undefined8 fn_827C3A38(undefined4 *param_1,ulonglong param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  iVar6 = (int)param_2;
  piVar2 = (int *)param_1[4];
  pbVar8 = (byte *)*param_1;
  iVar7 = param_1[1];
  if (piVar2[0x5f] == 0) {
    for (; iVar6 = (int)param_2, param_3 < 0x19; param_3 = param_3 + 8) {
      if (iVar7 == 0) {
        cVar3 = (**(code **)(piVar2[6] + 0xc))(piVar2);
        if (cVar3 == '\0') {
          return 0;
        }
        pbVar8 = *(byte **)piVar2[6];
        iVar7 = ((undefined4 *)piVar2[6])[1];
      }
      bVar1 = *pbVar8;
      uVar4 = (ulonglong)bVar1;
      iVar7 = iVar7 + -1;
      pbVar8 = pbVar8 + 1;
      if (bVar1 == 0xff) {
        do {
          if (iVar7 == 0) {
            cVar3 = (**(code **)(piVar2[6] + 0xc))(piVar2);
            if (cVar3 == '\0') {
              return 0;
            }
            pbVar8 = *(byte **)piVar2[6];
            iVar7 = ((undefined4 *)piVar2[6])[1];
          }
          bVar1 = *pbVar8;
          iVar7 = iVar7 + -1;
          pbVar8 = pbVar8 + 1;
        } while (bVar1 == 0xff);
        if (bVar1 != 0) {
          piVar2[0x5f] = (uint)bVar1;
          goto LAB_827c3b28;
        }
        uVar4 = 0xff;
      }
      param_2 = (param_2 & 0xffffff) << 8 | uVar4;
    }
  }
  else {
LAB_827c3b28:
    if (param_3 < param_4) {
      if (*(char *)(piVar2[0x66] + 8) == '\0') {
        *(undefined4 *)(*piVar2 + 0x14) = 0x75;
        (**(code **)(*piVar2 + 4))(piVar2,0xffffffffffffffff);
        *(undefined1 *)(piVar2[0x66] + 8) = 1;
      }
      uVar5 = 0x19 - param_3;
      param_3 = 0x19;
      iVar6 = iVar6 << (uVar5 & 0x3f);
    }
  }
  *param_1 = pbVar8;
  param_1[1] = iVar7;
  param_1[2] = iVar6;
  param_1[3] = param_3;
  return 1;
}


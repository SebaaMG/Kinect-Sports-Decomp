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


undefined8 fn_829BCB40(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  piVar2 = (int *)param_1[4];
  pbVar5 = (byte *)*param_1;
  iVar3 = param_1[1];
  if (piVar2[0x69] == 0) {
    for (; param_3 < 0x19; param_3 = param_3 + 8) {
      if (iVar3 == 0) {
        iVar3 = (**(code **)(piVar2[6] + 0xc))(piVar2);
        if (iVar3 == 0) {
          return 0;
        }
        pbVar5 = *(byte **)piVar2[6];
        iVar3 = ((undefined4 *)piVar2[6])[1];
      }
      bVar1 = *pbVar5;
      uVar4 = (uint)bVar1;
      iVar3 = iVar3 + -1;
      pbVar5 = pbVar5 + 1;
      if (bVar1 == 0xff) {
        do {
          if (iVar3 == 0) {
            iVar3 = (**(code **)(piVar2[6] + 0xc))(piVar2);
            if (iVar3 == 0) {
              return 0;
            }
            pbVar5 = *(byte **)piVar2[6];
            iVar3 = ((undefined4 *)piVar2[6])[1];
          }
          bVar1 = *pbVar5;
          iVar3 = iVar3 + -1;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 == 0xff);
        if (bVar1 != 0) {
          piVar2[0x69] = (uint)bVar1;
          goto LAB_829bcc38;
        }
        uVar4 = 0xff;
      }
      param_2 = param_2 << 8 | uVar4;
    }
  }
  else {
LAB_829bcc38:
    if (param_3 < param_4) {
      if (*(int *)(piVar2[0x70] + 8) == 0) {
        *(undefined4 *)(*piVar2 + 0x14) = 0x75;
        (**(code **)(*piVar2 + 4))(piVar2,0xffffffffffffffff);
        *(undefined4 *)(piVar2[0x70] + 8) = 1;
      }
      uVar4 = 0x19 - param_3;
      param_3 = 0x19;
      param_2 = param_2 << (uVar4 & 0x3f);
    }
  }
  *param_1 = pbVar5;
  param_1[1] = iVar3;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return 1;
}


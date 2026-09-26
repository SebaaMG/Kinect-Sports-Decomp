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
extern int fn_8251FBA8();


byte * fn_82484618(int param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar2 = fn_8251FBA8(*(undefined4 *)(param_1 + 0x18dc));
  pbVar3 = *(byte **)(param_1 + 0x18dc);
  uVar8 = 0;
  uVar2 = (uVar2 & 0xffffffff) / 100;
  if ((int)uVar2 != 0) {
    pbVar4 = pbVar3 + 0x30;
    do {
      bVar6 = *(byte *)(param_1 + 0x34);
      bVar1 = *pbVar3;
      if (bVar6 == bVar1) {
        pbVar5 = (byte *)(param_1 + 0x34);
        do {
          pbVar5 = pbVar5 + 1;
          if (bVar6 == 0) {
            iVar7 = 0;
            goto LAB_82484688;
          }
          bVar6 = *pbVar5;
          bVar1 = (pbVar4 + (-100 - param_1))[(int)pbVar5];
        } while (bVar6 == bVar1);
      }
      iVar7 = (uint)bVar6 - (uint)bVar1;
LAB_82484688:
      if (iVar7 == 0) {
        pbVar5 = (byte *)(param_1 + 0x234);
        bVar1 = *pbVar4;
        bVar6 = *pbVar5;
        if (bVar6 == bVar1) {
          iVar7 = (int)pbVar4 - (int)pbVar5;
          do {
            pbVar5 = pbVar5 + 1;
            if (bVar6 == 0) {
              iVar7 = 0;
              goto LAB_824846cc;
            }
            bVar6 = *pbVar5;
            bVar1 = pbVar5[iVar7];
          } while (bVar6 == bVar1);
        }
        iVar7 = (uint)bVar6 - (uint)bVar1;
LAB_824846cc:
        if (iVar7 == 0) {
          pbVar5 = (byte *)(param_1 + 0x334);
          bVar1 = pbVar4[0x18];
          bVar6 = *pbVar5;
          if (bVar6 == bVar1) {
            iVar7 = 0x18 - (int)pbVar5;
            do {
              pbVar5 = pbVar5 + 1;
              if (bVar6 == 0) {
                iVar7 = 0;
                goto LAB_82484718;
              }
              bVar6 = *pbVar5;
              bVar1 = pbVar5[(int)(pbVar4 + iVar7)];
            } while (bVar6 == bVar1);
          }
          iVar7 = (uint)bVar6 - (uint)bVar1;
LAB_82484718:
          if (iVar7 == 0) {
            return pbVar3 + 0x60;
          }
        }
      }
      uVar8 = uVar8 + 1;
      pbVar3 = pbVar3 + 100;
      pbVar4 = pbVar4 + 100;
    } while ((uVar8 & 0xffffffff) < uVar2);
  }
  return (byte *)0x0;
}


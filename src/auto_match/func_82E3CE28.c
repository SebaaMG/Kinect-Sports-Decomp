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
extern int fn_82E3BF28();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E71990();
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_82154AE8;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;


longlong fn_82E3CE28(int param_1,short *param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int aiStack_60 [2];
  undefined8 uStack_58;
  byte abStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  byte abStack_40 [64];
  
  iVar6 = param_1 + 8;
  fn_82E50CB8(iVar6);
  if ((((param_2 != (short *)0x0) && (param_3 != (byte *)0x0)) && (param_4 != (undefined4 *)0x0)) &&
     (*param_4 = 0, *param_2 == 0x14)) {
    pbVar5 = &lbl_8214C020;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar4;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != &lbl_8214C030);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      uVar7 = *(undefined8 *)(param_2 + 4);
      aiStack_60[0] = 0;
      iVar3 = fn_82E3BF28(param_1 + 0x1ac,param_3,aiStack_60,abStack_50);
      if (iVar3 == 0) {
        lVar8 = -0x3ff2b9aa;
      }
      else {
        pbVar5 = abStack_50;
        pbVar4 = (byte *)&lbl_82154AE8;
        uStack_4c = *(undefined4 *)(aiStack_60[0] + 0x20);
        uStack_48 = *(undefined4 *)(aiStack_60[0] + 0x24);
        uStack_44 = *(undefined4 *)(aiStack_60[0] + 0x28);
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar4;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar5 != abStack_40);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          uStack_58 = 0;
          lVar8 = fn_82E71990(aiStack_60[0],uVar7,*(uint *)(param_1 + 0x44) >> 1 & 1,0xff,
                                    &uStack_58,0);
          if (-1 < lVar8) {
            *param_4 = (int)uStack_58;
          }
        }
        else {
          lVar8 = -0x3ff2c945;
        }
      }
      fn_82E50F10(iVar6);
      return lVar8;
    }
  }
  fn_82E50F10(iVar6);
  return -0x7ff8ffa9;
}


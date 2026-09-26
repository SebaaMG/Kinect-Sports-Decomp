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
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;
extern unsigned int lbl_82154B08;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E3ADF0(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  
  pbVar7 = (byte *)&lbl_82154AC8;
  pbVar8 = param_3;
  do {
    bVar1 = *pbVar7;
    bVar2 = *pbVar8;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
  } while (pbVar7 != &lbl_82154AD8);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar7 = &lbl_82154AD8;
    pbVar8 = param_3;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar8;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar7 != (byte *)&lbl_82154AE8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar7 = (byte *)&lbl_82154AE8;
      pbVar8 = param_3;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar8;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar7 != (byte *)&lbl_82154AF8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        puVar6 = (undefined4 *)&lbl_8214C020;
        uVar9 = lbl_8214C020;
        goto code_r0x82e3aefc;
      }
      pbVar8 = (byte *)&lbl_82154AF8;
      do {
        bVar1 = *pbVar8;
        bVar2 = *param_3;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar8 = pbVar8 + 1;
        param_3 = param_3 + 1;
      } while (pbVar8 != &lbl_82154B08);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        puVar6 = (undefined4 *)&lbl_8214C030;
        uVar9 = lbl_8214C030;
        goto code_r0x82e3aefc;
      }
    }
  }
  puVar6 = &lbl_8202E618;
  uVar9 = lbl_8202E618;
code_r0x82e3aefc:
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  *param_1 = uVar9;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  return;
}


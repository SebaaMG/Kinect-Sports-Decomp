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
extern unsigned int lbl_8202F1FC;
extern unsigned int lbl_8214C590;
extern unsigned int lbl_8214C5A0;
extern unsigned int lbl_8214C6F0;
extern unsigned int lbl_8214C700;
extern unsigned int lbl_821537A8;
extern unsigned int lbl_821537B8;


longlong fn_82E2C980(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  byte abStack_40 [16];
  byte abStack_30 [16];
  byte abStack_20 [32];
  
  if (param_3 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  lVar5 = 0;
  pbVar3 = &lbl_8214C590;
  *param_3 = 0;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != param_2 + 0x10);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar3 = &lbl_8214C5A0;
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar3;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != param_2 + 0x10);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar3 = &lbl_8202F1FC;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar2 = *pbVar3;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar4 = pbVar4 + 1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar4 != param_2 + 0x10);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        pbVar3 = &lbl_8214C700;
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar2 = *pbVar3;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar4 = pbVar4 + 1;
          pbVar3 = pbVar3 + 1;
        } while (pbVar4 != param_2 + 0x10);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          pbVar3 = &lbl_8214C6F0;
          pbVar4 = param_2 + 0x10;
          do {
            bVar1 = *param_2;
            bVar2 = *pbVar3;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            param_2 = param_2 + 1;
            pbVar3 = pbVar3 + 1;
          } while (param_2 != pbVar4);
          if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) ||
             (lVar5 = (**(code **)(*param_1 + 0x84))(param_1,abStack_30), lVar5 < 0)) {
            return -0x7fffbffe;
          }
          pbVar3 = abStack_30;
          pbVar4 = &lbl_821537B8;
          do {
            bVar1 = *pbVar3;
            bVar2 = *pbVar4;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar3 = pbVar3 + 1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar3 != abStack_20);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
            return -0x7fffbffe;
          }
          *param_3 = param_1 + 1;
          goto LAB_82e2cb94;
        }
        lVar5 = (**(code **)(*param_1 + 0x84))(param_1,abStack_40);
        if (lVar5 < 0) {
          return -0x7fffbffe;
        }
        pbVar3 = abStack_40;
        pbVar4 = &lbl_821537A8;
        do {
          bVar1 = *pbVar3;
          bVar2 = *pbVar4;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar3 != abStack_30);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          return -0x7fffbffe;
        }
      }
    }
  }
  *param_3 = param_1;
LAB_82e2cb94:
  (**(code **)(*(int *)*param_3 + 4))();
  return lVar5;
}


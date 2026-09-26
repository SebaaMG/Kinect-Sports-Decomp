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
extern int fn_82E40080();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_8202E628;
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_8214C040;
extern unsigned int uStack_48;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;


longlong fn_82E40928(longlong param_1,byte *param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int *apiStack_b0 [2];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined4 uStack_48;
  
  if ((param_2 == (byte *)0x0) || (param_3 < 0x5c)) {
    lVar8 = -0x7ff8ffa9;
  }
  else {
    pbVar6 = (byte *)&lbl_8202E618;
    lVar8 = 0;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar5;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != &lbl_8202E628);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      apiStack_b0[0] = (int *)0x0;
      iVar4 = fn_82E3BF28(param_1 + 0x1ac,param_2,apiStack_b0,&uStack_a8);
      if (param_4 == iVar4) {
        if (param_4 != 0) {
          lVar8 = (**(code **)(*apiStack_b0[0] + 4))(apiStack_b0[0],*(undefined4 *)(param_2 + 0x58))
          ;
        }
      }
      else if (param_4 == 0) {
        lVar8 = -0x7fffbfff;
      }
      else {
        lVar8 = fn_82E40080(param_1,param_2,*(undefined4 *)(param_2 + 0x58));
        if (-1 < lVar8) {
          pbVar6 = &lbl_8214C020;
          pbVar5 = param_2;
          do {
            bVar1 = *pbVar6;
            bVar2 = *pbVar5;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar6 != &lbl_8214C030);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
            pbVar6 = &lbl_8214C030;
            pbVar5 = param_2;
            do {
              bVar1 = *pbVar6;
              bVar2 = *pbVar5;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar6 = pbVar6 + 1;
              pbVar5 = pbVar5 + 1;
            } while (pbVar6 != &lbl_8214C040);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
              return lVar8;
            }
          }
          apiStack_b0[0] = (int *)0x0;
          lVar9 = 0xb;
          puVar3 = &uStack_a8;
          do {
            puVar7 = puVar3;
            puVar3 = puVar7 + 1;
            *puVar3 = 0;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          *(undefined4 *)(puVar7 + 2) = 0;
          uStack_90 = *(undefined2 *)(param_2 + 0x10);
          uStack_a0 = lbl_8202E618;
          uStack_9c = lbl_8202E61C;
          uStack_98 = lbl_8202E620;
          uStack_94 = lbl_8202E624;
          uStack_48 = 1000;
          iVar4 = fn_82E3BF28(param_1 + 0x1ac,&uStack_a0,apiStack_b0,&uStack_a8);
          if (iVar4 == 0) {
            lVar8 = fn_82E40080(param_1,&uStack_a0,uStack_48);
          }
        }
      }
    }
    else {
      lVar8 = -0x7fffbfff;
    }
  }
  return lVar8;
}


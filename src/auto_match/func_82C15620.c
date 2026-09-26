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
extern int fn_82C038C8();
extern int fn_82C130C0();
extern int fn_82C14C30();
extern int fn_82C15150();
extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_820F8F18;
extern unsigned int lbl_82154BA8;
extern unsigned int lbl_82154BB8;
extern unsigned int uStack_80;


undefined8 fn_82C15620(longlong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *apbStack_90 [4];
  uint uStack_80;
  short sStack_7c;
  short sStack_7a;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  byte abStack_70 [112];
  
  apbStack_90[0] = (byte *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  if (param_1 == (longlong *)0x0) {
    uVar9 = 2;
  }
  else {
    uVar8 = param_2 - 0x18;
    if (((0x11 < (uVar8 & 0xffffffff)) &&
        (iVar3 = fn_82C038C8(param_1,*param_1,0x12,apbStack_90), iVar3 == 0x12)) &&
       (apbStack_90[0] != (byte *)0x0)) {
      puVar4 = &uStack_80;
      pbVar5 = (byte *)&lbl_82154BA8;
      uStack_80 = (((uint)apbStack_90[0][3] * 0x100 + (uint)apbStack_90[0][2]) * 0x100 +
                  (uint)apbStack_90[0][1]) * 0x100 + (uint)*apbStack_90[0];
      sStack_7c = (ushort)apbStack_90[0][5] * 0x100 + (ushort)apbStack_90[0][4];
      bStack_78 = apbStack_90[0][8];
      sStack_7a = (ushort)apbStack_90[0][7] * 0x100 + (ushort)apbStack_90[0][6];
      bStack_77 = apbStack_90[0][9];
      bStack_76 = apbStack_90[0][10];
      bStack_75 = apbStack_90[0][0xb];
      bStack_74 = apbStack_90[0][0xc];
      bStack_73 = apbStack_90[0][0xd];
      bStack_72 = apbStack_90[0][0xe];
      bStack_71 = apbStack_90[0][0xf];
      pbVar6 = apbStack_90[0] + 0x10;
      do {
        bVar1 = *pbVar5;
        bVar2 = *(byte *)puVar4;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        puVar4 = (uint *)((int)puVar4 + 1);
      } while (pbVar5 != (byte *)&lbl_82154BB8);
      if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
         (pbVar5 = apbStack_90[0] + 0x11, apbStack_90[0] = apbStack_90[0] + 0x12,
         (ulonglong)*pbVar5 * 0x100 + (ulonglong)*pbVar6 == 6)) {
        if (((0x15 < (uVar8 & 0xffffffff)) &&
            (iVar3 = fn_82C038C8(param_1,*param_1 + 0x12,4,apbStack_90), iVar3 == 4)) &&
           (apbStack_90[0] != (byte *)0x0)) {
          if ((0x17 < (((ulonglong)apbStack_90[0][3] * 0x100 + (ulonglong)apbStack_90[0][2]) * 0x100
                      + (ulonglong)apbStack_90[0][1]) * 0x100 + (ulonglong)*apbStack_90[0]) &&
             (0x16 < (uVar8 & 0xffffffff))) {
            uVar10 = 0x16;
            apbStack_90[0] = apbStack_90[0] + 4;
            do {
              uVar9 = fn_82C130C0(param_1,abStack_70,&uStack_80,uVar10);
              if ((int)uVar9 != 0) {
                return uVar9;
              }
              pbVar6 = abStack_70;
              pbVar5 = &lbl_820ED0B8;
              do {
                bVar1 = *pbVar5;
                bVar2 = *pbVar6;
                if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                pbVar5 = pbVar5 + 1;
                pbVar6 = pbVar6 + 1;
              } while (pbVar5 != &lbl_820ED0C8);
              if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                uVar11 = uStack_80 + uVar10;
                uVar7 = uVar7 + 1;
                if (((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff)) || (1 < uVar7)) {
                  uVar9 = 3;
                  break;
                }
                uVar9 = fn_82C14C30(param_1,(ulonglong)uStack_80,uVar10);
                if ((int)uVar9 != 0) {
                  uVar9 = 0;
                }
              }
              else {
                pbVar6 = abStack_70;
                pbVar5 = &lbl_820F8F08;
                do {
                  bVar1 = *pbVar5;
                  bVar2 = *pbVar6;
                  if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                  pbVar5 = pbVar5 + 1;
                  pbVar6 = pbVar6 + 1;
                } while (pbVar5 != &lbl_820F8F18);
                if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                  uVar11 = uStack_80 + uVar10;
                  if ((ulonglong)param_1[5] < (uVar11 - 0x18 & 0xffffffff)) {
                    return 1;
                  }
                  uVar9 = fn_82C15150(param_1,(ulonglong)uStack_80,param_3,uVar10);
                  if ((int)uVar9 != 0) {
                    return uVar9;
                  }
                }
                else {
                  uVar11 = uStack_80 + uVar10;
                }
              }
              uVar10 = uVar11;
            } while ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff));
          }
          *param_1 = (uVar8 & 0xffffffff) + *param_1;
          return uVar9;
        }
      }
      else {
        *param_1 = (uVar8 & 0xffffffff) + *param_1;
      }
    }
    uVar9 = 3;
  }
  return uVar9;
}


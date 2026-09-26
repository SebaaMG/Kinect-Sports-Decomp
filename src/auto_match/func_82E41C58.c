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
extern int fn_82E50BE8();
extern int fn_82E75AC8();
extern int fn_82E75CF8();
extern int fn_82E76168();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537A8;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_821537C8;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_60;


ulonglong fn_82E41C58(int param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  uint uStack_60;
  int *apiStack_5c [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_3 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  uStack_60 = 0;
  puVar4 = (undefined4 *)0x0;
  apiStack_5c[0] = (int *)0x0;
  uVar3 = (**(code **)(*param_3 + 0x88))(param_3);
  uVar6 = (ulonglong)uStack_60;
  if (-1 < (int)uStack_60) {
    uVar3 = uVar3 & 0xffff;
    if ((uVar3 == 0) || (0x7f < uVar3)) {
      uVar6 = 0xffffffffc00d36b3;
LAB_82e41eb0:
      uStack_60 = (uint)uVar6;
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0x90))(param_3,apiStack_5c);
      uStack_60 = (uint)uVar6;
      if (-1 < (longlong)uVar6) {
        if (apiStack_5c[0] == (int *)0x0) {
          uVar6 = 0xffffffffc00d36bb;
          goto LAB_82e41f04;
        }
        uStack_50 = lbl_8202E618;
        uStack_4c = lbl_8202E61C;
        uStack_48 = lbl_8202E620;
        uStack_44 = lbl_8202E624;
        uVar6 = (**(code **)(*apiStack_5c[0] + 0x84))(apiStack_5c[0],&uStack_50);
        uStack_60 = (uint)uVar6;
        if (-1 < (longlong)uVar6) {
          pbVar5 = (byte *)&uStack_50;
          pbVar7 = &lbl_821537A8;
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar5;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar7 != &lbl_821537B8);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            uVar6 = fn_82E50BE8(0x80,0,0,0,0);
            if ((uVar6 & 0xffffffff) == 0) goto LAB_82e41e74;
            puVar4 = (undefined4 *)
                     fn_82E75CF8(uVar6,param_3,param_4,*(undefined8 *)(param_1 + 0x58),param_2
                                       ,param_1,&uStack_60);
          }
          else {
            pbVar5 = (byte *)&uStack_50;
            pbVar7 = &lbl_821537B8;
            do {
              bVar1 = *pbVar7;
              bVar2 = *pbVar5;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar7 = pbVar7 + 1;
              pbVar5 = pbVar5 + 1;
            } while (pbVar7 != &lbl_821537C8);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              uVar6 = fn_82E50BE8(0x78,0,0,0,0);
              if ((uVar6 & 0xffffffff) == 0) {
LAB_82e41e74:
                puVar4 = (undefined4 *)0x0;
              }
              else {
                puVar4 = (undefined4 *)
                         fn_82E76168(uVar6,param_3,param_4,*(undefined8 *)(param_1 + 0x58),
                                           param_2,param_1,&uStack_60);
              }
            }
            else {
              uVar6 = fn_82E50BE8(0x68,0,0,0,0);
              if ((uVar6 & 0xffffffff) == 0) goto LAB_82e41e74;
              puVar4 = (undefined4 *)
                       fn_82E75AC8(uVar6,param_3,param_4,*(undefined8 *)(param_1 + 0x58),
                                         param_2,param_1,&uStack_60);
            }
          }
          if (puVar4 == (undefined4 *)0x0) {
            uVar6 = 0xffffffff8007000e;
            goto LAB_82e41eb0;
          }
          uVar6 = (ulonglong)uStack_60;
          if (-1 < (int)uStack_60) {
            *(undefined4 **)((uVar3 + 0x1b) * 4 + param_1) = puVar4;
          }
        }
      }
    }
  }
  if (apiStack_5c[0] != (int *)0x0) {
    (**(code **)(*apiStack_5c[0] + 8))();
    uVar6 = (ulonglong)uStack_60;
    apiStack_5c[0] = (int *)0x0;
  }
  if (((int)uVar6 < 0) && (puVar4 != (undefined4 *)0x0)) {
    (**(code **)*puVar4)(puVar4,1);
    uVar6 = (ulonglong)uStack_60;
  }
LAB_82e41f04:
  *(undefined4 *)(param_1 + 0x5a4) = 0;
  return uVar6;
}


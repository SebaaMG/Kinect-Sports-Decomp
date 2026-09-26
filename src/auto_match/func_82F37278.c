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
extern unsigned int *auStack_48;
extern int fn_82E5A068();
extern int fn_82E62670();
extern int fn_82E628C8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_820F8F18;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


longlong fn_82F37278(int *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piStack_50;
  int *piStack_4c;
  uint auStack_48 [2];
  longlong alStack_40 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1[0x1d] == 0) {
    return -0x3ff2c94e;
  }
  lVar3 = (**(code **)(*param_1 + 0x14))(param_1,param_1[0x1d],0);
  if (-1 < lVar3) {
    alStack_40[0] = 0;
    lVar3 = (**(code **)(*(int *)param_1[0x1d] + 0x14))((int *)param_1[0x1d],0,alStack_40);
    if (-1 < lVar3) {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + alStack_40[0];
      uStack_30 = lbl_8202E618;
      uStack_2c = lbl_8202E61C;
      uStack_28 = lbl_8202E620;
      uStack_24 = lbl_8202E624;
      (**(code **)(*(int *)param_1[0x1d] + 0xc))((int *)param_1[0x1d],&uStack_30);
      pbVar6 = &lbl_820F8F08;
      pbVar5 = (byte *)&uStack_30;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != &lbl_820F8F18);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        piStack_50 = (int *)0x0;
        iVar4 = fn_82E5A068(param_1[0x1d],&piStack_50);
        if (-1 < iVar4) {
          if (piStack_50 == (int *)0x0) goto LAB_82f37444;
          iVar4 = fn_82E62670(piStack_50,auStack_48);
          if (-1 < iVar4) {
            fn_82E628C8(piStack_50,auStack_48[0] | 0x80000000);
          }
          piStack_4c = (int *)0x0;
          lVar3 = (**(code **)*piStack_50)(piStack_50,0xffffffff82154c48,&piStack_4c);
          if ((-1 < lVar3) &&
             (lVar3 = (**(code **)(*param_1 + 0x14))(param_1,piStack_4c,0), piStack_4c != (int *)0x0
             )) {
            (**(code **)(*piStack_4c + 8))(piStack_4c);
          }
        }
        if (piStack_50 != (int *)0x0) {
          (**(code **)(*piStack_50 + 8))();
        }
      }
LAB_82f37444:
      if (-1 < (int)lVar3) goto LAB_82f37464;
    }
  }
  (**(code **)(*param_1 + 0x1c))(param_1,param_1[0x1d]);
LAB_82f37464:
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 8))();
    param_1[0x1d] = 0;
  }
  return lVar3;
}


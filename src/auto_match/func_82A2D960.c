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
extern int fn_82A2B900();
extern int fn_82A2C990();
extern int fn_82A2CE70();
extern int fn_82A2D260();
extern int fn_82A2D890();
extern unsigned int uStack_80;


longlong fn_82A2D960(int param_1,ulonglong param_2,uint param_3,byte *param_4,undefined4 *param_5,
                      undefined4 *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uStack_80;
  undefined4 *apuStack_7c [3];
  byte abStack_70 [112];
  
  lVar4 = fn_82A2D890(param_1,&uStack_80,apuStack_7c);
  if (-1 < (int)lVar4) {
    if ((param_3 == 0) || (3 < param_3)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulonglong)(*(uint *)(param_4 + 0x14) >> 0x1e) & 1;
      uVar3 = *(uint *)("XLNI_DET_MEDIA" + param_3 * 4 + 0xc);
      trapWord(6,(ulonglong)uVar3,0);
      param_2 = (longlong)(int)((param_2 & 0xffffffff) / (ulonglong)uVar3) * (longlong)(int)uVar3;
    }
    if (param_3 == 0) {
      lVar4 = *(uint *)(param_1 + 0xac) + param_2;
    }
    else {
      lVar4 = fn_82A2C990(param_1,param_2,param_3 - 1);
    }
    lVar8 = ((ulonglong)uStack_80 & 0xfffff) * 0x1000 + (ulonglong)*(uint *)(param_1 + 0x34);
    lVar4 = fn_82A2CE70(param_1,lVar8,0x1000,
                            ((lVar4 + uVar7) * 0x1000 & 0xffffffff000) +
                            *(longlong *)(param_1 + 0x20));
    if (lVar4 < 0) {
      fn_82A2D260(param_1,lVar4);
    }
    else {
      if (param_4 != (byte *)0x0) {
        XeCryptSha(lVar8,0x1000,0,0,0,0,abStack_70,0x14);
        pbVar6 = abStack_70;
        pbVar5 = param_4 + 0x14;
        do {
          bVar1 = *param_4;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          param_4 = param_4 + 1;
          pbVar6 = pbVar6 + 1;
        } while (param_4 != pbVar5);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          fn_82A2D260(param_1,0xffffffffc0000032);
          return -0x3fffffce;
        }
      }
      *param_5 = (int)lVar8;
      *param_6 = apuStack_7c[0];
      fn_82A2B900(param_1,uStack_80,1);
      *apuStack_7c[0] = (int)param_2;
      lVar4 = 0;
      *(byte *)((int)apuStack_7c[0] + 7) =
           (byte)(uVar7 << 5) | 0x80 | *(byte *)((int)apuStack_7c[0] + 7) & 0xdc | (byte)param_3 & 3
      ;
      *(undefined1 *)(apuStack_7c[0] + 1) = 1;
    }
  }
  return lVar4;
}


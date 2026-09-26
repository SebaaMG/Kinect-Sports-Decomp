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
extern unsigned int *auStack_60;
extern int fn_82E5AF48();
extern int fn_82F68CC0();
extern unsigned int lbl_82154BD8;
extern unsigned int lbl_82154BE8;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_82E5B788(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint auStack_60 [4];
  uint uStack_50;
  ushort uStack_4c;
  ushort uStack_4a;
  undefined8 uStack_48;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    do {
      lVar4 = fn_82E5AF48(param_1 + 0x8c,uVar7,auStack_60);
      pbVar8 = (byte *)(-(uint)(lVar4 != 0) & auStack_60[0]);
      pbVar6 = &lbl_82154BD8;
      pbVar5 = pbVar8;
      if (pbVar8 != (byte *)0x0) {
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != &lbl_82154BE8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          uStack_50 = (uint)pbVar8[3] << 0x18 | (uint)pbVar8[2] << 0x10 | (uint)pbVar8[1] << 8 |
                      (uint)*pbVar8;
          uStack_48 = *(undefined8 *)(pbVar8 + 8);
          uStack_4c = *(ushort *)(pbVar8 + 4) << 8 | *(ushort *)(pbVar8 + 4) >> 8;
          uStack_4a = *(ushort *)(pbVar8 + 6) << 8 | *(ushort *)(pbVar8 + 6) >> 8;
          fn_82F68CC0(*param_2,&uStack_50,0x10);
          uVar3 = *param_2;
          *param_2 = uVar3 + 0x10;
          *(ushort *)(uVar3 + 0x10) =
               *(ushort *)(pbVar8 + 0x10) << 8 | *(ushort *)(pbVar8 + 0x10) >> 8;
          uVar3 = *param_2;
          *param_2 = uVar3 + 2;
          *(uint *)(uVar3 + 2) =
               (uint)pbVar8[0x17] << 0x18 | (uint)pbVar8[0x16] << 0x10 | (uint)pbVar8[0x15] << 8 |
               (uint)pbVar8[0x14];
          uVar3 = *param_2;
          *param_2 = (uint)((ulonglong)uVar3 + 4);
          if (*(int *)(pbVar8 + 0x14) != 0) {
            fn_82F68CC0((ulonglong)uVar3 + 4,*(undefined4 *)(pbVar8 + 0x18));
            *param_2 = *param_2 + *(int *)(pbVar8 + 0x14);
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xf4));
  }
  return 0;
}


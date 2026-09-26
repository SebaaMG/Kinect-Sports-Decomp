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
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FB6710();
extern int fn_82FB6C88();
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8 fn_82FB6808(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  ushort uStack_74;
  undefined4 *puStack_70;
  
  fn_82FB6710();
  uVar5 = 0;
  if (param_2 != 0) {
    pbVar8 = (byte *)(param_3 + 0x18);
    uVar6 = uStack_74;
    uVar7 = uStack_8c;
    do {
      uStack_a0 = *(undefined4 *)(pbVar8 + -0x18);
      uStack_9c = *(undefined4 *)(pbVar8 + -0x14);
      uVar6 = uVar6 & 0xfff;
      uStack_74 = (*(short *)(pbVar8 + 0x18) << 1 | pbVar8[0x1a] & 1) << 0xc | uVar6;
      uStack_98 = *(undefined4 *)(pbVar8 + -0x10);
      uStack_94 = *(undefined4 *)(pbVar8 + -0xc);
      uStack_88 = *(undefined4 *)(pbVar8 + 4);
      uVar7 = ((*(uint *)(pbVar8 + -4) & 0x1f) << 1 | *pbVar8 & 1) << 0x1a | uVar7 & 0x3ffffff;
      uStack_84 = *(undefined4 *)(pbVar8 + 8);
      uStack_7c = *(undefined4 *)(pbVar8 + 0x10);
      iStack_90 = *(int *)(pbVar8 + -8) * 0x30;
      uStack_78 = *(undefined4 *)(pbVar8 + 0x14);
      iStack_80 = *(int *)(pbVar8 + 0xc) * 0x30;
      uStack_8c = uVar7;
      if (pbVar8[0x1b] == 0) {
        puStack_70 = (undefined4 *)0x0;
      }
      else {
        puStack_70 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x20);
        if (puStack_70 == (undefined4 *)0x0) {
          return 2;
        }
        uVar1 = puStack_70[7];
        uVar3 = (pbVar8[0x39] & 1) << 0x1e;
        puStack_70[7] = uVar3 | uVar1 & 0xbfffffff;
        puStack_70[7] = (uint)pbVar8[0x38] << 0x1f | uVar3 | uVar1 & 0x3fffffff;
        puStack_70[1] = *(undefined4 *)(pbVar8 + 0x20);
        puStack_70[2] = *(undefined4 *)(pbVar8 + 0x24);
        puStack_70[3] = *(int *)(pbVar8 + 0x28) * 0x30;
        puStack_70[4] = *(undefined4 *)(pbVar8 + 0x2c);
        puStack_70[5] = *(undefined4 *)(pbVar8 + 0x30);
        puStack_70[6] = *(int *)(pbVar8 + 0x34) * 0x30;
        *puStack_70 = *(undefined4 *)(pbVar8 + 0x1c);
      }
      uVar1 = (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0)) / 0x34;
      if (((*(uint *)(param_1 + 0xa8) <= uVar1) &&
          (cVar4 = fn_82FB6C88(param_1 + 0xa0,1), cVar4 == '\0')) ||
         (*(uint *)(param_1 + 0xa8) <= uVar1)) {
        return 2;
      }
      iVar2 = *(int *)(param_1 + 0xa4);
      *(int *)(param_1 + 0xa4) = iVar2 + 0x34;
      if (iVar2 == 0) {
        return 2;
      }
      fn_82F68CC0(iVar2,&uStack_a0,0x34);
      uVar5 = uVar5 + 1;
      pbVar8 = pbVar8 + 0x54;
    } while (uVar5 < param_2);
  }
  return 1;
}


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
extern unsigned int *auStack_50;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E64220();
extern int fn_82E64450();
extern int fn_82E644B8();
extern int fn_82E72FC0();
extern int fn_82E7E7E0();


undefined8 fn_82E64A80(int param_1,byte *param_2,undefined2 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint auStack_50 [20];
  
  fn_82E50CB8(param_1 + 0xc);
  if (*(int *)(param_1 + 0xb8) == -1) {
    uVar10 = 0xffffffff80004005;
  }
  else {
    lVar3 = fn_82E644B8(param_1 + 0x4c,*(int *)(param_1 + 0xb8),auStack_50);
    uVar9 = -(uint)(lVar3 != 0) & auStack_50[0];
    if (uVar9 == 0) {
LAB_82e64adc:
      uVar10 = 0xffffffff80004003;
    }
    else {
      uVar8 = 0;
      if (*(int *)(uVar9 + 0x6c) != 0) {
        do {
          lVar3 = fn_82E64450(uVar9 + 4,uVar8,auStack_50);
          pbVar4 = (byte *)(-(uint)(lVar3 != 0) & auStack_50[0]);
          if (pbVar4 == (byte *)0x0) goto LAB_82e64adc;
          pbVar6 = param_2;
          pbVar7 = pbVar4;
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar6;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar7 != pbVar4 + 0x10);
          if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
             (*(int *)(pbVar4 + 0x10) == *(int *)(param_2 + 0x10))) goto LAB_82e64bf8;
          uVar8 = uVar8 + 1;
        } while ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(uVar9 + 0x6c));
      }
      pbVar4 = (byte *)fn_82E50BE8(0x28,0,0,0,0);
      if (pbVar4 != (byte *)0x0) {
        *(undefined4 *)pbVar4 = *(undefined4 *)param_2;
        *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(pbVar4 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(pbVar4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(pbVar4 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        pbVar4[0x18] = 0;
        pbVar4[0x19] = 0;
        pbVar4[0x1a] = 0;
        pbVar4[0x1b] = 0;
        pbVar4[0x1c] = 0;
        pbVar4[0x1d] = 0;
        pbVar4[0x1e] = 0;
        pbVar4[0x1f] = 0;
        pbVar4[0x20] = 0;
        pbVar4[0x21] = 0;
        pbVar4[0x22] = 0;
        pbVar4[0x23] = 0;
        pbVar4[0x24] = 0;
        pbVar4[0x25] = 0;
        pbVar4[0x26] = 0;
        pbVar4[0x27] = 0;
        iVar5 = fn_82E64220(uVar9 + 4,pbVar4,0);
        if (iVar5 != 0) {
LAB_82e64bf8:
          fn_82E7E7E0(pbVar4 + 0x18);
          uVar10 = fn_82E72FC0(pbVar4 + 0x18,param_3,*param_3);
          goto LAB_82e64c18;
        }
        fn_82E4FE40(pbVar4);
      }
      uVar10 = 0xffffffff8007000e;
    }
  }
LAB_82e64c18:
  fn_82E50F10(param_1 + 0xc);
  return uVar10;
}


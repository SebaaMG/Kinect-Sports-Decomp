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
extern int fn_829AB0F0();
extern int fn_829AB2C8();
extern int fn_829AB308();
extern int fn_829B0F38();
extern int fn_829B5130();
extern int fn_829B87C8();
extern int fn_829B8A30();
extern int fn_829B9B60();
extern unsigned int lbl_82054B24;
extern unsigned int lbl_82054B40;
extern unsigned int lbl_82054B5C;
extern unsigned int lbl_82054B78;
extern unsigned int lbl_82054B94;


void fn_829BA710(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar9;
  byte *pbVar8;
  byte *pbVar10;
  undefined1 auStack_50 [4];
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  
  uVar7 = *(int *)(param_1 + 0x5d4) + 1;
  *(uint *)(param_1 + 0x5d4) = uVar7;
  if (*(uint *)(param_1 + 0x5c0) <= uVar7) {
    if (*(char *)(param_1 + 0x613) != '\0') {
      *(undefined4 *)(param_1 + 0x5d4) = 0;
      fn_829B5130(param_1,*(undefined4 *)(param_1 + 0x5d8),0,
                   (ulonglong)*(uint *)(param_1 + 0x5c8) + 1);
      bVar9 = *(byte *)(param_1 + 0x614);
      do {
        bVar9 = bVar9 + 1;
        *(byte *)(param_1 + 0x614) = bVar9;
        if (6 < bVar9) break;
        trapWord(6,(ulonglong)*(uint *)(&lbl_82054B40 + (uint)*(byte *)(param_1 + 0x614) * 4),0);
        iVar4 = (int)(((((ulonglong)*(uint *)(&lbl_82054B40 + (uint)*(byte *)(param_1 + 0x614) * 4)
                        - (ulonglong)*(uint *)(&lbl_82054B24 + (uint)bVar9 * 4)) +
                       (ulonglong)*(uint *)(param_1 + 0x5b8)) - 1 & 0xffffffff) /
                     (ulonglong)*(uint *)(&lbl_82054B40 + (uint)*(byte *)(param_1 + 0x614) * 4));
        *(int *)(param_1 + 0x5d0) = iVar4;
        *(uint *)(param_1 + 0x5cc) = ((uint)*(byte *)(param_1 + 0x619) * iVar4 + 7 >> 3) + 1;
        if ((*(uint *)(param_1 + 0x560) & 2) != 0) break;
        bVar9 = *(byte *)(param_1 + 0x614);
        trapWord(6,(ulonglong)*(uint *)(&lbl_82054B78 + (uint)bVar9 * 4),0);
        *(int *)(param_1 + 0x5c0) =
             (int)(((((ulonglong)*(uint *)(&lbl_82054B78 + (uint)bVar9 * 4) -
                     (ulonglong)*(uint *)(&lbl_82054B5C + (uint)bVar9 * 4)) +
                    (ulonglong)*(uint *)(param_1 + 0x5bc)) - 1 & 0xffffffff) /
                  (ulonglong)*(uint *)(&lbl_82054B78 + (uint)bVar9 * 4));
      } while (*(int *)(param_1 + 0x5d0) == 0);
      if (*(byte *)(param_1 + 0x614) < 7) {
        return;
      }
    }
    if ((*(uint *)(param_1 + 0x55c) & 0x20) == 0) {
      *(undefined1 **)(param_1 + 0x570) = auStack_50;
      *(undefined4 *)(param_1 + 0x574) = 1;
LAB_829ba880:
      if (*(int *)(param_1 + 0x568) == 0) {
        if (*(int *)(param_1 + 0x5fc) == 0) {
          pbVar10 = (byte *)(param_1 + 0x60c);
          do {
            fn_829B9B60(param_1,0);
            fn_829B0F38(param_1,&bStack_4c,4);
            *(uint *)(param_1 + 0x5fc) =
                 (((uint)bStack_4c * 0x100 + (uint)bStack_4b) * 0x100 + (uint)bStack_4a) * 0x100 +
                 (uint)bStack_49;
            fn_829AB2C8(param_1);
            fn_829B0F38(param_1,pbVar10,4);
            fn_829AB308(param_1,pbVar10,4);
            pbVar6 = &lbl_82054B94;
            pbVar8 = pbVar10;
            do {
              bVar9 = *pbVar8;
              bVar1 = *pbVar6;
              if ((ulonglong)bVar9 - (ulonglong)bVar1 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar6 = pbVar6 + 1;
            } while (pbVar8 != (byte *)(param_1 + 0x610));
            if ((int)((ulonglong)bVar9 - (ulonglong)bVar1) != 0) {
              fn_829AB0F0(param_1,0xffffffff82052520);
            }
          } while (*(int *)(param_1 + 0x5fc) == 0);
        }
        uVar2 = *(undefined4 *)(param_1 + 0x59c);
        *(uint *)(param_1 + 0x568) = *(uint *)(param_1 + 0x5a0);
        *(undefined4 *)(param_1 + 0x564) = uVar2;
        if (*(uint *)(param_1 + 0x5fc) < *(uint *)(param_1 + 0x5a0)) {
          *(uint *)(param_1 + 0x568) = *(uint *)(param_1 + 0x5fc);
        }
        uVar3 = *(undefined4 *)(param_1 + 0x568);
        fn_829B0F38(param_1,uVar2,uVar3);
        fn_829AB308(param_1,uVar2,uVar3);
        *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) - *(int *)(param_1 + 0x568);
      }
      iVar4 = fn_829B8A30(param_1 + 0x564,1);
      if (iVar4 != 1) {
        if (iVar4 != 0) {
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x57c);
          if ((ulonglong)*(uint *)(param_1 + 0x57c) == 0) {
            uVar5 = 0xffffffff82055030;
          }
          fn_829AB0F0(param_1,uVar5);
        }
        if (*(int *)(param_1 + 0x574) == 0) {
          fn_829AB0F0(param_1,0xffffffff820524f4);
        }
        goto LAB_829ba880;
      }
      if (((*(int *)(param_1 + 0x574) == 0) || (*(int *)(param_1 + 0x568) != 0)) ||
         (*(int *)(param_1 + 0x5fc) != 0)) {
        fn_829AB0F0(param_1,0xffffffff820524f4);
      }
      *(undefined4 *)(param_1 + 0x574) = 0;
      *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x20;
      *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) | 8;
    }
    if ((*(int *)(param_1 + 0x5fc) != 0) || (*(int *)(param_1 + 0x568) != 0)) {
      fn_829AB0F0(param_1,0xffffffff82055018);
    }
    fn_829B87C8(param_1 + 0x564);
    *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) | 8;
  }
  return;
}


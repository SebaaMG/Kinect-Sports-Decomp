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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82E5BFE0();
extern int fn_82F68CC0();
extern unsigned int lbl_820ED038;
extern unsigned int lbl_820ED048;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_821533F8;
extern unsigned int lbl_82153400;
extern unsigned int stack0x00000000;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


undefined8 fn_82E5C290(int param_1,int param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *puVar12;
  byte *pbVar13;
  uint *puVar14;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    return 0xffffffff80070057;
  }
  pbVar10 = (byte *)(param_1 + 0x84);
  puVar12 = (uint *)(param_1 + 0x7c);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x84) + (ulonglong)*(uint *)(param_1 + 0x7c) + 0x4e;
  uVar7 = uVar6;
  if (&stack0x00000000 == (undefined1 *)0x70) {
    uVar7 = uStack_70;
  }
  *(ulonglong *)(param_1 + 0x20) = uVar6;
  if (0xffffffff < uVar7) {
    return 0xffffffffc00d3a9a;
  }
  *param_4 = (uint)uVar7;
  if (param_3 < (uint)uVar7) {
    return 0xffffffffc00d36b1;
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = CONCAT44((uint)*(byte *)(param_1 + 0x13) << 0x18 |
                       (uint)*(byte *)(param_1 + 0x12) << 0x10 |
                       (uint)*(byte *)(param_1 + 0x11) << 8 | (uint)*(byte *)(param_1 + 0x10),
                       CONCAT22(*(ushort *)(param_1 + 0x14) << 8 | *(ushort *)(param_1 + 0x14) >> 8,
                                *(ushort *)(param_1 + 0x16) << 8 | *(ushort *)(param_1 + 0x16) >> 8)
                      );
  fn_82F68CC0(param_2,&uStack_70,0x10);
  uVar7 = *(ulonglong *)(param_1 + 0x20);
  pbVar9 = (byte *)(param_1 + 0x48);
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar7)) & ((U64)0xFFFFFFFF)) << 32));
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar7 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  *(ulonglong *)(param_2 + 0x10) =
       ((uVar7 & 0xff) << 0x18 |
       (uVar7 & 0xff00) << 8 |
       (ulonglong)((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20 |
       ((ulonglong)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
       ((ulonglong)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
       (ulonglong)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 0x18);
  uStack_68 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(CONCAT22(*(ushort *)(param_1 + 0x4c) << 8 | *(ushort *)(param_1 + 0x4c) >> 8,
                *(ushort *)(param_1 + 0x4e) << 8 | *(ushort *)(param_1 + 0x4e) >> 8))) & ((U64)0xFFFFFFFF)) << 32));
  uStack_70 = CONCAT44((uint)*(byte *)(param_1 + 0x4b) << 0x18 |
                       (uint)*(byte *)(param_1 + 0x4a) << 0x10 |
                       (uint)*(byte *)(param_1 + 0x49) << 8 | (uint)*pbVar9,(((U64)(uStack_70) >> 32) & 0xFFFFFFFF));
  fn_82F68CC0(param_2 + 0x18,&uStack_70,0x10);
  pbVar13 = (byte *)(param_1 + 0x58);
  uStack_68 = *(undefined8 *)(param_1 + 0x60);
  uStack_70 = CONCAT44((uint)*(byte *)(param_1 + 0x5b) << 0x18 |
                       (uint)*(byte *)(param_1 + 0x5a) << 0x10 |
                       (uint)*(byte *)(param_1 + 0x59) << 8 | (uint)*pbVar13,
                       CONCAT22(*(ushort *)(param_1 + 0x5c) << 8 | *(ushort *)(param_1 + 0x5c) >> 8,
                                *(ushort *)(param_1 + 0x5e) << 8 | *(ushort *)(param_1 + 0x5e) >> 8)
                      );
  fn_82F68CC0(param_2 + 0x28,&uStack_70,0x10);
  uVar6 = *(ulonglong *)(param_1 + 0x68);
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar6 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar6)) & ((U64)0xFFFFFFFF)) << 32));
  *(ulonglong *)(param_2 + 0x38) =
       ((uVar6 & 0xff) << 0x18 |
       (uVar6 & 0xff00) << 8 |
       (ulonglong)((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20 |
       ((ulonglong)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
       ((ulonglong)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
       (ulonglong)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 0x18);
  *(uint *)(param_2 + 0x40) =
       (uint)*(byte *)(param_1 + 0x7f) << 0x18 | (uint)*(byte *)(param_1 + 0x7e) << 0x10 |
       (uint)*(byte *)(param_1 + 0x7d) << 8 | (uint)*(byte *)puVar12;
  *(uint *)(param_2 + 0x44) =
       (uint)*(byte *)(param_1 + 0x87) << 0x18 | (uint)*(byte *)(param_1 + 0x86) << 0x10 |
       (uint)*(byte *)(param_1 + 0x85) << 8 | (uint)*pbVar10;
  uVar7 = (ulonglong)*(ushort *)(param_1 + 0x70) & 0x7f;
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar7 = uVar7 | 0x8000;
  }
  *(ushort *)(param_2 + 0x48) = (ushort)(uVar7 << 8) | (ushort)(uVar7 >> 8);
  puVar14 = (uint *)(param_2 + 0x4e);
  pbVar11 = &lbl_820ED058;
  *(undefined4 *)(param_2 + 0x4a) = 0;
  uStack_70 = uVar6;
  if (*puVar12 == 0) {
code_r0x82e5c698:
    if (*(int *)pbVar10 != 0) {
      if (*(int *)(param_1 + 0x80) == 0) goto LAB_82e5c4f8;
      fn_82F68CC0(puVar14);
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar9;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar11 != &lbl_820ED068);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        pbVar9 = &lbl_820ED038;
        do {
          bVar1 = *pbVar9;
          bVar2 = *pbVar13;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar13 + 1;
        } while (pbVar9 != &lbl_820ED048);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          if (*(int *)pbVar10 != 8) {
            return 0xffffffffc00d3a9a;
          }
          *(ushort *)((int)puVar14 + 1) =
               *(ushort *)((int)puVar14 + 1) << 8 | *(ushort *)((int)puVar14 + 1) >> 8;
          *(ushort *)((int)puVar14 + 3) =
               *(ushort *)((int)puVar14 + 3) << 8 | *(ushort *)((int)puVar14 + 3) >> 8;
          *(ushort *)((int)puVar14 + 5) =
               *(ushort *)((int)puVar14 + 5) << 8 | *(ushort *)((int)puVar14 + 5) >> 8;
        }
      }
    }
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x78) != 0) {
      fn_82F68CC0(puVar14);
      pbVar5 = pbVar9;
      pbVar8 = pbVar11;
      do {
        bVar1 = *pbVar8;
        bVar2 = *pbVar5;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar8 = pbVar8 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar8 != &lbl_820ED068);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        uVar4 = fn_82E5BFE0(lbl_821533F8,lbl_82153400,puVar14,*puVar12);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
code_r0x82e5c688:
        if ((int)uVar4 < 0) {
          return uVar4;
        }
      }
      else {
        pbVar8 = &lbl_820F8EB8;
        pbVar5 = pbVar9;
        do {
          bVar1 = *pbVar8;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar8 = pbVar8 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar8 != &lbl_820F8EC8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          uVar4 = 0xffffffff80004001;
          goto code_r0x82e5c688;
        }
        if (*puVar12 < 0xc) {
          return 0xffffffffc00d3a9a;
        }
        uVar3 = *(ushort *)(param_2 + 0x57);
        *puVar14 = (uint)*(byte *)(param_2 + 0x51) << 0x18 | (uint)*(byte *)(param_2 + 0x50) << 0x10
                   | (uint)*(byte *)(param_2 + 0x4f) << 8 | (uint)*(byte *)puVar14;
        *(ushort *)(param_2 + 0x57) = uVar3 << 8 | uVar3 >> 8;
        *(uint *)(param_2 + 0x52) =
             (uint)*(byte *)(param_2 + 0x55) << 0x18 | (uint)*(byte *)(param_2 + 0x54) << 0x10 |
             (uint)*(byte *)(param_2 + 0x53) << 8 | (uint)*(byte *)(param_2 + 0x52);
        if ((*(byte *)(param_2 + 0x56) & 2) == 0) {
          return 0xffffffffc00d3a9a;
        }
        if ((ushort)((uVar3 >> 8) << 8 | uVar3 & 0xff) < 0x28) {
          return 0xffffffffc00d3a9a;
        }
        *(ushort *)(param_2 + 0x65) =
             *(ushort *)(param_2 + 0x65) << 8 | *(ushort *)(param_2 + 0x65) >> 8;
        *(ushort *)(param_2 + 0x67) =
             *(ushort *)(param_2 + 0x67) << 8 | *(ushort *)(param_2 + 0x67) >> 8;
        *(uint *)(param_2 + 0x59) =
             (uint)*(byte *)(param_2 + 0x5c) << 0x18 | (uint)*(byte *)(param_2 + 0x5b) << 0x10 |
             (uint)*(byte *)(param_2 + 0x5a) << 8 | (uint)*(byte *)(param_2 + 0x59);
        *(uint *)(param_2 + 0x5d) =
             (uint)*(byte *)(param_2 + 0x60) << 0x18 | (uint)*(byte *)(param_2 + 0x5f) << 0x10 |
             (uint)*(byte *)(param_2 + 0x5e) << 8 | (uint)*(byte *)(param_2 + 0x5d);
        *(uint *)(param_2 + 0x61) =
             (uint)*(byte *)(param_2 + 100) << 0x18 | (uint)*(byte *)(param_2 + 99) << 0x10 |
             (uint)*(byte *)(param_2 + 0x62) << 8 | (uint)*(byte *)(param_2 + 0x61);
        *(uint *)(param_2 + 0x69) =
             (uint)*(byte *)(param_2 + 0x6c) << 0x18 | (uint)*(byte *)(param_2 + 0x6b) << 0x10 |
             (uint)*(byte *)(param_2 + 0x6a) << 8 | (uint)*(byte *)(param_2 + 0x69);
        *(uint *)(param_2 + 0x6d) =
             (uint)*(byte *)(param_2 + 0x70) << 0x18 | (uint)*(byte *)(param_2 + 0x6f) << 0x10 |
             (uint)*(byte *)(param_2 + 0x6e) << 8 | (uint)*(byte *)(param_2 + 0x6d);
        *(uint *)(param_2 + 0x71) =
             (uint)*(byte *)(param_2 + 0x74) << 0x18 | (uint)*(byte *)(param_2 + 0x73) << 0x10 |
             (uint)*(byte *)(param_2 + 0x72) << 8 | (uint)*(byte *)(param_2 + 0x71);
        *(uint *)(param_2 + 0x75) =
             (uint)*(byte *)(param_2 + 0x78) << 0x18 | (uint)*(byte *)(param_2 + 0x77) << 0x10 |
             (uint)*(byte *)(param_2 + 0x76) << 8 | (uint)*(byte *)(param_2 + 0x75);
        *(uint *)(param_2 + 0x79) =
             (uint)*(byte *)(param_2 + 0x7c) << 0x18 | (uint)*(byte *)(param_2 + 0x7b) << 0x10 |
             (uint)*(byte *)(param_2 + 0x7a) << 8 | (uint)*(byte *)(param_2 + 0x79);
        *(uint *)(param_2 + 0x7d) =
             (uint)*(byte *)(param_2 + 0x80) << 0x18 | (uint)*(byte *)(param_2 + 0x7f) << 0x10 |
             (uint)*(byte *)(param_2 + 0x7e) << 8 | (uint)*(byte *)(param_2 + 0x7d);
      }
      puVar14 = (uint *)((int)puVar14 + *puVar12);
      goto code_r0x82e5c698;
    }
LAB_82e5c4f8:
    uVar4 = 0xffffffff8000ffff;
  }
  return uVar4;
}


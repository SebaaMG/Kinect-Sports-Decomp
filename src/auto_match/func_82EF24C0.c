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
#define CONCAT42(h,l) ((U64)((((U32)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
extern int fn_82E57888();
extern int fn_82EF1D58();
extern int fn_82F64CE0();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82154BB8;
extern unsigned int lbl_82154BBC;
extern unsigned int lbl_82154BBE;
extern unsigned int lbl_82154BC0;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


undefined8 fn_82EF24C0(int *param_1,int param_2,uint param_3,uint *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong *apuStack_a0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  uint uStack_50;
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,&uStack_80,0);
    if (uStack_80 < 0x100000000) {
      *param_4 = (uint)uStack_80;
      if (param_3 < (uint)uStack_80) {
        uVar2 = 0xffffffffc00d36b1;
      }
      else {
        uStack_88 = *(undefined8 *)(param_1 + 6);
        uStack_90 = CONCAT44((uint)*(byte *)((int)param_1 + 0x13) << 0x18 |
                             (uint)*(byte *)((int)param_1 + 0x12) << 0x10 |
                             (uint)*(byte *)((int)param_1 + 0x11) << 8 |
                             (uint)*(byte *)(param_1 + 4),
                             CONCAT22(*(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8,
                                      *(ushort *)((int)param_1 + 0x16) << 8 |
                                      *(ushort *)((int)param_1 + 0x16) >> 8));
        fn_82F68CC0(param_2,&uStack_90,0x10);
        uVar4 = *(ulonglong *)(param_1 + 8);
        uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
        uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *(ulonglong *)(param_2 + 0x10) =
             ((uVar4 & 0xff) << 0x18 |
             (uVar4 & 0xff00) << 8 |
             (ulonglong)((((U64)(uStack_90) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_90) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((ulonglong)(((U64)(uStack_90) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((ulonglong)(((U64)(uStack_90) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (ulonglong)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (ulonglong)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) >> 0x18);
        uStack_88 = lbl_82154BC0;
        uStack_90 = CONCAT62(CONCAT42(lbl_82154BB8 << 0x18 |
                                      (lbl_82154BB8 & 0xff00) << 8 |
                                      lbl_82154BB8 >> 8 & 0xff00 | lbl_82154BB8 >> 0x18,
                                      lbl_82154BBC << 8 | lbl_82154BBC >> 8),
                             lbl_82154BBE << 8 | lbl_82154BBE >> 8);
        fn_82F68CC0(param_2 + 0x18,&uStack_90,0x10);
        lVar5 = 0;
        *(uint *)(param_2 + 0x28) =
             (uint)*(byte *)((int)param_1 + 0x3bb) << 0x18 |
             (uint)*(byte *)((int)param_1 + 0x3ba) << 0x10 |
             (uint)*(byte *)((int)param_1 + 0x3b9) << 8 | (uint)*(byte *)(param_1 + 0xee);
        *(undefined2 *)(param_2 + 0x2c) = 0;
        if (param_1[0x12] != 0) {
          lVar5 = fn_82F64CE0();
          lVar5 = (lVar5 + 1U & 0x7fff) << 1;
        }
        apuStack_a0[0] = (ulonglong *)(param_2 + 0x30);
        *(ushort *)(param_2 + 0x2e) = (ushort)(lVar5 << 8) | (ushort)((ulonglong)lVar5 >> 8);
        fn_82E57888(apuStack_a0,param_1[0x12],lVar5);
        puVar1 = apuStack_a0[0];
        if (param_1[0xee] != 0) {
          fn_82EF1D58(param_1 + 0x14,0,&uStack_90);
          puVar3 = &uStack_78;
          lVar5 = 5;
          puVar6 = (undefined8 *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + -8);
          do {
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = *puVar6;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          uVar4 = ((ulonglong)uStack_54 + 6 & 0x7fffffff) * 2 + (ulonglong)uStack_50 & 0xffff;
          *puVar1 = (((ulonglong)uStack_6c & 0xff) << 0x18 |
                    ((ulonglong)uStack_6c & 0xff00) << 8 |
                    (ulonglong)(uStack_6c >> 8) & 0xff00 | (ulonglong)(uStack_6c >> 0x18)) << 0x20 |
                    ((ulonglong)uStack_70 & 0xff) << 0x18 |
                    ((ulonglong)uStack_70 & 0xff00) << 8 |
                    (ulonglong)(uStack_70 >> 8) & 0xff00 | (ulonglong)(uStack_70 >> 0x18);
          puVar1[1] = (((ulonglong)uStack_64 & 0xff) << 0x18 |
                      ((ulonglong)uStack_64 & 0xff00) << 8 |
                      (ulonglong)(uStack_64 >> 8) & 0xff00 | (ulonglong)(uStack_64 >> 0x18)) << 0x20
                      | ((ulonglong)uStack_68 & 0xff) << 0x18 |
                        ((ulonglong)uStack_68 & 0xff00) << 8 |
                        (ulonglong)(uStack_68 >> 8) & 0xff00 | (ulonglong)(uStack_68 >> 0x18);
          *(ushort *)(puVar1 + 2) = (ushort)(uVar4 << 8) | (ushort)(uVar4 >> 8);
          *(uint *)((int)puVar1 + 0x12) =
               uStack_60 << 0x18 | (uStack_60 & 0xff00) << 8 | uStack_60 >> 8 & 0xff00 |
               uStack_60 >> 0x18;
          *(uint *)((int)puVar1 + 0x16) =
               uStack_5c << 0x18 | (uStack_5c & 0xff00) << 8 | uStack_5c >> 8 & 0xff00 |
               uStack_5c >> 0x18;
          apuStack_a0[0] = (ulonglong *)((int)puVar1 + 0x1e);
          *(uint *)((int)puVar1 + 0x1a) =
               uStack_54 << 0x18 | (uStack_54 & 0xff00) << 8 | uStack_54 >> 8 & 0xff00 |
               uStack_54 >> 0x18;
          if ((ulonglong)uStack_54 != 0) {
            fn_82E57888(apuStack_a0,uStack_58,uStack_54 << 1);
          }
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(apuStack_a0[0],0,(ulonglong)uStack_50);
        }
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffffffc00d3a9a;
    }
  }
  return uVar2;
}


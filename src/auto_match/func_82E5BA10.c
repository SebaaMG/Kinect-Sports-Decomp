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
extern unsigned int *auStack_40;
extern int fn_82E57888();
extern int fn_82E5AFB0();
extern int fn_82E5B6B8();
extern int fn_82E5B788();
extern int fn_82E5C290();
extern int fn_82F68CC0();
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


undefined8 fn_82E5BA10(int *param_1,int param_2,ulonglong param_3,undefined4 *param_4)

{
  ushort *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ushort *apuStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong auStack_40 [8];
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_4 == (undefined4 *)0x0) || (((param_3 & 0xffffffff) != 0 && (param_2 == 0)))) {
    return 0xffffffff80070057;
  }
  (**(code **)(*param_1 + 0x14))(param_1,0,auStack_40);
  if (auStack_40[0] < 0x100000000) {
    *param_4 = (int)auStack_40[0];
    if ((param_3 & 0xffffffff) < (auStack_40[0] & 0xffffffff)) {
      return 0xffffffffc00d36b1;
    }
    uStack_48 = *(undefined8 *)(param_1 + 6);
    uStack_50 = CONCAT44((uint)*(byte *)((int)param_1 + 0x13) << 0x18 |
                         (uint)*(byte *)((int)param_1 + 0x12) << 0x10 |
                         (uint)*(byte *)((int)param_1 + 0x11) << 8 | (uint)*(byte *)(param_1 + 4),
                         CONCAT22(*(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8,
                                  *(ushort *)((int)param_1 + 0x16) << 8 |
                                  *(ushort *)((int)param_1 + 0x16) >> 8));
    fn_82F68CC0(param_2,&uStack_50,0x10);
    uVar4 = *(ulonglong *)(param_1 + 8);
    uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
    uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    *(ulonglong *)(param_2 + 0x10) =
         ((uVar4 & 0xff) << 0x18 |
         (uVar4 & 0xff00) << 8 |
         (ulonglong)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((ulonglong)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((ulonglong)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (ulonglong)((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18);
    uVar4 = *(ulonglong *)(param_1 + 0x12);
    uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
    uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    *(ulonglong *)(param_2 + 0x18) =
         ((uVar4 & 0xff) << 0x18 |
         (uVar4 & 0xff00) << 8 |
         (ulonglong)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((ulonglong)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((ulonglong)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (ulonglong)((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18);
    uVar4 = *(ulonglong *)(param_1 + 0x14);
    uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
    uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    *(ulonglong *)(param_2 + 0x20) =
         ((uVar4 & 0xff) << 0x18 |
         (uVar4 & 0xff00) << 8 |
         (ulonglong)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((ulonglong)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((ulonglong)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (ulonglong)((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18);
    *(uint *)(param_2 + 0x28) =
         (uint)*(byte *)((int)param_1 + 0x5b) << 0x18 | (uint)*(byte *)((int)param_1 + 0x5a) << 0x10
         | (uint)*(byte *)((int)param_1 + 0x59) << 8 | (uint)*(byte *)(param_1 + 0x16);
    *(uint *)(param_2 + 0x2c) =
         (uint)*(byte *)((int)param_1 + 0x5f) << 0x18 | (uint)*(byte *)((int)param_1 + 0x5e) << 0x10
         | (uint)*(byte *)((int)param_1 + 0x5d) << 8 | (uint)*(byte *)(param_1 + 0x17);
    *(uint *)(param_2 + 0x30) =
         (uint)*(byte *)((int)param_1 + 99) << 0x18 | (uint)*(byte *)((int)param_1 + 0x62) << 0x10 |
         (uint)*(byte *)((int)param_1 + 0x61) << 8 | (uint)*(byte *)(param_1 + 0x18);
    *(uint *)(param_2 + 0x34) =
         (uint)*(byte *)((int)param_1 + 0x67) << 0x18 | (uint)*(byte *)((int)param_1 + 0x66) << 0x10
         | (uint)*(byte *)((int)param_1 + 0x65) << 8 | (uint)*(byte *)(param_1 + 0x19);
    *(uint *)(param_2 + 0x38) =
         (uint)*(byte *)((int)param_1 + 0x6b) << 0x18 | (uint)*(byte *)((int)param_1 + 0x6a) << 0x10
         | (uint)*(byte *)((int)param_1 + 0x69) << 8 | (uint)*(byte *)(param_1 + 0x1a);
    *(uint *)(param_2 + 0x3c) =
         (uint)*(byte *)((int)param_1 + 0x6f) << 0x18 | (uint)*(byte *)((int)param_1 + 0x6e) << 0x10
         | (uint)*(byte *)((int)param_1 + 0x6d) << 8 | (uint)*(byte *)(param_1 + 0x1b);
    *(uint *)(param_2 + 0x40) =
         (uint)*(byte *)((int)param_1 + 0x73) << 0x18 | (uint)*(byte *)((int)param_1 + 0x72) << 0x10
         | (uint)*(byte *)((int)param_1 + 0x71) << 8 | (uint)*(byte *)(param_1 + 0x1c);
    *(uint *)(param_2 + 0x44) =
         (uint)*(byte *)((int)param_1 + 0x77) << 0x18 | (uint)*(byte *)((int)param_1 + 0x76) << 0x10
         | (uint)*(byte *)((int)param_1 + 0x75) << 8 | (uint)*(byte *)(param_1 + 0x1d);
    *(ushort *)(param_2 + 0x48) =
         *(ushort *)(param_1 + 0x1e) << 8 | *(ushort *)(param_1 + 0x1e) >> 8;
    *(ushort *)(param_2 + 0x4a) =
         *(ushort *)((int)param_1 + 0x7a) << 8 | *(ushort *)((int)param_1 + 0x7a) >> 8;
    uVar4 = *(ulonglong *)(param_1 + 0x20);
    uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
    uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    *(ulonglong *)(param_2 + 0x4c) =
         ((uVar4 & 0xff) << 0x18 |
         (uVar4 & 0xff00) << 8 |
         (ulonglong)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((ulonglong)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((ulonglong)(((U64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (ulonglong)((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18);
    *(ushort *)(param_2 + 0x54) =
         (ushort)(((ulonglong)(uint)param_1[0x58] & 0xff) << 8) |
         (ushort)((uint)param_1[0x58] >> 8) & 0xff;
    apuStack_60[0] = (ushort *)(param_2 + 0x56);
    uStack_58 = uVar4;
    fn_82E5B6B8(param_1,apuStack_60);
    uVar4 = 0;
    if (param_1[0x58] != 0) {
      do {
        puVar1 = apuStack_60[0];
        lVar3 = fn_82E5AFB0(param_1 + 0x3e,uVar4,&uStack_58);
        puVar5 = (undefined4 *)(-(uint)(lVar3 != 0) & (((U64)(uStack_58) >> 0) & 0xFFFFFFFF));
        *puVar1 = *(ushort *)(puVar5 + 1) << 8 | *(ushort *)(puVar5 + 1) >> 8;
        puVar1[1] = *(ushort *)((int)puVar5 + 6) << 8 | *(ushort *)((int)puVar5 + 6) >> 8;
        apuStack_60[0] = puVar1 + 2;
        if (*(short *)((int)puVar5 + 6) != 0) {
          fn_82E57888(apuStack_60,*puVar5);
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x58]);
    }
    uVar2 = fn_82E5B788(param_1,apuStack_60);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if (param_1[0x22] != 0) {
      uStack_50 = 0;
      uVar2 = (**(code **)(*param_1 + 0x14))(param_1,&uStack_50,0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (0xffffffff < uStack_50) goto LAB_82e5ba8c;
      uStack_58 = uStack_58 & 0xffffffff;
      uVar2 = fn_82E5C290(param_1[0x22],apuStack_60[0],param_3 - (uStack_50 & 0xffffffff),
                                &uStack_58);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_82e5ba8c:
    uVar2 = 0xffffffffc00d3a9a;
  }
  return uVar2;
}


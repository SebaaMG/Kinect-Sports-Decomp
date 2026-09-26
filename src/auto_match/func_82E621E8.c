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
extern int fn_82F68CC0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined8 fn_82E621E8(int *param_1,int param_2,uint param_3,uint *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[3] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,&uStack_40,0);
    if (uStack_40 < 0x100000000) {
      *param_4 = (uint)uStack_40;
      if (param_3 < (uint)uStack_40) {
        uVar1 = 0xffffffffc00d36b1;
      }
      else {
        uStack_38 = *(undefined8 *)(param_1 + 6);
        uStack_40 = CONCAT44((uint)*(byte *)((int)param_1 + 0x13) << 0x18 |
                             (uint)*(byte *)((int)param_1 + 0x12) << 0x10 |
                             (uint)*(byte *)((int)param_1 + 0x11) << 8 |
                             (uint)*(byte *)(param_1 + 4),
                             CONCAT22(*(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8,
                                      *(ushort *)((int)param_1 + 0x16) << 8 |
                                      *(ushort *)((int)param_1 + 0x16) >> 8));
        fn_82F68CC0(param_2,&uStack_40,0x10);
        uVar2 = *(ulonglong *)(param_1 + 8);
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar2)) & ((U64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *(ulonglong *)(param_2 + 0x10) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uStack_38 = *(undefined8 *)(param_1 + 0x14);
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(CONCAT22(*(ushort *)(param_1 + 0x13) << 8 | *(ushort *)(param_1 + 0x13) >> 8,
                      *(ushort *)((int)param_1 + 0x4e) << 8 | *(ushort *)((int)param_1 + 0x4e) >> 8))) & ((U64)0xFFFFFFFF)) << 32));
        uStack_40 = CONCAT44((uint)*(byte *)((int)param_1 + 0x4b) << 0x18 |
                             (uint)*(byte *)((int)param_1 + 0x4a) << 0x10 |
                             (uint)*(byte *)((int)param_1 + 0x49) << 8 |
                             (uint)*(byte *)(param_1 + 0x12),(((U64)(uStack_40) >> 32) & 0xFFFFFFFF));
        fn_82F68CC0(param_2 + 0x18,&uStack_40,0x10);
        uVar2 = *(ulonglong *)(param_1 + 0x16);
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar2)) & ((U64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *(ulonglong *)(param_2 + 0x28) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)*(undefined8 *)(param_1 + 0x18))) & ((U64)0xFFFFFFFF)) << 32));
        *(uint *)(param_2 + 0x30) =
             (((U64)(uStack_40) >> 32) & 0xFFFFFFFF) << 0x18 | ((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) & 0xff00) << 8 |
             (((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8 & 0xff00 | (((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18;
        *(uint *)(param_2 + 0x34) =
             (((U64)(uStack_40) >> 0) & 0xFFFFFFFF) << 0x18 | ((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
             (((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8 & 0xff00 | (((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18;
        uVar2 = *(ulonglong *)(param_1 + 0x1a);
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar2)) & ((U64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *(ulonglong *)(param_2 + 0x38) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uVar2 = *(ulonglong *)(param_1 + 0x1c);
        uVar1 = 0;
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar2)) & ((U64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *(ulonglong *)(param_2 + 0x40) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uVar2 = *(ulonglong *)(param_1 + 0x1e);
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar2)) & ((U64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *(ulonglong *)(param_2 + 0x48) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uVar2 = *(ulonglong *)(param_1 + 0x20);
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar2)) & ((U64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *(ulonglong *)(param_2 + 0x50) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        *(uint *)(param_2 + 0x58) =
             (uint)*(byte *)((int)param_1 + 0x8b) << 0x18 |
             (uint)*(byte *)((int)param_1 + 0x8a) << 0x10 |
             (uint)*(byte *)((int)param_1 + 0x89) << 8 | (uint)*(byte *)(param_1 + 0x22);
        *(uint *)(param_2 + 0x5c) =
             (uint)*(byte *)((int)param_1 + 0x8f) << 0x18 |
             (uint)*(byte *)((int)param_1 + 0x8e) << 0x10 |
             (uint)*(byte *)((int)param_1 + 0x8d) << 8 | (uint)*(byte *)(param_1 + 0x23);
        *(uint *)(param_2 + 0x60) =
             (uint)*(byte *)((int)param_1 + 0x93) << 0x18 |
             (uint)*(byte *)((int)param_1 + 0x92) << 0x10 |
             (uint)*(byte *)((int)param_1 + 0x91) << 8 | (uint)*(byte *)(param_1 + 0x24);
        *(uint *)(param_2 + 100) =
             (uint)*(byte *)((int)param_1 + 0x97) << 0x18 |
             (uint)*(byte *)((int)param_1 + 0x96) << 0x10 |
             (uint)*(byte *)((int)param_1 + 0x95) << 8 | (uint)*(byte *)(param_1 + 0x25);
      }
    }
    else {
      uVar1 = 0xffffffffc00d3a9a;
    }
  }
  return uVar1;
}


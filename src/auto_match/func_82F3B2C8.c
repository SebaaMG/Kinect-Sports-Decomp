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
#define _uStack_40 ((*(U64*)&uStack_40))
extern unsigned int *auStack_50;
extern int fn_82F68CC0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_82F3B2C8(int *param_1,int param_2,uint param_3,uint *param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong auStack_50 [2];
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (param_1[3] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    auStack_50[0] = 0;
    (**(code **)(*param_1 + 0x14))(param_1,auStack_50,0);
    if (auStack_50[0] < 0x100000000) {
      *param_4 = (uint)auStack_50[0];
      if (param_3 < (uint)auStack_50[0]) {
        uVar1 = 0xffffffffc00d36b1;
      }
      else {
        uStack_38 = *(undefined8 *)(param_1 + 6);
        _uStack_40 = CONCAT44((uint)*(byte *)((int)param_1 + 0x13) << 0x18 |
                              (uint)*(byte *)((int)param_1 + 0x12) << 0x10 |
                              (uint)*(byte *)((int)param_1 + 0x11) << 8 |
                              (uint)*(byte *)(param_1 + 4),
                              CONCAT22(*(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8
                                       ,*(ushort *)((int)param_1 + 0x16) << 8 |
                                        *(ushort *)((int)param_1 + 0x16) >> 8));
        fn_82F68CC0(param_2,&uStack_40,0x10);
        uVar6 = *(ulonglong *)(param_1 + 8);
        uStack_3c = (uint)uVar6;
        uStack_40 = (uint)(uVar6 >> 0x20);
        *(ulonglong *)(param_2 + 0x10) =
             ((uVar6 & 0xff) << 0x18 |
             (uVar6 & 0xff00) << 8 |
             (ulonglong)(uStack_3c >> 8) & 0xff00 | (ulonglong)(uStack_3c >> 0x18)) << 0x20 |
             ((ulonglong)uStack_40 & 0xff) << 0x18 |
             ((ulonglong)uStack_40 & 0xff00) << 8 |
             (ulonglong)(uStack_40 >> 8) & 0xff00 | (ulonglong)(uStack_40 >> 0x18);
        uStack_38 = *(undefined8 *)(param_1 + 0x16);
        uStack_3c = CONCAT22(*(ushort *)(param_1 + 0x15) << 8 | *(ushort *)(param_1 + 0x15) >> 8,
                             *(ushort *)((int)param_1 + 0x56) << 8 |
                             *(ushort *)((int)param_1 + 0x56) >> 8);
        _uStack_40 = CONCAT44((uint)*(byte *)((int)param_1 + 0x53) << 0x18 |
                              (uint)*(byte *)((int)param_1 + 0x52) << 0x10 |
                              (uint)*(byte *)((int)param_1 + 0x51) << 8 |
                              (uint)*(byte *)(param_1 + 0x14),uStack_3c);
        fn_82F68CC0(param_2 + 0x18,&uStack_40,0x10);
        uVar6 = *(ulonglong *)(param_1 + 0x18);
        puVar4 = (uint *)(param_1 + 0x1b);
        uStack_3c = (uint)uVar6;
        uStack_40 = (uint)(uVar6 >> 0x20);
        *(ulonglong *)(param_2 + 0x28) =
             ((uVar6 & 0xff) << 0x18 |
             (uVar6 & 0xff00) << 8 |
             (ulonglong)(uStack_3c >> 8) & 0xff00 | (ulonglong)(uStack_3c >> 0x18)) << 0x20 |
             ((ulonglong)uStack_40 & 0xff) << 0x18 |
             ((ulonglong)uStack_40 & 0xff00) << 8 |
             (ulonglong)(uStack_40 >> 8) & 0xff00 | (ulonglong)(uStack_40 >> 0x18);
        *(uint *)(param_2 + 0x30) =
             (uint)*(byte *)((int)param_1 + 0x6b) << 0x18 |
             (uint)*(byte *)((int)param_1 + 0x6a) << 0x10 |
             (uint)*(byte *)((int)param_1 + 0x69) << 8 | (uint)*(byte *)(param_1 + 0x1a);
        *(uint *)(param_2 + 0x34) =
             (uint)*(byte *)((int)param_1 + 0x6f) << 0x18 |
             (uint)*(byte *)((int)param_1 + 0x6e) << 0x10 |
             (uint)*(byte *)((int)param_1 + 0x6d) << 8 | (uint)*(byte *)puVar4;
        puVar7 = (uint *)(param_2 + 0x38);
        if ((param_1[0x13] & 1U) != 0) {
          uVar3 = 0;
          if (*puVar4 != 0) {
            iVar5 = 0;
            do {
              uVar3 = uVar3 + 1;
              pbVar2 = (byte *)(param_1[0x1c] + iVar5);
              iVar5 = iVar5 + 6;
              *puVar7 = (uint)pbVar2[3] << 0x18 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 |
                        (uint)*pbVar2;
              *(ushort *)(puVar7 + 1) = *(ushort *)(pbVar2 + 4) << 8 | *(ushort *)(pbVar2 + 4) >> 8;
              puVar7 = (uint *)((int)puVar7 + 6);
            } while (uVar3 < *puVar4);
          }
        }
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xffffffff8000ffff;
    }
  }
  return uVar1;
}


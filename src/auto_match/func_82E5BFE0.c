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
extern unsigned int lbl_821533F8;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;


undefined8 fn_82E5BFE0(undefined8 param_1,undefined8 param_2,ushort *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ushort uVar8;
  undefined8 uStack00000010;
  undefined8 uStack00000018;
  
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  if (param_3 == (ushort *)0x0) {
    return 0xffffffff80004003;
  }
  pbVar7 = (byte *)&stack0x00000010;
  pbVar6 = (byte *)&lbl_821533F8;
  do {
    bVar1 = *pbVar7;
    bVar2 = *pbVar6;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 != &stack0x00000020);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    uVar5 = 0x12;
    if (0x11 < param_4) {
      uVar8 = *param_3;
      uVar3 = param_3[8];
      *param_3 = uVar8 << 8 | uVar8 >> 8;
      uVar8 = (uVar8 >> 8) << 8 | uVar8 & 0xff;
      *(uint *)(param_3 + 2) =
           (uint)*(byte *)((int)param_3 + 7) << 0x18 | (uint)*(byte *)(param_3 + 3) << 0x10 |
           (uint)*(byte *)((int)param_3 + 5) << 8 | (uint)*(byte *)(param_3 + 2);
      *(uint *)(param_3 + 4) =
           (uint)*(byte *)((int)param_3 + 0xb) << 0x18 | (uint)*(byte *)(param_3 + 5) << 0x10 |
           (uint)*(byte *)((int)param_3 + 9) << 8 | (uint)*(byte *)(param_3 + 4);
      param_3[1] = param_3[1] << 8 | param_3[1] >> 8;
      param_3[8] = uVar3 << 8 | uVar3 >> 8;
      param_3[6] = param_3[6] << 8 | param_3[6] >> 8;
      param_3[7] = param_3[7] << 8 | param_3[7] >> 8;
      if (uVar8 == 0xfffe) {
        uVar5 = 0x28;
        if (param_4 < 0x28) goto LAB_82e5c04c;
        param_3[0xf] = param_3[0xf] << 8 | param_3[0xf] >> 8;
        param_3[9] = param_3[9] << 8 | param_3[9] >> 8;
        param_3[0xe] = param_3[0xe] << 8 | param_3[0xe] >> 8;
        *(uint *)(param_3 + 10) =
             (uint)*(byte *)((int)param_3 + 0x17) << 0x18 | (uint)*(byte *)(param_3 + 0xb) << 0x10 |
             (uint)*(byte *)((int)param_3 + 0x15) << 8 | (uint)*(byte *)(param_3 + 10);
        *(uint *)(param_3 + 0xc) =
             (uint)*(byte *)((int)param_3 + 0x1b) << 0x18 | (uint)*(byte *)(param_3 + 0xd) << 0x10 |
             (uint)*(byte *)((int)param_3 + 0x19) << 8 | (uint)*(byte *)(param_3 + 0xc);
      }
      if ((((ushort)((uVar3 >> 8) << 8 | uVar3 & 0xff) < 0x4001) &&
          (uVar5 <= ((param_3[8] & 0xff) << 8 | (uint)(param_3[8] >> 8)) + uVar5)) &&
         (((param_3[8] & 0xff) << 8 | (uint)(param_3[8] >> 8)) + uVar5 <= param_4)) {
        if (uVar8 == 0x160) {
          if (3 < (ushort)(param_3[8] << 8 | param_3[8] >> 8)) {
            param_3[9] = param_3[9] << 8 | param_3[9] >> 8;
            param_3[10] = param_3[10] << 8 | param_3[10] >> 8;
            return 0;
          }
        }
        else if (uVar8 == 0x161) {
          if (9 < (ushort)(param_3[8] << 8 | param_3[8] >> 8)) {
            param_3[0xb] = param_3[0xb] << 8 | param_3[0xb] >> 8;
            *(uint *)(param_3 + 9) =
                 (uint)*(byte *)((int)param_3 + 0x15) << 0x18 |
                 (uint)*(byte *)(param_3 + 10) << 0x10 | (uint)*(byte *)((int)param_3 + 0x13) << 8 |
                 (uint)*(byte *)(param_3 + 9);
            *(uint *)(param_3 + 0xc) =
                 (uint)*(byte *)((int)param_3 + 0x1b) << 0x18 |
                 (uint)*(byte *)(param_3 + 0xd) << 0x10 | (uint)*(byte *)((int)param_3 + 0x19) << 8
                 | (uint)*(byte *)(param_3 + 0xc);
            return 0;
          }
        }
        else {
          if ((uVar8 != 0x162) && (uVar8 != 0x163)) goto LAB_82e5c284;
          if (0x11 < (ushort)(param_3[8] << 8 | param_3[8] >> 8)) {
            param_3[0x10] = param_3[0x10] << 8 | param_3[0x10] >> 8;
            param_3[0x11] = param_3[0x11] << 8 | param_3[0x11] >> 8;
            *(uint *)(param_3 + 10) =
                 (uint)*(byte *)((int)param_3 + 0x17) << 0x18 |
                 (uint)*(byte *)(param_3 + 0xb) << 0x10 | (uint)*(byte *)((int)param_3 + 0x15) << 8
                 | (uint)*(byte *)(param_3 + 10);
            *(uint *)(param_3 + 0xc) =
                 (uint)*(byte *)((int)param_3 + 0x1b) << 0x18 |
                 (uint)*(byte *)(param_3 + 0xd) << 0x10 | (uint)*(byte *)((int)param_3 + 0x19) << 8
                 | (uint)*(byte *)(param_3 + 0xc);
            param_3[9] = param_3[9] << 8 | param_3[9] >> 8;
            *(uint *)(param_3 + 0xe) =
                 (uint)*(byte *)((int)param_3 + 0x1f) << 0x18 |
                 (uint)*(byte *)(param_3 + 0xf) << 0x10 | (uint)*(byte *)((int)param_3 + 0x1d) << 8
                 | (uint)*(byte *)(param_3 + 0xe);
            return 0;
          }
        }
      }
    }
LAB_82e5c04c:
    uVar4 = 0xffffffffc00d36b4;
  }
  else {
LAB_82e5c284:
    uVar4 = 0xffffffff80004001;
  }
  return uVar4;
}


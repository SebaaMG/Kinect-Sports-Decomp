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
extern int fn_82E279A0();
extern int fn_82E57820();
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_821533F8;
extern unsigned int lbl_82153400;


undefined8 fn_82E5BDC0(int param_1,uint *param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ushort uVar7;
  
  if ((param_2 == (uint *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    uVar3 = 0xffffffff80004003;
  }
  else {
    uVar3 = fn_82E57820(param_2,param_3,param_4);
    if (-1 < (int)uVar3) {
      pbVar4 = (byte *)(param_1 + 0x48);
      pbVar5 = &lbl_820ED058;
      pbVar6 = pbVar4;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar6;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar5 != &lbl_820ED068);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        uVar3 = fn_82E279A0(lbl_821533F8,lbl_82153400,param_2,param_4);
      }
      else {
        pbVar6 = &lbl_820F8EB8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar4;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar6 != &lbl_820F8EC8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          if (0xb < (param_4 & 0xffffffff)) {
            uVar7 = *(ushort *)((int)param_2 + 9) << 8 | *(ushort *)((int)param_2 + 9) >> 8;
            *param_2 = (uint)(byte)*param_2 << 0x18 | (uint)*(byte *)((int)param_2 + 2) << 0x10 |
                       (uint)*(byte *)((int)param_2 + 1) << 8 | (uint)*(byte *)param_2;
            *(ushort *)((int)param_2 + 9) = uVar7;
            param_2[1] = (uint)*(byte *)((int)param_2 + 7) << 0x18 |
                         (uint)*(byte *)((int)param_2 + 6) << 0x10 |
                         (uint)*(byte *)((int)param_2 + 5) << 8 | (uint)*(byte *)(param_2 + 1);
            if (((param_2[2] & 0x2000000) != 0) && (0x27 < uVar7)) {
              *(ushort *)((int)param_2 + 0x17) =
                   *(ushort *)((int)param_2 + 0x17) << 8 | *(ushort *)((int)param_2 + 0x17) >> 8;
              *(ushort *)((int)param_2 + 0x19) =
                   *(ushort *)((int)param_2 + 0x19) << 8 | *(ushort *)((int)param_2 + 0x19) >> 8;
              *(uint *)((int)param_2 + 0xb) =
                   (uint)*(byte *)((int)param_2 + 0xe) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0xd) << 0x10 | (uint)*(byte *)(param_2 + 3) << 8 |
                   (uint)*(byte *)((int)param_2 + 0xb);
              *(uint *)((int)param_2 + 0xf) =
                   (uint)*(byte *)((int)param_2 + 0x12) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0x11) << 0x10 | (uint)*(byte *)(param_2 + 4) << 8
                   | (uint)*(byte *)((int)param_2 + 0xf);
              *(uint *)((int)param_2 + 0x13) =
                   (uint)*(byte *)((int)param_2 + 0x16) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0x15) << 0x10 | (uint)*(byte *)(param_2 + 5) << 8
                   | (uint)*(byte *)((int)param_2 + 0x13);
              *(uint *)((int)param_2 + 0x1b) =
                   (uint)*(byte *)((int)param_2 + 0x1e) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0x1d) << 0x10 | (uint)*(byte *)(param_2 + 7) << 8
                   | (uint)*(byte *)((int)param_2 + 0x1b);
              *(uint *)((int)param_2 + 0x1f) =
                   (uint)*(byte *)((int)param_2 + 0x22) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0x21) << 0x10 | (uint)*(byte *)(param_2 + 8) << 8
                   | (uint)*(byte *)((int)param_2 + 0x1f);
              *(uint *)((int)param_2 + 0x23) =
                   (uint)*(byte *)((int)param_2 + 0x26) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0x25) << 0x10 | (uint)*(byte *)(param_2 + 9) << 8
                   | (uint)*(byte *)((int)param_2 + 0x23);
              *(uint *)((int)param_2 + 0x27) =
                   (uint)*(byte *)((int)param_2 + 0x2a) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0x29) << 0x10 | (uint)*(byte *)(param_2 + 10) << 8
                   | (uint)*(byte *)((int)param_2 + 0x27);
              *(uint *)((int)param_2 + 0x2b) =
                   (uint)*(byte *)((int)param_2 + 0x2e) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0x2d) << 0x10 |
                   (uint)*(byte *)(param_2 + 0xb) << 8 | (uint)*(byte *)((int)param_2 + 0x2b);
              *(uint *)((int)param_2 + 0x2f) =
                   (uint)*(byte *)((int)param_2 + 0x32) << 0x18 |
                   (uint)*(byte *)((int)param_2 + 0x31) << 0x10 |
                   (uint)*(byte *)(param_2 + 0xc) << 8 | (uint)*(byte *)((int)param_2 + 0x2f);
              return uVar3;
            }
          }
          uVar3 = 0xffffffffc00d3a9a;
        }
        else {
          uVar3 = 0xffffffff80004001;
        }
      }
    }
  }
  return uVar3;
}


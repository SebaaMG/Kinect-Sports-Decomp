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
extern int fn_82AB15D0();
extern int fn_82AB18E8();
extern int fn_82AB29E8();
extern int fn_82AB2CC0();
extern int fn_82AB2E60();
extern int fn_82AB2FA8();
extern unsigned int lbl_831606B8;


void fn_82AB3890(int param_1,undefined8 param_2,uint *param_3,longlong param_4,uint param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((int)param_4 != 0) {
    do {
      uVar1 = param_5 & 1;
      uVar2 = param_6 & 1;
      param_6 = (int)param_6 >> 1;
      param_5 = (int)param_5 >> 2;
      if (uVar1 == 1) {
        fn_82AB2E60(param_1);
        fn_82AB18E8(param_1,0xffffffff821ce66c);
        fn_82AB2FA8(param_1,param_3,uVar2);
      }
      else {
        if (1 < (param_3[1] >> 0x1b & 3)) {
          uVar4 = 0xffffffff820d6598;
          if ((param_3[1] >> 0x1b & 1) != 1) {
            uVar4 = 0xffffffff820d6594;
          }
          fn_82AB18E8(param_1,0xffffffff820d33c8,uVar4);
        }
        if (((*param_3 & 0xf0000) != 0) || (bVar3 = true, (param_3[2] & 0x1f000000) != 0x2000000)) {
          bVar3 = false;
        }
        if (!bVar3) {
          fn_82AB2E60(param_1);
          fn_82AB18E8(param_1,0xffffffff821ce66c);
          fn_82AB29E8(param_1,param_3);
        }
        uVar1 = *param_3;
        if (*(int *)(&lbl_831606B8 + (*(byte *)(param_3 + 2) & 0x1f) * 4) < 3) {
          if ((((uVar1 & 0xf00000) != 0) || ((uVar1 & 0xfc000000) != 0x14000000)) ||
             (bVar3 = true, (uVar1 & 0x3f00) == 0x1000)) {
            bVar3 = false;
          }
          if (!bVar3) {
            fn_82AB2E60(param_1);
            if (((*param_3 & 0xf0000) != 0) ||
               (bVar3 = true, (param_3[2] & 0x1f000000) != 0x2000000)) {
              bVar3 = false;
            }
            uVar4 = 0xffffffff821ce784;
            if (bVar3) {
              uVar4 = 0xffffffff821ce66c;
            }
            fn_82AB18E8(param_1,uVar4);
            fn_82AB2CC0(param_1,param_3);
          }
        }
        else if ((uVar1 & 0xf00000) != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820d65a0,0x47f);
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 3;
    } while (param_4 != 0);
  }
  *(uint **)(param_1 + 0xc) = param_3;
  return;
}


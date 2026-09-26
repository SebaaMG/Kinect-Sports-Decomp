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
extern int fn_82C4E730();
extern int fn_82C563B0();
extern unsigned int lbl_820FCC74;
extern unsigned int lbl_820FCC94;
extern unsigned int lbl_820FCD28;
extern unsigned int lbl_820FCD50;
extern unsigned int lbl_820FCD58;
extern unsigned int lbl_820FCD74;
extern unsigned int lbl_820FCD9C;
extern unsigned int lbl_820FCDB4;
extern unsigned int lbl_820FCDC0;
extern unsigned int lbl_820FCDD8;
extern unsigned int lbl_820FCDF4;
extern unsigned int lbl_820FCE08;
extern unsigned int lbl_820FCE10;
extern unsigned int lbl_820FCE30;
extern unsigned int lbl_820FCE5C;
extern unsigned int lbl_820FCE6C;
extern unsigned int lbl_820FCE74;
extern unsigned int lbl_820FCE84;
extern unsigned int lbl_820FCE9C;
extern unsigned int lbl_820FCEB8;
extern unsigned int lbl_820FCEC4;
extern unsigned int lbl_820FCEE0;
extern unsigned int lbl_820FCF0C;
extern unsigned int lbl_820FCF1C;
extern unsigned int lbl_820FCF20;
extern unsigned int lbl_820FCF30;
extern unsigned int lbl_820FCF44;
extern unsigned int lbl_820FCF80;
extern unsigned int lbl_820FCF88;
extern unsigned int lbl_820FCFA4;
extern unsigned int lbl_820FCFC4;
extern unsigned int lbl_820FCFE8;
extern unsigned int lbl_820FDFA0;
extern unsigned int lbl_820FE048;
extern unsigned int lbl_820FE0F0;
extern unsigned int lbl_820FE1B0;
extern unsigned int lbl_820FE270;
extern unsigned int lbl_820FE308;
extern unsigned int lbl_820FE3A0;
extern unsigned int lbl_820FE428;
extern unsigned int lbl_820FE4B0;
extern unsigned int lbl_820FE560;
extern unsigned int lbl_820FE610;
extern unsigned int lbl_820FE6B8;
extern unsigned int lbl_820FE760;
extern unsigned int lbl_820FE7C8;
extern unsigned int lbl_820FE830;
extern unsigned int lbl_820FE898;
extern unsigned int lbl_820FE900;
extern unsigned int lbl_820FED50;
extern unsigned int lbl_820FF1A0;
extern unsigned int lbl_820FF5F0;


undefined8 fn_82C4E7C0(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined **)(param_1 + 0xa20) = &lbl_820FE048;
  *(undefined **)(param_1 + 0xa24) = &lbl_820FDFA0;
  *(undefined **)(param_1 + 0xa10) = &lbl_820FCD58;
  *(undefined **)(param_1 + 0xa14) = &lbl_820FCD74;
  *(undefined **)(param_1 + 0xa18) = &lbl_820FCD9C;
  *(undefined **)(param_1 + 0xa1c) = &lbl_820FCDB4;
  *(undefined4 *)(param_1 + 0xa08) = 0xa8;
  *(int *)(param_1 + 0xa04) = param_1 + 0x888;
  *(undefined4 *)(param_1 + 0xa0c) = 0x62;
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  *(undefined4 *)(param_1 + 0xa2c) = 0xa8;
  if (*(int *)(param_1 + 0xa28) != 0) {
    fn_82C563B0(lVar2);
  }
  *(undefined4 *)(param_1 + 0xa28) = 0;
  uVar1 = fn_82C4E730(lVar2,0xffffffff820fdfa0,0xffffffff820fe048,0xa8,param_1 + 0xa04);
  if ((int)uVar1 == 0) {
    *(undefined **)(param_1 + 0xa4c) = &lbl_820FE1B0;
    *(undefined **)(param_1 + 0xa50) = &lbl_820FE0F0;
    *(undefined **)(param_1 + 0xa3c) = &lbl_820FCC74;
    *(undefined **)(param_1 + 0xa40) = &lbl_820FCD28;
    *(undefined **)(param_1 + 0xa44) = &lbl_820FCC94;
    *(undefined4 *)(param_1 + 0xa34) = 0xb9;
    *(undefined **)(param_1 + 0xa48) = &lbl_820FCD50;
    *(int *)(param_1 + 0xa30) = param_1 + 0x894;
    *(undefined4 *)(param_1 + 0xa38) = 0x76;
    *(undefined4 *)(param_1 + 0xa58) = 0xb9;
    if (*(int *)(param_1 + 0xa54) != 0) {
      fn_82C563B0(lVar2);
    }
    *(undefined4 *)(param_1 + 0xa54) = 0;
    uVar1 = fn_82C4E730(lVar2,0xffffffff820fe0f0,0xffffffff820fe1b0,0xb9,param_1 + 0xa30);
    if ((int)uVar1 == 0) {
      *(undefined **)(param_1 + 0xa78) = &lbl_820FE308;
      *(undefined **)(param_1 + 0xa7c) = &lbl_820FE270;
      *(undefined **)(param_1 + 0xa68) = &lbl_820FCE10;
      *(undefined **)(param_1 + 0xa6c) = &lbl_820FCE30;
      *(undefined **)(param_1 + 0xa70) = &lbl_820FCE5C;
      *(undefined4 *)(param_1 + 0xa60) = 0x94;
      *(undefined **)(param_1 + 0xa74) = &lbl_820FCE6C;
      *(int *)(param_1 + 0xa5c) = param_1 + 0x8a0;
      *(undefined4 *)(param_1 + 0xa64) = 0x50;
      *(undefined4 *)(param_1 + 0xa84) = 0x94;
      if (*(int *)(param_1 + 0xa80) != 0) {
        fn_82C563B0(lVar2);
      }
      *(undefined4 *)(param_1 + 0xa80) = 0;
      uVar1 = fn_82C4E730(lVar2,0xffffffff820fe270,0xffffffff820fe308,0x94,param_1 + 0xa5c);
      if ((int)uVar1 == 0) {
        *(undefined **)(param_1 + 0xaa4) = &lbl_820FE428;
        *(undefined **)(param_1 + 0xaa8) = &lbl_820FE3A0;
        *(undefined **)(param_1 + 0xa94) = &lbl_820FCDC0;
        *(undefined **)(param_1 + 0xa98) = &lbl_820FCDD8;
        *(undefined **)(param_1 + 0xa9c) = &lbl_820FCDF4;
        *(undefined4 *)(param_1 + 0xa8c) = 0x84;
        *(undefined **)(param_1 + 0xaa0) = &lbl_820FCE08;
        *(int *)(param_1 + 0xa88) = param_1 + 0x8ac;
        *(undefined4 *)(param_1 + 0xa90) = 0x54;
        *(undefined4 *)(param_1 + 0xab0) = 0x84;
        if (*(int *)(param_1 + 0xaac) != 0) {
          fn_82C563B0(lVar2);
        }
        *(undefined4 *)(param_1 + 0xaac) = 0;
        uVar1 = fn_82C4E730(lVar2,0xffffffff820fe3a0,0xffffffff820fe428,0x84,param_1 + 0xa88);
        if ((int)uVar1 == 0) {
          *(undefined **)(param_1 + 0xad0) = &lbl_820FE760;
          *(undefined **)(param_1 + 0xad4) = &lbl_820FE7C8;
          *(undefined **)(param_1 + 0xac0) = &lbl_820FCEC4;
          *(undefined **)(param_1 + 0xac4) = &lbl_820FCEE0;
          *(undefined4 *)(param_1 + 0xab8) = 0x66;
          *(undefined **)(param_1 + 0xac8) = &lbl_820FCF0C;
          *(undefined **)(param_1 + 0xacc) = &lbl_820FCF1C;
          *(int *)(param_1 + 0xab4) = param_1 + 0x8b8;
          *(undefined4 *)(param_1 + 0xabc) = 0x39;
          *(undefined4 *)(param_1 + 0xadc) = 0x66;
          if (*(int *)(param_1 + 0xad8) != 0) {
            fn_82C563B0(lVar2);
          }
          *(undefined4 *)(param_1 + 0xad8) = 0;
          uVar1 = fn_82C4E730(lVar2,0xffffffff820fe7c8,0xffffffff820fe760,0x66,param_1 + 0xab4);
          if ((int)uVar1 == 0) {
            *(undefined4 *)(param_1 + 0xae4) = 0x66;
            *(undefined4 *)(param_1 + 0xb08) = 0x66;
            *(undefined **)(param_1 + 0xafc) = &lbl_820FE830;
            *(undefined **)(param_1 + 0xb00) = &lbl_820FE898;
            *(undefined **)(param_1 + 0xaec) = &lbl_820FCE74;
            *(undefined **)(param_1 + 0xaf0) = &lbl_820FCE84;
            *(undefined **)(param_1 + 0xaf4) = &lbl_820FCE9C;
            *(undefined **)(param_1 + 0xaf8) = &lbl_820FCEB8;
            *(int *)(param_1 + 0xae0) = param_1 + 0x8c4;
            *(undefined4 *)(param_1 + 0xae8) = 0x42;
            if (*(int *)(param_1 + 0xb04) != 0) {
              fn_82C563B0(lVar2);
            }
            *(undefined4 *)(param_1 + 0xb04) = 0;
            uVar1 = fn_82C4E730(lVar2,0xffffffff820fe898,0xffffffff820fe830,0x66,param_1 + 0xae0);
            if ((int)uVar1 == 0) {
              *(undefined **)(param_1 + 0xb54) = &lbl_820FE560;
              *(undefined **)(param_1 + 0xb58) = &lbl_820FE4B0;
              *(undefined **)(param_1 + 0xb44) = &lbl_820FCF88;
              *(undefined **)(param_1 + 0xb48) = &lbl_820FCFA4;
              *(undefined **)(param_1 + 0xb4c) = &lbl_820FCFC4;
              *(undefined4 *)(param_1 + 0xb3c) = 0xae;
              *(undefined **)(param_1 + 0xb50) = &lbl_820FCFE8;
              *(int *)(param_1 + 0xb38) = param_1 + 0x980;
              *(undefined4 *)(param_1 + 0xb40) = 0x6c;
              *(undefined4 *)(param_1 + 0xb60) = 0xae;
              if (*(int *)(param_1 + 0xb5c) != 0) {
                fn_82C563B0(lVar2);
              }
              *(undefined4 *)(param_1 + 0xb5c) = 0;
              uVar1 = fn_82C4E730(lVar2,0xffffffff820fe4b0,0xffffffff820fe560,0xae,param_1 + 0xb38
                                   );
              if ((int)uVar1 == 0) {
                *(undefined **)(param_1 + 0xb28) = &lbl_820FE6B8;
                *(undefined **)(param_1 + 0xb2c) = &lbl_820FE610;
                *(undefined **)(param_1 + 0xb18) = &lbl_820FCF20;
                *(undefined **)(param_1 + 0xb1c) = &lbl_820FCF30;
                *(undefined **)(param_1 + 0xb20) = &lbl_820FCF44;
                *(undefined4 *)(param_1 + 0xb10) = 0xa2;
                *(undefined **)(param_1 + 0xb24) = &lbl_820FCF80;
                *(int *)(param_1 + 0xb0c) = param_1 + 0x8d0;
                *(undefined4 *)(param_1 + 0xb14) = 0x7d;
                *(undefined4 *)(param_1 + 0xb34) = 0xa2;
                if (*(int *)(param_1 + 0xb30) != 0) {
                  fn_82C563B0(lVar2);
                }
                *(undefined4 *)(param_1 + 0xb30) = 0;
                uVar1 = fn_82C4E730(lVar2,0xffffffff820fe610,0xffffffff820fe6b8,0xa2,
                                      param_1 + 0xb0c);
                if ((int)uVar1 == 0) {
                  *(int *)(param_1 + 0xb7c) = param_1 + 0xa5c;
                  *(int *)(param_1 + 0xb80) = param_1 + 0xa04;
                  *(int *)(param_1 + 0x838) = param_1 + 0x7fc;
                  *(int *)(param_1 + 0xb84) = param_1 + 0xab4;
                  *(int *)(param_1 + 0xb88) = param_1 + 0xa88;
                  *(int *)(param_1 + 0xb8c) = param_1 + 0xa30;
                  *(int *)(param_1 + 0xb90) = param_1 + 0xae0;
                  *(int *)(param_1 + 0x83c) = param_1 + 0x808;
                  *(int *)(param_1 + 0x840) = param_1 + 0x814;
                  *(int *)(param_1 + 0x844) = param_1 + 0x820;
                  *(int *)(param_1 + 0x7e0) = param_1 + 0x7c8;
                  *(int *)(param_1 + 0x7e4) = param_1 + 0x7d4;
                  *(undefined **)(param_1 + 0x7e8) = &lbl_820FF1A0;
                  *(undefined **)(param_1 + 0x7ec) = &lbl_820FF5F0;
                  *(undefined **)(param_1 + 0x7f0) = &lbl_820FE900;
                  uVar1 = 0;
                  *(undefined **)(param_1 + 0x7f4) = &lbl_820FED50;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}


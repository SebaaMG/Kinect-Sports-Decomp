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
extern int fn_82E39C50();
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


longlong fn_82E3A380(undefined8 param_1,int *param_2,undefined8 param_3,undefined4 *param_4,
                      ulonglong *param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uStack_50;
  undefined4 *puStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_50 = 0;
  uStack_3c = lbl_8202E61C;
  uStack_38 = lbl_8202E620;
  uStack_34 = lbl_8202E624;
  lVar1 = (**(code **)(*param_2 + 0x1c))(param_2,param_3);
  if (-1 < lVar1) {
    iVar2 = (**(code **)(*param_2 + 0x24))(param_2,&uStack_40,0x10,&uStack_50);
    if ((-1 < iVar2) && (0xf < uStack_50)) {
      uStack_48 = 0;
      lVar1 = (**(code **)(*param_2 + 0x24))(param_2,&uStack_48,8,&uStack_50);
      if ((-1 < lVar1) && (7 < uStack_50)) {
        puStack_4c = &uStack_40;
        fn_82E39C50(&uStack_40,&puStack_4c);
        uVar3 = ((uStack_48 & 0xff) << 0x18 |
                (uStack_48 & 0xff00) << 8 |
                (ulonglong)((((U64)(uStack_48) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_48) >> 32) & 0xFFFFFFFF) >> 0x18))
                << 0x20 | ((ulonglong)(((U64)(uStack_48) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                          ((ulonglong)(((U64)(uStack_48) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                          (ulonglong)((((U64)(uStack_48) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                          (ulonglong)((((U64)(uStack_48) >> 0) & 0xFFFFFFFF) >> 0x18);
        if (0x17 < uVar3) {
          *param_4 = uStack_40;
          param_4[1] = uStack_3c;
          param_4[2] = uStack_38;
          param_4[3] = uStack_34;
          *param_5 = uVar3;
          return lVar1;
        }
      }
    }
    lVar1 = -0x3ff2c566;
  }
  return lVar1;
}


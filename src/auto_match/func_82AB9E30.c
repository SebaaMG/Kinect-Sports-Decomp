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
extern int fn_82AB6EC0();
extern int fn_82AB6F58();
extern int fn_82AB7010();
extern int fn_82AB7C30();
extern int fn_82AB81E8();
extern int fn_82AB9738();
extern int fn_82B69A00();
extern int fn_82B6C978();
extern int fn_82B6CFD8();
extern int fn_82B6D168();
extern int fn_82B6D410();
extern int fn_82B7B7B8();
extern int fn_82B7D3B0();
extern int fn_82B7E460();
extern int fn_82B7F3D8();
extern int fn_82B7F430();
extern int fn_82B800F0();
extern int fn_82B80178();
extern int fn_82BA02A8();


undefined8 fn_82AB9E30(int param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar8;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar8 = fn_82B69A00(*(undefined4 *)(param_1 + 0x1c),1);
  uVar3 = fn_82AB6EC0(param_2,0);
  lVar4 = fn_82AB9738(uVar2,uVar3);
  if (lVar4 == 0) {
    uVar9 = 0x15e;
    uVar3 = 0xffffffff820d770c;
  }
  else {
    uVar9 = fn_82AB6EC0(param_2,1);
    lVar5 = fn_82AB9738(uVar2,uVar9);
    if (lVar5 != 0) {
      uVar6 = fn_82B6D410(*(undefined4 *)(param_1 + 0xc),0);
      *param_3 = (int)uVar6;
      if ((uVar6 & 0xffffffff) == 0) {
        fn_82AB15D0(uVar6,0xffffffff820d2ea4,0xffffffff820d76cc,0xffffffff820d7628,0x172);
        return 0x10;
      }
      uVar7 = fn_82B7F430();
      fn_82AB6F58(uVar7,uVar3);
      uVar7 = fn_82B7F3D8(*param_3);
      fn_82AB6F58(uVar7,uVar9);
      if (iVar8 == 0) {
        iVar8 = fn_82B6CFD8(*(undefined4 *)(param_1 + 0x14),param_2,*param_3);
        if (iVar8 == 0) {
          iVar8 = fn_82B6D168(*(undefined4 *)(param_1 + 0x14),param_2,*param_3);
          if (iVar8 == 0) {
            fn_82AB81E8(*(undefined4 *)(param_1 + 0x28));
            fn_82AB81E8(*(undefined4 *)(param_1 + 0x2c));
            uVar2 = *(undefined4 *)(param_1 + 0x28);
            uVar7 = fn_82B7F430(*param_3);
            fn_82AB7010(uVar7,uVar2);
            uVar2 = *(undefined4 *)(param_1 + 0x2c);
            uVar7 = fn_82B7F3D8(*param_3);
            fn_82AB7010(uVar7,uVar2);
            fn_82BA02A8(uVar1,0xffffffff820d76b0,uVar9);
            fn_82BA02A8(uVar1,0xffffffff820d7694,uVar3);
            uVar3 = fn_82B7F3D8(*param_3);
            uVar9 = fn_82B7F430(*param_3);
            uVar3 = fn_82B7D3B0(uVar1,uVar9,uVar3,lVar4,lVar5,param_2);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            fn_82B7F430(*param_3);
            uVar3 = fn_82AB7C30();
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            fn_82B7F3D8(*param_3);
            uVar3 = fn_82AB7C30();
            if ((int)uVar3 != 0) {
              return uVar3;
            }
          }
          fn_82B800F0(*param_3);
          fn_82B80178(*param_3);
          uVar3 = fn_82B7F430(*param_3);
          uVar9 = fn_82B7F3D8(*param_3);
          fn_82B6C978(*(undefined4 *)(param_1 + 0x14),uVar9,uVar3);
        }
      }
      else {
        fn_82AB81E8(*(undefined4 *)(param_1 + 0x28));
        fn_82AB81E8(*(undefined4 *)(param_1 + 0x2c));
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        uVar3 = fn_82B7F430(*param_3);
        fn_82AB7010(uVar3,uVar1);
        uVar1 = *(undefined4 *)(param_1 + 0x2c);
        uVar3 = fn_82B7F3D8(*param_3);
        fn_82AB7010(uVar3,uVar1);
        fn_82B7B7B8(*(undefined4 *)(param_1 + 0x18),param_2,*param_3);
        fn_82B7F430(*param_3);
        uVar3 = fn_82AB7C30();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        fn_82B7F3D8(*param_3);
        uVar3 = fn_82AB7C30();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      fn_82B7E460(*param_3,param_2);
      return 0;
    }
    uVar9 = 0x167;
    uVar3 = 0xffffffff820d76fc;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,uVar3,0xffffffff820d7628,uVar9);
  return 0x13;
}


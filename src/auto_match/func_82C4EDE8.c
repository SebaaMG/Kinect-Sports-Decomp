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
extern int fn_82C4ED60();
extern int fn_82C563B0();
extern int fn_82C563B8();
extern int fn_82C6FA00();
extern int fn_82C7B780();
extern int fn_82CA23F0();
extern int fn_82CAADA0();
extern int fn_82CAB258();
extern int fn_82CABB98();
extern int fn_82CAD058();
extern int fn_82CAD258();


undefined8 fn_82C4EDE8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  if (*(int *)(param_1 + 0x3c4c) != 0) {
    fn_82C6FA00();
  }
  if (*(int *)(param_1 + 0x3c58) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x3c58) = 0;
  }
  if (*(int *)(param_1 + 0x3c60) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x3c60) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x75c) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x75c) = 0;
  }
  *(undefined4 *)(param_1 + 0x760) = 0;
  if (*(int *)(param_1 + 0x5700) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x5700) = 0;
  }
  if (*(int *)(param_1 + 0x5704) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x5704) = 0;
  }
  if (*(int *)(param_1 + 0x5708) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x5708) = 0;
  }
  if (5 < *(int *)(param_1 + 0x3cb0)) {
    if (*(int *)(param_1 + 0x164) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    if (*(int *)(param_1 + 0x3bb0) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0x3bb0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x55b8) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x55b8) = 0;
  }
  if (*(int *)(param_1 + 0x55d4) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x55d4) = 0;
  }
  if (*(int *)(param_1 + 0x55c4) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x55c4) = 0;
  }
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    if (*(int *)(param_1 + 0x50d8) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x50d8) = 0;
    }
    if (*(int *)(param_1 + 0x50dc) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x50dc) = 0;
    }
    if (*(int *)(param_1 + 0x50e0) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x50e0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x5748) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x5748) = 0;
  }
  fn_82CAD258(param_1,param_1 + 0x5758);
  fn_82CAD258(param_1,param_1 + 0x5764);
  fn_82CAD258(param_1,param_1 + 0x5770);
  fn_82CAD258(param_1,param_1 + 0x577c);
  fn_82CAD258(param_1,param_1 + 0x574c);
  if (*(int *)(param_1 + 0x5498) != 0) {
    fn_82CA23F0();
    *(undefined4 *)(param_1 + 0x5498) = 0;
  }
  if (*(int *)(param_1 + 0x754) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x754) = 0;
  }
  if (*(int *)(param_1 + 0xb0c4) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      fn_82C4ED60(lVar4);
      if (*(int *)(param_1 + 0xea0) != 0) {
        fn_82C563B8(lVar4);
        *(undefined4 *)(param_1 + 0xea0) = 0;
      }
    }
    else if (*(int *)(param_1 + 0xea0) != 0) {
      fn_82C563B0(lVar4);
    }
    fn_82C4ED60(lVar4,*(undefined4 *)(param_1 + 0xea8));
    if (*(int *)(param_1 + 0xea8) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xea8) = 0;
    }
    *(undefined4 *)(param_1 + 0xea8) = 0;
    *(undefined4 *)(param_1 + 0xea0) = 0;
    fn_82C4ED60(lVar4,*(undefined4 *)(param_1 + 0xea4));
    if (*(int *)(param_1 + 0xea4) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xea4) = 0;
    }
    fn_82C4ED60(lVar4,*(undefined4 *)(param_1 + 0xeac));
    if (*(int *)(param_1 + 0xeac) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xeac) = 0;
    }
    *(undefined4 *)(param_1 + 0xea4) = 0;
    *(undefined4 *)(param_1 + 0xeac) = 0;
    fn_82C4ED60(lVar4,*(undefined4 *)(param_1 + 0xeb0));
    if (*(int *)(param_1 + 0xeb0) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xeb0) = 0;
    }
    fn_82C4ED60(lVar4,*(undefined4 *)(param_1 + 0xeb4));
    if (*(int *)(param_1 + 0xeb4) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xeb4) = 0;
    }
    *(undefined4 *)(param_1 + 0xeb4) = 0;
    *(undefined4 *)(param_1 + 0xeb0) = 0;
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x770) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x770) = 0;
  }
  if (*(int *)(param_1 + 0x774) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x774) = 0;
  }
  if (*(int *)(param_1 + 0x778) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x778) = 0;
  }
  if (*(int *)(param_1 + 0x77c) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x77c) = 0;
  }
  if (*(int *)(param_1 + 0xf84) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0xf84) = 0;
  }
  if (*(int *)(param_1 + 0x570c) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x570c) = 0;
  }
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      iVar1 = (iVar2 + iVar3 + 0x2c95) * 4;
      if (*(int *)(iVar1 + param_1) != 0) {
        fn_82C563B0(lVar4);
        *(undefined4 *)(iVar1 + param_1) = 0;
      }
      iVar1 = (iVar2 + iVar3 + 0x2c9d) * 4;
      if (*(int *)(iVar1 + param_1) != 0) {
        fn_82C563B0(lVar4);
        *(undefined4 *)(iVar1 + param_1) = 0;
      }
      iVar1 = (iVar2 + iVar3 + 0x2ca5) * 4;
      if (*(int *)(iVar1 + param_1) != 0) {
        fn_82C563B0(lVar4);
        *(undefined4 *)(iVar1 + param_1) = 0;
      }
      iVar1 = (iVar2 + 0x2cad + iVar3) * 4;
      if (*(int *)(iVar1 + param_1) != 0) {
        fn_82C563B0(lVar4);
        *(undefined4 *)(iVar1 + param_1) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar2 = iVar2 + 2;
  } while (iVar2 < 8);
  if (*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) {
    if (*(int *)(param_1 + 0xc0c) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xc0c) = 0;
    }
    if (*(int *)(param_1 + 0x3ba8) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3ba8) = 0;
    }
    if (*(int *)(param_1 + 0x3be4) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3be4) = 0;
    }
    if (*(int *)(param_1 + 0x3bfc) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3bfc) = 0;
    }
    if (*(int *)(param_1 + 0x3bec) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3bec) = 0;
    }
    if (*(int *)(param_1 + 0x3bf4) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3bf4) = 0;
    }
    if (*(int *)(param_1 + 0x6f0) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x6f0) = 0;
    }
    if (*(int *)(param_1 + 0x6f8) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x6f8) = 0;
    }
    goto LAB_82c4f464;
  }
  if (param_1 == *(int *)(*(int *)(param_1 + 0x6070) + 0x43d8)) {
    if (*(int *)(param_1 + 0xc0c) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xc0c) = 0;
    }
    if (*(int *)(param_1 + 0x3ba8) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3ba8) = 0;
    }
    if (*(int *)(param_1 + 0x3be4) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3be4) = 0;
    }
    if (*(int *)(param_1 + 0x3bfc) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3bfc) = 0;
    }
    if (*(int *)(param_1 + 0x6f0) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x6f0) = 0;
    }
    if (*(int *)(param_1 + 0x6f8) != 0) {
      fn_82C563B8(lVar4);
      goto LAB_82c4f36c;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc0c) = 0;
    *(undefined4 *)(param_1 + 0x3be4) = 0;
    *(undefined4 *)(param_1 + 0x3bfc) = 0;
    *(undefined4 *)(param_1 + 0x3ba8) = 0;
    *(undefined4 *)(param_1 + 0x6f0) = 0;
LAB_82c4f36c:
    *(undefined4 *)(param_1 + 0x6f8) = 0;
  }
  if (*(int *)(param_1 + 0x3bec) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x3bec) = 0;
  }
  if (*(int *)(param_1 + 0x3bf4) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x3bf4) = 0;
  }
LAB_82c4f464:
  if (*(int *)(param_1 + 0x118) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0xc10) != 0)) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0xc10) = 0;
  }
  if (*(int *)(param_1 + 0x3a04) != 0) {
    if (*(int *)(param_1 + 0x3a18) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3a18) = 0;
    }
    if (*(int *)(param_1 + 0x3a1c) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0x3a1c) = 0;
    }
    if (*(int *)(param_1 + 0x3a20) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0x3a20) = 0;
    }
    if (*(int *)(param_1 + 0xeb8) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0xeb8) = 0;
    }
  }
  if (*(int *)(param_1 + 0x768) != 0) {
    fn_82C563B8(lVar4);
    *(undefined4 *)(param_1 + 0x768) = 0;
  }
  if (*(int *)(param_1 + 0x76c) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  *(undefined4 *)(param_1 + 0x3dd8) = 0;
  if (4 < *(int *)(param_1 + 0x3cb0)) {
    fn_82CAD058(param_1,*(undefined4 *)(param_1 + 0x7b8));
    *(undefined4 *)(param_1 + 0x7b8) = 0;
    fn_82CAB258(param_1 + 0x7b0);
    fn_82CABB98(param_1 + 0x7b4);
  }
  fn_82CAD258(param_1,param_1 + 0x7c8);
  fn_82CAD258(param_1,param_1 + 0x7d4);
  fn_82CAD258(param_1,param_1 + 0x7fc);
  fn_82CAD258(param_1,param_1 + 0x808);
  fn_82CAD258(param_1,param_1 + 0x814);
  fn_82CAD258(param_1,param_1 + 0x820);
  fn_82CAD258(param_1,param_1 + 0x848);
  fn_82CAD258(param_1,param_1 + 0x854);
  fn_82CAD258(param_1,param_1 + 0x864);
  fn_82CAD258(param_1,param_1 + 0x870);
  fn_82CAD258(param_1,param_1 + 0x87c);
  fn_82CAD258(param_1,param_1 + 0x888);
  fn_82CAD258(param_1,param_1 + 0x894);
  fn_82CAD258(param_1,param_1 + 0x8a0);
  fn_82CAD258(param_1,param_1 + 0x8ac);
  fn_82CAD258(param_1,param_1 + 0x8b8);
  fn_82CAD258(param_1,param_1 + 0x8c4);
  fn_82CAD258(param_1,param_1 + 0x980);
  fn_82CAD258(param_1,param_1 + 0x8d0);
  fn_82CAD258(param_1,param_1 + 0x8ec);
  fn_82CAD258(param_1,param_1 + 0x8f8);
  fn_82CAD258(param_1,param_1 + 0x904);
  fn_82CAD258(param_1,param_1 + 0x910);
  fn_82CAD258(param_1,param_1 + 0x91c);
  fn_82CAD258(param_1,param_1 + 0x928);
  fn_82CAD258(param_1,param_1 + 0x934);
  fn_82CAD258(param_1,param_1 + 0x940);
  fn_82CAD258(param_1,param_1 + 0x98c);
  fn_82CAD258(param_1,param_1 + 0x998);
  fn_82CAD258(param_1,param_1 + 0x9a4);
  fn_82CAD258(param_1,param_1 + 0x9b4);
  fn_82CAD258(param_1,param_1 + 0x9c0);
  fn_82CAD258(param_1,param_1 + 0x9cc);
  fn_82CAD258(param_1,param_1 + 0x9dc);
  fn_82CAD258(param_1,param_1 + 0x9e8);
  fn_82CAD258(param_1,param_1 + 0x9f4);
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    fn_82CAD258(param_1,param_1 + 0x5134);
    fn_82CAD258(param_1,param_1 + 0x5140);
    fn_82CAD258(param_1,param_1 + 0x514c);
    fn_82CAD258(param_1,param_1 + 0x5158);
    fn_82CAD258(param_1,param_1 + 0x5174);
    fn_82CAD258(param_1,param_1 + 0x5180);
    fn_82CAD258(param_1,param_1 + 0x518c);
    fn_82CAD258(param_1,param_1 + 0x5198);
    fn_82CAD258(param_1,param_1 + 0x5210);
    fn_82CAD258(param_1,param_1 + 0x521c);
    fn_82CAD258(param_1,param_1 + 0x5228);
    fn_82CAD258(param_1,param_1 + 0x5234);
    fn_82CAD258(param_1,param_1 + 0x5240);
    fn_82CAD258(param_1,param_1 + 0x524c);
    fn_82CAD258(param_1,param_1 + 0x5258);
    fn_82CAD258(param_1,param_1 + 0x5264);
    fn_82CAD258(param_1,param_1 + 0x5270);
    fn_82CAD258(param_1,param_1 + 0x527c);
    fn_82CAD258(param_1,param_1 + 0x5288);
    fn_82CAD258(param_1,param_1 + 0x5294);
    fn_82CAD258(param_1,param_1 + 0x52a0);
    fn_82CAD258(param_1,param_1 + 0x52ac);
    fn_82CAD258(param_1,param_1 + 0x52b8);
    fn_82CAD258(param_1,param_1 + 0x52c4);
    fn_82CAD258(param_1,param_1 + 0x52d0);
    fn_82CAD258(param_1,param_1 + 0x52dc);
    fn_82CAD258(param_1,param_1 + 0x52e8);
    fn_82CAD258(param_1,param_1 + 0x52f4);
    fn_82CAD258(param_1,param_1 + 0x5300);
    fn_82CAD258(param_1,param_1 + 0x530c);
    fn_82CAD258(param_1,param_1 + 0x5318);
    fn_82CAD258(param_1,param_1 + 0x5324);
    fn_82CAD258(param_1,param_1 + 0x5330);
    fn_82CAD258(param_1,param_1 + 0x533c);
    fn_82CAD258(param_1,param_1 + 0x5348);
    fn_82CAD258(param_1,param_1 + 0x5354);
    fn_82CAD258(param_1,param_1 + 0x5360);
    fn_82CAD258(param_1,param_1 + 0x536c);
    fn_82CAD258(param_1,param_1 + 0x5378);
    fn_82CAD258(param_1,param_1 + 0x5384);
    fn_82CAD258(param_1,param_1 + 0x5390);
    fn_82CAD258(param_1,param_1 + 0x539c);
    fn_82CAD258(param_1,param_1 + 0x53a8);
    fn_82CAD258(param_1,param_1 + 0x53b4);
    fn_82CAD258(param_1,param_1 + 0x53c0);
    fn_82CAD258(param_1,param_1 + 0x53cc);
    fn_82CAD258(param_1,param_1 + 0x53d8);
    fn_82CAD258(param_1,param_1 + 0x53e4);
    fn_82CAD258(param_1,param_1 + 0x53f0);
    fn_82CAD258(param_1,param_1 + 0x53fc);
    fn_82CAD258(param_1,param_1 + 0x5408);
    fn_82CAD258(param_1,param_1 + 0x5414);
    if (*(int *)(param_1 + 0x5604) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0x5604) = 0;
    }
    if (*(int *)(param_1 + 0x5608) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0x5608) = 0;
    }
  }
  fn_82C7B780(param_1);
  if (*(int *)(param_1 + 0xb30) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0xb30) = 0;
  }
  if (*(int *)(param_1 + 0xb5c) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0xb5c) = 0;
  }
  if (*(int *)(param_1 + 0xb04) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0xb04) = 0;
  }
  if (*(int *)(param_1 + 0xad8) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0xad8) = 0;
  }
  if (*(int *)(param_1 + 0xaac) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0xaac) = 0;
  }
  if (*(int *)(param_1 + 0xa80) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0xa80) = 0;
  }
  if (*(int *)(param_1 + 0xa54) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0xa54) = 0;
  }
  if (*(int *)(param_1 + 0xa28) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0xa28) = 0;
  }
  if (*(int *)(param_1 + 0x164) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  if (*(int *)(param_1 + 0x170) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  if (*(int *)(param_1 + 0x174) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  if (*(int *)(param_1 + 0x3bb0) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x3bb0) = 0;
  }
  if (*(int *)(param_1 + 0xfac) != 0) {
    if (*(int *)(param_1 + 0x1d0) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x1d0) = 0;
    }
    if (*(int *)(param_1 + 0x3b90) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0x3b90) = 0;
    }
    if (*(int *)(param_1 + 0xbc4) != 0) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xbc4) = 0;
    }
    if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0xc10) != 0)) {
      fn_82C563B8(lVar4);
      *(undefined4 *)(param_1 + 0xc10) = 0;
    }
    if (*(int *)(param_1 + 0x3bc8) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0x3bc8) = 0;
    }
  }
  if (*(int *)(param_1 + 0x3ba4) != 0) {
    fn_82CAADA0(lVar4);
    if (*(int *)(param_1 + 0x3ba4) != 0) {
      fn_82C563B0(lVar4);
      *(undefined4 *)(param_1 + 0x3ba4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x5da4) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x5da4) = 0;
  }
  if (*(int *)(param_1 + 0x566c) != 0) {
    fn_82C563B0(lVar4);
    *(undefined4 *)(param_1 + 0x566c) = 0;
  }
  if (*(int *)(param_1 + 0xb190) != 0) {
    fn_82C563B0(lVar4);
    *(int *)(param_1 + 0xb190) = 0;
  }
  if (*(int *)(param_1 + 0xb1a4) != 0) {
    fn_82C563B8(lVar4);
    *(int *)(param_1 + 0xb1a4) = 0;
  }
  if (*(int *)(param_1 + 0xb1a8) != 0) {
    fn_82C563B0(lVar4);
    *(int *)(param_1 + 0xb1a8) = 0;
  }
  return 0;
}


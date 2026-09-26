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
extern int fn_82C69448();
extern int fn_82CAAF00();
extern int fn_82CABB98();


void fn_82C4FCF8(int param_1)

{
  int iVar1;
  longlong lVar2;
  int aiStack_40 [16];
  
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  if (*(int *)(param_1 + 0x5700) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x5700) = 0;
  }
  if (*(int *)(param_1 + 0x5704) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x5704) = 0;
  }
  if (*(int *)(param_1 + 0x5708) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x5708) = 0;
  }
  if (*(int *)(param_1 + 0x570c) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x570c) = 0;
  }
  if (*(int *)(param_1 + 0xb0c4) == 0) {
    fn_82C4ED60(lVar2,*(undefined4 *)(param_1 + 0xea0));
    iVar1 = *(int *)(param_1 + 0xea0);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xea0,0);
      fn_82C563B0(lVar2,iVar1);
    }
    fn_82C4ED60(lVar2,*(undefined4 *)(param_1 + 0xea8));
    iVar1 = *(int *)(param_1 + 0xea8);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xea8,0);
      fn_82C563B0(lVar2,iVar1);
    }
    fn_82C4ED60(lVar2,*(undefined4 *)(param_1 + 0xea4));
    iVar1 = *(int *)(param_1 + 0xea4);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xea4,0);
      fn_82C563B0(lVar2,iVar1);
    }
    fn_82C4ED60(lVar2,*(undefined4 *)(param_1 + 0xeac));
    iVar1 = *(int *)(param_1 + 0xeac);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xeac,0);
      fn_82C563B0(lVar2,iVar1);
    }
    fn_82C4ED60(lVar2,*(undefined4 *)(param_1 + 0xeb0));
    iVar1 = *(int *)(param_1 + 0xeb0);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xeb0,0);
      fn_82C563B0(lVar2,iVar1);
    }
    fn_82C4ED60(lVar2,*(undefined4 *)(param_1 + 0xeb4));
    iVar1 = *(int *)(param_1 + 0xeb4);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xeb4,0);
      fn_82C563B0(lVar2,iVar1);
    }
    if (*(int *)(param_1 + 0x5710) != 0) {
      aiStack_40[0] = 0;
      fn_82CAAF00(*(undefined4 *)(param_1 + 0x3ba4),aiStack_40,0xffffffffffffffff);
      fn_82C4ED60(lVar2,aiStack_40[0]);
      if (aiStack_40[0] != 0) {
        fn_82C563B8(lVar2);
      }
    }
  }
  if (*(int *)(param_1 + 0xb190) != 0) {
    fn_82C563B0(lVar2);
    *(int *)(param_1 + 0xb190) = 0;
  }
  if (*(int *)(param_1 + 0xb1a4) != 0) {
    fn_82C563B8(lVar2);
    *(int *)(param_1 + 0xb1a4) = 0;
  }
  if (*(int *)(param_1 + 0xb1a8) != 0) {
    fn_82C563B0(lVar2);
    *(int *)(param_1 + 0xb1a8) = 0;
  }
  if (*(int *)(param_1 + 0x55b8) != 0) {
    fn_82C563B0(lVar2);
    *(undefined4 *)(param_1 + 0x55b8) = 0;
  }
  if (*(int *)(param_1 + 0x55d4) != 0) {
    fn_82C563B0(lVar2);
    *(undefined4 *)(param_1 + 0x55d4) = 0;
  }
  if (*(int *)(param_1 + 0x55c4) != 0) {
    fn_82C563B0(lVar2);
    *(undefined4 *)(param_1 + 0x55c4) = 0;
  }
  if (*(int *)(param_1 + 0xf84) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0xf84) = 0;
  }
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    if (*(int *)(param_1 + 0x50d8) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x50d8) = 0;
    }
    if (*(int *)(param_1 + 0x50dc) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x50dc) = 0;
    }
    if (*(int *)(param_1 + 0x50e0) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x50e0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x3b90) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x3b90) = 0;
  }
  if (*(int *)(param_1 + 0xbc4) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0xbc4) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) {
    if (*(int *)(param_1 + 0x3ba8) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3ba8) = 0;
    }
    if (*(int *)(param_1 + 0xc0c) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0xc0c) = 0;
    }
    if (*(int *)(param_1 + 0x3be4) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3be4) = 0;
    }
    if (*(int *)(param_1 + 0x3bfc) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3bfc) = 0;
    }
    if (*(int *)(param_1 + 0x3bec) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3bec) = 0;
    }
    if (*(int *)(param_1 + 0x3bf4) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3bf4) = 0;
    }
    if (*(int *)(param_1 + 0x6f0) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x6f0) = 0;
    }
    if (*(int *)(param_1 + 0x6f8) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x6f8) = 0;
    }
  }
  else {
    if (param_1 == *(int *)(*(int *)(param_1 + 0x6070) + 0x43d8)) {
      if (*(int *)(param_1 + 0xc0c) != 0) {
        fn_82C563B8(lVar2);
        *(undefined4 *)(param_1 + 0xc0c) = 0;
      }
      if (*(int *)(param_1 + 0x3be4) != 0) {
        fn_82C563B8(lVar2);
        *(undefined4 *)(param_1 + 0x3be4) = 0;
      }
      if (*(int *)(param_1 + 0x3bfc) != 0) {
        fn_82C563B8(lVar2);
        *(undefined4 *)(param_1 + 0x3bfc) = 0;
      }
      if (*(int *)(param_1 + 0x3ba8) != 0) {
        fn_82C563B8(lVar2);
        *(undefined4 *)(param_1 + 0x3ba8) = 0;
      }
      if (*(int *)(param_1 + 0x6f0) != 0) {
        fn_82C563B8(lVar2);
        *(undefined4 *)(param_1 + 0x6f0) = 0;
      }
      if (*(int *)(param_1 + 0x6f8) != 0) {
        fn_82C563B8(lVar2);
        goto LAB_82c5011c;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc0c) = 0;
      *(undefined4 *)(param_1 + 0x3be4) = 0;
      *(undefined4 *)(param_1 + 0x3bfc) = 0;
      *(undefined4 *)(param_1 + 0x3ba8) = 0;
      *(undefined4 *)(param_1 + 0x6f0) = 0;
LAB_82c5011c:
      *(undefined4 *)(param_1 + 0x6f8) = 0;
    }
    if (*(int *)(param_1 + 0x3bec) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3bec) = 0;
    }
    if (*(int *)(param_1 + 0x3bf4) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3bf4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0xc10) != 0)) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0xc10) = 0;
  }
  if (*(int *)(param_1 + 0x3bc8) != 0) {
    fn_82C563B0(lVar2);
    *(undefined4 *)(param_1 + 0x3bc8) = 0;
  }
  if (*(int *)(param_1 + 0x3a04) != 0) {
    if (*(int *)(param_1 + 0x3a18) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3a18) = 0;
    }
    if (*(int *)(param_1 + 0x3a1c) != 0) {
      fn_82C563B0(lVar2);
      *(undefined4 *)(param_1 + 0x3a1c) = 0;
    }
    if (*(int *)(param_1 + 0x3a20) != 0) {
      fn_82C563B0(lVar2);
      *(undefined4 *)(param_1 + 0x3a20) = 0;
    }
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x768) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x768) = 0;
  }
  if (*(int *)(param_1 + 0x76c) != 0) {
    fn_82C563B0(lVar2);
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  if (4 < *(int *)(param_1 + 0x3cb0)) {
    fn_82CABB98(param_1 + 0x7b4);
  }
  if (*(int *)(param_1 + 0x3d68) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x3d68) = 0;
  }
  if (*(int *)(param_1 + 0x3d70) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x3d70) = 0;
  }
  if (*(int *)(param_1 + 0x3d6c) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x3d6c) = 0;
  }
  if (*(int *)(param_1 + 0x3d74) != 0) {
    fn_82C563B8(lVar2);
    *(undefined4 *)(param_1 + 0x3d74) = 0;
  }
  if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) ||
     (param_1 == *(int *)(*(int *)(param_1 + 0x6070) + 0x43d8))) {
    if (*(int *)(param_1 + 0x3d78) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d78) = 0;
    }
    if (*(int *)(param_1 + 0x3d80) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d80) = 0;
    }
    if (*(int *)(param_1 + 0x3d88) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d88) = 0;
    }
    if (*(int *)(param_1 + 0x3d90) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d90) = 0;
    }
    if (*(int *)(param_1 + 0x3d98) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d98) = 0;
    }
    if (*(int *)(param_1 + 0x3da0) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3da0) = 0;
    }
    if (*(int *)(param_1 + 0x3da8) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3da8) = 0;
    }
    if (*(int *)(param_1 + 0x3db0) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3db0) = 0;
    }
    if (*(int *)(param_1 + 0x3db8) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3db8) = 0;
    }
    if (*(int *)(param_1 + 0x3dc0) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3dc0) = 0;
    }
    if (*(int *)(param_1 + 0x3dc8) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3dc8) = 0;
    }
    if (*(int *)(param_1 + 0x3dd0) == 0) goto LAB_82c50514;
    fn_82C563B8(lVar2);
  }
  else {
    *(undefined4 *)(param_1 + 0x3d78) = 0;
    *(undefined4 *)(param_1 + 0x3d80) = 0;
    *(undefined4 *)(param_1 + 0x3d88) = 0;
    *(undefined4 *)(param_1 + 0x3d90) = 0;
    *(undefined4 *)(param_1 + 0x3d98) = 0;
    *(undefined4 *)(param_1 + 0x3da0) = 0;
    *(undefined4 *)(param_1 + 0x3da8) = 0;
    *(undefined4 *)(param_1 + 0x3db0) = 0;
    *(undefined4 *)(param_1 + 0x3db8) = 0;
    *(undefined4 *)(param_1 + 0x3dc0) = 0;
    *(undefined4 *)(param_1 + 0x3dc8) = 0;
  }
  *(undefined4 *)(param_1 + 0x3dd0) = 0;
LAB_82c50514:
  if (1 < *(uint *)(param_1 + 0xd40)) {
    if (*(int *)(param_1 + 0x3d7c) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d7c) = 0;
    }
    if (*(int *)(param_1 + 0x3d84) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d84) = 0;
    }
    if (*(int *)(param_1 + 0x3d8c) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d8c) = 0;
    }
    if (*(int *)(param_1 + 0x3d94) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d94) = 0;
    }
    if (*(int *)(param_1 + 0x3d9c) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3d9c) = 0;
    }
    if (*(int *)(param_1 + 0x3da4) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3da4) = 0;
    }
    if (*(int *)(param_1 + 0x3dac) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3dac) = 0;
    }
    if (*(int *)(param_1 + 0x3db4) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3db4) = 0;
    }
    if (*(int *)(param_1 + 0x3dbc) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3dbc) = 0;
    }
    if (*(int *)(param_1 + 0x3dc4) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3dc4) = 0;
    }
    if (*(int *)(param_1 + 0x3dcc) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3dcc) = 0;
    }
    if (*(int *)(param_1 + 0x3dd4) != 0) {
      fn_82C563B8(lVar2);
      *(undefined4 *)(param_1 + 0x3dd4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x566c) != 0) {
    fn_82C563B0(lVar2);
    *(undefined4 *)(param_1 + 0x566c) = 0;
  }
  return;
}


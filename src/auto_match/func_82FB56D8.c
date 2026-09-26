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
extern int fn_82FA9600();
extern int fn_82FAA478();
extern int fn_82FAE150();
extern int fn_82FAE168();
extern int fn_82FB42A0();
extern int fn_82FB54D0();


int fn_82FB56D8(int param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x58) + 4) + 0x1c);
  iVar3 = fn_82FB54D0(param_1,param_3,param_4,param_5);
  if (iVar3 != 0) {
    iVar6 = *(int *)(*(int *)(param_3 + 4) + 0x40);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x60);
    }
    iVar7 = *(int *)(param_2 + 8);
    iVar5 = 0;
    if (iVar7 < 1) {
      if ((((*(uint *)(param_2 + 0x14) & 0x4000000) != 0) && (iVar6 != 0)) &&
         (iVar4 = fn_82FAE168(iVar6), *param_5 == iVar4)) {
        iVar5 = fn_82FAE150(iVar6);
        fn_82FA9600(iVar3);
      }
    }
    else {
      iVar6 = *(int *)(iVar3 + 0x48);
      iVar5 = *(int *)(param_2 + 0x10) + (iVar7 * 3 & 0xfffffffU) * -0x10;
      if (iVar6 < -iVar5) {
        iVar7 = iVar6 + iVar7 + iVar5;
        iVar5 = -iVar6;
      }
    }
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    *(int *)(iVar3 + 0x38) = iVar7;
    *(int *)(iVar3 + 0x34) = iVar5;
    *(undefined4 *)(iVar3 + 0x40) = uVar1;
    *(undefined1 *)(iVar3 + 0x44) = 1;
    *(undefined4 *)(iVar3 + 0x3c) = uVar2;
    if (iVar5 < *(int *)(iVar3 + 8)) {
      *(int *)(iVar3 + 8) = iVar5;
    }
    fn_82FAA478(*(undefined4 *)(param_3 + 4),*(uint *)(param_2 + 0x14) >> 0x1a & 1);
    fn_82FB42A0(iVar3,param_2 + 0x18,-(ulonglong)(uint)param_5[2]);
  }
  return iVar3;
}


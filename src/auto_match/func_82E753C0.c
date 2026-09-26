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
extern int fn_82E50BE8();
extern int fn_82E5FD40();
extern int fn_82F68CC0();


longlong fn_82E753C0(int param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  int *piStack_30;
  int *apiStack_2c [11];
  
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  piStack_30 = (int *)0x0;
  apiStack_2c[0] = (int *)0x0;
  lVar1 = (**(code **)(*param_2 + 0x90))(param_2,&piStack_30);
  if (-1 < lVar1) {
    if (piStack_30 == (int *)0x0) {
      lVar1 = -0x3ff2c945;
      goto LAB_82e754dc;
    }
    uVar3 = fn_82E5FD40(piStack_30,param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    lVar1 = (**(code **)*piStack_30)(piStack_30,0xffffffff821531c8,apiStack_2c);
    if (-1 < lVar1) {
      iVar4 = (**(code **)(*apiStack_2c[0] + 0x98))();
      iVar5 = *(ushort *)(iVar4 + 0x10) + 0x12;
      *(int *)(param_1 + 0x74) = iVar5;
      uVar2 = fn_82E50BE8(iVar5,0,0,0,0);
      *(int *)(param_1 + 0x70) = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        lVar1 = -0x7ff8fff2;
      }
      else {
        fn_82F68CC0(uVar2,iVar4,*(undefined4 *)(param_1 + 0x74));
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))();
    piStack_30 = (int *)0x0;
  }
LAB_82e754dc:
  if (apiStack_2c[0] != (int *)0x0) {
    (**(code **)(*apiStack_2c[0] + 8))();
  }
  return lVar1;
}


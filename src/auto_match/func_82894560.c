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
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8288BC38();
extern int fn_82893DB8();
extern int fn_82897BD0();
extern int fn_8289F2E0();
extern int fn_8289F350();
extern int fn_828BE158();
extern int fn_828C6D50();
extern int fn_82A4AAA8();


void fn_82894560(int *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar5;
  int iVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar7;
  
  piVar5 = (int *)fn_8289F350(param_1[4],param_5);
  fn_8289F2E0(param_1[4],param_4);
  uVar7 = param_3 - (ulonglong)*(byte *)(param_1 + 0x17);
  if (0xff < (uVar7 & 0xffffffff)) {
    uVar7 = uVar7 + 0x100;
  }
  if ((uVar7 == 0) || (bVar2 = true, 0x7f < (uVar7 & 0xffffffff))) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, piVar5 == (int *)0x0)) {
    bVar2 = false;
  }
  if (bVar2) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
    iVar6 = fn_82A4AAA8();
    if (iVar6 != 2) {
      *(char *)(param_1 + 0x17) = (char)param_3;
      param_1[0x14] = 0;
      uVar1 = *(undefined4 *)(param_1[0xd] + 0x38);
      fn_82893DB8(param_1,piVar5);
      fn_8288BC38(param_1,param_6);
      (**(code **)(*param_1 + 0x24))(param_1,uVar1);
      uVar7 = fn_8265C9E0(0xa8);
      if ((uVar7 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_828C6D50(uVar7,param_1,piVar5);
      }
      fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
      iVar6 = param_1[4];
      uVar4 = fn_82897BD0(piVar5);
      fn_828BE158(iVar6,uVar3,uVar4,0);
    }
  }
  return;
}


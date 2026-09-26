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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82635E70();
extern int fn_82635ED0();
extern int fn_82635FD0();
extern int fn_82936610();
extern int fn_82937A60();
extern int fn_8293B978();
extern int fn_8293C408();
extern int fn_82A9F7E0();
extern unsigned int uStack_4c;


undefined8 fn_8293D1E0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  int aiStack_48 [2];
  uint auStack_40 [16];
  
  *(undefined4 *)(param_1 + 300) = 0;
  auStack_50[0] = 0;
  fn_82936610(param_2,auStack_40,aiStack_48,&uStack_4c,auStack_50,0xffffffff82937a60,param_1);
  iVar1 = *(int *)(param_2 + 0x34);
  fn_8293B978(param_1,auStack_40,param_2,iVar1);
  if (iVar1 == 2) {
    if (*(int *)(*(int *)(param_2 + 100) + 0x10) != -0x3eb) {
      fn_82937A60(param_1,0xffffffff82033ac4);
      return 0xffffffff80004005;
    }
    uVar4 = 0x5f - (ulonglong)*(uint *)(*(int *)(param_2 + 100) + 0x18);
    auStack_40[0] =
         (uint)(((uVar4 + ((uVar4 & 0xffffffff) / 3) * -3 & 3) << 5 |
                (uVar4 & 0xffffffff) / 3 & 0xffffffffffffff9f) << 0x14) & 0x7f00000 |
         auStack_40[0] & 0xf80fffff;
  }
  uVar2 = fn_8293C408(param_1,1);
  if (iVar1 == 0) {
    if (aiStack_48[0] == -1) {
      uVar2 = 0xffffffff82031830;
    }
    else {
      if (*(int *)(param_1 + 0x40) != 1) {
        uVar3 = fn_82635ED0(uVar2,auStack_40,aiStack_48[0],uStack_4c);
        goto LAB_8293d310;
      }
      uVar2 = 0xffffffff82033a8c;
    }
    fn_82937A60(param_1,uVar2);
  }
  else {
    uVar3 = fn_82635E70(uVar2,auStack_40,uStack_4c);
LAB_8293d310:
    if (*(int *)(param_2 + 0x50) != 0) {
      fn_82635FD0(uVar2,uVar3,1);
    }
    if (*(int *)(param_1 + 0x144) != 0) {
      fn_82A9F7E0(*(undefined4 *)(param_1 + 0x13c),1,uVar3,*(undefined4 *)(param_2 + 0x20),
                      *(undefined4 *)(param_2 + 0x24),0xffffffffffffffff,0);
    }
  }
  return 0;
}


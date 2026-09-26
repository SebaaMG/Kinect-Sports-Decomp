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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82A1DDC0();
extern int fn_82FEC7F0();
extern int fn_830491F8();
extern int fn_8304D650();
extern int fn_8307DE18();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E188();
extern int fn_8307E218();
extern int fn_8307E478();
extern int fn_8307E4B8();
extern int fn_8307E6E0();


void fn_83049560(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar5;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_50 [4];
  uint auStack_4c [19];
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  fn_8307DE78(*(undefined4 *)(param_1 + 0x28));
  fn_8307E6E0(*(undefined4 *)(param_1 + 0x28));
  uVar1 = fn_8307E188(*(undefined4 *)(param_1 + 0x28),0);
  if (uVar1 == 0) {
    iVar2 = fn_8307E4B8();
    iVar3 = fn_8307E478(*(undefined4 *)(param_1 + 0x28),0);
    if ((iVar2 == 0) && (((iVar3 == 0 || (iVar3 == 1)) || (iVar3 == 2)))) {
      param_2[0xd0] = 0x2e;
      fn_8307E060(*(undefined4 *)(param_1 + 0x28));
      return;
    }
LAB_830495fc:
    param_2[0xd0] = 2;
    fn_8307E060(*(undefined4 *)(param_1 + 0x28));
    return;
  }
  auStack_4c[0] = 0;
  uVar4 = fn_8307E218(*(undefined4 *)(param_1 + 0x28),0,*(undefined2 *)(param_2 + 3),auStack_4c);
  iVar3 = 0;
  uVar7 = *(uint *)(iVar2 + 0x24) >> 0xe;
  for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
    iVar3 = iVar3 + 1;
  }
  uVar5 = 0;
  for (; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
    uVar5 = uVar5 + 1;
  }
  uVar5 = fn_82FEC7F0((uVar5 & 0x1fffff) << 0xb);
  *(int *)(param_1 + 0x40) = (int)uVar5;
  if ((uVar5 & 0xffffffff) == 0) goto LAB_830495fc;
  fn_82A1DDC0(uVar5,auStack_4c[0],((longlong)iVar3 * (longlong)(int)uVar4 & 0x7fffffffU) << 1)
  ;
  fn_8307E060(*(undefined4 *)(param_1 + 0x28));
  uVar7 = *(uint *)(iVar2 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x40);
  *(short *)((int)param_2 + 0xe) = (short)uVar4;
  *(undefined2 *)(param_2 + 3) = 0x400;
  param_2[1] = uVar7 >> 0xe;
  *param_2 = uVar8;
  if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
    param_2[9] = *(undefined4 *)(iVar2 + 0x20);
    param_2[6] = *(undefined4 *)(param_1 + 0x3c);
    param_2[8] = *(undefined4 *)(param_1 + 0x34);
  }
  uVar8 = *(undefined4 *)(param_1 + 0x3c);
  auStack_50[0] = 0;
  auStack_4c[0] = uVar4;
  fn_830491F8(param_1,auStack_4c,auStack_50);
  fn_8304D650(param_1,param_2,uVar8,auStack_50[0]);
  if (uVar4 == uVar1) {
    iVar2 = fn_8307DE18(*(undefined4 *)(param_1 + 0x28),0);
    uVar8 = 0x11;
    if (iVar2 != 0) goto LAB_83049748;
  }
  uVar8 = 0x2d;
LAB_83049748:
  param_2[0xd0] = uVar8;
  return;
}


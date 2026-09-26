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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_82743808();
extern int fn_82743888();
extern int fn_82743C08();
extern int fn_82744378();


void fn_827447A0(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  undefined1 auStack_40 [64];
  
  uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,
                            0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82744378(uVar3,*(undefined4 *)(param_1 + 0x18));
  }
  bVar2 = false;
  if (2 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    uVar5 = fn_82696958(uVar4,uVar1);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    uVar6 = fn_82696958(uVar4,uVar1);
    uVar4 = fn_826957D0(param_1,2);
    fn_82695DA0(auStack_40,uVar4);
    if (((uVar5 & 0xffffffff) != 0) && ((uVar6 & 0xffffffff) != 0)) {
      fn_82743C08(*(undefined4 *)(param_1 + 0x18),uVar5,&dStack_50);
      fn_82743C08(*(undefined4 *)(param_1 + 0x18),uVar6,&dStack_60);
      dVar7 = (double)fn_826972E0(auStack_40,*(undefined4 *)(param_1 + 0x18));
      dStack_60 = (dStack_50 - dStack_60) * dVar7 + dStack_60;
      dStack_58 = (dStack_48 - dStack_58) * dVar7 + dStack_58;
      fn_82743888(uVar3,*(undefined4 *)(param_1 + 0x18),&dStack_60);
      bVar2 = true;
    }
    fn_82696330(auStack_40);
  }
  if (!bVar2) {
    fn_82743808(uVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff831f12e8);
  }
  fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar3);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  return;
}


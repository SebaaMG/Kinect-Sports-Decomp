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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826A79D8();
extern int fn_826C0B08();
extern unsigned int iStack_6c;


void fn_82728DD0(int param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte bVar5;
  longlong lVar4;
  ulonglong auStack_80 [2];
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  double dStack_38;
  
  uVar2 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,
                            0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_826C0B08(uVar2,*(undefined4 *)(param_1 + 0x18));
  }
  bVar5 = *(byte *)(param_2 + 3) & 7;
  if ((*(byte *)(param_2 + 3) & 7) != 0) {
    if (bVar5 == 1) {
      uVar3 = 0xffffffff821ab570;
    }
    else if (bVar5 == 2) {
      uVar3 = 0xffffffff82011190;
    }
    else if (bVar5 == 3) {
      uVar3 = 0xffffffff82011198;
    }
    else if (bVar5 == 4) {
      uVar3 = 0xffffffff82011180;
    }
    else {
      if (bVar5 != 5) goto LAB_82728ef0;
      uVar3 = 0xffffffff82011170;
    }
    fn_82681728(auStack_80,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,uVar3
                     );
    auStack_70[0] = 5;
    iVar1 = ((uint)((ulonglong)(auStack_80[0]) >> 32));
    iStack_6c = ((uint)((ulonglong)(auStack_80[0]) >> 32));
    *(int *)(((uint)((ulonglong)(auStack_80[0]) >> 32)) + 8) = *(int *)(((uint)((ulonglong)(auStack_80[0]) >> 32)) + 8) + 1;
    fn_826A79D8(uVar2 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820111a0,
                      auStack_70);
    fn_82696330(auStack_70);
    lVar4 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
    *(int *)(iVar1 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(iVar1);
    }
  }
LAB_82728ef0:
  if ((param_2[3] & 0x20000000) != 0) {
    auStack_60[0] = 3;
    auStack_80[0] = (ulonglong)param_2[2] & 0xffffff;
    dStack_58 = (double)auStack_80[0];
    fn_826A79D8(uVar2 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820111b0,
                      auStack_60);
    fn_82696330(auStack_60);
  }
  if ((param_2[3] & 0x8000000) != 0) {
    auStack_50[0] = 3;
    auStack_80[0] = (ulonglong)*param_2 & 0xffffff;
    dStack_48 = (double)auStack_80[0];
    fn_826A79D8(uVar2 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820065d4,
                      auStack_50);
    fn_82696330(auStack_50);
  }
  if ((param_2[3] & 0x10000000) != 0) {
    auStack_40[0] = 3;
    auStack_80[0] = (ulonglong)param_2[1] & 0xffffff;
    dStack_38 = (double)auStack_80[0];
    fn_826A79D8(uVar2 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff82006688,
                      auStack_40);
    fn_82696330(auStack_40);
  }
  fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar2);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_826824B0(uVar2);
  }
  return;
}


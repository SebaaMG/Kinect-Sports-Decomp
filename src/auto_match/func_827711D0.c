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
extern unsigned int *auStack_60;
extern int fn_826EB5F0();
extern int fn_826EDCB0();
extern int fn_8270D8E0();
extern int fn_8270DE48();
extern int fn_8270E1B8();
extern int fn_82762700();
extern int fn_82771150();
extern int fn_82783F98();
extern int fn_827842B8();


void fn_827711D0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [96];
  
  iVar4 = *(int *)(*(int *)(param_5 + 0x18) + 0x10);
  iVar5 = iVar4 + 8;
  fn_827842B8(iVar5);
  fn_82783F98(param_1,iVar5);
  *(byte *)(iVar4 + 0x4c) = *(byte *)(param_2 + 0x34) >> 3 & 1;
  if ((*(byte *)(param_2 + 0x34) & 0x10) != 0) {
    (**(code **)(*(int *)(param_2 + 0x10) + 0x38))(param_2 + 0x10);
    fn_826EB5F0(param_3,param_2 + 0x14);
  }
  if ((param_6 != 0) && (fn_8270D8E0(param_6), (*(byte *)(param_2 + 0x34) & 0x10) != 0)) {
    uVar6 = (**(code **)(*(int *)(param_2 + 0x10) + 0x38))(param_2 + 0x10);
    uVar1 = fn_8270E1B8(auStack_60,param_6,param_2 + 0x14);
    fn_826EB5F0(uVar6,param_3,uVar1);
  }
  uVar3 = (ulonglong)*(uint *)(param_2 + 200);
  if (uVar3 != 0) {
    iVar4 = 0;
    do {
      iVar2 = iVar4 + *(int *)(param_2 + 0xc4);
      if (*(char *)(iVar2 + 0x20) == '\0') {
        fn_82771150(iVar2,iVar5);
      }
      else {
        fn_82762700(param_2 + 0x10,param_3,iVar5,param_5,param_6);
        fn_827842B8(iVar5);
      }
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 0x24;
    } while (uVar3 != 0);
  }
  fn_82762700(param_2 + 0x10,param_3,iVar5,param_5,param_6);
  fn_827842B8(iVar5);
  if ((param_6 != 0) && (*(int *)(param_6 + 0x164) != 0)) {
    fn_8270DE48(param_6);
    fn_826EDCB0(param_3,param_6 + 0x160);
  }
  return;
}


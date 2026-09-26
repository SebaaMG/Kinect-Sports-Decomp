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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_826EB5F0();
extern int fn_826EDCB0();
extern int fn_8270D8E0();
extern int fn_8270DE48();
extern int fn_8270E1B8();
extern int fn_8275FD10();
extern int fn_82760648();
extern int fn_82760B00();
extern int fn_82762700();
extern int fn_827629D8();
extern int fn_82783F98();
extern int fn_827842B8();
extern unsigned int lbl_82005748;


void fn_82764048(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [32];
  char cStack_a0;
  
  dVar4 = (double)lbl_82005748;
  iVar1 = *(int *)(*(int *)(param_5 + 0x18) + 0x10);
  iVar3 = iVar1 + 8;
  fn_827842B8(param_1,dVar4,iVar3);
  fn_82783F98(param_1,iVar3);
  *(byte *)(iVar1 + 0x4c) = *(byte *)(param_2 + 0x24) >> 3 & 1;
  if ((*(byte *)(param_2 + 0x24) & 0x10) != 0) {
    fn_826EB5F0(dVar4,param_3,param_2 + 4);
  }
  if ((param_6 != 0) && (fn_8270D8E0(param_6), (*(byte *)(param_2 + 0x24) & 0x10) != 0)) {
    uVar2 = fn_8270E1B8(auStack_d0,param_6,param_2 + 4);
    fn_826EB5F0(dVar4,param_3,uVar2);
  }
  fn_82760648(auStack_c0,param_2);
  while (cStack_a0 != '\x01') {
    if (cStack_a0 == '\x02') {
      fn_82762700(param_2,param_3,iVar3,param_5,param_6);
      fn_827842B8(iVar3);
      if (cStack_a0 != '\x01') {
        if (cStack_a0 == '\x02') {
          fn_8275FD10();
        }
        else {
          fn_82760B00(auStack_c0);
        }
      }
    }
    else {
      fn_827629D8(auStack_c0,iVar3);
    }
  }
  fn_82762700(param_2,param_3,iVar3,param_5,param_6);
  fn_827842B8(iVar3);
  if ((param_6 != 0) && (*(int *)(param_6 + 0x164) != 0)) {
    fn_8270DE48(param_6);
    fn_826EDCB0(param_3,param_6 + 0x160);
  }
  return;
}


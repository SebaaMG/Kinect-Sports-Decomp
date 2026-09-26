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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82695520();
extern int fn_82696330();
extern int fn_8269A990();
extern int fn_826A7398();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_826F6FA8();
extern int fn_82700248();
extern int fn_8271E440();
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_8271F828(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar4;
  longlong lVar3;
  int iVar5;
  int iVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  if (param_2 == 0) {
    auStack_50[0] = 1;
    fn_826CD420(&uStack_70,auStack_50);
    puVar4 = auStack_50;
  }
  else {
    uVar2 = fn_82695520(auStack_40);
    fn_826CD420(&uStack_70,uVar2);
    puVar4 = auStack_40;
  }
  fn_82696330(puVar4);
  auStack_60[0] = 4;
  uStack_58 = param_3;
  fn_826CD420(&uStack_70,auStack_60);
  fn_82696330(auStack_60);
  lVar3 = fn_826A7398(param_1);
  iVar5 = fn_82700248(lVar3 + 0xa2c,4);
  uVar2 = fn_826A7398(param_1);
  iVar6 = fn_826F6FA8(uVar2,0);
  *(undefined4 *)(iVar5 + 4) = 4;
  if (iVar6 != 0) {
    *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
  }
  if (*(int *)(iVar5 + 8) != 0) {
    fn_8267C498();
  }
  *(int *)(iVar5 + 8) = iVar6;
  if (*(int *)(iVar5 + 0xc) != 0) {
    fn_8267C498();
  }
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(code **)(iVar5 + 0x2c) = fn_8271E440;
  fn_826CD840(iVar5 + 0x30,&uStack_70);
  uVar1 = uStack_70;
  fn_8269A990(uStack_70,uStack_6c);
  fn_8267BE38(uVar1);
  return;
}


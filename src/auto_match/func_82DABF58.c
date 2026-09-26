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
extern int fn_82DABDE8();
extern int fn_82DAD368();
extern int fn_82DAF0B0();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;


void fn_82DABF58(int param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 auStack_60 [2];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_4c;
  int *piStack_48;
  
  iVar4 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x5c);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + ((uint)param_2 & 0xffff));
  if (bVar1 == 0xff) {
    iStack_5c = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3c);
    iStack_5c = (uint)*(byte *)(iVar3 + 10) * (int)(short)(ushort)bVar1 +
                (uint)*(ushort *)(iVar3 + 6) * 0x20 + iVar3 + 0x30;
  }
  auStack_60[0] = (undefined2)param_2;
  iStack_58 = iVar4;
  iStack_54 = iVar2;
  iStack_4c = param_1;
  piStack_48 = param_3;
  fn_82DAF0B0(*(undefined4 *)(param_1 + 0xc),auStack_60);
  if (*(short *)(iVar4 + 0x204) != 0) {
    fn_82DAD368(iVar4,auStack_60);
  }
  if (*(short *)(iVar2 + 0x204) != 0) {
    fn_82DAD368(iVar2,auStack_60);
  }
  iVar4 = fn_82DABDE8(param_1 + 0x14,param_3,param_2);
  if (iVar4 == 0) {
    (**(code **)(*param_3 + 0x10))(param_3,param_1 + 0x44);
  }
  return;
}


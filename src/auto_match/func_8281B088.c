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
extern int fn_828194A0();
extern int fn_82819610();
extern int fn_82819688();
extern int fn_82819848();
extern int fn_828198C0();
extern int fn_82819AA0();
extern int fn_82819B18();
extern int fn_82819CC0();
extern int fn_82819D38();
extern int fn_82819EF8();
extern int fn_8281ACA8();
extern int fn_8281C4B0();


undefined8 fn_8281B088(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  short sVar4;
  undefined8 uVar3;
  short asStack_40 [32];
  
  iVar1 = *(int *)(param_1 + 0x70);
  uVar2 = 1 << (*(byte *)(param_1 + 0x75) & 0x3f) & 0xffff;
  if (iVar1 == 0) {
    sVar4 = fn_82819610(param_1,param_2,uVar2,param_3);
    asStack_40[0] = sVar4;
  }
  else if (iVar1 == 2) {
    fn_8281C4B0(0xffffffff8201e804);
    sVar4 = fn_82819B18(param_1,param_2,uVar2,param_3);
    asStack_40[0] = sVar4;
    fn_8281C4B0(0xffffffff8201e814);
    fn_82819CC0(param_1,param_2,uVar2,param_3);
  }
  else if (iVar1 == 3) {
    sVar4 = fn_828198C0(param_1,param_2,uVar2,param_3);
    asStack_40[0] = sVar4;
    fn_82819AA0(param_1,param_2,uVar2,param_3);
  }
  else if (iVar1 == 4) {
    sVar4 = fn_82819688();
    asStack_40[0] = sVar4;
    fn_82819848(param_1,param_2,uVar2,param_3);
  }
  else if (iVar1 == 5) {
    sVar4 = fn_82819D38();
    asStack_40[0] = sVar4;
    fn_82819EF8(param_1,param_2,uVar2,param_3);
  }
  else {
    sVar4 = fn_828194A0();
    asStack_40[0] = sVar4;
  }
  if (sVar4 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8281ACA8(param_1,asStack_40,param_2,uVar2,0,param_3);
    *(int *)(asStack_40[0] * 0x40 + *(int *)(param_1 + 0x7c) + 0x28) = (int)param_2;
  }
  return uVar3;
}


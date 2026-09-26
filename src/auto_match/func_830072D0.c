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
extern int fn_82FF5400();
extern int fn_830043E8();
extern int fn_830069B8();
extern int fn_83006E68();
extern int fn_8302AEF0();
extern int fn_8302AFA0();
extern int fn_8302B050();
extern int fn_8302B100();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;


void fn_830072D0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char cVar3;
  double dVar4;
  
  uVar2 = fn_83006E68();
  if (((uVar2 & 0xffffffff) == 0) || (cVar3 = fn_830069B8(param_1), cVar3 == '\0')) {
    if (param_1[8] != 0) {
      fn_830043E8(param_1);
      uVar1 = lbl_821AAD20;
      *(undefined4 *)(param_1[8] + 4) = lbl_821AAD20;
      *(undefined4 *)(param_1[8] + 0xc) = uVar1;
      *(undefined4 *)(param_1[8] + 0x10) = uVar1;
      *(undefined4 *)(param_1[8] + 8) = uVar1;
    }
  }
  else {
    if (*(int *)(param_1[8] + 0x14) == 0) {
      dVar4 = (double)fn_8302AEF0(uVar2);
      *(float *)(param_1[8] + 4) = (float)dVar4;
    }
    else {
      fn_8302AEF0(uVar2);
      fn_82FF5400(lbl_832642F4,*(undefined4 *)(param_1[8] + 0x14),0x10000,param_4,0,4,0);
    }
    if (*(int *)(param_1[8] + 0x18) == 0) {
      dVar4 = (double)fn_8302AFA0(uVar2);
      *(float *)(param_1[8] + 0xc) = (float)dVar4;
    }
    else {
      fn_8302AFA0(uVar2);
      fn_82FF5400(lbl_832642F4,*(undefined4 *)(param_1[8] + 0x18),0x20000,param_4,0,4,0);
    }
    if (*(int *)(param_1[8] + 0x20) == 0) {
      dVar4 = (double)fn_8302B050(uVar2);
      *(float *)(param_1[8] + 0x10) = (float)dVar4;
    }
    else {
      fn_8302B050(uVar2);
      fn_82FF5400(lbl_832642F4,*(undefined4 *)(param_1[8] + 0x20),0x40000,param_4,0,4,0);
    }
    if (*(int *)(param_1[8] + 0x1c) == 0) {
      dVar4 = (double)fn_8302B100(uVar2);
      *(float *)(param_1[8] + 8) = (float)dVar4;
    }
    else {
      fn_8302B100(uVar2);
      fn_82FF5400(lbl_832642F4,*(undefined4 *)(param_1[8] + 0x1c),0x80000,param_4,0,4,0);
    }
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}


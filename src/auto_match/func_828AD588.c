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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_8265CA20();
extern int fn_828A0B28();
extern int fn_828A0B50();
extern int fn_828AC488();
extern int fn_828AC838();
extern int fn_828ACC40();
extern int fn_828ACDB8();
extern int fn_828AD840();
extern int fn_828ADBE0();
extern int fn_828ECF48();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


longlong fn_828AD588(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar4;
  undefined8 uVar3;
  longlong lVar5;
  undefined1 auStack_a0 [4];
  char cStack_9c;
  uint auStack_80 [4];
  undefined4 uStack_70;
  uint uStack_6c;
  uint auStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  
  fn_828AC838(auStack_a0,param_4,param_5);
  *(undefined1 *)(param_1 + 0x9c) = 1;
  if ((*(int *)(param_1 + 0xa0) != 1) || (bVar2 = true, *(int *)(param_1 + 0x8c) == 0)) {
    bVar2 = false;
  }
  if (bVar2) {
    cVar4 = fn_828A0B28(param_1);
    bVar2 = true;
    if (cVar4 != '\x01') goto LAB_828ad608;
  }
  else {
LAB_828ad608:
    bVar2 = false;
  }
  if (bVar2) {
    cVar4 = fn_828ACC40(param_1);
    bVar2 = true;
    if (cVar4 != '\0') goto LAB_828ad634;
  }
  bVar2 = false;
LAB_828ad634:
  if ((!bVar2) || (lVar5 = 1, cStack_9c != '\x01')) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    fn_82230110(auStack_80,0xffffffff820245d8);
    fn_828AD840(auStack_60,param_1,auStack_80);
    if (0xf < uStack_6c) {
      fn_8265CA20(auStack_80[0]);
    }
    uStack_70 = 0;
    uStack_6c = 0xf;
    auStack_80[0] = auStack_80[0] & 0xffffff;
    if (0xf < uStack_4c) {
      fn_8265CA20(auStack_60[0]);
    }
    uStack_4c = 0xf;
    uStack_50 = 0;
    auStack_60[0] = auStack_60[0] & 0xffffff;
    fn_828AC488(auStack_a0);
  }
  else {
    fn_828ADBE0(param_1,0,0,1,param_3,param_3,auStack_a0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
    uVar3 = fn_828A0B50(param_1);
    fn_828ECF48(uVar1,param_2,uVar3,param_6,param_7);
    fn_828ACDB8(param_1,1);
    fn_828AC488(auStack_a0);
  }
  return lVar5;
}


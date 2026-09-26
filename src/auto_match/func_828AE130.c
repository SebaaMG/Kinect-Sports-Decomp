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
extern int fn_828ACC40();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828ADCE8();
extern int fn_828B2DE8();
extern int fn_828B8F40();
extern int fn_828B9250();
extern int fn_828D0F50();


undefined8
fn_828AE130(int param_1,int *param_2,undefined8 param_3,ulonglong param_4,ulonglong param_5,
             undefined8 param_6)

{
  int iVar1;
  bool bVar2;
  char cVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_stack_0000007c;
  
  cVar6 = fn_828AD0F8();
  if (cVar6 == '\0') {
    cVar6 = fn_828AD488(param_1);
    bVar2 = false;
    if (cVar6 != '\0') goto LAB_828ae184;
  }
  else {
LAB_828ae184:
    bVar2 = true;
  }
  if (bVar2) {
    cVar6 = fn_828ACC40(param_1);
    bVar2 = true;
    if (cVar6 != '\0') goto LAB_828ae1b0;
  }
  bVar2 = false;
LAB_828ae1b0:
  if ((!bVar2) || (bVar2 = true, *(int *)(param_1 + 0x8c) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, *(int *)(*(int *)(param_1 + 0x8c) + 8) != 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, (param_4 & 0xffffffff) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, (param_5 & 0xffffffff) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, (param_5 & 0xffffffff) < (param_4 & 0xffffffff))) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, *(char *)(in_stack_0000007c + 4) != '\x01')) {
    bVar2 = false;
  }
  cVar6 = fn_828AD488(param_1);
  if (cVar6 == '\0') {
    cVar6 = fn_828AD0F8(param_1);
    if (cVar6 == '\0') {
      return 0;
    }
    if (*(char *)(*param_2 + 100) == '\0') {
      return 0;
    }
  }
  else if (*(char *)(*param_2 + 100) != '\0') {
    return 0;
  }
  fn_828B9250();
  fn_828AD0F8(param_1);
  if (!bVar2) {
    return 0;
  }
  iVar1 = *param_2;
  uVar3 = fn_828D0F50(iVar1);
  uVar4 = fn_828B2DE8(iVar1);
  uVar5 = fn_828B8F40(iVar1);
  uVar3 = fn_828ADCE8(param_1,param_3,param_4,param_5,param_6,uVar5,uVar4,uVar3);
  return uVar3;
}


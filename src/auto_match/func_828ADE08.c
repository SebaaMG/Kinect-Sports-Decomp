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


void fn_828ADE08(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  int in_stack_000000a4;
  
  cVar2 = fn_828AD0F8();
  if (cVar2 == '\0') {
    cVar2 = fn_828AD488(param_1);
    bVar1 = false;
    if (cVar2 != '\0') goto LAB_828ade5c;
  }
  else {
LAB_828ade5c:
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = fn_828ACC40(param_1);
    bVar1 = true;
    if (cVar2 != '\0') goto LAB_828ade88;
  }
  bVar1 = false;
LAB_828ade88:
  if ((!bVar1) || (bVar1 = true, *(int *)(param_1 + 0x8c) == 0)) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, *(int *)(*(int *)(param_1 + 0x8c) + 8) != 0)) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, 3 < (param_2 & 0xffffffff))) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, (param_3 & 0xffffffff) == 0)) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, (param_4 & 0xffffffff) < (param_3 & 0xffffffff))) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, *(char *)(in_stack_000000a4 + 4) != '\x01')) {
    bVar1 = false;
  }
  if (bVar1) {
    fn_828ADCE8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}


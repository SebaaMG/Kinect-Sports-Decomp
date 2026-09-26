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
extern int fn_82A536E0();
extern int fn_82A538A8();
extern int fn_82A53C10();
extern int fn_82A56A48();
extern int fn_82C18678();
extern int fn_82C18CC8();


undefined8 fn_82A573F0(int *param_1,ushort *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort auStack_40 [32];
  
  uVar1 = 0;
  if ((param_1 == (int *)0x0) || (param_2 == (ushort *)0x0)) {
    uVar1 = 0xffffffff80070057;
    uVar2 = 0;
  }
  else {
    uVar2 = *param_2;
    if (((int)param_4 < (int)(param_1[0x5c] * param_1[0x5a] * (uint)uVar2)) ||
       ((int)param_4 < (int)(uint)uVar2)) {
      return 0xffffffff80004005;
    }
    auStack_40[0] = uVar2;
    if (param_1[0x58] == 1) {
      if ((param_1[0x69] == 0) || (param_1[0x6a] == 1)) {
        if (*(int *)(*param_1 + 100) == 0) {
          uVar1 = fn_82C18CC8();
        }
        else {
          uVar1 = fn_82C18678(param_1,param_3,uVar2,param_3);
        }
        if ((int)uVar1 < 0) goto LAB_82a57570;
      }
      if ((param_1[0x69] == 1) &&
         (uVar1 = fn_82A53C10(param_1,param_3,auStack_40,param_3), uVar2 = auStack_40[0],
         (int)uVar1 < 0)) goto LAB_82a57570;
    }
    if ((((param_1[0x4f] == 0) ||
         ((uVar2 == 0 ||
          (uVar1 = fn_82A536E0(param_1,param_3,auStack_40,param_4), uVar2 = auStack_40[0],
          -1 < (int)uVar1)))) &&
        ((param_1[0x51] == 0 ||
         ((uVar2 == 0 ||
          (uVar1 = fn_82A538A8(param_1,param_3,auStack_40,param_4), uVar2 = auStack_40[0],
          -1 < (int)uVar1)))))) && (param_1[0x59] == 1)) {
      uVar1 = fn_82A56A48(param_1,param_3,uVar2);
    }
  }
LAB_82a57570:
  if (param_2 != (ushort *)0x0) {
    *param_2 = uVar2;
  }
  return uVar1;
}


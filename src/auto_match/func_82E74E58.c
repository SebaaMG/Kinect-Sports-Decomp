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
extern unsigned int *auStack_30;
extern int fn_82EEAE00();


undefined8 fn_82E74E58(int *param_1,ulonglong param_2,undefined8 param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong auStack_30 [6];
  
  if (param_4 == (ulonglong *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 2);
    uVar1 = 0;
    if ((ulonglong)(*(longlong *)(param_1 + 0xe) * 10000) <= param_2 + lVar2 * -10000) {
      *(ulonglong *)(param_1 + 0xe) = param_2 / 10000 - lVar2;
    }
    uVar3 = *(ulonglong *)(param_1[4] + 0x5b0);
    if ((param_2 < uVar3) && (lVar2 != 0)) {
      uVar1 = 0xffffffffc00d4652;
    }
    else {
      if (param_1[0x17] == 0) {
        auStack_30[0] = param_2 - ((ulonglong)(uint)param_1[7] * 10000 & 0xffffffff);
        if (auStack_30[0] < uVar3) {
          *param_4 = uVar3;
          return 0;
        }
      }
      else {
        auStack_30[0] = 0;
        uVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_3);
        uVar1 = fn_82EEAE00(param_1[0x17],uVar1,param_2,uVar3,auStack_30);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      *param_4 = auStack_30[0];
    }
  }
  return uVar1;
}


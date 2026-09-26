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
extern int fn_82A1E108();
extern int fn_82AB46B0();
extern int iRam83223528;
extern unsigned int uRam8322352c;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82AA0330(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    uVar2 = (ulonglong)uRam8322352c;
    if (uRam8322352c != 0) {
      if (in_RESERVE != '\0') {
        uRam8322352c = storeWordConditionalIndexed(uVar2,0,0xffffffff8322352c);
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uRam8322352c = storeWordConditionalIndexed(1,0,0xffffffff8322352c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
LAB_82aa03c8:
  if ((int)uVar2 == 1) {
    fn_82A1E108(1);
    do {
      uVar2 = (ulonglong)uRam8322352c;
      if (uRam8322352c != 0) {
        if (in_RESERVE != '\0') {
          uRam8322352c = storeWordConditionalIndexed(uVar2,0,0xffffffff8322352c);
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uRam8322352c = storeWordConditionalIndexed(1,0,0xffffffff8322352c);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    goto LAB_82aa03c8;
  }
  if (iRam83223528 == 0) {
    RtlInitializeCriticalSection(0xffffffff83223504);
  }
  iRam83223528 = iRam83223528 + 1;
  do {
    if (in_RESERVE != '\0') {
      uRam8322352c = storeWordConditionalIndexed(0,0,0xffffffff8322352c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  RtlEnterCriticalSection(0xffffffff83223504);
  uVar1 = fn_82AB46B0(param_1,param_2);
  RtlLeaveCriticalSection(0xffffffff83223504);
  do {
    uVar2 = (ulonglong)uRam8322352c;
    if (uRam8322352c != 0) {
      if (in_RESERVE != '\0') {
        uRam8322352c = storeWordConditionalIndexed(uVar2,0,0xffffffff8322352c);
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uRam8322352c = storeWordConditionalIndexed(1,0,0xffffffff8322352c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  do {
    if ((int)uVar2 != 1) {
      iRam83223528 = iRam83223528 + -1;
      do {
        if (in_RESERVE != '\0') {
          uRam8322352c = storeWordConditionalIndexed(0,0,0xffffffff8322352c);
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      return uVar1;
    }
    fn_82A1E108(1);
    do {
      uVar2 = (ulonglong)uRam8322352c;
      if (uRam8322352c != 0) {
        if (in_RESERVE != '\0') {
          uRam8322352c = storeWordConditionalIndexed(uVar2,0,0xffffffff8322352c);
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uRam8322352c = storeWordConditionalIndexed(1,0,0xffffffff8322352c);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  } while( true );
}


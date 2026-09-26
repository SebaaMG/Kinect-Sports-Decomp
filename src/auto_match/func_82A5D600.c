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
extern int fn_82A4F4E0();
extern int fn_82A5D500();
extern unsigned int lbl_8208DFC4;
extern unsigned int lbl_8208DFF0;
extern unsigned int lbl_8208E01C;
extern unsigned int lbl_8208E048;
extern unsigned int lbl_8217E9E8;
extern unsigned int uRam831e79a4;
extern unsigned int uRam8321a308;
extern unsigned int uRam8329f804;
extern U64 storeWordConditionalIndexed();


void fn_82A5D600(undefined4 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  char in_RESERVE;
  byte in_cr0;
  
  *param_1 = &lbl_8208E048;
  param_1[1] = &lbl_8208E01C;
  uRam8329f804 = 0x1800;
  do {
    if (uRam831e79a4 != 0) {
      if (in_RESERVE != '\0') {
        uRam831e79a4 = storeWordConditionalIndexed((ulonglong)uRam831e79a4,0,0xffffffff831e79a4);
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uRam831e79a4 = storeWordConditionalIndexed(0x1800,0,0xffffffff831e79a4);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (param_1[0x13] != 0) {
    KeEnterCriticalRegion();
    RtlEnterCriticalSection(0xffffffff8315f6f0);
    uVar2 = (ulonglong)uRam8321a308;
    uRam8321a308 = (uint)(uVar2 - 1);
    if (uVar2 - 1 == 0) {
      ExRegisterTitleTerminateNotification(0xffffffff8315f6e0,0);
    }
    uVar3 = 0;
    piVar1 = (int *)0x8321a2e8;
    do {
      if ((undefined4 *)*piVar1 == param_1) {
        *(undefined4 *)(uVar3 * 4 + -0x7cde5d18) = 0;
        param_1[0x13] = 0;
        break;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar3 < 8);
    RtlLeaveCriticalSection(0xffffffff8315f6f0);
    KeLeaveCriticalRegion();
  }
  fn_82A5D500(param_1 + 10);
  fn_82A5D500(param_1 + 0xb);
  fn_82A5D500(param_1 + 0xc);
  if (param_1[6] != 0) {
    fn_82A4F4E0();
    param_1[6] = 0;
  }
  if (param_1[5] != 0) {
    fn_82A4F4E0();
    param_1[5] = 0;
  }
  *param_1 = &lbl_8217E9E8;
  param_1[1] = &lbl_8208DFF0;
  param_1[1] = &lbl_8208DFC4;
  return;
}


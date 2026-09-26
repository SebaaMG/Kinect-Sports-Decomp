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
extern int fn_82BD6260();
extern int fn_82BD6990();
extern int fn_82BDC780();
extern int fn_82F68CC0();
extern int fn_831430AC();
extern U64 storeWordConditionalIndexed();


longlong fn_82BD7170(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  char in_RESERVE;
  byte bVar5;
  
  fn_82BD6990();
  lVar3 = fn_831430AC(param_2,0xf,param_1 + 0xc);
  bVar5 = (lVar3 == 0) << 1;
  if (-1 < lVar3) {
    puVar2 = (undefined4 *)param_1;
    lVar3 = fn_82BDC780(puVar2[2],param_2);
    *puVar2 = (int)param_2;
    puVar2[1] = 0;
    fn_82BD6260(puVar2[0x27]);
    puVar2[0x34] = 0x26404;
    do {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(1,0,param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x54) = uVar1;
        bVar5 = 2;
      }
    } while (!(bool)(bVar5 >> 1 & 1));
    fn_82F68CC0(param_1 + 0x60,0xffffffff820e8748,0x36);
    if (-1 < (int)lVar3) {
      return lVar3;
    }
  }
  piVar4 = (int *)(param_1 + 0xc);
  if (*piVar4 != 0) {
    XamVoiceClose();
    *piVar4 = 0;
  }
  return lVar3;
}


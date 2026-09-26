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
extern int fn_8263C620();
extern int fn_8263C7D8();
extern int fn_829D08F0();
extern int fn_82A1DDC0();
extern int iRam8321716c;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_83217174;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_829D0A28(undefined4 *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uStack_50;
  uint uStack_4c;
  
  RtlEnterCriticalSection(0xffffffff8315c428);
  if (param_2 != 0) {
    if ((lbl_83217174 == 1) && ((lbl_83215A40 != 0 || ((lbl_83215000 & 0x80000000) == 0)))) {
      *(undefined8 *)(iRam8321716c + 8) = *(undefined8 *)(param_1 + 2);
      *(undefined4 *)(iRam8321716c + 0x10) = *param_1;
      *(undefined4 *)(iRam8321716c + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(iRam8321716c + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(iRam8321716c + 0x20) = *(undefined4 *)(param_2 + 0x20);
      fn_8263C7D8(param_2 + 0x30,0,&uStack_50,0,0x10);
      lVar2 = 0xf0;
      uVar1 = (ulonglong)uStack_4c;
      uVar3 = (ulonglong)*(uint *)(iRam8321716c + 100);
      do {
        fn_82A1DDC0(uVar3,uVar1,0x280);
        lVar2 = lVar2 + -1;
        uVar3 = uVar3 + 0x300;
        uVar1 = ((ulonglong)uStack_50 & 0xfffffffe) + uVar1;
      } while (lVar2 != 0);
      fn_8263C620(param_2 + 0x30,0);
    }
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 2);
    *(undefined4 *)(param_2 + 0x10) = *param_1;
    fn_829D08F0(0,param_2,0);
    sync(0);
  }
  RtlLeaveCriticalSection(0xffffffff8315c428);
  return;
}


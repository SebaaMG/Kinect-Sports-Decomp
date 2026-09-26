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
#define TBLr 0
extern int fn_829D2450();
extern int fn_82A1DDC0();
extern unsigned int lbl_83010001;
extern unsigned int lbl_83010002;
extern unsigned int lbl_8301000B;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215058;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_83215A54;
extern unsigned int lbl_83215A58;
extern unsigned int lbl_83215A60;
extern unsigned int lbl_83215A70;
extern unsigned int lbl_83215A90;
extern unsigned int lbl_83216540;
extern unsigned int lbl_832172E8;


undefined * fn_829D2D28(uint param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  undefined *apuStack_40 [2];
  longlong alStack_38 [7];
  
  if ((param_2 & 0xffffffff) == 0) {
    apuStack_40[0] = (undefined *)0x80070057;
  }
  else {
    apuStack_40[0] = (undefined *)0x0;
    if (lbl_83215A40 == 0) {
      apuStack_40[0] = &lbl_83010002;
    }
    else if (lbl_83215058 == 0) {
      apuStack_40[0] = (undefined *)0x8007048f;
    }
    else {
      if (((lbl_83215A58 & 1) != 1) && ((param_1 == 0xffffffff || (8000 < param_1)))) {
        if ((lbl_83215000 & 0x8000000) == 0) {
          param_1 = 8000;
        }
        else {
          param_1 = 60000;
        }
      }
      plVar3 = (longlong *)0x0;
      if (param_1 != 0xffffffff) {
        plVar3 = alStack_38;
        alStack_38[0] = (ulonglong)param_1 * -10000;
      }
      iVar2 = KeWaitForSingleObject(0xffffffff83215a44,3,0,0,plVar3);
      if (iVar2 == 0x102) {
        apuStack_40[0] = (undefined *)0x8000000a;
      }
      else {
        RtlEnterCriticalSection(0xffffffff8315c454);
        iVar2 = lbl_83215A60 * 0xae0;
        if (*(int *)(&lbl_83215A70 + iVar2) == 1) {
          fn_82A1DDC0(param_2,&lbl_83215A90 + iVar2,0xab0);
          *(undefined4 *)(&lbl_83215A70 + iVar2) = 0;
          uVar1 = TBLr;
          lbl_832172E8 = (undefined4)
                         ((((uVar1 & 0xffffffff) - (ulonglong)*(uint *)(&lbl_83216540 + iVar2) &
                           0xffffffff) * 1000000) / 50000000);
        }
        else if (lbl_83215058 == 0) {
          apuStack_40[0] = (undefined *)0x8007048f;
        }
        else if (*(int *)(&lbl_83215A70 + iVar2) == 2) {
          apuStack_40[0] = &lbl_8301000B;
        }
        else if ((lbl_83215A58 & 1) == 0) {
          apuStack_40[0] = &lbl_83010001;
        }
        else {
          apuStack_40[0] = (undefined *)0x8007048f;
        }
        if (lbl_83215A54 != 0) {
          KeResetEvent();
        }
        KeResetEvent(0xffffffff83215a44);
        RtlLeaveCriticalSection(0xffffffff8315c454);
      }
    }
    fn_829D2450(param_2,apuStack_40);
  }
  return apuStack_40[0];
}


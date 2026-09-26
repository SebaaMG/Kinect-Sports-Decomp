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
extern int fn_829D3FE8();
extern int fn_829D5A08();
extern unsigned int lbl_83215058;
extern unsigned int lbl_83217148;
extern unsigned int lbl_832179FC;


undefined8 fn_829DA858(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint auStack_40 [16];
  
  if (lbl_83215058 == 0) {
    uVar1 = 0xffffffff8007048f;
  }
  else if ((lbl_83217148 == 0) || ((ulonglong)lbl_832179FC == 0)) {
    uVar1 = 0xffffffff83010005;
  }
  else if (param_2 == 0) {
    lVar3 = (ulonglong)lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(lVar3);
    auStack_40[0] = 0;
    uVar4 = (ulonglong)lbl_832179FC;
    cVar2 = fn_829D3FE8(param_1,uVar4,auStack_40);
    if (cVar2 == '\0') {
      RtlLeaveCriticalSection(lVar3);
      uVar1 = 0xffffffff83010008;
    }
    else {
      uVar1 = fn_829D5A08(1,uVar4,(ulonglong)auStack_40[0] * 0x150 + uVar4 + 0xc0,
                            (ulonglong)auStack_40[0],param_1,0,0,param_3);
      RtlLeaveCriticalSection(lVar3);
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}


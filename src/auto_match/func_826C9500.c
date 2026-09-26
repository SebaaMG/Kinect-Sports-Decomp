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
extern int fn_826C7758();
extern unsigned int uStack_13;
extern unsigned int uStack_14;
extern unsigned int uStack_15;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_23;
extern unsigned int uStack_24;
extern unsigned int uStack_25;
extern unsigned int uStack_26;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_826C9500(int param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uVar4 = 0;
  if (((*(uint *)(param_1 + 0x8c) & 0xc) != 0) ||
     (bVar2 = false, (~(*(byte *)(param_1 + 0x66) >> 6) & 1) == 0)) {
    bVar2 = true;
  }
  if ((bVar2) ||
     (((*(int *)(param_1 + 0xb8) != 0 && (*(int *)(*(int *)(param_1 + 0xa0) + 0xa08) != param_1)) &&
      ((*(int *)(param_1 + 0x1b4) == 0 || (*(int *)(*(int *)(param_1 + 0x1b4) + 0xc) == 0)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = (ulonglong)(param_2 == '\0');
  }
  else if (param_2 == '\0') {
    if (!bVar2) {
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_20 = 2;
      uStack_16 = 0;
      uStack_15 = 0xff;
      uStack_14 = 0;
      uStack_13 = 0;
      cVar3 = fn_826C7758(param_1,&uStack_20);
      if (cVar3 != '\0') {
        uVar4 = 1;
      }
    }
  }
  else {
    if (!bVar2) {
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_30 = 2;
      uStack_26 = 0;
      uStack_25 = 0xff;
      uStack_24 = 0;
      uStack_23 = 0;
      cVar3 = fn_826C7758(param_1,&uStack_30);
      if (cVar3 != '\0') {
        return 0;
      }
    }
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}


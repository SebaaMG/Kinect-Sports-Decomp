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
extern int fn_8266D4A8();
extern int fn_8266D7B8();
extern int fn_8266DBB8();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8266E0B8(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iVar2 = (int)param_3;
  lVar3 = param_1;
  if (0x1f < iVar2) {
    uVar4 = (param_3 & 0xffffffff) >> 5;
    lVar1 = param_1;
    do {
      lVar3 = lVar1 + 0x180;
      fn_8266D4A8(lVar1,lVar3,0);
      uVar4 = uVar4 - 1;
      lVar1 = lVar3;
    } while (uVar4 != 0);
  }
  fn_8266D4A8(lVar3,param_2,0);
  uVar4 = 0x20;
  if (0x20 < iVar2) {
    do {
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
      uStack_40 = *(undefined4 *)(param_4 + 0x10);
      fn_8266DBB8(param_1,param_2,&uStack_50,uVar4,param_3);
      fn_8266D7B8(**(undefined4 **)(param_4 + 0x10),(*(undefined4 **)(param_4 + 0x10))[1],param_1,
                    (uVar4 & 0x7fffffff) << 1,param_3);
      uVar4 = (uVar4 & 0x7fffffff) << 2;
    } while ((int)uVar4 < iVar2);
  }
  return;
}


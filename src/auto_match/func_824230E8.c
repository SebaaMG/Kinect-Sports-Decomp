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
extern int fn_824BF8A8();
extern unsigned int uStack_5c;


void fn_824230E8(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char *pcStack_60;
  undefined4 uStack_5c;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 1 & 1;
  if ((uVar2 == 0) || (bVar5 = true, param_1[1] != 0)) {
    bVar5 = false;
  }
  if ((uVar2 != 0) || (bVar6 = true, param_1[1] == 0)) {
    bVar6 = false;
  }
  uVar3 = uVar1 >> 3 & 1;
  if (uVar3 != 0) {
    bVar4 = true;
    if (param_1[3] == 0) goto LAB_82423158;
  }
  bVar4 = false;
LAB_82423158:
  param_1[1] = uVar2;
  param_1[3] = uVar3;
  if ((uVar1 & 0x10) != 0) {
    uStack_5c = 7;
    pcStack_60 = "showvideo";
    fn_824BF8A8(param_2,&pcStack_60);
  }
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    param_1[4] = 1;
  }
  if (((uVar1 & 1) != 0) || ((uVar1 & 0x20) != 0)) {
    pcStack_60 = "getready";
    uStack_5c = 7;
    fn_824BF8A8(param_2,&pcStack_60);
  }
  if (bVar4) {
    pcStack_60 = "pickingup";
    uStack_5c = 7;
    fn_824BF8A8(param_2,&pcStack_60);
  }
  if (bVar5) {
    pcStack_60 = "pickingup";
    uStack_5c = 8;
    fn_824BF8A8(param_2,&pcStack_60);
    pcStack_60 = "bowling";
    uStack_5c = 7;
    fn_824BF8A8(param_2,&pcStack_60);
    if (param_1[4] != 0) {
      param_1[4] = 0;
      uStack_5c = 9;
      pcStack_60 = "spin";
      fn_824BF8A8(param_2,&pcStack_60);
      pcStack_60 = "spin";
      uStack_5c = 7;
      fn_824BF8A8(param_2,&pcStack_60);
    }
    pcStack_60 = "getready";
    uStack_5c = 6;
    fn_824BF8A8(param_2,&pcStack_60);
  }
  uVar1 = *param_1 >> 2 & 1;
  if ((uVar1 == 0) || (bVar5 = true, param_1[2] != 0)) {
    bVar5 = false;
  }
  if ((uVar1 != 0) || (bVar4 = true, param_1[2] == 0)) {
    bVar4 = false;
  }
  param_1[2] = uVar1;
  if (bVar5) {
    pcStack_60 = "bowling";
    uStack_5c = 4;
    fn_824BF8A8(param_2,&pcStack_60);
  }
  if (bVar4) {
    pcStack_60 = "bowling";
    uStack_5c = 5;
    fn_824BF8A8(param_2,&pcStack_60);
  }
  if (bVar6) {
    pcStack_60 = "bowling";
    uStack_5c = 8;
    fn_824BF8A8(param_2,&pcStack_60);
  }
  *param_1 = 0;
  return;
}


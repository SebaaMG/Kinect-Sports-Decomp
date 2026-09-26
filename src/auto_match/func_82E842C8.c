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
extern unsigned int lbl_831A85D0;
extern unsigned int lbl_831A86D8;
extern unsigned int lbl_831A87D8;
extern unsigned int lbl_831A8860;
extern unsigned int lbl_831A88E8;
extern unsigned int lbl_831A8970;
extern unsigned int lbl_831A89F8;
extern unsigned int lbl_831A8A40;
extern unsigned int lbl_831A8A88;
extern unsigned int lbl_831A8B90;
extern unsigned int lbl_831A8C90;
extern unsigned int lbl_831A8D18;
extern unsigned int lbl_831A8DA0;
extern unsigned int lbl_831A8E28;
extern unsigned int lbl_831A8EB0;
extern unsigned int lbl_831A8EF8;


void fn_82E842C8(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x254) = &lbl_831A8A88;
    *(undefined **)(param_1 + 600) = &lbl_831A8C90;
    *(undefined **)(param_1 + 0x25c) = &lbl_831A8DA0;
    *(undefined **)(param_1 + 0x268) = &lbl_831A8EB0;
    puVar5 = &lbl_831A8B90;
    puVar4 = &lbl_831A8D18;
    puVar3 = &lbl_831A8E28;
    puVar2 = &lbl_831A8EF8;
    iVar8 = param_1 + 0x3280;
    iVar1 = 0x3a80;
    iVar7 = param_1 + 16000;
    iVar6 = param_1 + 0x4280;
  }
  else {
    *(undefined **)(param_1 + 0x254) = &lbl_831A85D0;
    *(undefined **)(param_1 + 600) = &lbl_831A87D8;
    *(undefined **)(param_1 + 0x25c) = &lbl_831A88E8;
    *(undefined **)(param_1 + 0x268) = &lbl_831A89F8;
    puVar5 = &lbl_831A86D8;
    puVar4 = &lbl_831A8860;
    puVar3 = &lbl_831A8970;
    puVar2 = &lbl_831A8A40;
    iVar8 = param_1 + 0x2080;
    iVar1 = 0x2880;
    iVar7 = param_1 + 0x2c80;
    iVar6 = param_1 + 0x3080;
  }
  *(int *)(param_1 + 0x2074) = param_1 + iVar1;
  *(int *)(param_1 + 0x207c) = iVar6;
  *(int *)(param_1 + 0x2078) = iVar7;
  *(int *)(param_1 + 0x2070) = iVar8;
  *(undefined **)(param_1 + 0x250) = puVar5;
  *(undefined **)(param_1 + 0x26c) = puVar2;
  *(undefined **)(param_1 + 0x264) = puVar3;
  *(undefined **)(param_1 + 0x260) = puVar4;
  *(undefined **)(param_1 + 0x203c) = puVar2;
  *(undefined **)(param_1 + 0x2048) = puVar5;
  *(undefined **)(param_1 + 0x204c) = puVar4;
  *(undefined **)(param_1 + 0x2050) = puVar3;
  *(undefined **)(param_1 + 0x2054) = puVar2;
  *(undefined **)(param_1 + 0x2030) = puVar5;
  *(undefined **)(param_1 + 0x2034) = puVar4;
  *(undefined **)(param_1 + 0x2038) = puVar3;
  if (*(int *)(param_1 + 0x628) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2034) = 0x831a9160;
  *(undefined4 *)(param_1 + 0x2038) = 0x831a91e8;
  return;
}


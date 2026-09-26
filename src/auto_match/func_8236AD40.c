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
extern int fn_8251F720();
extern int fn_8251FA58();
extern unsigned int lbl_821CC160;


void fn_8236AD40(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  puVar3 = (undefined4 *)fn_8251F720(param_2,0);
  iVar5 = 0x412;
  *(undefined4 *)(param_1 + 0xfe4) = *puVar3;
  uVar2 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0xfe8) = puVar3[1];
  *(undefined4 *)(param_1 + 0xfec) = puVar3[2];
  *(undefined4 *)(param_1 + 0xff0) = puVar3[3];
  *(undefined4 *)(param_1 + 0xff4) = puVar3[4];
  *(undefined4 *)(param_1 + 0xff8) = puVar3[5];
  *(undefined4 *)(param_1 + 0xffc) = puVar3[6];
  *(undefined4 *)(param_1 + 0x1000) = puVar3[7];
  *(undefined4 *)(param_1 + 0x103c) = puVar3[0x10];
  *(undefined4 *)(param_1 + 0x1044) = puVar3[0x15];
  *(undefined4 *)(param_1 + 0x1004) = puVar3[0x11];
  *(undefined4 *)(param_1 + 0x1008) = puVar3[0x12];
  *(undefined4 *)(param_1 + 0x100c) = puVar3[0x13];
  *(undefined4 *)(param_1 + 0x1010) = puVar3[0x14];
  *(undefined4 *)(param_1 + 0x1014) = puVar3[8];
  *(undefined4 *)(param_1 + 0x1018) = puVar3[9];
  *(undefined4 *)(param_1 + 0x101c) = puVar3[10];
  uVar1 = puVar3[0xb];
  *(undefined4 *)(param_1 + 0x1024) = uVar2;
  *(undefined4 *)(param_1 + 0x1020) = uVar1;
  *(undefined4 *)(param_1 + 0x1028) = 0;
  *(undefined4 *)(param_1 + 0x102c) = puVar3[0xc];
  *(undefined4 *)(param_1 + 0x1030) = puVar3[0xd];
  *(undefined4 *)(param_1 + 0x1034) = puVar3[0xe];
  *(undefined4 *)(param_1 + 0x1038) = puVar3[0xf];
  do {
    iVar6 = 0;
    lVar7 = 8;
    do {
      iVar4 = iVar5 + iVar6;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar4 * 4 + param_1) = uVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar5 = iVar5 + 8;
  } while (iVar5 < 0x422);
  fn_8251FA58();
  return;
}


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
extern int fn_825269D0();
extern int fn_82535EB8();
extern int iRam8326c2bc;
extern unsigned int lbl_8326C390;


void fn_82512CC8(uint *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1[9];
  uVar4 = 0;
  uVar2 = (uint)(param_1[10] != uVar3);
  uVar5 = uVar2;
  for (; uVar3 != param_1[10]; uVar3 = uVar3 + 0xc) {
    if (*(int *)(uVar3 + 4) != 0) {
      uVar4 = 1;
    }
    uVar5 = -(uint)(*(int *)(uVar3 + 8) == 0) & uVar5;
  }
  for (uVar3 = param_1[5]; uVar3 != param_1[6]; uVar3 = uVar3 + 0xc) {
    uVar4 = -(uint)(*(int *)(uVar3 + 8) == 0) & uVar4;
    if (*(int *)(uVar3 + 4) != 0) {
      uVar2 = 0;
      uVar5 = 0;
    }
  }
  if (uVar2 != *param_1) {
    *param_1 = uVar2;
    if (uVar2 == 0) {
      uVar1 = 0x38;
      iRam8326c2bc = iRam8326c2bc + -1;
    }
    else {
      uVar1 = 0x37;
      iRam8326c2bc = iRam8326c2bc + 1;
    }
    lbl_8326C390 = (uint)(uVar2 != 0);
    fn_825269D0(uVar1,0);
  }
  if (uVar4 != param_1[1]) {
    param_1[1] = uVar4;
    uVar1 = 0x39;
    if (uVar4 == 0) {
      uVar1 = 0x3a;
    }
    fn_825269D0(uVar1,0);
  }
  if (uVar5 != param_1[2]) {
    param_1[2] = uVar5;
    fn_82535EB8(uVar5 == 1);
  }
  return;
}


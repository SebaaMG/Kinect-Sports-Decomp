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
extern int fn_822AEA70();
extern int fn_822CFF20();
extern int fn_82359BB0();
extern int fn_82373130();
extern int fn_82373840();
extern int fn_823738F0();
extern int fn_823759C8();
extern int fn_82375A98();
extern int fn_82380FA8();
extern unsigned int lbl_821B37CC;
extern unsigned int lbl_821B37E4;
extern unsigned int lbl_821B3814;
extern unsigned int lbl_831D1C34;


void fn_82374108(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piStack_40;
  int *piStack_3c;
  undefined **appuStack_30 [4];
  undefined ***pppuStack_20;
  
  fn_822CFF20(&piStack_40,param_1 + 0x184);
  for (; piStack_40 != piStack_3c; piStack_40 = piStack_40 + 2) {
    if (*(uint *)(*piStack_40 + 0x2180) <= *(uint *)(param_1 + 0x26c)) {
      *(undefined4 *)(*piStack_40 + 0x174) = 0;
      uVar2 = lbl_831D1C34;
      iVar1 = *piStack_40;
      *(undefined4 *)(iVar1 + 0xe0) = lbl_831D1C34;
      *(undefined4 *)(iVar1 + 0xd4) = 1;
      *(undefined4 *)(iVar1 + 0xe4) = uVar2;
    }
  }
  fn_82373130(param_1);
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  fn_82375A98(param_1);
  fn_823738F0(param_1);
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B37E4;
  fn_822AEA70(*(undefined4 *)(param_1 + 8),appuStack_30);
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B3814;
  fn_822AEA70(*(undefined4 *)(param_1 + 8),appuStack_30);
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  fn_82373840(param_1);
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B37CC;
  fn_822AEA70(*(undefined4 *)(param_1 + 8),appuStack_30);
  fn_823759C8(param_1,*(undefined4 *)(param_1 + 0x1e4));
  fn_82380FA8(*(undefined4 *)(param_1 + 0x7e4));
  fn_82359BB0(&piStack_40);
  return;
}


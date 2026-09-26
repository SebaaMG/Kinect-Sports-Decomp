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
extern int fn_82E2D9C0();
extern int fn_82E4FE40();
extern int fn_82E569B0();
extern int fn_82E57CA0();
extern int fn_82E77000();
extern int fn_82E77258();
extern int fn_82E77398();
extern int fn_82E78ED8();
extern int fn_82EEB4D8();
extern unsigned int lbl_82154D80;
extern unsigned int lbl_8215F018;
extern unsigned int lbl_8215F020;


void fn_82E7A5B0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_40 [4];
  int aiStack_3c [15];
  
  *param_1 = &lbl_8215F020;
  fn_82E78ED8();
  uVar3 = 0;
  if (param_1[5] != 0) {
    do {
      aiStack_3c[0] = 0;
      fn_82E77000(param_1 + 2,uVar3,auStack_40,aiStack_3c);
      iVar2 = aiStack_3c[0];
      if (aiStack_3c[0] != 0) {
        fn_82E77398(aiStack_3c[0]);
        fn_82E4FE40(iVar2);
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)(uint)param_1[5]);
  }
  iVar2 = param_1[2];
  while (iVar2 != 0) {
    iVar1 = param_1[2];
    iVar2 = *(int *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = param_1[6];
    param_1[6] = iVar1;
    param_1[2] = iVar2;
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  if (param_1[0x8f] != 0) {
    fn_82E4FE40();
  }
  param_1[0x8f] = 0;
  param_1[0x91] = &lbl_8215F018;
  if (param_1[0x92] == 0) {
    fn_82E77258(param_1 + 0x91,0);
  }
  fn_82E57CA0(param_1 + 0x86);
  fn_82EEB4D8(param_1 + 0x79);
  param_1[0x5e] = &lbl_82154D80;
  if (param_1[0x5f] == 0) {
    fn_82E569B0(param_1 + 0x5e,0);
  }
  fn_82E2D9C0(param_1 + 6);
  return;
}


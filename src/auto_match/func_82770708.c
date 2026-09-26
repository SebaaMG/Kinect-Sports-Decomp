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
extern int fn_8267C4C8();
extern int fn_827B3DB8();
extern int fn_827B5060();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820151C4;
extern unsigned int lbl_821AAD20;


undefined4 *
fn_82770708(undefined4 *param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[2] = param_2;
  *param_1 = &lbl_820151C4;
  param_1[1] = 1;
  param_1[5] = 0x400;
  param_1[3] = 0x30;
  param_1[4] = 3;
  param_1[6] = 0x400;
  param_1[7] = param_6;
  if ((int)param_3 != 0) {
    fn_8267C4C8(param_3);
  }
  param_1[8] = (int)param_3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  param_1[9] = (int)param_4;
  if ((param_5 & 0xffffffff) != 0) {
    fn_8267C4C8(param_5);
  }
  param_1[10] = (int)param_5;
  param_1[0xb] = param_7;
  fn_827B5060(param_1 + 0xc);
  fn_827B3DB8(param_1 + 0x25);
  uVar2 = lbl_82002AE0;
  param_1[0x41] = lbl_8200D8DC;
  param_1[0x40] = uVar2;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  uVar3 = lbl_821AAD20;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4d] = uVar2;
  param_1[0x4a] = 0;
  param_1[0x4e] = uVar2;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x4f] = uVar3;
  param_1[0x50] = uVar3;
  param_1[0x4b] = 0x7fffffff;
  param_1[0x4c] = 0x80000001;
  param_1[0x52] = 0;
  iVar1 = param_1[2];
  *(undefined1 *)(param_1 + 0x53) = param_8;
  if (iVar1 != 0) {
    param_1[3] = *(undefined4 *)(iVar1 + 0xc);
    param_1[4] = *(undefined4 *)(iVar1 + 0x10);
    param_1[5] = *(undefined4 *)(iVar1 + 0x14);
    param_1[6] = *(undefined4 *)(iVar1 + 0x18);
  }
  param_1[0xc] = param_1[5];
  param_1[0xd] = param_1[6];
  return param_1;
}


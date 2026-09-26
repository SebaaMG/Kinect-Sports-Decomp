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
extern int fn_82239CB0();
extern int fn_8223A4D8();
extern int fn_82256C80();
extern int fn_82256ED0();
extern int fn_82365BD8();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196C58;
extern unsigned int lbl_82197F44;
extern unsigned int lbl_82198190;
extern unsigned int lbl_82198198;
extern unsigned int lbl_821981A8;


undefined4 * fn_82256AD0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_82239CB0();
  *param_1 = &lbl_82198190;
  param_1[10] = &lbl_821968A4;
  fn_82256C80(param_1 + 0xc,param_2 + 0x30);
  param_1[0xc] = &lbl_82198198;
  fn_82256ED0(param_1 + 0x34,param_2 + 0xd0);
  puVar3 = param_1 + 0x5e;
  param_1[0x34] = &lbl_821981A8;
  fn_8223A4D8(puVar3,param_2 + 0x178);
  param_1[0x5e] = &lbl_82196C58;
  puVar2 = param_1 + 0x6c;
  if (*(int *)(param_2 + 0x1c0) == 0) {
    param_1[0x70] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x1c0) != param_2 + 0x1b0) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x1c0))
                      (*(undefined4 **)(param_2 + 0x1c0),puVar2);
    param_1[0x70] = uVar1;
  }
  puVar2 = param_1 + 0x72;
  if (*(int *)(param_2 + 0x1d8) == 0) {
    param_1[0x76] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x1d8) != param_2 + 0x1c8) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x1d8))
                      (*(undefined4 **)(param_2 + 0x1d8),puVar2);
    param_1[0x76] = uVar1;
  }
  *puVar3 = &lbl_82197F44;
  fn_82365BD8(param_1 + 0x78,param_2 + 0x1e0);
  *puVar3 = &lbl_82197F44;
  return param_1;
}


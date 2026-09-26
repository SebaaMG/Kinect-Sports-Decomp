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
extern int fn_82365BD8();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196C58;
extern unsigned int lbl_821983B8;
extern unsigned int lbl_821983C0;


undefined4 * fn_8225AA50(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_82239CB0();
  *param_1 = &lbl_821983B8;
  param_1[10] = &lbl_821968A4;
  puVar3 = param_1 + 0xc;
  fn_8223A4D8(puVar3,param_2 + 0x30);
  param_1[0xc] = &lbl_82196C58;
  puVar2 = param_1 + 0x1a;
  if (*(int *)(param_2 + 0x78) == 0) {
    param_1[0x1e] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x78) != param_2 + 0x68) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x78))(*(undefined4 **)(param_2 + 0x78),puVar2);
    param_1[0x1e] = uVar1;
  }
  puVar2 = param_1 + 0x20;
  if (*(int *)(param_2 + 0x90) == 0) {
    param_1[0x24] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x90) != param_2 + 0x80) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x90))(*(undefined4 **)(param_2 + 0x90),puVar2);
    param_1[0x24] = uVar1;
  }
  *puVar3 = &lbl_821983C0;
  fn_82365BD8(param_1 + 0x26,param_2 + 0x98);
  fn_82365BD8(param_1 + 0x28,param_2 + 0xa0);
  fn_82365BD8(param_1 + 0x2a,param_2 + 0xa8);
  *puVar3 = &lbl_821983C0;
  return param_1;
}


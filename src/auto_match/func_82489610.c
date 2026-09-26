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
extern int fn_82489248();
extern int fn_824E7E68();
extern int fn_82522DF8();
extern int fn_82576400();
extern int fn_8265C9E0();
extern unsigned int lbl_821C16B8;


int fn_82489610(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = fn_82522DF8(0x1af0);
  *(int *)(iVar2 + 0x10) = param_1;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(int *)(iVar2 + 8) = param_1;
  *(code **)(param_1 + 0xb4) = fn_82489248;
  fn_824E7E68(iVar2 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x93c);
  puVar3 = (undefined4 *)fn_8265C9E0(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = uVar1;
    *puVar3 = &lbl_821C16B8;
  }
  fn_82576400(uVar1,puVar3);
  return iVar2;
}


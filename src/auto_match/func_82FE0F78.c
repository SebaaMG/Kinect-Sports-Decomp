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
extern int fn_82FE0768();
extern int fn_82FE07D0();
extern int fn_82FE0818();
extern int fn_82FE4700();
extern unsigned int lbl_821AAD20;


undefined8 fn_82FE0F78(int param_1)

{
  undefined4 uVar1;
  
  fn_82FE4700(param_1 + 0x8c);
  fn_82FE4700(param_1 + 0x98);
  fn_82FE4700(param_1 + 0xa4);
  fn_82FE4700(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xdc) != 0) {
    fn_82FE4700();
  }
  uVar1 = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x44) = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  fn_82FE0818(param_1);
  fn_82FE0768(param_1);
  fn_82FE07D0(param_1);
  return 1;
}


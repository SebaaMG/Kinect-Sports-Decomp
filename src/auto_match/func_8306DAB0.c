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
extern int fn_82F691F0();
extern int fn_8306D610();
extern int fn_8306ECA8();
extern int fn_8306FB50();
extern int fn_830758A8();
extern int fn_83075A28();
extern int fn_83075CE0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


int fn_8306DAB0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  fn_830758A8();
  fn_83075A28(param_1 + 0x530);
  fn_83075CE0(param_1 + 0xa40);
  fn_8306FB50(param_1 + 0xcd0);
  fn_8306ECA8();
  puVar1 = (undefined4 *)(param_1 + 0x1a50U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_8306ECA8();
  uVar3 = lbl_821AAD20;
  *(undefined1 *)(param_1 + 0x1a7c) = 0;
  uVar2 = lbl_82002AE0;
  *(undefined1 *)(param_1 + 0x1a90) = 0;
  *(undefined4 *)(param_1 + 0x1a70) = uVar3;
  *(undefined1 *)(param_1 + 0x1a91) = 0;
  *(undefined4 *)(param_1 + 0x1a74) = uVar2;
  *(undefined1 *)(param_1 + 0x1a92) = 0;
  *(undefined4 *)(param_1 + 0x1a78) = uVar3;
  *(undefined4 *)(param_1 + 0x1a88) = uVar3;
  *(undefined4 *)(param_1 + 0x1a8c) = uVar3;
  puVar1 = (undefined4 *)(param_1 + 0x1a60U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_8306D610(param_1);
  fn_82F691F0(param_1 + 0x1a00,0,0x50);
  return param_1;
}


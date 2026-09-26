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
extern int fn_824AF940();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82191FC4;
extern unsigned int lbl_82192A60;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_82193CF4;
extern unsigned int lbl_82195988;
extern unsigned int lbl_8219598C;
extern unsigned int lbl_821C006C;
extern unsigned int lbl_821CC160;


undefined4 * fn_824AE8C0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  *param_1 = &lbl_821C006C;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_824AF940(param_1 + 1);
  param_1[0xc] = 0;
  param_1[0x1c] = 0;
  uVar7 = lbl_821CC160;
  uVar6 = lbl_82193CF4;
  uVar4 = lbl_82192A60;
  uVar2 = lbl_821916FC;
  param_1[0xe] = 1;
  uVar5 = lbl_82192F70;
  uVar3 = lbl_82191FC4;
  param_1[0xd] = uVar7;
  param_1[0x14] = uVar7;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar7;
  param_1[0x19] = uVar7;
  param_1[0x17] = uVar6;
  param_1[0x18] = uVar4;
  param_1[0x1a] = uVar3;
  param_1[0x1b] = uVar5;
  puVar1 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar3 = lbl_8219598C;
  uVar2 = lbl_82195988;
  param_1[0x1d] = *(undefined4 *)(param_2 + 0x48);
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar2;
  param_1[0x20] = uVar3;
  return param_1;
}


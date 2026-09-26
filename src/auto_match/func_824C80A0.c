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
extern int fn_824C6280();
extern int fn_824C83B8();
extern int fn_824C84E8();
extern unsigned int lbl_8218E1AC;


void fn_824C80A0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 in_r0;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_824C83B8();
  iVar3 = (int)in_r0;
  puVar1 = (undefined4 *)param_2[1];
  for (puVar4 = (undefined4 *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    fn_824C84E8((double)lbl_8218E1AC,param_2,puVar4);
    fn_824C6280(param_1,*puVar4);
    iVar3 = (int)in_r0;
  }
  uVar2 = param_2[0x10];
  param_2[0x10] = 0;
  puVar4 = (undefined4 *)((int)param_2 + iVar3 + 0x20 & 0xfffffff0);
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  param_2[0x11] = uVar2;
  puVar4 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4 = (undefined4 *)((int)param_2 + iVar3 + 0x20 & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  return;
}


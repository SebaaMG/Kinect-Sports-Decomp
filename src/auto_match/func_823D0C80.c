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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_823D0DD8();
extern int fn_823E7788();
extern int fn_823EAF68();
extern int fn_824FE498();
extern unsigned int iStack_ec;
extern unsigned int lbl_832975B0;


undefined8 fn_823D0C80(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar2;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_f0 [4];
  int iStack_ec;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [88];
  
  if (*(int *)(param_1 + 0x9a0) == 0) {
    fn_82250D10(auStack_e0);
    puVar4 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar4 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar4 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    fn_823E7788(param_1,auStack_e0);
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if (*(char *)(iVar3 + 4) == '\0') {
      if (*(int *)(param_1 + 0x4c0) != 0) {
        fn_824FE498(param_2);
        puVar4 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        puVar1 = (undefined4 *)((int)param_2 + 0xbd0U & 0xfffffff0);
        *puVar1 = *puVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar4 = (undefined4 *)((int)param_2 + 0xc30U & 0xfffffff0);
        *puVar4 = in_register_000104d0;
        puVar4[1] = in_register_000104d4;
        puVar4[2] = in_register_000104d8;
        puVar4[3] = in_vr77;
      }
      fn_823D0DD8(param_1,auStack_e0);
    }
    else if (*(int *)(param_1 + 0x84) != 0) {
      puVar4 = (undefined4 *)fn_822EFBF0(auStack_f0);
      fn_823EAF68(*puVar4,auStack_e0);
      if (iStack_ec != 0) {
        fn_822315A0();
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


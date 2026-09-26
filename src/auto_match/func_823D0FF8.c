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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_823D1138();
extern int fn_823E7368();
extern int fn_823EB078();
extern unsigned int iStack_50;
extern unsigned int iStack_cc;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_4c;


undefined8 fn_823D0FF8(int param_1,int param_2)

{
  int in_r0;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_d0 [4];
  int iStack_cc;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  int iStack_50;
  undefined1 uStack_4c;
  
  if (*(int *)(param_1 + 0x9a0) == 0) {
    fn_82250D10(auStack_c0);
    puVar3 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    iStack_50 = 0xffffffff;
    fn_823E7368(param_1,auStack_c0);
    puVar3 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010020;
    puVar3[1] = in_register_00010024;
    puVar3[2] = in_register_00010028;
    puVar3[3] = in_vr2;
    uStack_4c = *(char *)(param_1 + 0xd51) == '\0';
    iVar2 = lbl_832975B0;
    iStack_50 = param_2;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(char *)(iVar2 + 4) == '\0') {
      fn_823D1138(param_1,auStack_c0);
    }
    else if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(param_1 + 0xcc) == param_2)) {
      puVar3 = (undefined4 *)fn_822EFBF0(auStack_d0);
      fn_823EB078(*puVar3,auStack_c0);
      if (iStack_cc != 0) {
        fn_822315A0();
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


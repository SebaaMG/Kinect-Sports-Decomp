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
extern int fn_822ABA88();


void fn_8230A4F8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(iVar1 + 0x9a0);
  if (iVar5 == 0) {
    iVar2 = *(int *)(iVar1 + 0x41c);
    iVar5 = *(int *)(iVar1 + 0x9a4);
    if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) {
      piVar3 = *(int **)(*(int *)(iVar1 + 0x420) * 4 + **(int **)(iVar1 + 8));
      iVar5 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),*(undefined4 *)(iVar1 + 0x424));
    }
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(undefined4 *)(param_1 + 0x120) = 1;
    puVar4 = (undefined4 *)(param_1 + 0xf0U & 0xfffffff0);
    *puVar4 = in_register_00010030;
    puVar4[1] = in_register_00010034;
    puVar4[2] = in_register_00010038;
    puVar4[3] = in_vr3;
    puVar4 = (undefined4 *)(param_1 + 0x100U & 0xfffffff0);
    *puVar4 = in_register_00010020;
    puVar4[1] = in_register_00010024;
    puVar4[2] = in_register_00010028;
    puVar4[3] = in_vr2;
    puVar4 = (undefined4 *)(param_1 + 0x110U & 0xfffffff0);
    *puVar4 = in_register_00010010;
    puVar4[1] = in_register_00010014;
    puVar4[2] = in_register_00010018;
    puVar4[3] = in_vr1;
  }
  return;
}


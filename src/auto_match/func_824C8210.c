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


void fn_824C8210(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  piVar1 = (int *)param_1[1];
  for (piVar4 = (int *)*param_1; piVar4 != piVar1; piVar4 = piVar4 + 2) {
    iVar2 = *(int *)(*piVar4 + 0x34);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x40) = 1;
      puVar3 = (undefined4 *)(iVar2 + 0x30U & 0xfffffff0);
      *puVar3 = in_register_00010010;
      puVar3[1] = in_register_00010014;
      puVar3[2] = in_register_00010018;
      puVar3[3] = in_vr1;
    }
  }
  param_1[0x10] = 1;
  puVar3 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  return;
}


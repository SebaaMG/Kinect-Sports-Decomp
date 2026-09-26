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
extern unsigned int *auStack_20;
extern int fn_8255C730();


int fn_822B4148(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  int *piVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 auStack_20 [16];
  
  puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  iVar2 = fn_8255C730(*(undefined4 *)(param_1 + 0x20),auStack_20,1 << (param_2 & 0x3f));
  if (iVar2 != 0) {
    for (piVar3 = *(int **)(param_1 + 0x10); piVar3 != *(int **)(param_1 + 0x14);
        piVar3 = piVar3 + 1) {
      if (*(uint *)(*piVar3 + 0x24) == (uint)*(ushort *)(iVar2 + 2)) {
        return *piVar3;
      }
    }
  }
  return 0;
}


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
extern unsigned int *auStack_40;


void fn_82D483E0(int param_1,int param_2,longlong param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort auStack_40 [32];
  
  if (0 < (int)param_3) {
    puVar3 = (ushort *)(param_2 + -2);
    do {
      puVar3 = puVar3 + 1;
      auStack_40[0] = *puVar3 & 0xff;
      uVar2 = *puVar3 >> 8;
      piVar1 = *(int **)((uint)uVar2 * 4 + *(int *)(param_1 + 0x44));
      (**(code **)(*piVar1 + 0x3c))(piVar1,auStack_40,1,param_4);
      param_3 = param_3 + -1;
      *(uint *)(param_4 + 0xc) =
           (*(uint *)(param_4 + 0xc) & 0xc0ffffff) + (uint)uVar2 * 0x100 | 0x3f000000;
      param_4 = param_4 + 0x10;
    } while (param_3 != 0);
  }
  return;
}


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
extern int fn_8267C4F0();
extern int fn_826959C8();
extern int fn_826A7398();


void fn_8274BE60(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = fn_826A7398();
    piVar3 = (int *)(**(code **)(*(int *)(iVar2 + 8) + 0xc))((int *)(iVar2 + 8),0x1b);
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 0x10))(piVar3);
      puVar1 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar1);
      puVar1[4] = uVar4;
      *puVar1 = 2;
      fn_8267C4F0(piVar3);
    }
  }
  return;
}


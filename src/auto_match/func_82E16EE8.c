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
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82E16EE8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = fn_82CE5410();
  if (*(uint *)(iVar1 + 0x44) == (*(uint *)(iVar1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),(int *)(iVar1 + 0x40),0xc);
  }
  puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x44) * 0xc + *(int *)(iVar1 + 0x40));
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_2;
    puVar3[1] = param_3;
    puVar3[2] = param_4;
  }
  *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
  return;
}


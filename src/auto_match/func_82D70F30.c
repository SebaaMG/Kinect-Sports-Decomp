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
extern int fn_82CE6310();
extern int fn_82CE63B0();


void fn_82D70F30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  param_1[1] = 0;
  iVar1 = fn_82CE5410();
  if ((param_1[2] & 0x3fffffff) < 4) {
    uVar3 = (param_1[2] & 0x3fffffff) << 1;
    if (uVar3 < 5) {
      uVar3 = 4;
    }
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_1,uVar3,4);
  }
  iVar1 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),param_1,4);
  }
  param_1[1] = param_1[1] + 1;
  iVar1 = fn_82CE5410();
  puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x200);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
  }
  *(undefined4 **)*param_1 = puVar2;
  *(undefined1 *)((int)puVar2 + 0x13) = 0x10;
  *(undefined1 *)(puVar2 + 4) = 1;
  puVar2[6] = 0xffffffff;
  puVar2[5] = 0xffffffff;
  *puVar2 = 0x10;
  return;
}


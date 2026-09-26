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
extern unsigned int *auStack_30;
extern int fn_822C5B18();
extern int fn_823000E0();


void fn_82312B70(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [24];
  
  iVar1 = param_1[3];
  uVar2 = param_1[4];
  *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x578) = 0x800;
  uVar3 = fn_822C5B18(auStack_30,(ulonglong)uVar2 + 0x978);
  fn_823000E0(*(undefined4 *)(iVar1 + 0x1e8),uVar3);
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}


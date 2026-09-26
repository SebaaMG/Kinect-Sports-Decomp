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
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C5B18();
extern int fn_822FB198();
extern int fn_823000E0();


void fn_823048C0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  (**(code **)(*param_1 + 0x1c))();
  fn_82230110(auStack_40,0xffffffff821aef0c);
  fn_822FB198(*(undefined4 *)(*(int *)(param_1[3] + 0x114) + 0xc0),auStack_40);
  fn_82230300(auStack_40,1,0);
  uVar1 = param_1[4];
  iVar2 = param_1[3];
  *(undefined4 *)(*(int *)(iVar2 + 0x1e8) + 0x578) = 0x800;
  uVar3 = fn_822C5B18(auStack_60,(ulonglong)uVar1 + 0x978);
  fn_823000E0(*(undefined4 *)(iVar2 + 0x1e8),uVar3);
  param_1[0x10] = 0;
  return;
}


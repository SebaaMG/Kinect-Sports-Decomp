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
extern int fn_823000E0();
extern unsigned int lbl_821CA460;
extern unsigned int uStack_20;


void fn_82312250(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  
  uVar4 = lbl_821CA460;
  iVar1 = *(int *)(param_1 + 0xc);
  uStack_20 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xe10);
  iVar3 = *(int *)(iVar1 + 0x1e8);
  *(undefined4 *)(iVar1 + 500) = lbl_821CA460;
  *(undefined4 *)(iVar2 + 0xc20) = uVar4;
  *(undefined4 *)(iVar3 + 0x578) = 0;
  fn_823000E0(*(undefined4 *)(iVar1 + 0x1e8),auStack_30);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x240) = 0;
  return;
}


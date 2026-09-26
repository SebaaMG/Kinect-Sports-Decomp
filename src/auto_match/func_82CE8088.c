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
extern unsigned int *auStack_50;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82CFB2D8();
extern int fn_82CFB670();
extern unsigned int lbl_8317F4E4;


undefined8 fn_82CE8088(undefined8 param_1,undefined8 param_2)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [56];
  
  fn_82CE7EE0(auStack_50);
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x10);
  *(undefined2 *)(iVar3 + 4) = 0x10;
  uVar1 = (*(code *)lbl_8317F4E4)(param_2,auStack_50);
  uVar1 = fn_82CFB670(iVar3,uVar1);
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x1c);
  *(undefined2 *)(iVar3 + 4) = 0x1c;
  uVar2 = fn_82CFB2D8(iVar3,uVar1,0x1000);
  fn_82CE4118(uVar1);
  fn_82CE7E68(auStack_50);
  return uVar2;
}


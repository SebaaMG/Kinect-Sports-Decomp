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
extern int fn_82CE3E48();
extern int fn_82CE5410();
extern int fn_82D00388();
extern int fn_82E09228();
extern int fn_82E095E0();
extern int fn_82E09800();
extern unsigned int lbl_8214A5AC;
extern unsigned int lbl_832654E4;
extern unsigned int lbl_832654E8;
extern unsigned int lbl_832654EC;


void fn_82E09A38(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x20);
  *(undefined2 *)(iVar1 + 4) = 0x20;
  uVar2 = fn_82E095E0();
  if (lbl_832654E4 != 0) {
    fn_82CE3E48();
  }
  lbl_832654E4 = uVar2;
  iVar1 = fn_82CE5410();
  puVar3 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x18);
  *puVar3 = &lbl_8214A5AC;
  *(undefined2 *)(puVar3 + 1) = 0x18;
  *(undefined2 *)((int)puVar3 + 6) = 1;
  fn_82D00388(puVar3 + 2,0);
  if (lbl_832654E8 != (undefined4 *)0x0) {
    fn_82CE3E48();
  }
  lbl_832654E8 = puVar3;
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x14);
  *(undefined2 *)(iVar1 + 4) = 0x14;
  uVar2 = fn_82E09800();
  if (lbl_832654EC != 0) {
    fn_82CE3E48();
  }
  lbl_832654EC = uVar2;
  fn_82E09228(param_1);
  return;
}


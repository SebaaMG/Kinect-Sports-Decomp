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
extern int fn_8225F160();
extern int fn_824CD030();
extern int fn_82F51178();
extern int fn_82F513F8();
extern unsigned int lbl_821C0B48;


void fn_824CC9E8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &lbl_821C0B48;
  iVar2 = fn_824CD030();
  if (iVar2 == 0) {
    iVar2 = fn_8225F160();
    *(int *)(iVar2 + 0x58) = *(int *)(iVar2 + 0x58) + -1;
  }
  else {
    iVar2 = param_1[0xc];
    iVar3 = fn_8225F160();
    *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + -1;
    if (iVar2 == 0) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + -1;
    }
    else {
      *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + -1;
    }
  }
  iVar2 = param_1[5];
  if (iVar2 != 0) {
    iVar3 = fn_82F513F8(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x20));
    if (iVar3 == *(int *)(iVar2 + 0x94)) {
      fn_82F51178(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x20),0);
    }
    *(undefined4 *)(iVar2 + 0x80) = 0;
    puVar1 = (undefined4 *)param_1[5];
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[5] = 0;
  }
  puVar1 = (undefined4 *)param_1[8];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}


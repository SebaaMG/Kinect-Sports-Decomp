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
extern int fn_82517E78();
extern int fn_82F51178();
extern int fn_82F513F8();
extern unsigned int lbl_821C0BE0;
extern unsigned int lbl_821C0C24;


void fn_824CDA40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[0x20];
  *param_1 = &lbl_821C0BE0;
  param_1[0x1a] = &lbl_821C0C24;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14);
    if (iVar2 != 0) {
      iVar4 = fn_82F513F8(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x20));
      if (iVar4 == *(int *)(iVar2 + 0x94)) {
        fn_82F51178(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x20),0);
      }
      *(undefined4 *)(iVar2 + 0x80) = 0;
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    param_1[0x20] = 0;
  }
  puVar3 = (undefined4 *)param_1[0x25];
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  fn_82517E78(param_1);
  return;
}


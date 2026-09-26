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
extern int fn_82B6AF00();
extern int fn_82B6AF78();
extern int fn_82B7F370();


void fn_82B69D70(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 != 0) {
    fn_82B7F370(*(undefined4 *)(param_1 + 0x114));
    fn_82B6AF00(*(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x110));
    fn_82B6AF78(*(undefined4 *)(param_1 + 0x10c),param_1);
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 8));
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xc));
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x14));
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x18));
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x1c));
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x20));
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x24));
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x28));
    puVar1 = (undefined4 *)(param_1 + 0x28);
    lVar2 = 6;
    do {
      puVar1 = puVar1 + 1;
      (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),*puVar1);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar3 = param_1 + 0x128;
    lVar2 = 5;
    do {
      if (*(int *)(iVar3 + 0x10) != 0) {
        (**(code **)(param_1 + 0xc4))(*(undefined4 *)(param_1 + 0xb4),iVar3);
      }
      lVar2 = lVar2 + -1;
      iVar3 = iVar3 + 0x20;
    } while (lVar2 != 0);
    (**(code **)(param_1 + 0xbc))(*(undefined4 *)(param_1 + 0xb4),param_1);
  }
  return;
}


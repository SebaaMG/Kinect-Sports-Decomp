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
extern int fn_8265CA20();
extern int fn_82B8F6A0();
extern unsigned int lbl_820DC938;


void fn_82B8F6F0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *param_1 = &lbl_820DC938;
  if (param_1[0x3d] != 0) {
    if (param_1[0x3e] != 0) {
      uVar1 = param_1[0x35];
      if (uVar1 < (uint)param_1[0x36]) {
        puVar2 = (undefined4 *)(param_1[0x3e] + -4);
        do {
          for (uVar3 = param_1[0x32]; uVar3 < (uint)param_1[0x34]; uVar3 = uVar3 + 4) {
            puVar2 = puVar2 + 2;
            fn_8265CA20(*puVar2);
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[0x36]);
      }
    }
  }
  fn_8265CA20(param_1[0x3c]);
  fn_8265CA20(param_1[0x3e]);
  fn_82B8F6A0(param_1);
  return;
}


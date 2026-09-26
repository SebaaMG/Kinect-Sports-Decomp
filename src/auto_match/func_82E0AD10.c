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
extern int fn_82CE5338();
extern int fn_82CE5410();


void fn_82E0AD10(int param_1,ulonglong param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    puVar2 = *(uint **)(param_1 + 0x34);
    while ((ulonglong)*puVar2 != (param_2 & 0xffffffff)) {
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
      if (*(int *)(param_1 + 0x38) <= iVar1) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x38) + -1;
    *(int *)(param_1 + 0x38) = iVar3;
    if (iVar3 != iVar1) {
      *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 0x34)) =
           *(undefined4 *)(iVar3 * 4 + *(int *)(param_1 + 0x34));
    }
    iVar1 = fn_82CE5410();
    fn_82CE5338(*(undefined4 *)(iVar1 + 0x10),param_2);
  }
  return;
}


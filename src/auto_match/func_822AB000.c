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
extern int fn_82381BC0();


void fn_822AB000(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *apuStack_40 [16];
  
  uVar3 = 0;
  param_1[4] = param_2;
  if (param_1[1] - *param_1 >> 2 != 0) {
    iVar2 = 0;
    do {
      puVar1 = *(undefined4 **)(*(int *)(iVar2 + *param_1) + 4);
      apuStack_40[0] = (undefined4 *)*puVar1;
      if (uVar3 == param_2) {
        while (apuStack_40[0] != puVar1) {
          *(undefined4 *)(*(int *)(apuStack_40[0][4] + 0x14) + 0x1d0) = 0;
          fn_82381BC0(apuStack_40);
        }
      }
      else {
        while (apuStack_40[0] != puVar1) {
          *(undefined4 *)(*(int *)(apuStack_40[0][4] + 0x14) + 0x1d0) = 1;
          fn_82381BC0(apuStack_40);
        }
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < (uint)(param_1[1] - *param_1 >> 2));
  }
  return;
}


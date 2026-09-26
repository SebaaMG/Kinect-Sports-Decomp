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
extern int fn_82C10B28();


undefined8 fn_82C294A8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *apuStack_20 [2];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x18) != 0) {
    apuStack_20[0] = *(undefined4 **)(*(int *)(iVar1 + 0x10) + 8);
    while ((apuStack_20[0] != (undefined4 *)0x0 &&
           (uVar2 = (**(code **)(*(int *)(iVar1 + 0x34) + 8))
                              (*(int *)(iVar1 + 0x34),*apuStack_20[0]), -1 < (int)uVar2))) {
      if (apuStack_20[0][3] != 0) {
        *(undefined4 *)(apuStack_20[0][3] + 8) = apuStack_20[0][2];
      }
      if (apuStack_20[0][2] != 0) {
        *(undefined4 *)(apuStack_20[0][2] + 0xc) = apuStack_20[0][3];
      }
      lVar3 = (ulonglong)*(uint *)(iVar1 + 0x18) - 1;
      *(int *)(iVar1 + 0x18) = (int)lVar3;
      *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) - *(int *)(iVar1 + 0x74);
      if (lVar3 == 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x10) + 8) = 0;
      }
      uVar2 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1e,apuStack_20);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      apuStack_20[0] = *(undefined4 **)(*(int *)(iVar1 + 0x10) + 8);
    }
  }
  return uVar2;
}


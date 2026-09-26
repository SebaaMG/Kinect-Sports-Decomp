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
extern int fn_82A6C5D8();


undefined8 fn_82A53E28(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if ((2 < *(int *)(iVar1 + 0x3c)) && (iVar4 = 0, 0 < *(int *)(iVar1 + 0x23c))) {
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x240) + iVar5);
      if ((puVar3[3] == 0) &&
         (uVar2 = fn_82A6C5D8(puVar3[0x22],puVar3[0x23],*puVar3,*(undefined2 *)(iVar1 + 0x22),
                                  puVar3[0x25],*(undefined4 *)(iVar1 + 0x230),
                                  *(undefined4 *)(iVar1 + 0x234)), (int)uVar2 < 0)) {
        return uVar2;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x98;
    } while (iVar4 < *(int *)(iVar1 + 0x23c));
  }
  return uVar2;
}


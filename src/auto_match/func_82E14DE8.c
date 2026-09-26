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
extern int fn_82CED5B8();
extern int fn_82CFBBF0();


void fn_82E14DE8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = fn_82CFBBF0(*(uint *)(iVar2 + *(int *)(param_1 + 0x10)) & 0xfffffffe,param_2);
      if (iVar1 == 0) {
        iVar2 = *(int *)(param_1 + 0x10) + iVar4 * 8;
        fn_82CED5B8(iVar2 + 4);
        fn_82CED5B8(iVar2);
        iVar2 = *(int *)(param_1 + 0x14) + -1;
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 == iVar4) {
          return;
        }
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 8);
        iVar4 = (iVar2 * 8 + *(int *)(param_1 + 0x10)) - (int)puVar3;
        lVar5 = 2;
        do {
          *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  return;
}


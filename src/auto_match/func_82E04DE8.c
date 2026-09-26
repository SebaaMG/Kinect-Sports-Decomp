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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82CED2F8();
extern int fn_82CED5B8();
extern int fn_82CED628();
extern int fn_82E04B20();


undefined8 fn_82E04DE8(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [44];
  
  iVar2 = fn_82E04B20();
  if ((param_3 & 0xffffffff) == 0) {
    if (iVar2 == -1) {
      uVar1 = 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) + iVar2 * 8;
      fn_82CED5B8(iVar3 + 4);
      fn_82CED5B8(iVar3);
      iVar3 = *(int *)(param_1 + 0xc) + -1;
      *(int *)(param_1 + 0xc) = iVar3;
      if (iVar3 == iVar2) {
        uVar1 = 0;
      }
      else {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 8);
        iVar2 = (iVar3 * 8 + *(int *)(param_1 + 8)) - (int)puVar4;
        lVar5 = 2;
        do {
          *puVar4 = *(undefined4 *)(iVar2 + (int)puVar4);
          puVar4 = puVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  if (iVar2 != -1) {
                    /* WARNING: Subroutine does not return */
    fn_82CED628(iVar2 * 8 + *(int *)(param_1 + 8) + 4,param_3);
  }
  fn_82CED2F8(auStack_30);
  fn_82CED2F8(auStack_2c);
                    /* WARNING: Subroutine does not return */
  fn_82CED628(auStack_30,param_2);
}


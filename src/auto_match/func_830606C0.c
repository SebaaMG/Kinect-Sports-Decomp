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
extern unsigned int *auStack_40;
extern int fn_8305D670();
extern int fn_8305D680();
extern int fn_8305D688();
extern int fn_83065B90();
extern int fn_83065BA8();


undefined8 fn_830606C0(int param_1)

{
  int iVar2;
  int iVar3;
  longlong lVar1;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [64];
  
  iVar2 = fn_83065B90(*(int *)(param_1 + 0x18) << 2);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar4 = (undefined4 *)(iVar2 + -4);
    do {
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
LAB_83060804:
  do {
    param_1 = *(int *)(param_1 + 4);
    if (param_1 == 0) {
      uVar5 = 1;
LAB_8306081c:
      fn_83065BA8(iVar2);
      return uVar5;
    }
    iVar3 = fn_8305D680(param_1);
    if (2 < iVar3) {
      lVar1 = fn_8305D680(param_1);
      fn_8305D688(param_1,lVar1 + -1,auStack_40);
      lVar1 = 0;
      iVar3 = fn_8305D680(param_1);
      if (0 < iVar3) {
        do {
          fn_8305D688(param_1,lVar1,auStack_40);
          iVar3 = fn_8305D670(param_1,lVar1);
          *(int *)(iVar3 * 4 + iVar2) = *(int *)(iVar3 * 4 + iVar2) + 1;
          iVar3 = fn_8305D670(param_1,lVar1);
          if (1 < *(int *)(iVar3 * 4 + iVar2)) {
            uVar5 = 0;
            goto LAB_8306081c;
          }
          lVar1 = lVar1 + 1;
          iVar3 = fn_8305D680(param_1);
        } while ((int)lVar1 < iVar3);
      }
      lVar1 = 0;
      iVar3 = fn_8305D680(param_1);
      if (0 < iVar3) {
        do {
          iVar3 = fn_8305D670(param_1,lVar1);
          lVar1 = lVar1 + 1;
          *(undefined4 *)(iVar3 * 4 + iVar2) = 0;
          iVar3 = fn_8305D680(param_1);
        } while ((int)lVar1 < iVar3);
      }
      goto LAB_83060804;
    }
    iVar3 = fn_8305D680(param_1);
    if (iVar3 < 3) {
      fn_83065BA8(iVar2);
      return 0;
    }
  } while( true );
}


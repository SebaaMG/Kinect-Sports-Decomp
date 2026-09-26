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
extern unsigned int *auStack_20;
extern int fn_82269BB8();
extern int fn_82269C50();
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;


void fn_82269B00(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_2 != 0) {
    if (param_2 < 5) {
      fn_82269C50();
      return;
    }
    if (param_2 != 5) {
      if (6 < param_2) {
        return;
      }
      fn_82269BB8();
      return;
    }
  }
  if (*(code **)(param_1 + 0x368) != (code *)0x0) {
    for (puVar1 = *(undefined4 **)**(int **)(param_1 + 0x2cc);
        puVar1 != (undefined4 *)**(int **)(param_1 + 0x2cc); puVar1 = (undefined4 *)*puVar1) {
      iVar2 = puVar1[2];
      if (*(uint *)(iVar2 + 0x40) == param_2) goto LAB_82269b74;
    }
    iVar2 = 0;
LAB_82269b74:
    uStack_14 = *(undefined4 *)(iVar2 + 0xdc);
    uStack_10 = *(undefined4 *)(param_1 + 0x36c);
    auStack_20[0] = 1;
    uStack_18 = 0;
    (**(code **)(param_1 + 0x368))(auStack_20);
  }
  return;
}


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
extern int fn_82278E58();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82837D98();


void fn_82279438(int param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint *puVar3;
  undefined4 auStack_20 [2];
  
  puVar3 = (uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x60) = *param_2;
  if (puVar3 != (uint *)0x0) {
    uVar2 = (ulonglong)*puVar3;
    if (uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) {
      if (*(int *)(param_1 + 0x58) != 0) {
        fn_8251FA58();
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      iVar1 = fn_8251F720(puVar3,0);
      *(int *)(param_1 + 0x58) = iVar1;
      fn_82837D98(*(undefined4 *)(iVar1 + 0x14),0,auStack_20);
      fn_82278E58(param_1,auStack_20[0]);
    }
  }
  return;
}


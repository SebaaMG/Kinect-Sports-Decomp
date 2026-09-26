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
extern int fn_82CE5410();
extern int fn_82D10A80();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_28;


void fn_82D10B18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0x80000000;
  fn_82D10A80(param_1,param_2,&iStack_30,param_3);
  iVar2 = 0;
  if (0 < iStack_2c) {
    iVar3 = 0;
    do {
      puVar1 = *(undefined4 **)(iVar3 + iStack_30);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < iStack_2c);
  }
  iVar2 = fn_82CE5410();
  iStack_2c = 0;
  if ((uStack_28 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),iStack_30,uStack_28 & 0x3fffffff,4);
  }
  return;
}


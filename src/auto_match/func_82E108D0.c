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
extern int fn_82E0FCA0();
extern int fn_82E132A0();
extern int fn_82E14238();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_48;


undefined8
fn_82E108D0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  
  if ((param_5 & 0xffffffff) == 0) {
    param_5 = 0xffffffff82133624;
  }
  iStack_50 = 0;
  iStack_4c = 0;
  uStack_48 = 0x80000000;
  iVar3 = fn_82E132A0(param_3,param_4,param_5,&iStack_50);
  if (iVar3 == 0) {
    uVar4 = 0;
    iVar3 = 0;
    iVar5 = 0;
    do {
      iVar2 = iStack_50;
      if (iStack_4c <= iVar3) break;
      iVar1 = *(int *)(iVar5 + iStack_50);
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar4 = fn_82E14238(param_3,*(undefined4 *)(iVar1 + 4));
        uVar4 = fn_82E0FCA0(param_1,param_2,*(undefined4 *)(*(int *)(iVar5 + iVar2) + 8),uVar4);
      }
      else {
        uVar4 = (**(code **)(iVar1 + 0xc))(param_1,param_2);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while ((int)uVar4 == 0);
    iVar3 = fn_82CE5410();
    iStack_4c = 0;
    if ((uStack_48 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),iStack_50,uStack_48 & 0x3fffffff,4);
    }
  }
  else {
    iVar3 = fn_82CE5410();
    iStack_4c = 0;
    if ((uStack_48 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),iStack_50,uStack_48 & 0x3fffffff,4);
    }
    uVar4 = 1;
  }
  return uVar4;
}


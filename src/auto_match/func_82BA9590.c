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
extern int fn_82BC0088();


void fn_82BA9590(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = param_1[0x17];
  if ((iVar1 != 0) && (uVar4 = 0, *(int *)(iVar1 + 4) != 0)) {
    iVar3 = 0;
    do {
      if ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
        puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar3);
      }
      else {
        puVar2 = (undefined4 *)fn_82BC0088(iVar1,uVar4);
      }
      (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,param_2,*param_1);
      iVar1 = param_1[0x17];
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4));
  }
  return;
}


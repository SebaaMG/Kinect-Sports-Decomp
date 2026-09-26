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
extern int fn_82E50BE8();
extern int fn_82EECAE0();


undefined8 fn_82E7B810(int param_1)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 8))();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar1 = fn_82E50BE8(0xd0,0,0,0,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82EECAE0(uVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),1,1)
    ;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar3 + 8) + 8) + iVar3;
    uVar2 = (*(code *)**(undefined4 **)(iVar3 + 8))(iVar3 + 8);
  }
  return uVar2;
}


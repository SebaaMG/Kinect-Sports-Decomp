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
extern int fn_8267C498();
extern int fn_826C6E68();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_826C90C8(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iStack_30;
  uint uStack_2c;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x1ac);
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x18) != '\0')) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x28))();
  }
  else {
    uVar1 = (ulonglong)*(uint *)(iVar2 + 0x10);
  }
  if ((param_2 & 0xffffffff) < (uVar1 & 0xffffffff)) {
    fn_826C6E68(param_1,param_2);
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))(&iStack_30,*(int **)(param_1 + 0x9c),param_2);
    uVar3 = 0;
    if (uStack_2c != 0) {
      iVar2 = 0;
      do {
        (**(code **)(**(int **)(iVar2 + iStack_30) + 8))(*(int **)(iVar2 + iStack_30),param_1,4);
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar3 < uStack_2c);
    }
  }
  fn_8267C498(param_1);
  return;
}


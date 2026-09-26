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
extern int fn_82FF2AA0();
extern int fn_83013880();


undefined8
fn_83008390(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  int *apiStack_40 [16];
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x1c) == param_2) {
    if (*(int *)(param_1 + 0x18) == 0) {
      apiStack_40[0] = (int *)0x0;
      uVar2 = fn_83013880(0xffffffff831bc7f4,*(int *)(param_1 + 0x1c),apiStack_40);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      if (apiStack_40[0] != (int *)0x0) {
        *(int **)(param_1 + 0x18) = apiStack_40[0];
        uVar2 = (**(code **)(*apiStack_40[0] + 0xc))(apiStack_40[0],0xffffffff831bc7f4,0,0);
        if ((int)uVar2 != 1) {
          return uVar2;
        }
      }
    }
    piVar1 = *(int **)(param_1 + 0x18);
    if ((piVar1 != (int *)0x0) &&
       (uVar2 = (**(code **)(*piVar1 + 4))(piVar1,param_3,param_4,param_5), (int)uVar2 == 1)) {
      uVar2 = fn_82FF2AA0(piVar1,param_3,param_4,param_5);
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


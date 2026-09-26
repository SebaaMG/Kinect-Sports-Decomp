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
extern int fn_82A43F70();


undefined8 fn_82A50DA8(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  uVar2 = 0;
  uVar3 = param_4;
  if ((param_4 & 0xffffffff) == 0) {
    uVar3 = 0x1337f001;
  }
  piVar4 = *(int **)(param_1 + 0x20);
  while (piVar4 != (int *)0x0) {
    if (piVar4 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *piVar4;
      piVar4 = (int *)piVar4[1];
    }
    fn_82A43F70(*(undefined4 *)(iVar1 + 8),param_2,param_3,uVar3);
  }
  if ((param_4 & 0xffffffff) == 0) {
    piVar4 = *(int **)(*(int *)(param_1 + 0x30) + 0xb0);
    uVar2 = (**(code **)(*piVar4 + 0x48))(piVar4,uVar3);
  }
  return uVar2;
}


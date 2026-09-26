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


undefined8 fn_83032130(int param_1,int *param_2)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x14))(param_2);
  if (iVar2 == 0) {
    uVar1 = 4;
  }
  else if (param_2[4] == 0) {
    for (piVar3 = *(int **)(param_1 + 0x7c);
        (piVar3 != *(int **)(param_1 + 0x80) && (*piVar3 != param_2[3])); piVar3 = piVar3 + 2) {
    }
    if ((-(uint)(*(int **)(param_1 + 0x80) != piVar3) & (uint)(piVar3 + 1)) == 0) {
      uVar1 = 0x17;
      if (*(int *)(param_1 + 0xc) != param_2[3]) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 5;
    }
  }
  else {
    uVar1 = 0x15;
  }
  return uVar1;
}


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


undefined8 fn_82FAE390(int *param_1,int *param_2)

{
  int iVar2;
  short sVar3;
  undefined8 uVar1;
  int *piVar4;
  
  iVar2 = (**(code **)(*param_2 + 0x14))(param_2);
  sVar3 = (**(code **)(*param_1 + 0x158))(param_1);
  if (sVar3 == -1) {
    uVar1 = 9;
  }
  else if (iVar2 == 6) {
    if (param_2[4] == 0) {
      for (piVar4 = (int *)param_1[0x1f];
          (piVar4 != (int *)param_1[0x20] && (*piVar4 != param_2[3])); piVar4 = piVar4 + 2) {
      }
      if ((-(uint)((int *)param_1[0x20] != piVar4) & (uint)(piVar4 + 1)) == 0) {
        uVar1 = 0x17;
        if (param_1[3] != param_2[3]) {
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
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


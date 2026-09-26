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
extern int fn_82FFF908();
extern int fn_82FFF990();


undefined8 fn_82FB1EE0(int param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    for (piVar2 = *(int **)(param_1 + 0xc);
        (piVar2 != *(int **)(param_1 + 0x10) && (*piVar2 != param_2)); piVar2 = piVar2 + 2) {
    }
    if (piVar2 != *(int **)(param_1 + 0x10)) {
      if (param_3 != '\0') {
        uVar1 = fn_82FFF908();
        return uVar1;
      }
      fn_82FFF990(piVar2[1]);
    }
  }
  return 1;
}


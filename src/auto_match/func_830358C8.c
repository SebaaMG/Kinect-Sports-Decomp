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
extern unsigned int *auStack_1c;
extern int fn_830352D0();
extern int fn_830360F0();


undefined8 fn_830358C8(int param_1,int param_2)

{
  undefined8 uVar1;
  int *piStack_20;
  undefined1 auStack_1c [4];
  
  uVar1 = 0x10;
  for (piStack_20 = *(int **)(param_1 + 0x10);
      (piStack_20 != *(int **)(param_1 + 0x14) && (*piStack_20 != param_2));
      piStack_20 = piStack_20 + 6) {
  }
  if (piStack_20 != *(int **)(param_1 + 0x14)) {
    uVar1 = fn_830352D0(piStack_20 + 1,param_1);
    fn_830360F0(auStack_1c,param_1 + 0x10,&piStack_20);
  }
  return uVar1;
}


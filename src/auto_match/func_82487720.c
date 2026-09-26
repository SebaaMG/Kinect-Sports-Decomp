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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82365BD8();


undefined8 fn_82487720(int param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_20 [8];
  
  piVar2 = (int *)fn_82365BD8(auStack_20);
  piVar1 = (int *)*piVar2;
  if (piVar1[1] != *(int *)(param_1 + 4)) {
    (**(code **)(*piVar1 + 4))((double)*(float *)(param_1 + 8),piVar1,param_2,0);
  }
  if (piVar2[1] != 0) {
    fn_822315A0();
  }
  return 1;
}


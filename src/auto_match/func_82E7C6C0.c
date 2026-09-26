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
extern unsigned int *auStack_28;
extern int fn_82EEF590();
extern unsigned int iStack_2c;


longlong fn_82E7C6C0(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piStack_30;
  int iStack_2c;
  undefined4 auStack_28 [4];
  
  piStack_30 = (int *)0x0;
  lVar2 = 0;
  auStack_28[0] = 0;
  iStack_2c = 0;
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                      (*(int **)(param_1 + 4),0xffffffff82154b28,0,&piStack_30);
    if (((-1 < iVar1) && (lVar2 = fn_82EEF590(piStack_30,&iStack_2c,auStack_28), -1 < lVar2)) &&
       (iStack_2c != 0)) {
      lVar2 = (**(code **)(*param_2 + 0x68))(param_2,0xffffffff8214c120,auStack_28[0]);
    }
    if (piStack_30 != (int *)0x0) {
      (**(code **)(*piStack_30 + 8))();
    }
  }
  return lVar2;
}


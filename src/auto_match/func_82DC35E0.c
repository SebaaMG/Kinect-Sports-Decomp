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
extern int fn_82D80C48();
extern unsigned int iStack_18;
extern unsigned int uStack_14;


void fn_82DC35E0(int *param_1,int *param_2)

{
  undefined1 auStack_20 [4];
  int *piStack_1c;
  int iStack_18;
  undefined1 uStack_14;
  
  if (*(int *)(*param_2 + 0x94) != 0) {
    iStack_18 = param_2[1];
    piStack_1c = param_1 + -0x10;
    auStack_20[0] = 0x23;
    uStack_14 = 0;
    fn_82D80C48(*param_2,auStack_20);
    return;
  }
  (**(code **)(*param_1 + 4))(param_1,param_2[1]);
  return;
}


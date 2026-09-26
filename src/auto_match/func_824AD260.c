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
extern unsigned int *auStack_2c;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_30;


void fn_824AD260(int param_1,int *param_2)

{
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [16];
  
  (**(code **)*param_2)(param_2,auStack_2c,&uStack_30);
  (**(code **)(*param_2 + 4))(param_2,uStack_30,auStack_28);
  *(undefined4 *)(param_1 + 0x30) = lbl_821CC160;
  return;
}


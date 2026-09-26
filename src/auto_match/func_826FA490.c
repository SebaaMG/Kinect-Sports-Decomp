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
extern int fn_8267C498();
extern int fn_826C6248();
extern int fn_826D2B68();


void fn_826FA490(int *param_1,int *param_2)

{
  int iVar1;
  int aiStack_70 [22];
  
  fn_826C6248(aiStack_70);
  (**(code **)(*param_1 + 0x20))(param_1,aiStack_70);
  iVar1 = (**(code **)(*param_2 + 0x5c))(param_2);
  fn_826D2B68(param_2,aiStack_70,(ulonglong)*(uint *)(iVar1 + 0x78) + 8,0,0,0xffffffffffffffff
                    ,4,0);
  if (aiStack_70[0] != 0) {
    fn_8267C498();
  }
  return;
}


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
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637EC0();
extern int fn_82637FF0();


void fn_82541578(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x293c) = *(uint *)(iVar1 + 0x293c) & 0xffffffef;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x200;
  fn_82637B30(*param_1,0);
  fn_82637EC0(*param_1);
  if (param_2 == 0x40) {
    fn_82637FF0(*param_1,0xffffffffffffffff);
    fn_82637C50(*param_1,1);
    fn_82637CE0(*param_1,0);
  }
  return;
}


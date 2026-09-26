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
extern int fn_82639380();
extern int fn_82639528();


void fn_826777B8(int param_1,longlong param_2)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x1cc) != (int)param_2) {
    *(int *)(param_1 + 0x1cc) = (int)param_2;
    bVar1 = param_2 != 0;
    fn_82639380(*(undefined4 *)(param_1 + 0xd8),0,bVar1);
    fn_82639528(*(undefined4 *)(param_1 + 0xd8),0,bVar1);
    fn_82639380(*(undefined4 *)(param_1 + 0xd8),1,bVar1);
    fn_82639528(*(undefined4 *)(param_1 + 0xd8),1,bVar1);
  }
  return;
}


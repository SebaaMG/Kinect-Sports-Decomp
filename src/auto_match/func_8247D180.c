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
extern int fn_8229E090();
extern int fn_8247D1F0();


void fn_8247D180(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x74) != 0) {
    fn_8229E090(*(int *)(param_2 + 0x74),0,0);
    *(undefined4 *)(param_2 + 0x74) = 0;
  }
  if (param_1 == 0) {
    fn_8247D1F0(param_2,*(undefined4 *)(param_2 + 0x7c));
    *(undefined4 *)(param_2 + 0x78) = 1;
  }
  return;
}


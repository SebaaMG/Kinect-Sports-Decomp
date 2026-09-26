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
extern int fn_83008F78();


void fn_83009DD8(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 extraout_r3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    param_3[1] = 0;
    *param_3 = 0xffffffff;
    *(undefined1 *)(param_3 + 3) = 0;
    param_3[2] = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    *param_3 = *(undefined4 *)(param_2 * 0xc + *(int *)(param_1 + 0x28) + 0xc);
    param_3[1] = *(undefined4 *)(param_2 * 0xc + *(int *)(param_1 + 0x28) + 0x10);
    fn_83008F78();
    *(undefined1 *)(param_3 + 3) = extraout_r3;
    param_3[2] = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}


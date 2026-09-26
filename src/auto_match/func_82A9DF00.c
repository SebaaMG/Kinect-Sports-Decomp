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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_38 ((*(U64*)&uStack_38))
extern unsigned int *auStack_40;
extern int fn_82A9CAB8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82A9DF00(int param_1,int param_2,undefined8 param_3,uint param_4,undefined4 param_5,
                  int param_6,uint param_7,uint param_8)

{
  uint in_stack_00000054;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  uint uStack_34;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    *(uint *)(**(int **)(param_1 + 0x48) + param_2 * 0x10) =
         *(uint *)(**(int **)(param_1 + 0x48) + param_2 * 0x10) | 0x80000000;
    _uStack_38 = CONCAT44(param_5,((((param_7 & 1) << 1 | param_8 & 1) << 0xd |
                                   in_stack_00000054 & 0x1fff) << 7 | param_4 & 0x7f) << 9 |
                                  param_6 << 0x1f);
    fn_82A9CAB8(*(undefined4 *)(param_1 + 0x44),auStack_40,param_1 + 0x90);
  }
  return;
}


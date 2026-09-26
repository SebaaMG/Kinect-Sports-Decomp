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
extern int fn_822B4148();
extern int fn_823D29A8();
extern int fn_823E7870();
extern int fn_823E7B20();


void fn_823E6A28(int param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  param_3[1] = *(undefined4 *)(param_2 + 0x2c);
  *param_3 = *(undefined4 *)(param_2 + 0x28);
  fn_822B4148(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),param_3[1]);
  uVar1 = fn_823D29A8();
  fn_823E7870(uVar1,*(undefined4 *)(param_3[1] * 4 + **(int **)(param_1 + 8)),0,0,param_3 + 2)
  ;
  fn_823E7B20(*(undefined4 *)(param_3[1] * 4 + **(int **)(param_1 + 8)),
                    *(undefined4 *)(((uint)LZCOUNT(param_3[1]) >> 3 & 4) + **(int **)(param_1 + 8)),
                    0,0,0xffffffffffffffff,param_3 + 2,0xffffffff831d18a8,param_3 + 10);
  return;
}


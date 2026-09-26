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
extern int fn_822AE9D8();
extern int fn_82398250();
extern int fn_823985A8();
extern unsigned int lbl_821CC160;


void fn_823968D8(int param_1)

{
  double dVar1;
  double dVar2;
  
  fn_822AE9D8(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xbc4) = lbl_821CC160;
  fn_823985A8(param_1);
  fn_82398250(param_1,1);
  dVar2 = (double)*(float *)(*(int *)((*(int **)**(undefined4 **)(param_1 + 8))[4] * 4 +
                                     **(int **)**(undefined4 **)(param_1 + 8)) + 0x20);
  dVar1 = (double)(**(code **)(**(int **)(param_1 + 0x2e0) + 0x44))();
  *(float *)((*(int *)(param_1 + 0xbd8) + 0x2fb) * 4 + param_1) = (float)dVar1;
  *(float *)((*(int *)(param_1 + 0xbd8) + 0x2f7) * 4 + param_1) = (float)(longlong)(int)dVar2;
  *(int *)(param_1 + 0xbd8) = *(int *)(param_1 + 0xbd8) + 1;
  return;
}


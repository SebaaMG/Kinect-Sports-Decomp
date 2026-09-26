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
extern int fn_82508078();


void fn_82395C10(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)(*(int *)((*(int **)**(undefined4 **)(param_1 + 8))[4] * 4 +
                                     **(int **)**(undefined4 **)(param_1 + 8)) + 0x20);
  dVar1 = (double)(**(code **)(**(int **)(param_1 + 0x2e0) + 0x44))();
  *(float *)((*(int *)(param_1 + 0xbd8) + 0x2fb) * 4 + param_1) = (float)dVar1;
  *(float *)((*(int *)(param_1 + 0xbd8) + 0x2f7) * 4 + param_1) = (float)(longlong)(int)dVar2;
  *(int *)(param_1 + 0xbd8) = *(int *)(param_1 + 0xbd8) + 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b502c,0);
  }
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) | 0x1000;
  return;
}


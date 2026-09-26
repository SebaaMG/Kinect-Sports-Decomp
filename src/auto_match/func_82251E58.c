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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_3f;
extern unsigned int fStack_3c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82251E58(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined1 uStack_40;
  undefined1 auStack_3f [3];
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_2c);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_30);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_3f);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&uStack_34);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,&uStack_38);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,&uStack_40);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,&fStack_3c);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))
              ((double)fStack_3c,piVar1,auStack_2c[0],uStack_30,auStack_3f[0],uStack_34,uStack_38,
               uStack_40);
  }
  return;
}


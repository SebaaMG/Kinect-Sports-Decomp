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
extern int fn_82CE5410();
extern int fn_82DF1E50();


int fn_82DF1F20(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2[1] == 1) && (*(int *)(param_3 + 4) == 0)) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x40);
    *(undefined2 *)(iVar1 + 4) = 0x40;
    iVar1 = fn_82DF1E50((double)*(float *)(param_1 + 0x30),(double)*(float *)(param_1 + 0x34),
                              iVar1,*(undefined4 *)*param_2,param_1 + 0x20);
    *(undefined1 *)(iVar1 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


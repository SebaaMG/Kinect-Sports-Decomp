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
extern int fn_825334E0();
extern int fn_825735B8();
extern int fn_825764F0();


void fn_824106F8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x93c) != 0) {
      lVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x28) + 0x8c0) + 0x128;
      piVar1 = (int *)fn_825735B8(lVar3,0xffffffff821b81e0);
      while (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1,5,0);
        if (piVar1[1] != 0) {
          *(undefined4 *)(piVar1[1] + 400) = 0;
        }
        iVar2 = fn_825764F0(lVar3,0xffffffff821b81e0,piVar1[1]);
        if (iVar2 == 0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = *(int **)(iVar2 + 0x1b0);
        }
      }
    }
  }
  else {
    fn_825334E0(param_3,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x8c0),0xffffffff821b81e0);
  }
  *(int *)(param_1 + 0x268) = param_2;
  return;
}


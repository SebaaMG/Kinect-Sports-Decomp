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
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_826D9388();


void fn_82688820(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int aiStack_30 [12];
  
  if ((*(int *)(param_1 + 0xc) != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 0xc);
    if (iVar1 != 0) {
      fn_8267C4C8(iVar1);
    }
    aiStack_30[0] = iVar1;
    fn_826D9388(*(undefined4 *)(param_1 + 0xc),aiStack_30);
    if (iVar1 != 0) {
      fn_82687270(iVar1);
    }
    if ((param_3 != '\0') && (piVar2 = *(int **)(param_2 + 8), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 8))(piVar2,param_2);
    }
  }
  return;
}


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
extern int fn_8259BDA8();
extern int fn_82F672D8();
extern int fn_82F6DCE0();


void fn_82827390(int param_1,ulonglong param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *apiStack_30 [12];
  
  if ((*(uint *)(param_1 + 0x3e4) != 0) &&
     ((ulonglong)*(uint *)(param_1 + 0x3e4) <= (param_2 & 0xffffffff))) {
    param_2 = param_2 + 1;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x2f0) + 4);
  apiStack_30[0] = (int *)*piVar1;
  if (apiStack_30[0] != piVar1) {
    do {
      if ((ulonglong)*(uint *)(apiStack_30[0][3] + 0x100) == (param_2 & 0xffffffff)) break;
      fn_8259BDA8(apiStack_30);
    } while (apiStack_30[0] != piVar1);
    if (apiStack_30[0] != piVar1) {
      iVar3 = apiStack_30[0][3];
      iVar2 = param_4;
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) goto LAB_82827430;
      } while (*(char *)(iVar2 + iVar3) != '\\');
      iVar3 = iVar2 + iVar3 + 1;
LAB_82827430:
      fn_82F672D8(param_3,iVar3,param_4);
      goto LAB_82827458;
    }
  }
  fn_82F6DCE0(param_3,param_4,0xffffffff8201ecf8,param_2);
LAB_82827458:
  *(undefined1 *)(param_3 + param_4 + -1) = 0;
  return;
}


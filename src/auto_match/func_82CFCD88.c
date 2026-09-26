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
extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CFC5C0();
extern int fn_82CFC6A8();
extern int fn_82F68CC0();
extern unsigned int *iStack_54;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


int * fn_82CFCD88(int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  int iStack_54;
  uint uStack_50;
  
  uStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0x80000000;
  fn_82CFC6A8(auStack_60,*param_2,*param_3,&uStack_58);
  iVar2 = (*(int *)(param_4 + 4) - param_3[1]) * iStack_54 + param_2[1];
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),iVar2);
  if (iStack_54 == 0) {
    fn_82F68CC0(iVar1,*param_2,(ulonglong)(uint)param_2[1] - 1);
  }
  else {
    fn_82CFC5C0();
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar2;
  *(undefined1 *)(iVar1 + iVar2 + -1) = 0;
  iVar1 = fn_82CE5410();
  iStack_54 = 0;
  if ((uStack_50 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))
              (*(int **)(iVar1 + 0x10),uStack_58,uStack_50 & 0x3fffffff,4);
  }
  return param_1;
}


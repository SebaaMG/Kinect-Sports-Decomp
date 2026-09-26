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
extern unsigned int *auStack_30;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D91178();
extern int fn_82D9A2C8();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DADB30();


int * fn_82D83B68(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_30 [4];
  int *piStack_2c;
  
  if ((ulonglong)*(uint *)(param_1 + 0x98) + (ulonglong)*(uint *)(param_1 + 0x94) == 0) {
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) + 1;
    if (param_2[6] == 0) {
      iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
      param_2[6] = iVar1;
    }
    param_2[2] = param_1;
    fn_82CE4040(param_2);
    iVar1 = fn_82CE5410();
    if (*(uint *)(param_1 + 0x118) == (*(uint *)(param_1 + 0x11c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(param_1 + 0x114),4);
    }
    *(int **)(*(int *)(param_1 + 0x118) * 4 + *(int *)(param_1 + 0x114)) = param_2;
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
    fn_82D91178(param_1,param_2);
    fn_82DADB30(param_1,param_2);
    fn_82D9A2C8(param_2);
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar2;
    if ((lVar2 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
      }
    }
  }
  else {
    auStack_30[0] = 0xd;
    piStack_2c = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_30);
    param_2 = (int *)0x0;
  }
  return param_2;
}


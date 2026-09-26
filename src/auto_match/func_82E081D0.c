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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE6310();
extern int fn_82CED540();
extern int fn_82CED5B8();
extern int fn_82CF6B28();


void fn_82E081D0(int *param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = param_1[1];
  iVar3 = (iVar2 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_1[2] & 0x3fffffffU) << 1;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    fn_82CE6310(param_2,param_1,iVar1,8);
  }
  if (0 < param_4) {
    piVar4 = (int *)(param_3 * 8 + *param_1 + 4);
    iVar1 = param_4;
    do {
      if (*piVar4 != 0) {
        fn_82CE4118();
      }
      *piVar4 = 0;
      fn_82CED5B8(piVar4 + -1);
      iVar1 = iVar1 + -1;
      piVar4 = piVar4 + 2;
    } while (iVar1 != 0);
  }
  fn_82CF6B28((param_3 + param_6) * 8 + *param_1,(param_3 + param_4) * 8 + *param_1,
               (iVar2 - param_3) - param_4 & 0x1fffffff);
  iVar2 = param_3 * 8 + *param_1;
  if (0 < param_6) {
    piVar4 = (int *)(param_5 + 4);
    param_5 = iVar2 - param_5;
    do {
      if (iVar2 != 0) {
        fn_82CED540(iVar2,piVar4 + -1);
        if (*piVar4 != 0) {
          fn_82CE4040();
        }
        *(int *)(param_5 + (int)piVar4) = *piVar4;
      }
      param_6 = param_6 + -1;
      iVar2 = iVar2 + 8;
      piVar4 = piVar4 + 2;
    } while (param_6 != 0);
  }
  param_1[1] = iVar3;
  return;
}


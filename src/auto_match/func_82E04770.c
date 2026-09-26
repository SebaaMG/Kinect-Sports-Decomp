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
extern int fn_82E077A0();
extern int fn_83082568();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


int * fn_82E04770(int *param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  int aiStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (((param_3 & 0xffffffff) != 0) && (iVar1 = 0, 0 < *(int *)(param_2 + 0xc))) {
    lVar2 = 0;
    do {
      fn_82E077A0(aiStack_50,(ulonglong)*(uint *)(param_2 + 8) + lVar2,param_3);
      if (aiStack_50[0] != 0) {
        fn_82CE4040();
        *param_1 = aiStack_50[0];
        if (aiStack_50[0] == 0) {
          return param_1;
        }
        fn_82CE4118();
        return param_1;
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x10;
      aiStack_50[0] = 0;
    } while (iVar1 < *(int *)(param_2 + 0xc));
  }
  uStack_48 = 0;
  uStack_44 = 0;
  fn_83082568(param_1,&uStack_48);
  return param_1;
}


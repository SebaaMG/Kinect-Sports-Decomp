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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82DF3CE0();
extern int fn_82DF6F28();
extern int fn_82DF86E0();


void fn_82DF78A8(undefined8 param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  
  iVar3 = *(int *)(*param_2 + 0x10);
  if (*(char *)(iVar3 + 0x18) == '\x01') {
    iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
  }
  else {
    iVar3 = 0;
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (0 < (int)param_3) {
    do {
      iVar2 = fn_82CE5410();
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x120);
      *(undefined2 *)(iVar2 + 4) = 0x120;
      uVar1 = fn_82DF86E0();
      iVar2 = fn_82DF6F28(param_1,*param_2,*(undefined4 *)(iVar3 + 0x78),uVar1);
      if (iVar2 == 0) {
        fn_82DF3CE0(param_4,uVar1);
      }
      fn_82CE4118(uVar1);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


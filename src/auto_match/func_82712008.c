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
extern int fn_8267C498();
extern int fn_82711FA8();


undefined8 fn_82712008(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int *apiStack_20 [2];
  
  if (**(int **)(param_1 + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    fn_82711FA8(apiStack_20,**(int **)(param_1 + 0xc));
    if ((((apiStack_20[0] == (int *)0x0) ||
         (iVar1 = (**(code **)(*apiStack_20[0] + 0x9c))(apiStack_20[0]), iVar1 != 4)) ||
        (cVar2 = (**(code **)(*apiStack_20[0] + 0x170))(apiStack_20[0]), cVar2 == '\0')) ||
       (uVar3 = 1, apiStack_20[0] != param_2)) {
      uVar3 = 0;
    }
    if (apiStack_20[0] != (int *)0x0) {
      fn_8267C498(apiStack_20[0]);
    }
  }
  return uVar3;
}


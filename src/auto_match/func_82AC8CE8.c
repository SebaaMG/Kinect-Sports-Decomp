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
extern int fn_82AC88B8();
extern int fn_82AC8C90();


void fn_82AC8CE8(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = param_1;
  do {
    piVar4 = piVar4 + 1;
    if (param_2 == (int *)*piVar4) {
      *piVar4 = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 9);
  cVar2 = fn_82AC88B8(param_1,param_2);
  if (cVar2 != '\0') {
    param_1[0xc] = 0;
  }
  for (iVar1 = *param_2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    fn_82AC8C90(param_1,iVar1,param_2,*(undefined4 *)(iVar1 + 0xc));
  }
  return;
}


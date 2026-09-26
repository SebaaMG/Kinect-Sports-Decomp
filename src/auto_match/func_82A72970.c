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
extern int fn_82A6D090();
extern int fn_82A75588();


void fn_82A72970(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int aiStack_20 [2];
  
  piVar3 = param_1 + 0x38;
  iVar1 = *param_1;
  iVar2 = fn_82A75588(piVar3,0x15);
  if (-1 < iVar2) {
    iVar2 = fn_82A6D090(piVar3,7,aiStack_20);
    while (-1 < iVar2) {
      if (aiStack_20[0] != 0x7f) {
        *(int *)(iVar1 + 0x128) = *(int *)(iVar1 + 0x128) + aiStack_20[0];
        return;
      }
      *(int *)(iVar1 + 0x128) = *(int *)(iVar1 + 0x128) + 0x7f;
      iVar2 = fn_82A6D090(piVar3,7,aiStack_20);
    }
  }
  return;
}


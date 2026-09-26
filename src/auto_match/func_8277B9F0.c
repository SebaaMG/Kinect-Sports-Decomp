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
extern int fn_8277B808();


bool fn_8277B9F0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar2 = param_1[1];
    iVar3 = *(int *)(param_1[3] + 4);
    iVar4 = fn_8277B808(param_1);
    param_1[3] = iVar4;
    trapWord(6,(ulonglong)*(uint *)(iVar4 + 4),0);
    param_1[1] = (int)(((longlong)iVar3 * (longlong)iVar2 & 0xffffffffU) /
                      (ulonglong)*(uint *)(iVar4 + 4));
  }
  return iVar1 == 0;
}


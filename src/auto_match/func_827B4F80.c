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
extern int fn_827B4A98();


void fn_827B4F80(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_1 >> 4;
  if (param_1[1] <= uVar2) {
    fn_827B4A98(param_1,uVar2);
  }
  iVar3 = (*param_1 & 0xf) * 8;
  iVar1 = *(int *)(uVar2 * 4 + param_1[3]);
  *(undefined4 *)(iVar1 + iVar3) = *param_2;
  *(undefined4 *)(iVar1 + iVar3 + 4) = param_2[1];
  *param_1 = *param_1 + 1;
  return;
}


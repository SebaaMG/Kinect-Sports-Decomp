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
extern int fn_82788F90();


void fn_82789C08(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_1 >> 8;
  if (param_1[1] <= uVar1) {
    fn_82788F90(param_1,uVar1);
  }
  iVar2 = (*param_1 & 0xff) * 0xc;
  iVar3 = *(int *)(uVar1 * 4 + param_1[3]);
  *(undefined4 *)(iVar3 + iVar2) = *param_2;
  iVar3 = iVar3 + iVar2;
  *(undefined4 *)(iVar3 + 4) = param_2[1];
  *(undefined4 *)(iVar3 + 8) = param_2[2];
  *param_1 = *param_1 + 1;
  return;
}


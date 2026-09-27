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
extern int fn_83032B08();
extern int fn_83032D88();
extern int fn_83033838();
extern int fn_83033EA8();
extern int fn_83034130();


undefined4 * fn_830341D0(undefined8 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int aiStack_30;
  
  aiStack_30 = *param_2;
  if (aiStack_30 != 0) {
    fn_83032B08();
  }
  puVar1 = (undefined4 *)fn_83033EA8(param_1,&aiStack_30);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = fn_83034130(param_1);
    if (iVar2 != 0) {
      fn_83033838(iVar2,param_2);
      puVar1 = (undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 4) = param_3;
    }
  }
  else {
    *puVar1 = param_3;
  }
  if (*param_2 != 0) {
    fn_83032D88();
    *param_2 = 0;
  }
  return puVar1;
}


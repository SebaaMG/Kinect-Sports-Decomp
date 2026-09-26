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
extern int fn_82A2A378();
extern int fn_82E21160();
extern int fn_82E211B0();
extern int fn_82F64840();
extern int fn_82F64CE0();


undefined8 fn_82E212B0(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = fn_82F64CE0(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*param_1 == '\0') {
      uVar2 = fn_82E211B0(param_1,lVar1);
      fn_82A2A378(0,0,param_2,lVar1,uVar2,lVar1,0,0);
    }
    else {
      uVar2 = fn_82E21160();
      fn_82F64840(uVar2,(ulonglong)*(uint *)(param_1 + 8) - (ulonglong)*(uint *)(param_1 + 4),
                        param_2,lVar1);
    }
    uVar2 = 1;
    *(int *)(param_1 + 4) = (int)lVar1 + *(int *)(param_1 + 4);
  }
  return uVar2;
}


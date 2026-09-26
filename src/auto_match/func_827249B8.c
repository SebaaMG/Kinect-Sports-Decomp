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
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826F30F0();


int * fn_827249B8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_3 == 1) {
    if ((*(char *)(param_2 + 0x28) == '\0') || (*(uint *)(param_2 + 4) <= (uint)param_3[1])) {
      fn_826F30F0(param_2,param_1);
    }
    else {
      fn_82687F98(param_1,(ulonglong)*(uint *)(param_2 + 8) +
                                ((ulonglong)(uint)param_3[1] & 0x1fffffff) * 8);
    }
  }
  else {
    param_1[1] = param_2;
    if (*param_3 == 0) {
      iVar1 = param_3[1];
    }
    if (iVar1 != 0) {
      fn_8267C4C8(iVar1);
      if (*param_1 != 0) {
        fn_82687270();
      }
    }
    *param_1 = iVar1;
  }
  return param_1;
}


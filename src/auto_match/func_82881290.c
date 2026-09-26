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
extern int fn_82888170();
extern int fn_82888228();


undefined8 fn_82881290(int *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (*param_1 != *param_2) {
    do {
      piVar3 = (int *)(*param_1 + -8);
      fn_82888170(*(undefined4 *)(*param_1 + 0x10),2,0x2b,1);
      uVar2 = (**(code **)(*piVar3 + 4))(piVar3);
      fn_82888228(uVar2,0x2b,1);
      iVar1 = *(int *)*param_1;
      *param_1 = iVar1;
    } while (iVar1 != *param_2);
  }
  return param_3;
}


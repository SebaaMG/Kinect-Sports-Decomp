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
extern int fn_825293A8();


void fn_82529488(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
LAB_825294f4:
  iVar1 = param_1;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    fn_82529488(*(int *)(iVar1 + 8),param_2,param_3);
  }
  param_1 = *(int *)(iVar1 + 4);
  if ((int)param_2 != 0) goto code_r0x825294cc;
  goto LAB_825294f0;
code_r0x825294cc:
  if (((*(uint *)(param_3 + 0xb20) & *(uint *)(iVar1 + 0xae0)) != 0) &&
     ((*(int *)(iVar1 + 0xadc) != 0 || (*(uint *)(iVar1 + 0xae0) == 0)))) {
LAB_825294f0:
    fn_825293A8();
  }
  goto LAB_825294f4;
}


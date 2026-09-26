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
extern int fn_82529488();


void fn_82529320(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
LAB_8252938c:
  iVar2 = iVar1;
  if (iVar2 == 0) {
    fn_825293A8(param_1);
    return;
  }
  if (*(int *)(iVar2 + 8) != 0) {
    fn_82529488(*(int *)(iVar2 + 8),param_2,param_1);
  }
  iVar1 = *(int *)(iVar2 + 4);
  if ((int)param_2 != 0) goto code_r0x82529364;
  goto LAB_82529388;
code_r0x82529364:
  if (((*(uint *)(param_1 + 0xb20) & *(uint *)(iVar2 + 0xae0)) != 0) &&
     ((*(int *)(iVar2 + 0xadc) != 0 || (*(uint *)(iVar2 + 0xae0) == 0)))) {
LAB_82529388:
    fn_825293A8();
  }
  goto LAB_8252938c;
}


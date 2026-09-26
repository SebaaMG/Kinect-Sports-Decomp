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
extern int fn_8300F2C0();
extern int fn_8300F848();
extern int fn_83019E38();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_8300FF00(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iStack0000001c;
  
  lVar2 = ((ulonglong)*(uint *)(param_1 + 0x90) - (ulonglong)*(uint *)(param_2 + 0x14)) +
          (ulonglong)*(uint *)(param_2 + 0xc);
  *(int *)(param_2 + 0xc) = (int)lVar2;
  iStack0000001c = param_2;
  iVar1 = fn_83019E38(param_1 + 0x50,lVar2,&stack0x0000001c);
  if (iVar1 != 1) {
    fn_8300F848(param_1,param_2,1);
    fn_8300F2C0(param_1,param_2);
  }
  return;
}


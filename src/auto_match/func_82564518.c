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
extern unsigned int *auStack_2c;
extern int fn_8234D330();
extern int fn_825645B0();
extern unsigned int iStack_30;


void fn_82564518(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iStack_30;
  uint auStack_2c [11];
  
  (**(code **)(*param_2 + 4))(param_2,&iStack_30);
  iVar1 = param_3 * 0x34 + iStack_30;
  (**(code **)(*param_2 + 4))(param_2,auStack_2c);
  if (iVar1 != 0) {
    fn_8234D330(param_1,iVar1 + 0x2e);
    if ((ulonglong)*(ushort *)(iVar1 + 0x2a) != 0xffff) {
      fn_825645B0(param_1,param_2,
                        (ulonglong)*(ushort *)(iVar1 + 0x2a) * 0x34 + (ulonglong)auStack_2c[0],1);
    }
  }
  return;
}


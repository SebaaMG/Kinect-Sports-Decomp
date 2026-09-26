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
extern unsigned int *auStack_20;
extern int fn_826338A0();
extern int fn_82634DF8();
extern int fn_82637090();


longlong fn_82633918(int *param_1,uint *param_2)

{
  int iVar1;
  undefined1 auStack_20 [3];
  byte bStack_1d;
  
  fn_82634DF8(param_1,0,0,0,param_2);
  fn_82637090(param_1 + 0x18,param_2,param_1 + 0x14);
  if (((*(uint *)(*param_1 + 0x4db4) >> 2 & 1) == 0) &&
     (iVar1 = fn_826338A0(param_2,auStack_20), iVar1 != 0)) {
    param_1[0x4f] = param_1[0x4f] + 1;
    *(byte *)((int)param_1 + (*param_2 & 0x3f) + 0x140) =
         *(byte *)((int)param_1 + (*param_2 & 0x3f) + 0x140) | bStack_1d;
  }
  return (ulonglong)(uint)param_1[0x19] - 1;
}


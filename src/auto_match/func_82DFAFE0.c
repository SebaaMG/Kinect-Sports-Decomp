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
extern unsigned int *auStack_40;


void fn_82DFAFE0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,float *param_6)

{
  undefined1 *puVar1;
  double dVar2;
  undefined1 auStack_40 [64];
  
  dVar2 = (double)(**(code **)(*param_2 + 0x10))();
  *param_6 = (float)dVar2;
  dVar2 = (double)(**(code **)(*param_2 + 0x14))(param_1,param_2);
  param_6[1] = (float)dVar2;
  dVar2 = (double)(**(code **)(*param_2 + 0x1c))(param_1,param_2,*param_2,param_4,param_5,param_6);
  param_6[2] = (float)dVar2;
  *(undefined1 *)(param_6 + 3) = *(undefined1 *)(param_5 + 0x10);
  puVar1 = (undefined1 *)
           (**(code **)(*param_2 + 0x18))
                     (param_1,auStack_40,param_2,*(code **)(*param_2 + 0x18),param_4,param_5,param_6
                     );
  *(undefined1 *)((int)param_6 + 0xd) = *puVar1;
  return;
}


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
extern int fn_8304D6F0();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


longlong fn_8304DD90(int *param_1,uint *param_2)

{
  int iVar1;
  int iStack_20;
  undefined4 uStack_1c;
  
  fn_8304D6F0(param_1,((ulonglong)*(uint *)(*(int *)(param_1[2] + 0x6c) + 0x20) *
                       (ulonglong)*(uint *)(param_1[2] + 0xd0)) / 48000 & 0xffffffff,&iStack_20,
               param_1 + 7);
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x12] = iStack_20;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,iStack_20,&uStack_1c);
  *param_2 = iVar1 + param_1[0xc];
  iVar1 = param_1[2];
  *(undefined4 *)(iVar1 + 0xd0) = uStack_1c;
  *(byte *)(iVar1 + 0xdb) = *(byte *)(iVar1 + 0xdb) & 0x7f;
  return 2 - (ulonglong)
             ((ulonglong)*param_2 < (ulonglong)(uint)param_1[0xb] + (ulonglong)(uint)param_1[0xc]);
}


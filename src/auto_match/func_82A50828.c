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
extern unsigned int *auStack_58;
extern int fn_82A40238();
extern int fn_82A431A8();
extern unsigned int stack0x0000003c;
extern unsigned int stack0x00000044;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


ulonglong fn_82A50828(int param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                       undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  int *piStack_60;
  int *piStack_5c;
  uint auStack_58 [2];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  piStack_60 = (int *)0x0;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uVar2 = fn_82A431A8(&piStack_60);
  if (-1 < (int)uVar2) {
    piStack_5c = (int *)0x0;
    uStack_50 = (uint)LZCOUNT(param_2) >> 5;
    uStack_4c = (uint)LZCOUNT(param_3) >> 5;
    uStack_48 = (uint)((param_4 & 0xffffffff) >> 7) & 1;
    (**(code **)*piStack_60)(piStack_60,0xffffffff82089748,&piStack_5c);
    (**(code **)(*piStack_5c + 0x18))(piStack_5c,&uStack_50,0xc);
    (**(code **)(*piStack_5c + 8))();
    piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0xb0);
    auStack_58[0] =
         (**(code **)(*piVar1 + 0x28))
                   (piVar1,piStack_60,param_5,1,&stack0x0000003c,1,&stack0x00000044,0x1337f001);
    fn_82A40238(auStack_58);
    (**(code **)(*piStack_60 + 8))();
    uVar2 = (ulonglong)auStack_58[0];
  }
  return uVar2;
}


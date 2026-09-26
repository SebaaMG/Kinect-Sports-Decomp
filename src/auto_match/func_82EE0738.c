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
extern int fn_82E57888();
extern int fn_82EE0570();
extern unsigned int stack0x00000024;


undefined8 fn_82EE0738(undefined8 param_1,int param_2,ushort *param_3,int *param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ushort *puStack00000024;
  int aiStack_30 [12];
  
  if (((param_2 == 0) || (param_3 == (ushort *)0x0)) || (param_4 == (int *)0x0)) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    puStack00000024 = param_3 + 1;
    *param_4 = 0;
    *param_3 = *(ushort *)(param_2 + 8) << 8 | *(ushort *)(param_2 + 8) >> 8;
    fn_82E57888(&stack0x00000024,*(undefined4 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 8));
    uVar2 = (ulonglong)*(uint *)(param_2 + 4) & 0xffff;
    uVar1 = *(ushort *)(param_2 + 8);
    aiStack_30[0] = 0;
    *puStack00000024 = (ushort)(uVar2 << 8) | (ushort)(uVar2 >> 8);
    puStack00000024[1] =
         (ushort)(((ulonglong)*(uint *)(param_2 + 0x10) & 0xff) << 8) |
         (ushort)(*(uint *)(param_2 + 0x10) >> 8) & 0xff;
    uVar3 = fn_82EE0570(puStack00000024 + 2,param_2,aiStack_30);
    if (-1 < (int)uVar3) {
      *param_4 = aiStack_30[0] + uVar1 + 6;
    }
  }
  return uVar3;
}


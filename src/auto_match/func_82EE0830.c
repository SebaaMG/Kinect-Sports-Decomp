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


longlong fn_82EE0830(int param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puStack00000024;
  int aiStack_50 [20];
  
  if (((param_2 == (ushort *)0x0) || (param_3 == (ushort *)0x0)) || (param_4 == (int *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    *param_4 = 0;
    lVar2 = 0;
    *param_3 = *param_2 << 8 | *param_2 >> 8;
    param_3[1] = param_2[1] << 8 | param_2[1] >> 8;
    param_3[2] = param_2[4] << 8 | param_2[4] >> 8;
    param_3[3] = (ushort)(((ulonglong)*(uint *)(param_2 + 2) & 0xffff) << 8) |
                 (ushort)(((ulonglong)*(uint *)(param_2 + 2) & 0xffff) >> 8);
    puStack00000024 = param_3 + 6;
    *(uint *)(param_3 + 4) =
         (uint)*(byte *)((int)param_2 + 0x13) << 0x18 | (uint)*(byte *)(param_2 + 9) << 0x10 |
         (uint)*(byte *)((int)param_2 + 0x11) << 8 | (uint)*(byte *)(param_2 + 8);
    fn_82E57888(&stack0x00000024,*(undefined4 *)(param_2 + 6),param_2[4]);
    uVar1 = param_2[4];
    aiStack_50[0] = 0;
    if (((*(uint *)(param_2 + 2) & 0x8000) == 0) || (*(int *)(param_1 + 600) != 0)) {
      lVar2 = fn_82EE0570(puStack00000024,param_2,aiStack_50);
      if (lVar2 < 0) {
        return lVar2;
      }
    }
    else {
      *(undefined1 *)(param_3 + 4) = 0;
      *(undefined1 *)((int)param_3 + 9) = 0;
      aiStack_50[0] = 0;
    }
    if (-1 < (int)lVar2) {
      *param_4 = aiStack_50[0] + uVar1 + 0xc;
    }
  }
  return lVar2;
}


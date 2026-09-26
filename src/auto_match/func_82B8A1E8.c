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
extern int fn_82B46EA8();
extern int fn_82B84FB0();
extern int fn_82B86570();


void fn_82B8A1E8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x288) == 0) {
    puVar3 = (uint *)fn_82B84FB0(param_1,1,3,0xffffffff820dbf20);
    uVar4 = puVar3[1];
    uVar2 = *puVar3;
    puVar3[1] = uVar4 & 0xffffff8f | 0x20;
    *puVar3 = uVar2 | 0x80000;
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x38) + 0x40);
    puVar3[1] = uVar4 & 0xfe00ff8f | 0x10020;
    *puVar3 = (uVar1 & 0x1ff) << 0x14 | uVar2 & 0xe00fffff | 0x80000;
    *(uint *)puVar3[7] = *(uint *)puVar3[7] & 0xfffffff0 | 1;
    *(uint *)(puVar3[7] + 8) = *(uint *)(puVar3[7] + 8) & 0xfffffff0 | 2;
    *(uint *)(puVar3[7] + 0x10) = *(uint *)(puVar3[7] + 0x10) & 0xfffffff0 | 4;
    uVar4 = fn_82B46EA8(param_1,10,1,3);
    puVar3[5] = uVar4;
    *(int *)(param_1 + 0x288) = ((int)puVar3 - *(int *)(param_1 + 0xc)) / 0x28;
  }
  fn_82B86570(param_1,*(undefined4 *)(param_1 + 0x288),0,1);
  return;
}


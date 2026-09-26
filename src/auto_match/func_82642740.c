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
extern int fn_82F68CC0();


void fn_82642740(int param_1,int param_2,ushort *param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint auStack_40 [16];
  
  puVar1 = (uint *)(((*(uint *)(param_1 + 0x14) >> 5 & 0x1f) + (*param_3 & 0xfff) +
                     *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
  while( true ) {
    puVar2 = (uint *)((*puVar1 & 0xfff) * 0xc + param_2);
    if (auStack_40 != puVar2) {
      fn_82F68CC0(auStack_40,puVar2,0xc);
    }
    auStack_40[0] = *param_4 >> 8 & 0xf | auStack_40[0] & 0xfffffff0;
    if (puVar2 != auStack_40) {
      fn_82F68CC0(puVar2,auStack_40,0xc);
    }
    if ((*puVar1 & 0x1000) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return;
}


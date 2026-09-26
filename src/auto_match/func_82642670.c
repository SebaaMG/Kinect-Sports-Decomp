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
extern unsigned int *auStack_30;
extern int fn_82F68CC0();
extern unsigned int uStack_28;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82642670(int param_1,int param_2,ushort *param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  puVar2 = (uint *)(((*(uint *)(param_1 + 0x14) >> 5 & 0x1f) + (*param_3 & 0xfff) +
                     *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
  uStack_28 = 0x2000000;
  while( true ) {
    puVar1 = (undefined1 *)((*puVar2 & 0xfff) * 0xc + param_2);
    if (puVar1 != auStack_30) {
      fn_82F68CC0(puVar1,auStack_30,0xc);
    }
    if ((*puVar2 & 0x1000) != 0) break;
    puVar2 = puVar2 + 1;
  }
  return;
}


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
extern int fn_82593540();
extern int fn_825C3A68();


int fn_82564458(int param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  if (((undefined4 *)(param_1 + 0x1bc) == (undefined4 *)0x0) || (*(int *)(param_1 + 0x4c) == 0)) {
    iVar3 = 0;
  }
  else {
    puVar4 = *(ushort **)(param_1 + 0x1bc);
    iVar3 = 0;
    while( true ) {
      bVar1 = false;
      while( true ) {
        if (puVar4 == (ushort *)0x0) {
          return iVar3;
        }
        iVar2 = fn_82593540(puVar4 + 4);
        if (iVar2 == param_2) {
          fn_825C3A68(puVar4,param_3,param_1,0);
          iVar3 = 1;
          if (puVar4[1] != 0) {
            bVar1 = true;
          }
        }
        if (puVar4[2] == 0) break;
        puVar4 = (ushort *)((uint)*puVar4 + (int)puVar4);
      }
      if ((iVar3 != 0) && (!bVar1)) break;
      puVar4 = *(ushort **)(puVar4 + 0x26);
    }
  }
  return iVar3;
}


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
extern int fn_82AD20C0();
extern int fn_82B8AE98();


void fn_82AEB228(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  
  while( true ) {
    if ((param_2[1] & 1) != 0) break;
    if ((param_2[1] & 1) == 0) {
      iVar2 = (*param_2 & 0xfffffffe) - 0x28;
    }
    else {
      iVar2 = 0;
    }
    if ((*(uint *)(iVar2 + 8) >> 5 & 1) != 0) {
      puVar3 = (uint *)(iVar2 + 4);
      while( true ) {
        puVar1 = (uint *)*puVar3;
        if (puVar1 == (uint *)0x0) break;
        if ((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) {
          fn_82AD20C0(puVar1[4],puVar1,param_1);
        }
        if ((uint *)*puVar3 == puVar1) {
          puVar3 = puVar1 + 2;
        }
      }
    }
    fn_82B8AE98(param_1,iVar2);
  }
  return;
}


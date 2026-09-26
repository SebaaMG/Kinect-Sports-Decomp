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
extern int fn_824427D0();
extern int fn_8265CA20();


void fn_82454448(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 0x7c);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x6c);
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(iVar1 + 0x70);
      for (; puVar3 != puVar2; puVar3 = puVar3 + 0xc) {
        (**(code **)*puVar3)(puVar3,0);
      }
      fn_8265CA20(*(undefined4 *)(iVar1 + 0x6c));
    }
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0;
    fn_824427D0(iVar1);
    fn_8265CA20(iVar1);
  }
  return;
}


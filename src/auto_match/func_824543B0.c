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
extern int fn_8265C9E0();
extern unsigned int lbl_821B9BC8;


void fn_824543B0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &lbl_821B9BC8;
    puVar3[1] = *(undefined4 *)(param_2 + 4);
    *puVar3 = &lbl_821B9BC8;
    puVar3[2] = *(undefined4 *)(param_2 + 8);
    puVar3[3] = *(undefined4 *)(param_2 + 0xc);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  puVar2 = *(undefined4 **)(iVar1 + 0x7c);
  if (puVar3 != puVar2) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined4 **)(iVar1 + 0x7c) = puVar3;
  }
  return;
}


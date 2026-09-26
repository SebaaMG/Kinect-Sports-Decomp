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
extern unsigned int *auStack_2c;
extern int fn_8259BDA8();


undefined8 fn_82871B50(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puStack_30;
  undefined4 auStack_2c [11];
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puStack_30 = (undefined4 *)*puVar1;
  while( true ) {
    if (puStack_30 == puVar1) break;
    piVar2 = (int *)puStack_30[3];
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2);
      if (iVar3 == param_2) {
        auStack_2c[0] = 0;
        (**(code **)(*piVar2 + 0x50))(piVar2,auStack_2c);
      }
    }
    fn_8259BDA8(&puStack_30);
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  puStack_30 = (undefined4 *)*puVar1;
  while (puStack_30 != puVar1) {
    piVar2 = (int *)puStack_30[3];
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2), iVar3 == param_2))
    {
      auStack_2c[0] = 0;
      (**(code **)(*piVar2 + 0x50))(piVar2,auStack_2c);
    }
    fn_8259BDA8(&puStack_30);
    puVar1 = *(undefined4 **)(param_1 + 0x28);
  }
  return 0x20110000;
}


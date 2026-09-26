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
extern unsigned int *auStack_4e;
extern int fn_82F691F0();
extern unsigned int iStack_5c;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined8 fn_82BD4338(int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined1 auStack_4e [78];
  
  uVar2 = 0xffffffff80004001;
  uStack_60 = 0;
  puStack_54 = &uStack_60;
  uStack_58 = 1;
  if (*(int *)(param_1 + 0x24) != 0) {
    piVar1 = *(int **)(param_1 + 0x3c);
    iStack_5c = param_2;
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_4e,0,0x10);
    }
    if (param_2 != 0) {
      uVar2 = (**(code **)(*piVar1 + 4))(piVar1,&uStack_58);
    }
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  return uVar2;
}


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
extern int fn_827C9958();
extern int fn_82F691F0();


void fn_827C9BB0(int param_1)

{
  int iVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54);
  *(undefined4 **)(param_1 + 0x19c) = puVar3;
  *puVar3 = fn_827C9958;
  iVar1 = *(int *)(param_1 + 0xc4);
  if (0 < *(int *)(param_1 + 0x24)) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
    *(int *)(iVar1 + 0x50) = (int)uVar2;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar2,0,0x100);
  }
  return;
}


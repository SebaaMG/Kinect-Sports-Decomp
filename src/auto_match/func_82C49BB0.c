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
extern int fn_82C44C58();
extern int fn_82C486C8();
extern int fn_82C4EDE8();
extern int fn_82F691F0();


undefined8 fn_82C49BB0(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2e0);
    if (*(int *)(iVar1 + 0x10) == 0) {
      fn_82C486C8(iVar1);
      fn_82C4EDE8(iVar1);
      puVar2 = *(undefined8 **)(iVar1 + 0x6070);
      fn_82C44C58(puVar2);
      *puVar2 = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(iVar1,0,0xb330);
    }
    uVar3 = 0xfffffffffffffffc;
  }
  return uVar3;
}


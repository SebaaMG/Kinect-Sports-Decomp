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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED2F8();
extern int fn_82CED628();


void fn_82E148C0(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(param_1 + 0x10);
  iVar2 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),puVar4,8);
  }
  lVar3 = ((ulonglong)*(uint *)(param_1 + 0x14) & 0x1fffffff) * 8 + (ulonglong)*puVar4;
  if (lVar3 != 0) {
    fn_82CED2F8(lVar3);
    fn_82CED2F8(lVar3 + 4);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) = uVar1 + 1;
                    /* WARNING: Subroutine does not return */
  fn_82CED628(((ulonglong)uVar1 & 0x1fffffff) * 8 + (ulonglong)*puVar4,param_2);
}


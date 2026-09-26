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
extern int fn_8265C940();
extern int fn_8265C990();


uint * fn_82630168(undefined8 param_1,ulonglong param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  puVar1 = (uint *)fn_8265C940(0x20,0x64800000);
  if (puVar1 != (uint *)0x0) {
    lVar2 = 3;
    uVar3 = param_3 << 0x1d | 0x100002;
    if ((param_2 & 4) != 0) {
      lVar2 = 2;
      uVar3 = param_3 << 0x1d | 0x300002;
    }
    if ((param_2 & 0x200) != 0) {
      uVar3 = uVar3 | 0x400000;
    }
    lVar2 = fn_8265C940(param_1,lVar2 << 0x1c | 0xffffffff82800000);
    if (lVar2 != 0) {
      puVar1[7] = (uint)param_1;
      *puVar1 = uVar3;
      puVar1[1] = 1;
      puVar1[5] = 0xffff0000;
      puVar1[6] = (uint)lVar2;
      return puVar1;
    }
    fn_8265C990(puVar1,0x24800000);
  }
  return (uint *)0x0;
}


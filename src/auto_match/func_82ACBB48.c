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
extern int fn_82AA6648();
extern int fn_82ABE940();
extern int fn_82F68CC0();


void fn_82ACBB48(uint *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((~*param_1 & 1) == 0) {
    uVar3 = 0x1f;
  }
  else {
    uVar3 = *(int *)*param_1 * 0x20 - 1;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2 + 0x20 >> 5;
    puVar2 = (uint *)fn_82ABE940(param_1,(uVar3 + 1) * 4);
    *puVar2 = uVar3;
    piVar1 = (int *)*param_1;
    if ((~(uint)piVar1 & 1) == 0) {
      puVar2[1] = (uint)piVar1 & 0xfffffffe;
    }
    else {
      fn_82F68CC0(puVar2 + 1,piVar1 + 1,*piVar1 << 2);
      fn_82AA6648(param_1,(uint *)*param_1,((ulonglong)*(uint *)*param_1 + 1 & 0x3fffffff) << 2);
    }
    *param_1 = (uint)puVar2;
  }
  return;
}


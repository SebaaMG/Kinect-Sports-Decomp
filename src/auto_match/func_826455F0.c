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
extern int fn_82647950();
extern int fn_8314260C();
extern int fn_8314263C();
extern unsigned int uRam7fc86544;


void fn_826455F0(int param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  uint *puVar3;
  int in_r13;
  
  if (param_1 == 1) {
    pcVar2 = *(code **)(*(int *)(param_2 + 0x2a94) + 0x10);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined4 *)(*(int *)(param_2 + 0x2a94) + 0x14));
    }
    bVar1 = *(byte *)(in_r13 + 0x10c);
    puVar3 = *(uint **)(param_2 + 0x2a94);
    fn_8314263C(param_2 + 0x2a98);
    *puVar3 = *puVar3 & ~(1 << (bVar1 & 0x3f)) & 0x3f;
    fn_8314260C(param_2 + 0x2a98);
  }
  else if ((param_1 == 0) && ((uRam7fc86544 & 1) != 0)) {
    fn_82647950(param_2);
  }
  return;
}


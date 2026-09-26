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
extern int fn_82683DD0();
extern int fn_8268B610();
extern int fn_8268BA10();
extern int fn_8268BC50();


void fn_826841C0(undefined8 param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  
  cVar2 = fn_82683DD0(((ulonglong)*(uint *)(param_2 + 4) & 0xfffffffc) + 8);
  if (cVar2 == '\0') {
    puVar3 = (uint *)(param_2 + 8);
    uVar1 = *(uint *)(*puVar3 & 0xfffffffc) & 0x7fffffff;
    if (uVar1 != 0) {
      fn_8268BA10(param_1,puVar3);
      cVar2 = *(char *)((*puVar3 & 0xfffffffc) + uVar1 + 7);
      if ((cVar2 != '\\') && (cVar2 != '/')) {
        fn_8268B610(param_1,0xffffffff821aa630,0xffffffffffffffff);
      }
      fn_8268BC50(param_1,param_2 + 4);
      return;
    }
  }
  fn_8268BA10(param_1,param_2 + 4);
  return;
}


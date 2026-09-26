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
extern int fn_826AF898();
extern int fn_826B1330();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


undefined4 fn_826B14D8(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  iVar1 = fn_826AF898(param_1 + 0x278,&stack0x0000001c);
  puVar2 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 4U);
  if (puVar2 == (undefined4 *)0x0) {
    fn_826B1330(param_1,((ulonglong)(param_2 + 2) & 0x3fffffff) * 4 + param_1);
    iVar1 = fn_826AF898(param_1 + 0x278,&stack0x0000001c);
    puVar2 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 4U);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  return *puVar2;
}


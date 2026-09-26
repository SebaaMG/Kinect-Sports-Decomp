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
extern unsigned int *auStack_1c;
extern int fn_8233EB88();
extern int fn_8287BF10();
extern unsigned int uStack_20;


undefined8 fn_8287BE10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uStack_20 = param_2;
  puVar2 = (undefined4 *)fn_8287BF10(auStack_1c,*(undefined4 *)(param_1 + 4),uVar1,&uStack_20);
  fn_8233EB88(&uStack_20,param_1 + 4,*puVar2,uVar1);
  return 0;
}


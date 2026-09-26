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
extern int fn_82358810();
extern int fn_82358E70();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


ulonglong fn_823C0880(int param_1,int param_2)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = 0;
  uStack_1c = 0;
  iVar2 = fn_82358E70(param_1,&uStack_20,&uStack_1c);
  if (iVar2 != 0) {
    if (param_2 != 0) {
      return (ulonglong)*(uint *)(*(int *)(param_1 + 0x4b0) + 0xe0);
    }
    iVar2 = *(int *)(param_1 + 0x54);
    if ((((iVar2 != 0x13) && (iVar2 != 0x12)) && (iVar2 != 0x11)) &&
       (((iVar2 != 0x14 && (iVar2 != 0xd)) && ((iVar2 != 0xf && (iVar2 != 0x15)))))) {
      uVar1 = fn_82358810(param_1,0);
      return uVar1;
    }
  }
  return 0;
}


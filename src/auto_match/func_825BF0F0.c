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
extern int fn_8259BB38();
extern int fn_827D96A0();
extern int fn_82A1E650();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


bool fn_825BF0F0(int param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = fn_82A1E650(*(undefined4 *)(param_1 + 0x1b4),0);
  if (iVar1 == 0x102) {
    bVar2 = false;
  }
  else {
    uStack_20 = fn_827D96A0(param_2);
    fn_8259BB38(&iStack_1c,param_1 + 0x1c4,&uStack_20);
    bVar2 = *(int *)(param_1 + 0x1c8) != iStack_1c;
  }
  return bVar2;
}


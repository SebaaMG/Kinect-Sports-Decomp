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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_8227BA18();
extern int fn_82672C20();
extern unsigned int iStack_18;
extern unsigned int iStack_2c;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_822A3370(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  fn_8227BA18();
  uStack_20 = 0;
  uStack_1c = 0;
  fn_82273CD8(&uStack_20,5);
  iStack_18 = (int)param_1 + 0x1188;
  puVar1 = (undefined4 *)fn_82279C58(auStack_30,param_1);
  fn_82672C20(*puVar1,0xffffffff821abff8,&uStack_20,1);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  fn_82273C88(&uStack_20);
  return;
}


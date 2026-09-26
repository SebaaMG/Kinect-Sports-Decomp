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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8228C2C8(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = 0;
  uStack_2c = 0;
  piVar2 = (int *)fn_82279C58(auStack_40,param_1);
  iVar1 = *piVar2;
  if (iStack_3c != 0) {
    fn_822315A0(iStack_3c);
  }
  if (iVar1 != 0) {
    fn_82273CD8(&uStack_30,5);
    uStack_28 = param_2;
    puVar3 = (undefined4 *)fn_82279C58(auStack_38,param_1);
    fn_82672C20(*puVar3,0xffffffff821a89ac,&uStack_30,1);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
  }
  fn_82273C88(&uStack_30);
  return;
}


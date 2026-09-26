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
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229AE10();
extern int fn_8241EFC8();
extern int fn_82672C20();
extern unsigned int iStack_34;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8241EF08(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  
  fn_8241EFC8();
  iVar1 = *(int *)(param_1[6] * 0x1ac + param_1[2] + 0xc);
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(*param_1 + 0xd4);
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82273CD8(&uStack_30,3);
    dStack_28 = (double)(longlong)iVar1;
    puVar3 = (undefined4 *)fn_8229AE10(auStack_38,uVar2);
    fn_82672C20(*puVar3,0xffffffff821aa704,&uStack_30,1);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    fn_82273C88(&uStack_30);
  }
  return;
}


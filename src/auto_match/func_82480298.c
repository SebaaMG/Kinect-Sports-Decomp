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
extern int fn_8226D6A0();
extern int fn_822746B8();
extern int fn_822820E0();
extern int fn_822848B8();
extern int fn_82356F98();
extern int fn_823F2E20();
extern int fn_8247DD58();
extern int fn_824801F8();
extern int fn_8265CA20();
extern int fn_82672C20();
extern unsigned int iStack_34;
extern unsigned int lbl_8327F844;


void fn_82480298(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  int iStack_34;
  
  fn_824801F8();
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    for (puVar2 = *(undefined4 **)(iVar1 + 0x14); puVar2 < *(undefined4 **)(iVar1 + 0x18);
        puVar2 = (undefined4 *)*puVar2) {
      fn_8226D6A0(*puVar2);
      fn_82356F98(auStack_38);
      fn_823F2E20(puVar2 + 1,auStack_38);
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      puVar2 = (undefined4 *)fn_822820E0(auStack_40,iVar1 + 0x14,puVar2);
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      fn_822848B8();
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if (*(int *)(param_1 + 0xec) != 0) {
      fn_822746B8(*(int *)(param_1 + 0xec),0);
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
  }
  if (*(undefined4 **)(param_1 + 200) != (undefined4 *)0x0) {
    fn_82672C20(**(undefined4 **)(param_1 + 200),0xffffffff821a8c24,0,0);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    fn_8247DD58(iVar1);
    fn_8265CA20(iVar1);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  iVar1 = lbl_8327F844;
  if (lbl_8327F844 != 0) {
    *(undefined4 *)(lbl_8327F844 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = 0;
  }
  return;
}


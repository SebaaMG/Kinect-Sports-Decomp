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
extern int fn_822B7900();
extern int fn_8235A170();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();


undefined8 fn_82358738(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar4;
  undefined4 *apuStack_40 [16];
  
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  iVar4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  apuStack_40[0] = puVar3;
  uVar1 = fn_8251F720(param_2,0);
  if (uVar1 != 0) {
    uVar2 = fn_8251FBA8(uVar1);
    iVar4 = fn_8265CA60();
    fn_82A1DD38(iVar4,uVar1,uVar2);
  }
  *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(**(int **)(param_1 + 8) + param_3 * 4);
  *(undefined4 **)(iVar4 + 0x28) = puVar3;
  fn_82536690(param_1 + 0x20,apuStack_40);
  uVar2 = fn_8235A170();
  uVar2 = fn_822B7900(uVar2,iVar4);
  fn_8265CAA0(iVar4);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return uVar2;
}


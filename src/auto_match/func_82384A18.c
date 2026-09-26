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
extern int fn_823864B8();
extern int fn_823866C0();
extern int fn_82386848();
extern int fn_82386910();
extern int fn_8265CA20();
extern unsigned int lbl_821B41FC;
extern unsigned int lbl_83276560;
extern unsigned int lbl_83276564;
extern unsigned int uRam8327655c;


void fn_82384A18(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *apuStack_40 [16];
  
  uVar3 = (ulonglong)uRam8327655c;
  *param_1 = &lbl_821B41FC;
  iVar2 = lbl_83276560;
  uRam8327655c = (uint)(uVar3 - 1);
  if (uVar3 - 1 == 0) {
    if (lbl_83276560 != 0) {
      fn_82386848(apuStack_40,lbl_83276560,**(undefined4 **)(lbl_83276560 + 4));
      fn_8265CA20(*(undefined4 *)(iVar2 + 4));
      fn_8265CA20(iVar2);
    }
    iVar2 = lbl_83276564;
    lbl_83276560 = 0;
    if (lbl_83276564 != 0) {
      fn_82386910(apuStack_40,lbl_83276564,**(undefined4 **)(lbl_83276564 + 4));
      fn_8265CA20(*(undefined4 *)(iVar2 + 4));
      fn_8265CA20(iVar2);
    }
    lbl_83276564 = 0;
  }
  else {
    apuStack_40[0] = param_1;
    fn_823864B8(apuStack_40);
    apuStack_40[0] = param_1;
    fn_823866C0(apuStack_40);
  }
  puVar1 = (undefined4 *)param_1[0x7e8];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x7e8] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x7e9];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x7e9] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x7ea];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x7ea] = 0;
  }
  return;
}


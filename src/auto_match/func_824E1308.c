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
extern int fn_823B78E0();
extern int fn_824CC9E8();
extern int fn_824CD030();
extern int fn_824E1F30();
extern int fn_8265CA20();
extern unsigned int lbl_821B5BEC;
extern unsigned int lbl_821C0C34;
extern unsigned int lbl_821C1148;
extern unsigned int lbl_821C1170;


void fn_824E1308(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &lbl_821C1148;
  param_1[0x3c] = &lbl_821C1170;
  iVar3 = fn_824CD030();
  if (iVar3 != 0) {
    fn_824E1F30(param_1);
  }
  iVar3 = param_1[0x3f];
  if (iVar3 != 0) {
    puVar1 = *(undefined4 **)(iVar3 + 0x88);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    piVar2 = *(int **)(iVar3 + 0x80);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,(int *)(iVar3 + 0x70) != piVar2);
      *(undefined4 *)(iVar3 + 0x80) = 0;
    }
    fn_8265CA20(iVar3);
  }
  param_1[0x3c] = &lbl_821B5BEC;
  if (param_1[0x3d] != 0) {
    fn_823B78E0(param_1[0x3d],param_1 + 0x3c);
  }
  *param_1 = &lbl_821C0C34;
  fn_824CC9E8(param_1);
  return;
}


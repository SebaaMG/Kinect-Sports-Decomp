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
extern int fn_822315A0();
extern int fn_8223A4D8();
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern unsigned int lbl_82196C58;
extern unsigned int lbl_82197FE4;


undefined4 * fn_82254E40(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  
  fn_8223A4D8();
  *param_1 = &lbl_82196C58;
  puVar4 = param_1 + 0xe;
  if (*(int *)(param_2 + 0x48) == 0) {
    param_1[0x12] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x48) != param_2 + 0x38) {
      puVar4 = (undefined4 *)0x0;
    }
    uVar2 = (**(code **)**(undefined4 **)(param_2 + 0x48))(*(undefined4 **)(param_2 + 0x48),puVar4);
    param_1[0x12] = uVar2;
  }
  puVar4 = param_1 + 0x14;
  if (*(int *)(param_2 + 0x60) == 0) {
    param_1[0x18] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x60) != param_2 + 0x50) {
      puVar4 = (undefined4 *)0x0;
    }
    uVar2 = (**(code **)**(undefined4 **)(param_2 + 0x60))(*(undefined4 **)(param_2 + 0x60),puVar4);
    param_1[0x18] = uVar2;
  }
  *param_1 = &lbl_82197FE4;
  fn_82365BD8(param_1 + 0x1a,param_2 + 0x68);
  fn_82365BD8(param_1 + 0x1c,param_2 + 0x70);
  fn_82365BD8(param_1 + 0x1e,param_2 + 0x78);
  fn_82365BD8(param_1 + 0x20,param_2 + 0x80);
  fn_82365BD8(param_1 + 0x22,param_2 + 0x88);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  iVar1 = *(int *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[0x25] != 0) {
      fn_822315A0();
    }
    param_1[0x25] = iVar1;
    param_1[0x24] = uVar2;
  }
  return param_1;
}


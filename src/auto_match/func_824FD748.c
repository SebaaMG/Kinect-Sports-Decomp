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
extern int fn_824FD870();
extern int fn_824FDB18();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825925D8();
extern int fn_827F62A8();


void fn_824FD748(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 0xd) {
    fn_824FD870(param_1);
    fn_824FDB18(param_1,param_2[2],param_2[3]);
  }
  else if (iVar1 == 0x10) {
    puVar2 = (undefined4 *)fn_8251F720(param_2 + 2,0);
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 0xb84);
      *(undefined4 *)(iVar1 + 0x18) = *puVar2;
      *(undefined4 *)(iVar1 + 0x1c) = puVar2[1];
      *(undefined4 *)(iVar1 + 0x24) = puVar2[2];
      *(undefined4 *)(iVar1 + 0x28) = puVar2[3];
      *(undefined4 *)(iVar1 + 0x30) = puVar2[4];
      *(undefined4 *)(iVar1 + 0x34) = puVar2[5];
      *(undefined4 *)(iVar1 + 0x3c) = puVar2[6];
      *(undefined4 *)(iVar1 + 0x40) = puVar2[7];
      *(undefined4 *)(iVar1 + 0x48) = puVar2[8];
      *(undefined4 *)(iVar1 + 0x4c) = puVar2[9];
      *(undefined4 *)(iVar1 + 0x54) = puVar2[10];
      *(undefined4 *)(iVar1 + 0x58) = puVar2[0xb];
      fn_8251FA58();
    }
  }
  else if (iVar1 == 0x45) {
    fn_824FD870(param_1);
  }
  else if ((iVar1 == 0x49) && (*(int *)(param_1 + 0xb80) != 0)) {
    fn_827F62A8((double)(float)param_2[2],*(int *)(param_1 + 0xb80),param_2,0);
  }
  fn_825925D8(param_1,param_2);
  return;
}


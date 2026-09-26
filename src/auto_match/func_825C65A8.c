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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82520158();
extern int fn_826249A8();
extern unsigned int lbl_821C90F8;


undefined4 * fn_825C65A8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  int iVar3;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  *param_1 = &lbl_821C90F8;
  fn_82520158(0xffffffff821c9098,auStack_24,0);
  fn_82520158(0xffffffff821c90b0,auStack_28,0);
  fn_82520158(0xffffffff821c90c8,auStack_2c,0);
  fn_82520158(0xffffffff821c90e0,auStack_30,0);
  piVar2 = *(int **)(param_3 + 0x934);
  for (iVar1 = *piVar2; (iVar1 != 0 && (*(int *)(iVar1 + 0x44) != 9));
      iVar1 = *(int *)(iVar1 + 0x4c)) {
  }
  param_1[3] = iVar1;
  if (iVar1 == 0) {
    iVar1 = fn_826249A8(9,0x18,auStack_24,auStack_28,auStack_2c,auStack_30);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        *piVar2 = iVar1;
      }
      else {
        while (piVar2 = (int *)(iVar3 + 0x4c), *piVar2 != 0) {
          iVar3 = *piVar2;
        }
        *piVar2 = iVar1;
      }
    }
    param_1[3] = iVar1;
  }
  return param_1;
}


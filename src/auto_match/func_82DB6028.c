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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEAB00();
extern int fn_82DA3248();
extern int fn_82DDE130();
extern unsigned int lbl_821423BC;


undefined4 * fn_82DB6028(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  fn_82DA3248();
  *param_1 = &lbl_821423BC;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  iVar1 = fn_82CE5410();
  fn_82CEAB00(param_1 + 0xf,*(undefined4 *)(iVar1 + 0x10),0);
  *(undefined1 *)(param_1 + 4) = 1;
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x10);
  *(undefined2 *)(iVar1 + 4) = 0x10;
  uVar2 = fn_82DDE130();
  param_1[0x12] = uVar2;
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x334);
  iVar3 = fn_82CE5410();
  if ((int)(param_1[0xe] & 0x3fffffff) < iVar1) {
    iVar4 = (param_1[0xe] & 0x3fffffff) << 1;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 0xc,iVar4,0x70);
  }
  return param_1;
}


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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern int fn_82766718();
extern int fn_827672A0();


void fn_82769CD8(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(**(int **)(param_1 + 8) + param_2 * 8 + *(int *)(param_1 + 0x10) + 4);
  fn_827672A0(param_3,CONCAT31(CONCAT21(CONCAT11(puVar4[3],puVar4[2]),puVar4[1]),*puVar4));
  bVar1 = *(byte *)(*(int *)*param_3 + param_3[1]);
  if ((bVar1 & 1) == 0) {
    uVar2 = (uint)(bVar1 >> 1);
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
    uVar2 = (uint)((byte *)(*(int *)*param_3 + param_3[1]))[1] << 7 | (uint)(bVar1 >> 1);
  }
  param_3[6] = uVar2;
  param_3[1] = param_3[1] + iVar3;
  fn_82766718(param_3);
  return;
}


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
extern int fn_827CB708();
extern int fn_827CBB10();
extern int fn_827CBCB8();


void fn_827CBE30(int *param_1,ulonglong param_2)

{
  undefined4 *puVar2;
  longlong lVar1;
  longlong lVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,(param_2 & 0x7ffffff) << 5);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0x1f;
  puVar2[3] = 0x3f;
  puVar2[5] = 0x1f;
  fn_827CB708(param_1,puVar2);
  lVar1 = fn_827CBB10(param_1);
  lVar3 = 0;
  iVar4 = (int)lVar1;
  if (0 < lVar1) {
    do {
      fn_827CBCB8(param_1,puVar2);
      lVar3 = lVar3 + 1;
      puVar2 = puVar2 + 8;
    } while ((int)lVar3 < iVar4);
  }
  param_1[0x1c] = iVar4;
  *(undefined4 *)(*param_1 + 0x14) = 0x60;
  *(int *)(*param_1 + 0x18) = iVar4;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}


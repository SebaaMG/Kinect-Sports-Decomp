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
extern int fn_822B6FF0();
extern int fn_822B9390();
extern int fn_825275B0();


void fn_823694F8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  if (param_2 == *(int *)(param_1 + 0x42c)) goto LAB_823695b0;
  uVar1 = *(undefined4 *)(param_1 + 0xe10);
  if ((((param_2 == 2) || (param_2 == 1)) || (param_2 == 0)) || (param_2 == 6)) {
    fn_825275B0(uVar1);
    goto LAB_823695b0;
  }
  iVar2 = *(int *)(param_1 + 0x9a0);
  if ((iVar2 == 0) || (iVar4 = fn_822B6FF0(iVar2,uVar1), iVar4 != 0)) goto LAB_823695b0;
  if (param_2 == 3) {
LAB_82369574:
    uVar5 = 0x21;
  }
  else {
    if (param_2 != 4) {
      if (param_2 != 5) goto LAB_823695b0;
      goto LAB_82369574;
    }
    uVar5 = 0x20;
  }
  fn_822B9390(*(undefined4 *)(iVar2 + 0x11c),uVar1,uVar5);
  iVar2 = *(int *)(param_1 + 0xe10);
  puVar3 = (undefined4 *)(iVar2 + 0xbd0U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  puVar3 = (undefined4 *)(iVar2 + 0xc30U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
LAB_823695b0:
  *(int *)(param_1 + 0x42c) = param_2;
  return;
}


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
extern int fn_8223AAC0();
extern int fn_824C04E0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F68CC0();


void fn_824C2278(int param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar4;
  ulonglong uVar3;
  undefined4 uVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x54) = param_2;
  iVar1 = param_3[1];
  uVar2 = *param_3;
  uVar5 = 0;
  iVar6 = 0;
  if (iVar1 != 0) {
    cVar4 = fn_8223AAC0(iVar1);
    if (cVar4 != '\0') {
      uVar5 = uVar2;
      iVar6 = iVar1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar6;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  fn_824C04E0(param_1,6);
  uVar3 = fn_8265C9E0(0x428);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    fn_82F68CC0(uVar3,param_4,0x428);
  }
  if ((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x5c)) {
    if ((ulonglong)*(uint *)(param_1 + 0x5c) != 0) {
      fn_8265CA20();
    }
    *(int *)(param_1 + 0x5c) = (int)uVar3;
  }
  return;
}


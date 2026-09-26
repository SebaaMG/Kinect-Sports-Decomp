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
extern int fn_8285B750();
extern int fn_82F68CC0();


void fn_8285B800(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(*(int *)(param_2 + 8) + *(int *)(param_1 + 0x68));
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + *(int *)(param_1 + 0x68));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  puVar1[4] = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[6] = puVar2[6];
  puVar1[7] = puVar2[7];
  puVar1[8] = puVar2[8];
  puVar1[9] = puVar2[9];
  puVar1[10] = puVar2[10];
  fn_82F68CC0(puVar1[0xb],puVar2[0xb],*(undefined4 *)(param_1 + 0x60));
  iVar4 = 0;
  if (*(short *)(param_1 + 0x38) != 0) {
    iVar3 = 0;
    do {
      fn_8285B750(*(undefined4 *)(*(int *)(param_1 + 0x34) + iVar3),param_2,param_3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  return;
}


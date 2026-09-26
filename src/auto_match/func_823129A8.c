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
extern int fn_82312830();
extern int fn_823694F8();
extern int fn_8236A6E8();
extern int fn_823E0DA0();


void fn_823129A8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x28) == *(int *)(iVar3 + 0xde4)) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0x2c) == *(int *)(iVar3 + 0xde0))) {
    iVar1 = *(int *)(iVar3 + 0xe10);
    iVar4 = 1;
    puVar2 = (undefined4 *)(iVar1 + 0xbd0U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    puVar2 = (undefined4 *)(iVar1 + 0xc30U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x10);
    iVar3 = fn_823E0DA0(*(undefined4 *)(*(uint *)(param_1 + 0x10) + 0x4a0),
                         *(undefined4 *)(iVar3 + 0xdd4),0xc30,1);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x88);
    }
    fn_823694F8(uVar5,(iVar4 == 0) + '\x04');
    fn_8236A6E8(*(undefined4 *)(param_1 + 0x10),4);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x240) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x25c) = 1;
    fn_82312830(param_1);
  }
  *(undefined4 *)(param_1 + 0x110) = 1;
  return;
}


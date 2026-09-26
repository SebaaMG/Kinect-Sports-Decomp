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
extern int fn_822B83D0();
extern int fn_822C6880();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8255FD70();
extern int fn_825613E0();
extern int fn_8265CA20();


void fn_822D80E0(int param_1)

{
  int in_r0;
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 *apuStack_30 [12];
  
  puVar2 = (undefined4 *)(param_1 + 0x5c);
  if (0xf < *(uint *)(param_1 + 0x70)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  fn_8255FD70(apuStack_30,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x24),
                    puVar2);
  fn_822B83D0(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x118),*apuStack_30[0]);
  iVar1 = fn_82365BD8(apuStack_30,param_1 + 0x78);
  fn_82376640(param_1 + 0x30,iVar1);
  if (*(int *)(iVar1 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C6880(*(undefined4 *)(param_1 + 0x24));
  iVar1 = *(int *)(param_1 + 0x24);
  dVar3 = (double)*(float *)(iVar1 + 0x40);
  fn_825613E0(-dVar3,dVar3);
  puVar2 = (undefined4 *)(in_r0 + iVar1 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fn_8265CA20(apuStack_30[0]);
  return;
}


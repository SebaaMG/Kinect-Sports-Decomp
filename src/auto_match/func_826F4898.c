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
extern unsigned int *auStack_50;
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826F4540();
extern int fn_826F47F0();
extern unsigned int lbl_83155F28;
extern unsigned int uStack_44;


int fn_826F4898(int param_1,int param_2,undefined4 *param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_50 [2];
  undefined **ppuStack_48;
  undefined4 uStack_44;
  
  (**(code **)(lbl_83155F28 + 4))(0xffffffff83155f28,param_4);
  auStack_50[0] = *param_3;
  ppuStack_48 = &lbl_83155F28;
  uStack_44 = (int)param_4;
  fn_826F47F0(param_1,param_2,auStack_50,&ppuStack_48);
  puVar2 = (undefined4 *)fn_826F4540(*(undefined4 *)(param_2 + 0x20));
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_2 + 0x20);
    *puVar2 = *param_3;
    if ((param_4 & 0xffffffff) != 0) {
      fn_8267C4C8(param_4);
    }
    if (puVar2[1] != 0) {
      fn_8267C4F0();
    }
    puVar2[1] = (int)param_4;
    puVar2[2] = *(undefined4 *)(param_1 + 4);
    if (*(int *)(param_2 + 0x2e0) == 0) {
      *(undefined4 **)(param_2 + 0x2e0) = puVar2;
    }
    sync(1);
    if (*(int *)(iVar1 + 0x98) == 0) {
      sync(1);
      *(undefined4 **)(iVar1 + 0x98) = puVar2;
    }
    else {
      sync(1);
      *(undefined4 **)(*(int *)(iVar1 + 0x9c) + 0xc) = puVar2;
    }
    *(undefined4 **)(iVar1 + 0x9c) = puVar2;
    *(int *)(param_2 + 0x2cc) = *(int *)(param_2 + 0x2cc) + 1;
  }
  (**(code **)(lbl_83155F28 + 8))(0xffffffff83155f28,param_4);
  return param_1;
}


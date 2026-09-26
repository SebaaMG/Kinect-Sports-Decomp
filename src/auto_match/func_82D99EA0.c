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
extern unsigned int *auStack_30;
extern int fn_82D9A730();
extern unsigned int lbl_82002C5C;


void fn_82D99EA0(double param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [32];
  
  iVar1 = *(int *)(param_2 + 8);
  puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (undefined4 *)(param_2 + 0xe0U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_2 + 0x10) + 0x1c))
              ((double)(float)((double)*(float *)(*(int *)(iVar1 + 0x78) + 8) * (double)lbl_82002C5C
                              + param_1),*(int **)(param_2 + 0x10),param_2 + 0xb0,param_4,auStack_30
              );
    fn_82D9A730(param_2,auStack_30);
  }
  return;
}


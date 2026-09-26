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
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int fStack_7c;
extern int fn_82F68CC0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2a;
extern unsigned int uStack_2b;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_89;


void fn_82252278(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_b0 [39];
  undefined1 uStack_89;
  undefined1 auStack_80 [4];
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar3 = (undefined4 *)((int)&uStack_60 + in_r0 & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  puVar3 = (undefined4 *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  uStack_2c = 0;
  uStack_2b = 0;
  uStack_2a = 0;
  uStack_30 = lbl_821CC160;
  uStack_28 = 0;
  uStack_24 = 3;
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,&uStack_74);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_78);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_70);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&fStack_7c);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,&uStack_60);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_80);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    uStack_89 = auStack_80[0];
    fn_82F68CC0(auStack_b0,auStack_40,0x20);
    (**(code **)(iVar2 + 4))
              ((double)fStack_7c,piVar1,uStack_74,uStack_78,*(code **)(iVar2 + 4),uStack_60,
               uStack_58,uStack_50,uStack_48);
  }
  return;
}


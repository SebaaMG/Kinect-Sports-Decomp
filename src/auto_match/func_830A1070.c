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
extern unsigned int *auStack_50;
extern unsigned int fStack_30;
extern int fn_830A5FF8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2c;


void fn_830A1070(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  undefined4 uStack_2c;
  
  if ((*(char *)(param_1 + 2) != '\0') &&
     (fStack_30 = *(float *)(param_1 + 4), lbl_821AAD20 < fStack_30)) {
    bVar1 = *(byte *)(param_1 + 3);
    uStack_2c = *(undefined4 *)(param_2 + 0x4c);
    puVar3 = (undefined4 *)(param_3 + 0x30U & 0xfffffff0);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar3 = (undefined4 *)((uint)bVar1 * 0x10 + param_4 & 0xfffffff0);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    fn_830A5FF8(auStack_50,param_2,param_5);
    return;
  }
  iVar2 = *param_5;
  *(undefined1 *)(iVar2 + 3) = 3;
  *(undefined1 *)(iVar2 + 4) = 1;
  *param_5 = iVar2 + 0x10;
  return;
}


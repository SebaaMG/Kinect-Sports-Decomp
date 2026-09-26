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
extern int fn_82318848();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_823188C0(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  fVar3 = lbl_821CC160;
  puVar5 = (undefined4 *)(param_2 * 0x50 + (int)param_1);
  if (puVar5[0xc] != (int)param_3) {
    puVar5[5] = lbl_821CC160;
  }
  fVar1 = (float)puVar5[0xe];
  puVar5[0xc] = (int)param_3;
  puVar5[0xd] = param_4;
  puVar4 = (undefined4 *)((uint)(puVar5 + 8) & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  if (fVar1 <= fVar3) {
    puVar4 = (undefined4 *)fn_82318848(param_1 + 0x234,param_3);
    *puVar5 = *puVar4;
    puVar5[3] = puVar4[3];
    puVar5[1] = puVar4[1];
    puVar5[2] = puVar4[2];
    uVar2 = lbl_821CA460;
    puVar5[4] = puVar4[4];
    puVar5[5] = uVar2;
  }
  puVar5[0xf] = *(undefined4 *)((int)param_1 + 0x230);
  if (*(int *)((int)param_1 + 0x230) == 0) {
    puVar5[0xf] = 1;
  }
  return;
}


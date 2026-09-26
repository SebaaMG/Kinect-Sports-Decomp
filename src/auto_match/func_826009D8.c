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
extern unsigned int *auStack_20;
extern int fn_82D8B6C8();
extern int fn_82DECAF0();
extern unsigned int lbl_821CA460;


void fn_826009D8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_20 [16];
  
  piVar1 = *(int **)(param_1 + 0xbc);
  uVar5 = *(undefined4 *)(*(int *)(*(int *)(*piVar1 + 8) + 0x118) * 0x90 + piVar1[1]);
  if (*(char *)(piVar1 + 0x2c) == '\0') {
    fn_82D8B6C8(uVar5,1,1,0);
  }
  else {
    fn_82D8B6C8(uVar5,4,1,0);
    fVar4 = lbl_821CA460;
    puVar2 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    fn_82DECAF0((double)(fVar4 / *(float *)(*(int *)(param_1 + 0xb4) + 0xb3c)),auStack_20,
                      param_1 + 0x100);
  }
  return;
}


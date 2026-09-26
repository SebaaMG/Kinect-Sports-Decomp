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
extern int fn_8256B190();
extern int fn_8284DF78();


byte fn_8256AB40(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_40 [64];
  
  bVar5 = 1;
  lVar6 = 0;
  iVar1 = *(int *)(*param_1 + 0x1c);
  if (0 < iVar1) {
    do {
      fn_8284DF78(*param_1,lVar6);
      if (*(int *)(param_2 + 0x14) != 0) {
        cVar4 = fn_8256B190((double)*(byte *)(*(int *)(*(int *)(*(int *)(param_2 + 0x14) + 8)
                                                            + 0x14) + 0x30));
        puVar2 = (undefined4 *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        bVar5 = -(cVar4 != '\0') & bVar5;
        puVar3 = (undefined4 *)((int)in_r0 + param_2 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
      }
      lVar6 = lVar6 + 1;
      param_2 = param_2 + 0x20;
    } while ((int)lVar6 < iVar1);
  }
  return bVar5;
}


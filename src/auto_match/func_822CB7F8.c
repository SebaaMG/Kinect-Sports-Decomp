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
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_828E5660();


undefined8 fn_822CB7F8(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int in_r0;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  cVar4 = fn_828E5660((double)fStack_50);
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  cVar5 = fn_828E5660((double)fStack_4c,param_1);
  if (cVar5 == '\0') {
    bVar3 = false;
    if (cVar4 == '\0') goto LAB_822cb86c;
  }
  bVar3 = true;
LAB_822cb86c:
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  cVar4 = fn_828E5660((double)fStack_48,param_1);
  if ((cVar4 != '\0') || (uVar6 = 0, bVar3)) {
    uVar6 = 1;
  }
  return uVar6;
}


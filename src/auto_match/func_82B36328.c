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
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82ABE650();
extern int fn_82B2B908();


undefined1 fn_82B36328(int param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_40 [64];
  
  if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
    uVar6 = *(uint *)(param_2 + 0x14);
    iVar5 = param_2 + 0x10;
  }
  else if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar6 = *(uint *)(param_2 + 0x1c);
    iVar5 = param_2 + 0x18;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x24);
    iVar5 = param_2 + 0x20;
  }
  uVar6 = -(uint)((uVar6 & 1) == 0) & uVar6;
  do {
    if (uVar6 == 0) break;
    do {
      *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) & 0xfbffffff;
      uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 0x28);
      if ((uVar6 & 1) != 0) break;
    } while (uVar6 != 0);
    iVar4 = param_2 + 0x20;
    if (iVar5 == iVar4) break;
    if ((iVar5 == param_2 + 0x18) || ((*(uint *)(param_2 + 0x1c) & 1) != 0)) {
      uVar6 = *(uint *)(param_2 + 0x24);
    }
    else {
      uVar6 = *(uint *)(param_2 + 0x1c);
      iVar4 = param_2 + 0x18;
    }
    iVar5 = iVar4;
  } while ((uVar6 & 1) == 0);
  auStack_40[0] = 0;
  puVar1 = (uint *)fn_82ABE250(param_1,8,0x26);
  *(uint **)(param_1 + 0x28c) = puVar1;
  puVar1[1] = (uint)puVar1 | 1;
  *puVar1 = (uint)(puVar1 + 1) | 1;
  uVar6 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar6 | 0x1000;
LAB_82b36434:
  if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
    uVar8 = *(uint *)(param_2 + 0x14);
    iVar5 = param_2 + 0x10;
  }
  else if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar8 = *(uint *)(param_2 + 0x1c);
    iVar5 = param_2 + 0x18;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x24);
    iVar5 = param_2 + 0x20;
  }
LAB_82b3646c:
  uVar8 = -(uint)((uVar8 & 1) == 0) & uVar8;
  iVar4 = iVar5;
  do {
    do {
      if (uVar8 == 0) goto LAB_82b36514;
      do {
        if ((*(uint *)(uVar8 + 8) >> 0x1a & 1) == 0) {
          cVar2 = fn_82B2B908(param_1,uVar8,auStack_40);
          if (cVar2 != '\0') goto LAB_82b36434;
        }
        uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 0x28);
        if ((uVar8 & 1) != 0) {
          uVar8 = 0;
          break;
        }
      } while (uVar8 != 0);
      iVar5 = param_2 + 0x20;
    } while (iVar4 == iVar5);
    if ((iVar4 == param_2 + 0x18) || ((*(uint *)(param_2 + 0x1c) & 1) != 0)) goto LAB_82b36508;
    uVar8 = -(uint)((*(uint *)(param_2 + 0x1c) & 1) == 0) & *(uint *)(param_2 + 0x1c);
    iVar4 = param_2 + 0x18;
  } while( true );
LAB_82b36514:
  puVar1 = *(uint **)(param_1 + 0x28c);
  uVar8 = puVar1[1];
  if ((uVar8 & 1) != 0) {
LAB_82b365d4:
    fn_82ABE650(param_1,uVar6 >> 0xc & 1);
    *(undefined4 *)(param_1 + 0x28c) = 0;
    return auStack_40[0];
  }
  if (uVar8 == 0) goto LAB_82b365d4;
  if ((uVar8 & 1) == 0) {
    puVar3 = (uint *)((*puVar1 & 0xfffffffe) - 4);
  }
  else {
    puVar3 = (uint *)0x0;
  }
  uVar7 = puVar3[2] - 1;
  uVar8 = puVar3[puVar3[2] + 3];
  puVar3[2] = uVar7;
  if (uVar7 == 0) {
    *(uint *)(puVar3[1] & 0xfffffffe) = *puVar3;
    *(uint *)(*puVar3 & 0xfffffffe) = puVar3[1];
    fn_82AA6648(puVar1,puVar3,((ulonglong)puVar3[3] + 4 & 0x3fffffff) << 2);
  }
  uVar7 = *(uint *)(uVar8 + 8);
  *(uint *)(uVar8 + 8) = uVar7 & 0xfbffffff;
  if (((uVar7 & 0x3f80) != 0x3980) && (*(int *)(uVar8 + 0x1c) == param_2)) {
    fn_82B2B908(param_1,uVar8,auStack_40);
  }
  goto LAB_82b36514;
LAB_82b36508:
  uVar8 = *(uint *)(param_2 + 0x24);
  goto LAB_82b3646c;
}


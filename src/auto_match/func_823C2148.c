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
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_8236BCD8();
extern int fn_823DB6B8();
extern unsigned int lbl_821CC160;


void fn_823C2148(int param_1,char param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [48];
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xe10) + 0x50U & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(bool *)(param_1 + 0xd50) = param_2 == '\0';
  *(undefined1 *)(param_1 + 0xd51) = 1;
  *(undefined1 *)(param_1 + 0xd52) = 0;
  puVar1 = (undefined4 *)(param_1 + 0xd60U & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (undefined4 *)(param_1 + 0xd70U & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  if (param_3 != '\0') {
    fn_8236BCD8();
    iVar2 = fn_82356F98(auStack_40);
    if (*(int *)(param_1 + 0x4b0) != 0) {
      fn_823DB6B8((double)lbl_821CC160,*(int *)(param_1 + 0x4b0),iVar2,0);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
  }
  return;
}


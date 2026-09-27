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
extern unsigned int *auStack_28;
extern int fn_83048F80();
extern int fn_8307E570();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined8 fn_830493C8(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar3;
  undefined8 uVar2;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iStack_30;
  int iStack_2c;
  undefined4 auStack_28;
  
  puVar4 = (uint *)(param_4 + param_5);
  iVar3 = 0;
  uVar5 = *puVar4;
  puVar1 = puVar4;
  while (uVar5 < *param_2) {
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + 1;
    uVar5 = *puVar1;
  }
  iVar6 = *(int *)(param_3 + 0x1c) * iVar3;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puVar4[iVar3 + -1];
  }
  iStack_30 = *param_2 - uVar5;
  iVar3 = fn_83048F80(*(int *)(param_1 + 0x30) + iVar6 + param_5,
                            *(int *)(param_1 + 0x2c) - iVar6,&iStack_30,&iStack_2c,&auStack_28);
  if (iVar3 == 1) {
    fn_8307E570(*(undefined4 *)(param_1 + 0x28),0,iVar6 * 8 + iStack_2c,auStack_28);
    uVar2 = 1;
    *param_2 = *param_2 - iStack_30;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


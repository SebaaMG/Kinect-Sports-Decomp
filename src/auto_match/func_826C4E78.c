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
extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_82682A48();
extern int fn_82696330();
extern int fn_826AA220();
extern int fn_826AABD0();
extern int fn_826B0AD8();
extern int fn_826B35F0();
extern int fn_826EA050();


void fn_826C4E78(int *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  piVar4 = (int *)(param_1[8] + 0x10);
  if (param_1[8] == 0) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 != (int *)0x0) {
    cVar3 = (**(code **)(*piVar4 + 0x3c))(piVar4);
    if (cVar3 != '\0') {
      fn_82682A48(piVar4 + -4);
    }
  }
  if ((*(char *)(*param_1 + 0x66) != '\x02') || ((*(ushort *)(*param_1 + 100) & 2) == 0)) {
    auStack_40[0] = 0;
    fn_826B35F0(param_1[1],(ulonglong)*(uint *)(param_1[1] + 0x78) + 0xf4,auStack_40);
    fn_82696330(auStack_40);
  }
  if ((*(char *)(*param_1 + 0x66) != '\x02') || ((*(ushort *)(*param_1 + 100) & 0x20) == 0)) {
    auStack_30[0] = 0;
    fn_826B35F0(param_1[1],(ulonglong)*(uint *)(param_1[1] + 0x78) + 0xf8,auStack_30);
    fn_82696330(auStack_30);
  }
  if (param_1[9] != 0) {
    fn_826EA050();
  }
  fn_826B0AD8((ulonglong)(uint)param_1[1] + 200,param_1[10]);
  if (*(char *)(*param_1 + 0x66) == '\x02') {
    fn_826AA220(param_1[1] + 0x68,
                      (ulonglong)*(uint *)(param_1[1] + 0x6c) -
                      (ulonglong)*(byte *)(*param_1 + 0x67));
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    puVar5 = (uint *)(iVar1 + 0x80);
    if (**(int **)(iVar1 + 0x80) != 0) {
      fn_826824B0();
    }
    uVar2 = *puVar5;
    *puVar5 = uVar2 - 4;
    if (uVar2 - 4 < *(uint *)(iVar1 + 0x84)) {
      fn_826AABD0(puVar5);
    }
  }
  return;
}


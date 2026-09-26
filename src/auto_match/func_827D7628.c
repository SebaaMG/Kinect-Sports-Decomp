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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_827D8D58();
extern int fn_827DF520();
extern int fn_827E0B50();
extern int fn_827E8698();
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


void fn_827D7628(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piStack00000014;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  puVar5 = (undefined4 *)param_1[0xb1];
  piStack00000014 = param_1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  puVar5 = (undefined4 *)*param_1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  puVar5 = (undefined4 *)param_1[0xb5];
  for (puVar1 = (undefined4 *)*puVar5; puVar1 != puVar5; puVar1 = (undefined4 *)*puVar1) {
    puVar5 = (undefined4 *)puVar1[3];
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    puVar5 = (undefined4 *)param_1[0xb5];
  }
  RtlEnterCriticalSection(param_1 + 0xf2);
  piVar2 = *(int **)param_1[0xd5];
  if (piVar2 != (int *)param_1[0xd5]) {
    do {
      iVar3 = *(int *)lbl_83156AA0;
      uVar4 = fn_82811438(auStack_50,auStack_60,0x10);
      (**(code **)(iVar3 + 0x18))(lbl_83156AA0,piVar2[3],uVar4);
      piVar2[3] = 0;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[0xd5]);
  }
  RtlLeaveCriticalSection(param_1 + 0xf2);
  fn_827E0B50(param_1 + 0xd4);
  fn_827E0B50(param_1 + 0xb4);
  fn_827DF520(param_1 + 0x44);
  fn_827D8D58(param_1 + 0x33);
  fn_827D8D58(param_1 + 0x29);
  fn_827D8D58(param_1 + 0x11);
  fn_827E8698(param_1 + 1);
  return;
}


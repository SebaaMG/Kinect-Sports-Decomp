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
extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267D9C0();
extern int fn_826F4C00();
extern int fn_826F4EC0();


longlong fn_826D8DA0(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  fn_826F4EC0(param_2);
  lVar4 = 1;
  puVar1 = (undefined4 *)fn_826F4C00(param_2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x78);
    iVar2 = *(int *)(param_2 + 0x314);
    if (iVar2 == 0) {
      iVar2 = param_2 + 0x28;
    }
    puVar1[1] = ((*(int *)(iVar2 + 0x34) - *(int *)(iVar2 + 0x30)) - *(int *)(param_2 + 0x26c)) +
                *(int *)(iVar2 + 0x2c);
  }
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x84) + 8;
  fn_8267C8D8(lVar5);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 4;
    lVar4 = 0;
  }
  else {
    sync(1);
    if (*(int *)(param_1 + 0x88) == 0) {
      sync(1);
      *(undefined4 **)(param_1 + 0x88) = puVar1;
    }
    else {
      sync(1);
      *(undefined4 **)(*(int *)(param_1 + 0x8c) + 0x20) = puVar1;
    }
    *(undefined4 **)(param_1 + 0x8c) = puVar1;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    if (param_3 == '\0') goto LAB_826d8e78;
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar3;
LAB_826d8e78:
  if ((param_3 != '\0') || (lVar4 == 0)) {
    fn_8267CB10((ulonglong)*(uint *)(param_1 + 0x84) + 0x1c);
  }
  fn_8267D9C0(lVar5);
  return lVar4;
}

